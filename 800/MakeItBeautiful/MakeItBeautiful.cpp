#ifdef LOCAL
#include <fstream>
#include <ostream>
#include <istream>
#endif
#include <iostream>
#include <vector>

#pragma GCC optimize("O3")

void solution()
{
	int size;
	std::cin >> size;
	// input array
	std::vector<int> inputArr(size);
	// store output hre
	std::vector<int> outputArr(size);
	// read input
	for (int i = 0; i < size; i++)
	{
		std::cin >> inputArr[i];
	}
	// check if prefix sum is satisfying the condition
	bool satisfy = false;
	std::vector<int> prefixSum(size);
	prefixSum[0] = inputArr[0];
	for (int i = 1; i < size; i++)
	{
		prefixSum[i] = prefixSum[i - 1] + inputArr[i];
		if (inputArr[i] == prefixSum[i - 1])
		{
			satisfy = false;
			break;
		}
	}
	// if original array is satisfying the condition
	// then print YES and original array
	if (satisfy)
	{
		std::cout << "YES" << std::endl;
		for (int i = 0; i < size; i++)
		{
			std::cout << inputArr[i] << " ";
		}
		std::cout << std::endl;
		return;
	}
	// else place 1st then last element, 2nd then 2nd last element and so on
	int i = 0, j = size - 1, pos = 0;
	while (i <= j)
	{
		outputArr[pos++] = inputArr[i++];
		if (i <= j)
		{
			outputArr[pos++] = inputArr[j--];
		}
	}
	// now again check if prefix sum is satisfying the condition
	satisfy = true;
	prefixSum[0] = outputArr[0];
	for (int i = 1; i < size; i++)
	{
		prefixSum[i] = prefixSum[i - 1] + outputArr[i];
		if (outputArr[i] == prefixSum[i - 1])
		{
			satisfy = false;
			break;
		}
	}

	if (satisfy)
	{
		std::cout << "YES" << std::endl;
		for (int i = 0; i < size; i++)
		{
			std::cout << outputArr[i] << " ";
		}
		std::cout << std::endl;
	}
	else
	{
		std::cout << "NO" << std::endl;
	}
}

int main()
{
#ifdef LOCAL
	std::ifstream in("input.txt");
	std::ofstream out("output.txt");
	std::cin.rdbuf(in.rdbuf());
	std::cout.rdbuf(out.rdbuf());
#endif

	int testCase;
	std::cin >> testCase;
	while (testCase--)
	{
		solution();
	}
}
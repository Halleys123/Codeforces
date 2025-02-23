// NOTE: Wrong answer/ Not solved
#ifdef LOCAL
#include <fstream>
#include <ostream>
#include <istream>
#endif
#include <iostream>

void solution()
{
	long long size;
	std::cin >> size;

	bool allSame = true;
	bool allSameParity = true;
	bool lastOdd = false;

	long long largestIndex = 0;

	long long *arr = new long long[size];

	long long *odd = new long long[size];
	long long *even = new long long[size];
	long long oddIndex = 0;
	long long evenIndex = 0;

	std::cin >> arr[0];

	if (arr[0] % 2 != 0)
	{
		odd[oddIndex++] = arr[0];
		lastOdd = true;
	}
	else
	{
		odd[evenIndex++] = arr[0];
	}

	for (long long i = 1; i < size; i++)
	{
		std::cin >> arr[i];
		if (arr[i] != arr[i - 1])
			allSame = false;
		if (arr[i] >= arr[i - 1])
			largestIndex = i;
		if ((arr[i] % 2 == 0) && lastOdd)
		{
			allSameParity = false;
		}
		else if ((arr[i] % 2 != 0) && !lastOdd)
		{
			allSameParity = false;
		}
		if (arr[i] % 2 != 0)
		{
			odd[oddIndex++] = arr[i];
			continue;
		}
		even[evenIndex++] = arr[i];
	}

	if (allSame)
	{
		std::cout << -1 << std::endl;
		return;
	}
	if (allSameParity)
	{
		long long countLargest = 0;
		for (long long i = 0; i < size; i++)
		{
			countLargest += (arr[i] == arr[largestIndex]);
		}

		std::cout << size - countLargest << " " << countLargest << std::endl;
		for (long long i = 0; i < size; i++)
		{
			if (arr[i] != arr[largestIndex])
				std::cout << arr[i] << " ";
		}

		std::cout << std::endl;
		for (long long i = 0; i < size; i++)
		{
			if (arr[i] == arr[largestIndex])
				std::cout << arr[i] << " ";
		}
		std::cout << std::endl;
	}
	else
	{
		std::cout << oddIndex << " " << evenIndex << std::endl;
		for (long long i = 0; i < oddIndex; i++)
		{
			std::cout << odd[i] << " ";
		}
		std::cout << std::endl;
		for (long long i = 0; i < evenIndex; i++)
		{
			std::cout << even[i] << " ";
		}
		std::cout << std::endl;
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
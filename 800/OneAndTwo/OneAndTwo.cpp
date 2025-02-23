#ifdef LOCAL
#include <fstream>
#include <ostream>
#include <istream>
#endif
#include <iostream>

void solution()
{
	int size;
	std::cin >> size;
	int *arr = new int[size];
	std::cin >> arr[0];
	for (int i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}
	int i = 0, j = size - 1;
	int sProd = arr[0], eProd = arr[size - 1];
	while ((sProd != eProd) || (i < j))
	{
		if (sProd > eProd)
		{
			j -= 1;
			eProd *= arr[j];
		}
		else if (sProd < eProd)
		{
			i += 1;
			sProd *= arr[i];
		}
		else
		{
			// i += 1;
			j -= 1;
			eProd *= arr[j];
		}
	}
	if (sProd == eProd)
		std::cout << i + 1 << std::endl;
	else
		std::cout << -1 << std::endl;

	// 2 2 1 2 1 2
	// 2 4 4 8 8 16
	// 2 2 4 4 8 16

	// 1 2 1
	// 1 2 2
	// 1 2 2

	// 2 2 1 2
	// 2 4 4 8
	// 2 2 4 8
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
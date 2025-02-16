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
	int a = 1, b = 1;
	int i = 0, j = size - 1;
	for (int i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}
	i = 0;
	while (i <= j)
	{
		if (a == b)
		{
			a *= arr[++i];
			b *= arr[--j];
		}
		else if (a < b)
		{
			a *= arr[++i];
		}
		else
		{
			b *= arr[--j];
		}
	}
	if (i == j && a == b)
	{
		std::cout << i << std::endl;
	}
	else
	{
		std::cout << -1 << std::endl;
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
// NOTE: Not complete yet
#ifdef LOCAL
#include <fstream>
#include <ostream>
#include <istream>
#endif
#include <iostream>

void solution()
{
	int size;
	// get size of array
	std::cin >> size;
	// if array is of size 1 then it is good
	// 1 2 3 4 5 6
	if (size == 1)
	{
		std::cout << "YES" << std::endl;
		std::cout << 0 << std::endl;
		return;
	}
	int *arr = new int[size];
	// 0000 00 parity good
	char flags = 1;
	std::cin >> arr[0];
	for (int i = 0; i < size - 1; i++)
	{
		std::cin >> arr[i];
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
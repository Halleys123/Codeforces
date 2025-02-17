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
	if (size == 1)
	{
		std::cout << "YES" << std::endl;
		std::cout << 0 << std::endl;
		return;
	}
	int *arr = new int[size];
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
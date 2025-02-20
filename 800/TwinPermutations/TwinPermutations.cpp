#ifdef LOCAL
#include <fstream>
#include <ostream>
#include <istream>
#endif
#include <iostream>

void solution()
{
	int size, temp;
	std::cin >> size;
	size += 1;
	for (int i = 0; i < size - 1; i++)
	{
		std::cin >> temp;
		std::cout << size - temp << " ";
	}
	std::cout << std::endl;
	return;
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
#ifdef LOCAL
#include <fstream>
#include <ostream>
#include <istream>
#endif
#include <iostream>

void solution()
{
	int size;
	// get array size;
	std::cin >> size;
	int countPositive = 0;
	for (int i = 0; i < size; i++)
	{
		int temp;
		std::cin >> temp;
		countPositive += temp;
	}
	if (countPositive >= 0)
	{
		std::cout << "0\n";
		return;
	}
	// for sum to be positive, positive one should be more
	// and product to be positive negative one should be even
	std::cout << -countPositive << std::endl;
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
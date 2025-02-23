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
	long long sum = 0;
	int sign = 1;
	int temp;
	for (int i = 0; i < size; i++)
	{
		std::cin >> temp;
		sum += sign * temp;
		sign *= -1;
	}
	std::cout << sum << std::endl;
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
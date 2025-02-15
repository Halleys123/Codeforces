#ifdef LOCAL
#include <fstream>
#include <ostream>
#include <istream>
#endif
#include <iostream>

#define ll long long

void solution()
{
	ll a, b, c;
	std::cin >> a >> b >> c;
	if (c % 2 != 0)
	{
		if (a >= b)
			std::cout << "First" << std::endl;
		else
			std::cout << "Second" << std::endl;
		return;
	}
	else
	{
		if (a > b)
			std::cout << "First" << std::endl;
		else
			std::cout << "Second" << std::endl;
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
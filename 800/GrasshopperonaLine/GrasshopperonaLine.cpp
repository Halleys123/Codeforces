#ifdef LOCAL
#include <fstream>
#include <ostream>
#include <istream>
#endif
#include <iostream>

void solution()
{
	int x, k;
	std::cin >> x >> k;
	int i = x;
	for (i = x; i >= 1; i--)
	{
		if (i % k != 0)
		{
			break;
		}
	}
	if (x == i)
	{
		std::cout << 1 << std::endl;
		std::cout << x << std::endl;
		return;
	}
	std::cout << 2 << std::endl;
	std::cout << i << " ";
	std::cout << 1 << std::endl;
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
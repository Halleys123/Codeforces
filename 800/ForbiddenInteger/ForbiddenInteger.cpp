#ifdef LOCAL
#include <fstream>
#include <ostream>
#include <istream>
#endif
#include <iostream>

void solution()
{
	int n, k, x;
	std::cin >> n >> k >> x;
	// std::cout << "n: " << n
	// 		  << " k: " << k << " x: " << x << std::endl;
	if (k == x && k == 1)
	{
		std::cout << "NO" << std::endl;
		return;
	}
	if (x != 1)
	{
		std::cout << "YES" << std::endl;
		std::cout << n << std::endl;
		for (int i = 1; i <= n; i++)
		{
			std::cout << 1 << " ";
		}
		std::cout << std::endl;
		return;
	}
	if (k == n && x != k)
	{
		// std::cout << "Running 1" << std::endl;
		std::cout << "YES" << std::endl;
		std::cout << 1 << std::endl;
		std::cout << k << " ";
		std::cout << std::endl;
		return;
	}
	else if (k == n && x == k)
	{
		// std::cout << "Running 2" << std::endl;
		std::cout << "YES" << std::endl;
		std::cout << 2 << std::endl;
		std::cout << 1 << " " << k - 1 << std::endl;
		std::cout << std::endl;
		return;
	}
	else if (x == 1)
	{
		// std::cout << "Running 3" << std::endl;
		if (n % k == 0)
		{
			// std::cout << "Running 4" << std::endl;
			std::cout << "YES" << std::endl;
			std::cout << n / k << std::endl;
			for (int i = 0; i < n / k; i++)
			{
				std::cout << k << " ";
			}
			std::cout << std::endl;
			return;
		}
	}
	std::cout << "NO" << std::endl;
	// n = sum(xi) where i belongs to [1, k] except x;
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
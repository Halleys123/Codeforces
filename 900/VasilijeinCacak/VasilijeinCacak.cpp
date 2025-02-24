#ifdef LOCAL
#include <fstream>
#include <ostream>
#include <istream>
#endif
#include <iostream>

void solution()
{
	long long n, k, x;
	std::cin >> n >> k >> x;
	// n + n - 1 + n - 2 + ... + n - (k - 1)
	// kn - (1 + 2 + 3 + ... k - 1);
	// kn - k * (K - 1) / 2 + 1
	// k (2n - k + 1) / 2 + 1
	//(2nk - k^2 + k + 2) / 2
	long long min = k * (k + 1) / 2;
	long long max = (k * n) - ((k * (k - 1)) / 2);
	if ((x >= min) && (x <= max))
	{
		std::cout << "YES" << '\n';
	}
	else
	{
		std::cout << "NO" << '\n';
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
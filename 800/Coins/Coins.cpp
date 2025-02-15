#ifdef LOCAL
#include <fstream>
#include <ostream>
#include <istream>
#endif
#include <iostream>

// x = (n - ky) / 2
// for x > 0
// n - ky > 0
// n > ky
// n / k > y
// y belongs to [0, n / k]
// check for all x from y = 0 to n / k

// 2x + ky = n
// x = (n - ky) / 2
void solution()
{
	long long n, k;
	std::cin >> n >> k;
	std::cout << ((((n % 2) == 0) || ((n - k) % 2 == 0)) ? "YES" : "NO") << std::endl;
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
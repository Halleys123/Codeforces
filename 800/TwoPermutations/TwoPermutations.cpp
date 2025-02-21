#ifdef LOCAL
#include <fstream>
#include <ostream>
#include <istream>
#endif
#include <iostream>

void solution()
{
	// array size
	int n;
	// longest size of commong prefix and sufix
	int a, b;
	std::cin >> n >> a >> b;
	// 1 2 3 4 5
	// 2 1
	// '1' 2 3 "4 5"
	// '1' 3 2 "4 5"
	// a - longest common prefix of array should be 'a'
	// b - longest common prefix of array should be 'b'

	bool res = (a == n && b == n) || (a + b + 1 < n);
	std::cout << (res ? "YES" : "NO") << std::endl;
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
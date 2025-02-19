// NOTE: Not complete

#ifdef LOCAL
#include <fstream>
#include <ostream>
#include <istream>
#endif
#include <iostream>

void solution()
{
	// size of array
	int n;
	// common integer
	int k;
	int temp;
	std::cin >> n >> k;
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
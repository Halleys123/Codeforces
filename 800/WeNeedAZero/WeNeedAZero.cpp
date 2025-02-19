#ifdef LOCAL
#include <fstream>
#include <ostream>
#include <istream>
#endif
#include <iostream>

void solution()
{
	// a b c d e
	// by xoring with x
	// f g h i j
	// (a^x)^(b^x)^(c^x)^(d^x)^(e^x)
	// == ((a)^(b)^(c)^(d)^(e))^(x^x^x^x^x)
	// if size is odd then x exists if xorSum is not 0 and x = xorSum
	// if size is even then x does not exist
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
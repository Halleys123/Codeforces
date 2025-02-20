#ifdef LOCAL
#include <fstream>
#include <ostream>
#include <istream>
#endif
#include <iostream>

void solution()
{
	// size of bnary string
	int size;
	std::cin >> size;
	// input the string
	std::string str;
	std::cin >> str;
	// count possible operation
	int operation = 0;
	// pointer for first and last
	int i = 0, j = size - 1;
	while (i < j)
	{
		if (str[i] == str[j])
			break;
		operation += 1;
		i += 1;
		j -= 1;
	}
	std::cout << size - (operation * 2) << std::endl;
}
// 911b
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

// Fastest solve
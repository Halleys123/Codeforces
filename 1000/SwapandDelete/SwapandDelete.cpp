#ifdef LOCAL
#include <fstream>
#include <ostream>
#include <istream>
#endif
#include <iostream>

void solution()
{
	int zero = 0, one = 0;
	std::string input;
	std::cin >> input;
	int len = input.length();
	for (int i = 0; i < len; i++)
	{
		zero += (input[i] == '0');
		one += (input[i] == '1');
	}
	// if possible then swap else delete
	for (int i = 0; i < len; i++)
	{
		if (input[i] == '0')
		{
			if (one)
				one--;
			else
				break;
		}
		else
		{
			if (zero)
				zero--;
			else
				break;
		}
	}
	std::cout << zero + one << std::endl;
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
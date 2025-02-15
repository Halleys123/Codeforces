#ifdef LOCAL
#include <fstream>
#include <ostream>
#include <istream>
#endif
#include <iostream>
#include <vector>

void solution()
{
	int xSize, sSize;
	std::cin >> xSize >> sSize;
	std::string x, s;
	std::cin >> x >> s;
	int count = 0;
	while (x.find(s) == std::string::npos)
	{
		x.append(x);
		count += 1;
		if (count >= 6)
		{
			count = -1;
			break;
		}
	}
	if (count >= 6)
	{
		count = -1;
	}
	std::cout << count << std::endl;
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
	return 0;
}
#ifdef LOCAL
#include <fstream>
#include <ostream>
#include <istream>
#endif
#include <iostream>

#define N 1
#define S -1
#define E 1
#define W -1

void solution()
{
	int n, a, b;
	int x = 0, y = 0;
	std::cin >> n >> a >> b;
	std::string str;
	std::cin >> str;
	bool check = false;

	char c;
	for (int i = 0; i < 20; i++)
	{

		for (int i = 0; i < n; i++)
		{
			c = str[i];
			if (c == 'E')
				x += 1;
			else if (c == 'W')
				x -= 1;
			else if (c == 'N')
				y += 1;
			else if (c == 'S')
				y -= 1;
			if (x == a && y == b)
			{

				std::cout << "YES" << std::endl;
				return;
			}
		}
	}
	std::cout << "NO" << std::endl;
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
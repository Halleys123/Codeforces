#ifdef LOCAL
#include <fstream>
#include <ostream>
#include <istream>
#endif
#include <iostream>
#include <unordered_map>

void solution()
{
	std::unordered_map<int, int> m;
	int n;
	int score = 0;
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x;
		std::cin >> x;
		m[x]++;
		if (m[x] % 2 == 0)
		{
			score++;
			m[x] = 0;
		}
	}
	std::cout << score << std::endl;
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
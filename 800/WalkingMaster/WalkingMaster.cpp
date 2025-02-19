#ifdef LOCAL
#include <fstream>
#include <ostream>
#include <istream>
#endif
#include <iostream>

void solution()
{
	int x1, y1, x2, y2;
	std::cin >> x1 >> y1 >> x2 >> y2;
	// if y1 can reach y2 and a < c then false
	// steps = d - b
	int stepsY = y2 - y1;
	x1 += stepsY;
	int stepsX = x1 - x2;
	int ans = 0;
	if (stepsX < 0 || stepsY < 0)
	{
		ans = -1;
	}
	else
	{
		ans += stepsX + stepsY;
	}
	std::cout << ans << std::endl;
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
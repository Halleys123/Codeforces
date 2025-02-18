#ifdef LOCAL
#include <fstream>
#include <ostream>
#include <istream>
#endif
#include <iostream>

void solution()
{
	int size;
	std::cin >> size;
	int i = 0, longestGap = INT_MIN, currentGap = 0;
	bool inGap = false;
	for (int i = 0; i < size; i++)
	{
		int temp;
		std::cin >> temp;
		inGap = (temp == 0);
		if (inGap)
		{
			currentGap++;
		}
		else
		{
			longestGap = std::max(longestGap, currentGap);
			currentGap = 0;
		}
	}
	longestGap = std::max(longestGap, currentGap);
	std::cout << longestGap << std::endl;
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

// Fastest solve
// 3 minutes approx
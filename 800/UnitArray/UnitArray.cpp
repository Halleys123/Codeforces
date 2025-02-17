// NOTE: Not solved yet
#ifdef LOCAL
#include <fstream>
#include <ostream>
#include <istream>
#endif
#include <iostream>

void solution()
{
	int size;
	// get array size;
	std::cin >> size;
	int negative = 0, positive = 0;
	int temp;
	for (int i = 0; i < size; i++)
	{
		std::cin >> temp;
		if (temp < 0)
		{
			negative++;
		}
		else
		{
			positive++;
		}
	}
	if (negative == positive)
	{
		std::cout << "0\n";
		return;
	}
	// for sum to be positive, positive one should be more
	// and product to be positive negative one should be even
	bool areNegativeEven = negative % 2 == 0;
	bool isSumPositive = positive > negative;
	if (isSumPositive && areNegativeEven)
	{
		std::cout << "0\n";
	}
	else
	{
		// calculate operations required
		int required = negative - positive + (negative % 2 != 0);
		std::cout << required << std::endl;
	}
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
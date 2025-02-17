#ifdef LOCAL
#include <fstream>
#include <ostream>
#include <istream>
#endif
#include <iostream>

typedef long long ll;

void solution()
{
	bool isIncreasing = true;
	int size;
	// size of array
	std::cin >> size;
	// get array while checking if it is sorted
	// also save min distance between any two elements
	ll minDistance = LONG_MAX;
	ll prev = 0, cur = 0;
	// get first element so that we can compare distance
	// std::cout << "Size : " << size << std::endl;
	std::cin >> prev;
	for (int i = 1; i < size; i++)
	{
		std::cin >> cur;
		// std::cout << prev << " " << cur << std::endl;
		if (prev <= cur)
		{
			minDistance = std::min(minDistance, cur - prev);
			// std::cout << minDistance << std::endl;
		}
		else
		{
			isIncreasing = false;
			// break;
		}
		prev = cur;
	}
	// std::cout << "Is Increasing: " << isIncreasing << std::endl;
	if (!isIncreasing)
	{
		std::cout << "0\n";
	}
	else
	{
		std::cout << minDistance / 2 + 1 << "\n";
	}
	// std::cout << std::endl;
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

// Improvement read the question properly,
// one operation was to decrease current element and
// add 1 to next
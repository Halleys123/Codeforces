#ifdef LOCAL
#include <fstream>
#include <ostream>
#include <istream>
#endif
#include <iostream>

int main()
{
#ifdef LOCAL
	std::ifstream in("input.txt");
	std::ofstream out("output.txt");
	std::cin.rdbuf(in.rdbuf());
	std::cout.rdbuf(out.rdbuf());
#endif

	int values, num, min = INT_MAX;
	std::cin >> values;
	while (values > 0)
	{
		std::cin >> num;
		num = std::abs(num);
		if (num < min)
		{
			min = num;
		}
		values--;
	}
	std::cout << min << std::endl;

	return 0;
}
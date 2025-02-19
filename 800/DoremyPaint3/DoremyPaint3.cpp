// NOTE: Not complete

#ifdef LOCAL
#include <fstream>
#include <ostream>
#include <istream>
#endif
#include <iostream>
#include <cmath> // Include cmath for fabs

void solution()
{
	int size;
	std::cin >> size;
	// an array of size less than 2 is always good
	if (size <= 2)
	{
		std::cout << "YES" << std::endl;
		return;
	}
	// else how could array be good
	// we want to divide given array in size/2 pairs
	// whose sum is same
	// for a given pair if mean is x
	// and we have size / 2, such paris whoose mean is x
	// then mean of all pairs is ((size / 2) * x ) / (size / 2) is x
	// and
	// so if we can find even one pair whoose mean is x then we can
	// prove that array can be rearrange
	// so first find
	int sum = 0;
	int *arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		std::cin >> arr[i];
		sum += arr[i];
	}
	delete[] arr;
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
}
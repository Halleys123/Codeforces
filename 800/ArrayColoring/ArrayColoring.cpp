#ifdef LOCAL
#include <fstream>
#include <ostream>
#include <istream>
#endif
#include <iostream>

void solution()
{
	// size of array
	int arrSize;
	std::cin >> arrSize;
	int *arr = new int[arrSize];
	bool possible = false;
	// variable to kep count of both elements
	int odd = 0, even = 0;
	for (int i = 0; i < arrSize; i++)
	{
		std::cin >> arr[i];
		odd += (arr[i] % 2 != 0);
		even += (arr[i] % 2 == 0);
	}
	// have to divide in array in two parts
	// such that
	// sum of both parts is either even or odd

	// for even sum
	// any no. of even and even no. of odd
	// for odd sum
	// any no. of even and odd no. of odd
	// if we divide in two parts
	// if size 1 not possible
	// if size 2 both no. should be even or odd
	// if size 3
	// 1 even 2 odd
	// 3 even
	// if size more than equal to 4
	// if all odd
	// if all even
	// if odd are even
	if (arrSize == 1)
	{
		possible = false;
	}
	else if (arrSize == 2)
	{
		possible = (even - odd == even) || (odd - even == odd);
	}
	else if (arrSize == 3)
	{
		possible = ((even == 1) && (odd == 2)) || (even == 3);
	}
	else
	{
		if (arrSize % 2 == 0)
		{
			possible = ((odd == arrSize) || (even == arrSize) || (odd % 2 == 0));
		}
		else
		{
			possible = (even == arrSize) || (odd % 2 == 0);
		}
	}
	std::cout << (possible ? "YES" : "NO") << std::endl;
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

// there was a better approach then to think all these
// just sum all
// check if sum is even then yes otherwise no

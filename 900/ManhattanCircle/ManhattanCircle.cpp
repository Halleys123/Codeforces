#ifdef LOCAL
#include <fstream>
#include <ostream>
#include <istream>
#endif
#include <iostream>
#include <vector>

// Given a n by m grid consisting of '.' and '#' characters, there exists a whole manhattan circle on the grid. The top left corner of the grid has coordinates (1,1), and the bottom right corner has coordinates (n,m)

// .

// Point (a,b
// ) belongs to the manhattan circle centered at (h,k) if |h−a|+|k−b|<r, where r

// is a positive constant.

// On the grid, the set of points that are part of the manhattan circle is marked as '#'. Find the coordinates of the center of the circle.
// Input

// The first line contains t
// (1≤t≤1000

// )  — the number of test cases.

// The first line of each test case contains n
// and m (1≤n⋅m≤2⋅105

// ) — the height and width of the grid, respectively.

// The next n
// lines contains m

// characters '.' or '#'. If the character is '#', then the point is part of the manhattan circle.

// It is guaranteed the sum of n⋅m
// over all test cases does not exceed 2⋅105

// , and there is a whole manhattan circle on the grid.
// Output

// For each test case, output the two integers, the coordinates of the center of the circle.

void solution()
{
	int n, m;
	std::cin >> n >> m;
	std::vector<std::string> grid(n);
	for (int i = 0; i < n; ++i)
	{
		std::cin >> grid[i];
	}

	int sumX = 0, sumY = 0, count = 0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (grid[i][j] == '#')
			{
				sumX += i + 1;
				sumY += j + 1;
				++count;
			}
		}
	}

	int centerX = sumX / count;
	int centerY = sumY / count;

	std::cout << centerX << " " << centerY << std::endl;
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
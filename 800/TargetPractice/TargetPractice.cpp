#ifdef LOCAL
#include <fstream>
#include <ostream>
#include <istream>
#endif
#include <iostream>
#include <vector>

void solution(std::vector<std::vector<int>> &board)
{
	int score = 0;
	std::string s;
	for (int row = 0; row < 10; row += 1)
	{
		std::cin >> s;
		for (int col = 0; col < 10; col += 1)
		{
			if (s[col] == 'X')
			{
				score += board[row][col];
			}
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
	std::vector<std::vector<int>> board = {
		{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
		{1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
		{1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
		{1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
		{1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
		{1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
		{1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
		{1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
		{1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
		{1, 1, 1, 1, 1, 1, 1, 1, 1, 1}};
	int testCase;
	std::cin >> testCase;
	while (testCase--)
	{
		solution(board);
	}
}

// Improvements:
// Was too stuck on one approach to the problem
// Was trying to directly calculate which concentric circle it was
// from row and column,
// but it was easier to just use a 2D array to store the values
// which I tried too late
// NOTE: NOt complete, not solved

#ifdef LOCAL
#include <fstream>
#include <ostream>
#include <istream>
#endif
#include <iostream>

// You are given a board of size n×n (n rows and n colums) and two arrays of positive integers a and b of size n
// Your task is to place the chips on this board so that the following condition is satisfied for every cell (i,j)
// :
// there exists at least one chip in the same column or in the same row as the cell (i,j)

// . I. e. there exists a cell (x,y) such that there is a chip in that cell, and either x=i or y=j

//     (or both).

// The cost of putting a chip in the cell (i,j)
// is equal to ai+bj

// .

// For example, for n=3
// , a=[1,4,1] and b=[3,2,2]

// . One of the possible chip placements is as follows:
// White squares are empty

// The total cost of that placement is (1+3)+(1+2)+(1+2)=10

// .

// Calculate the minimum possible total cost of putting chips according to the rules above.

//   5  2 4 5  3
// 3 8  5 7 8  6
// 4 9  6 8 9  7
// 2 7  4 6 7  5
// 1 6  3 5 6  4
// 5 10 7 9 10 8

// 5 6 4 3 7
// 6 3 5 6 4

// 5 3 4 3 4
void solution()
{
	int size;
	std::cin >> size;
	int *rowInp = new int[size];
	int *colInp = new int[size];
	for (int i = 0; i < size; i++)
	{
		std::cin >> rowInp[i];
	}
	for (int i = 0; i < size; i++)
	{
		std::cin >> colInp[i];
	}

	int minCost = INT_MAX;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			int cost = 0;
			for (int k = 0; k < size; k++)
			{
				cost += std::min(rowInp[k] + colInp[j], rowInp[i] + colInp[k]);
			}
			minCost = std::min(minCost, cost);
		}
	}

	std::cout << minCost << std::endl;

	delete[] rowInp;
	delete[] colInp;
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
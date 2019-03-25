#include "chapter_3_ common _algorithmic _ideas .h"

int UpStairs(int n)
{
	if (n == 1)
		return 1;
	else if (n == 2)
		return 2;
	else
		return UpStairs(n - 1) + UpStairs(n - 2);
}

void UpStairsOutput()
{
	int n = 20;
	cout << n << "阶楼梯共有：" << UpStairs(n) << "种爬法" << endl;
}
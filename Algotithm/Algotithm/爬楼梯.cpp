#include "chapter_3_ common _algorithmic _ideas .h"
#include <time.h>

/*
第一种解法，递归解法
*/
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

/*
第二种解法，递归回溯，可以打印具体步骤
*/

#define MAX_STEPS  20

int step[MAX_STEPS] = { 0 };
int cnt = 0;

void UpStairs1(int footStep, int count, int steps)
{
	//footStep是要走的阶数，count是走过的阶数，steps是总共走的步数
	if (footStep + count == MAX_STEPS)
	{
		step[steps] = footStep;
		cnt++;
		for (int i = 0; i <= steps; i++)
			cout << step[i] << " ";
		cout << endl;
		return;
	}

	if (footStep + count > MAX_STEPS)
	{
		return;
	}

	count += footStep;
	step[steps] = footStep;
	steps++;

	for (int i = 1; i <= 2; i++)
	{
		UpStairs1(i, count, steps);
	}
}

void UpStairsAll()
{
	UpStairs1(1, 0, 0);
	UpStairs1(2, 0, 0);
}

void UpStairsAllOutput()
{
	clock_t start = clock();
	UpStairsAll();
	clock_t end = clock();
	cout << "共耗时" << end - start << endl;
	cout << "共要爬的阶梯数为: " << MAX_STEPS << endl;
	cout << "共有" << cnt << "种爬法" << endl;
}
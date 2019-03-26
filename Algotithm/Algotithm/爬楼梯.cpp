#include "chapter_3_ common _algorithmic _ideas .h"
#include <time.h>

/*
��һ�ֽⷨ���ݹ�ⷨ
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
	cout << n << "��¥�ݹ��У�" << UpStairs(n) << "������" << endl;
}

/*
�ڶ��ֽⷨ���ݹ���ݣ����Դ�ӡ���岽��
*/

#define MAX_STEPS  20

int step[MAX_STEPS] = { 0 };
int cnt = 0;

void UpStairs1(int footStep, int count, int steps)
{
	//footStep��Ҫ�ߵĽ�����count���߹��Ľ�����steps���ܹ��ߵĲ���
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
	cout << "����ʱ" << end - start << endl;
	cout << "��Ҫ���Ľ�����Ϊ: " << MAX_STEPS << endl;
	cout << "����" << cnt << "������" << endl;
}
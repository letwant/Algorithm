#include "chapter_3_ common _algorithmic _ideas .h"
#include <random>
#include <time.h>

double Darts(int n)
{
	int Num = 0;
	int i = 0;
	time_t t;
	srand((unsigned)time(&t));
	while (i < n)
	{
		double y = (double)(rand() % 100) / 100;
		double x = (double)(rand() % 100) / 100;
		if (y <= 1 - pow(x, 2))
			Num++;
		i++;
	}
	cout << Num << endl;
	return (double)Num / (double)n;
}

void DartsOutput()
{
	int n = 10000;
	cout << "精度为" << n << endl;
	cout << "积分为: " << Darts(n) << endl;
}
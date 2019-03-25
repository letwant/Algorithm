#include "chapter_3_ common _algorithmic _ideas .h"
int co = 0;
int isCorret(int i, int j, int(*Q)[8])
{
	int s, t;
	for (t = 0; t < 8 && t != i; t++)
		if (Q[t][j] == 1) return 0;
	for (t = 0; t < 8 && t != j; t++)
		if (Q[i][t] == 1) return 0;
	for (s = i - 1, t = j - 1; s >= 0 && t >= 0; t--, s--)
		if (Q[s][t] == 1) return 0;
	for (s = i - 1, t = j + 1; s >= 0 && t < 8; s--, t++)
		if (Q[s][t] == 1) return 0;
	for (s = i + 1, t = j - 1; s < 8 && t >= 0; s++, t--)
		if (Q[s][t] == 1) return 0;
	for (s = i + 1, t = j + 1; s < 8 && t < 8; s++, t++)
		if (Q[s][t] == 1) return 0;
	return 1;
}

void Queue(int j, int(*Q)[8])
{
	if (j == 8)
	{
		for (int i = 0; i < 8; i++)
		{
			for (int k = 0; k < 8; k++)
			{
				cout << Q[i][k] << " ";
			}
			cout << endl;
		}
		cout << endl;
		co++;
	}
	for (int i = 0; i < 8; i++)
	{
		if (isCorret(i, j, Q))
		{
			Q[i][j] = 1;
			Queue(j + 1, Q);
			Q[i][j] = 0;
		}
	}
}
void QueueOutput()
{
	int Q[8][8] = { 0 };
	Queue(0, Q);
	cout << "共有" << co << "种排法" << endl;
}
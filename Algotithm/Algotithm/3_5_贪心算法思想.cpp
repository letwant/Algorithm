#include "chapter_3_ common _algorithmic _ideas .h"
void sort(int w[], int t[], int n)
{
	int *w_tmp = new int[n];
	int tmp;
	for (int i = 0; i < n; i++)
	{
		t[i] = i;
		w_tmp[i] = w[i];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (w_tmp[j] > w_tmp[j + 1])
			{
				tmp = w_tmp[j];
				w_tmp[j] = w_tmp[j + 1];
				w_tmp[j + 1] = tmp;
				tmp = t[j];
				t[j] = t[j + 1];
				t[j + 1] = tmp;
			}
		}
	}
}
void load(int w[], int x[], int c, int n)
{
	int *t = new int[n];
	sort(w, t, n);
	for (int i = 0; i < n; i++)
		x[i] = 0;
	for (int i = 0; i < n && w[t[i]] < c; i++)
	{
		x[t[i]] = 1;
		c -= w[t[i]];
	}
}

void loadOutput()
{
	int c = 13;
	cout << "最大重量为" << c << endl;
	int w[5] = { 4, 3, 5, 2, 6 };
	cout << "每个货船重量为" << endl;
	for (int i = 0; i < 5; i++)
		cout << w[i] << " ";
	cout << endl;
	int *x = new int[5];
	load(w, x, c, 5);
	cout << "要装船的货箱下标为" << endl;
	for (int i = 0; i < 5; i++)
	{
		if (x[i] == 1)
			cout << i << " ";
	}
	cout << endl;
}
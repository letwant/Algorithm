#include "chapter_3_ common _algorithmic _ideas .h"
int P(int n, int m)
{
	if (n == 1 || m == 1) return 1;
	if (n < m) return P(n, n);
	if (n == m) return 1 + P(n, n - 1);
	return P(n, m - 1) + P(n - m, m);
}

void POut()
{
	int n, s;
	n = 6;
	s = P(n, n);
	cout << "The number of division of " << n << " is " << s << endl;
}
int binSearch(int key[], int low, int high, int k)
{
	if (low > high)
		return -1;
	int mid = (high + low) / 2;
	if (key[mid] == k)
		return mid;
	else if (key[mid] > k)
		return binSearch(key, low, mid - 1, k);
	else
		return binSearch(key, mid + 1, high, k);
}
void binSearchOutput()
{
	int key[] = { 1, 3, 5, 7, 9, 12, 14, 15, 19 };
	int value = binSearch(key, 0, 8, 19);
	cout << value << endl;
}
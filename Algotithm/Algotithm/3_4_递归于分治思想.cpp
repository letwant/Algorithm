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
	cout << "Please input a integer for getting the number of division" << endl;
	cin >> n;
	s = P(n, n);
	cout << "The number of division of " << n << " is " << s << endl;
}
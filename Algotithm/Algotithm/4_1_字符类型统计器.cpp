#include "chapter_4_basic _programming _skills.h"
#include <cstdio>
void characterStatistics()
{
	int enter=0, tab=0, blankspace=0;
	cout << "�������ַ�" << endl;
	char c;
	scanf_s("%c", &c, 1);
	while (c != '#')
	{
		switch (c)
		{
		case 10:
			enter++;
			break;
		case 9:
			tab++;
			break;
		case 32:
			blankspace++;
			break;
		default:
			break;
		}
		scanf_s("%c", &c, 1);
	}
	cout << "���м�enter����: " << enter << endl;
	cout << "�����Ʊ�tab����: " << tab << endl;
	cout << "�ո�blankspace����: " << blankspace << endl;
}
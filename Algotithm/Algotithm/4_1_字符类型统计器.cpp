#include "chapter_4_basic _programming _skills.h"
#include <cstdio>
void characterStatistics()
{
	int enter=0, tab=0, blankspace=0;
	cout << "请输入字符" << endl;
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
	cout << "换行键enter共有: " << enter << endl;
	cout << "横向制表tab共有: " << tab << endl;
	cout << "空格blankspace共有: " << blankspace << endl;
}
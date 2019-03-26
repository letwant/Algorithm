#include "chapter_4_basic _programming _skills.h"

char judgeScore(int score)
{
	if (score < 80)
	{
		if (score < 70)
		{
			if (score < 60)
				return 'E';
			else
				return 'D';
		}
		else
			return 'C';
	}
	else
	{
		if (score < 90)
			return 'B';
		else
			return 'A';
	}
}

void judgeScoreOutput()
{
	int score;
	cout << "请输入分数: ";
	cin >> score;
	cout << "该分数的等级为: " << judgeScore(score) << endl;
}
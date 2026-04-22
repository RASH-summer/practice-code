#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>	
#include <stdlib.h>


int main1()
{
	int n = 0;
	scanf("%d", &n);
	
	int score[1001][4] = { 0 };

	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d %d %d", &score[i][0], &score[i][1], &score[i][2]);
		score[i][3] = score[i][0] + score[i][1] + score[i][2];

	}

	int count = 0;

	// 组合问题
	for (i = 0; i < n; i++)
	{
		int j = 0;
		for (j = i + 1; j < n; j++)
		{
			int diff_chinese = abs(score[i][0] - score[j][0]);
			int diff_math = abs(score[i][1] - score[j][1]);
			int diff_english = abs(score[i][2] - score[j][2]);

			int diff_sum = abs(score[i][3] - score[j][3]);

			if (diff_chinese <= 5 && diff_math <= 5 && diff_english <= 5 && diff_sum <= 10)
			{
				count++;
			}
		}

	}

	printf("%d\n", count);



	return 0;
}




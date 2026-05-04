#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int arr[10][10] = { 0 };
	int n = 0;

	scanf("%d", &n);
	
	// 先填上首元素的位置
	int number = 1;
	int x = 0;
	int y = 0;
	arr[x][y] = number;


	while (number < n*n) // 填满n*n个数字才停止
	{
		// 往右走
		while (arr[x][y+1] == 0 && y+1 < n)
		{
			y++;
			number++;
			arr[x][y] = number;
		}
		
		// 往下走
		while (arr[x+1][y] == 0 && x+1 < n)
		{
			x++;
			number++;
			arr[x][y] = number;
		}

		// 往左走
		while (arr[x][y-1] == 0 && y-1 >= 0)
		{
			y--;
			number++;
			arr[x][y] = number;
		}

		// 往上走
		while (arr[x - 1][y] == 0 && x - 1 >= 0)
		{
			x--;
			number++;
			arr[x][y] = number;
		}

	}

	
	int i = 0;
	for (i = 0; i < n; i++)
	{
		int j = 0;
		for (j = 0; j < n; j++)
		{
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}


	
	return 0;
}
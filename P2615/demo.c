#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 方法1
//int main()
//{
//	int n = 0;
//	int arr[50][50] = {0};
//
//	scanf("%d", &n);
//	
//	//把1放在矩阵第一行的中间位置
//	int row = 0;
//	int col = n / 2;
//	arr[row][col] = 1;
//
//	int k = 2;
//	for (k = 2; k <= n * n; k++)
//	{
//		int new_row = 0;
//		int new_col = 0;
//
//		
//		if (row == 0 && col != n-1)
//		{
//			new_row = n - 1;
//			new_col = col + 1;
//			arr[new_row][new_col] = k;
//		}
//
//		else if (col == n - 1 && row != 0)
//		{
//			new_col = 0;
//			new_row = row - 1;
//		}
//
//		else if (row == 0 && col == n - 1)
//		{
//			new_row = row + 1;
//			new_col = col;
//		}
//	
//		else if (row != 0 && col != n - 1)
//		{
//			if (arr[row - 1][col + 1] == 0)
//			{
//				new_row = row - 1;
//				new_col = col + 1;
//			}
//			else
//			{
//				new_row = row + 1;
//				new_col = col;
//			}
//		}
//
//		arr[new_row][new_col] = k; // 填入k值
//
//		// 更新k的位置
//		row = new_row;
//		col = new_col;
//
//	}
//
//	
//
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//
//	return 0;
//}

// 刚开始的时候1的位置是在row,col，然后判断出下一个k需要填入的位置




//方法2
int main()
{
	int n = 0;
	int arr[50][50] = { 0 };
	scanf("%d", &n);

	// 把1放在矩阵第1行中间的位置
	int row = 0;
	int col = n / 2; 
	arr[row][col] = 1;

	int k = 2;
	for (k = 2; k <= n * n; k++)
	{
		int new_row = (row - 1 + n) % n;
		int new_col = (col + 1) % n;

		if (arr[new_row][new_col] == 0)
		{
			// 空位，没有被占用
			row = new_row;
			col = new_col;
		}
		else
		{
			// 放在k-1的正下方
			row = (row + 1) % n;
		}

		arr[row][col] = k;
	}



	int i = 0;
	for (i = 0; i < n; i++)
	{
		int j = 0;
		for (j = 0; j < n; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}



	return 0;
}


// 方法2是我在问AI的时候，它给我解释，一开始我也不知道为什么要这样写，然后死磕之后才知道的，这个方法叫，罗伯法
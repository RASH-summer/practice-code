#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[20][20] = { 0 };

	int i = 0;
	for (i = 0; i < n; i++)
	{
		arr[i][0] = 1;
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			if (i == j)
			{
				arr[i][j] = 1;
			}
			
			if (i >= 2 && j >= 1)
			{
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			}
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}


	return 0;
}
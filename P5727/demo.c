#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>	


int main()
{
	int n = 0;
	int arr[1000] = { 0 };
	int i = 0;
	scanf("%d", &n);
	

	while (1)
	{
		arr[i] = n; 
		i++;
		if (n == 1)
		{
			break; // Ìø³öÑ­»·
		}


		if (n % 2 != 0)
		{
			n = n * 3 + 1;
		}
		else
		{
			n = n / 2;
		}
		
	}
	
	for (i = i - 1; i >= 0; i--)
	{
		printf("%d ", arr[i]);
	}

	printf("\n");

	return 0;
}
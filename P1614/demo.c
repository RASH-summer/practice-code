#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <limits.h>

// 方法1
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int arr[10005] = { 0 };
//
//	int i = 0;
//
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	
//	int left = 0;
//	int right = 0;
//	int current_sum = 0;
//	int min = INT_MAX;
//	for (left = 0; left <= n - m; left++)
//	{
//		current_sum = 0; // 回到0计算下一个窗口的值
//		for (right = left; right < left + m; right++)
//		{
//			current_sum += arr[right];
//			//printf("%d ", arr[right]);
//		}
//		//printf("\n");
//		//printf("current=%d\n", current_sum);
//
//		if (current_sum < min)
//		{
//			min = current_sum;
//		}
//	}
//
//	
//	printf("%d\n", min);
//
//
//	return 0;
//}



// 方法2
int main()
{
	int n = 0;
	int m = 0;
	int arr[10005] = { 0 };
	scanf("%d %d", &n, &m);

	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}


	int left = 0;
	int right = 0;
	int current_sum = 0;
	int min = INT_MAX;

	for (left = 0; left <= n - m; left++)
	{
		
		while (right < left + m)
		{
			current_sum += arr[right];
			right++;
		}

		if (current_sum < min)
		{
			// 更新最小值
			min = current_sum;
		}
		
		// 为下一次left=1做准备
		if (left < n - m) // 防止减去arr[5]
		{
			current_sum -= arr[left];
		}
	}


	printf("%d\n", min);	

	return 0;
}


/*
	也就是left=5，然后right=left+m了，就是right指向了数组最后一个元素+1的位置（越界了），
	但是此时，已经把窗口中的m个元素都+上去了；也减去了旧元素arr[4]这个元素，
	那么当left=5的时候就没必减去arr[5]这个元素，因为后面已经没有值了。

*/
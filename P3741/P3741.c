#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int count_VK(char* src)
{
	// 计算s中有几个VK
	int cnt = 0;
	while (*src)
	{
		if (*src == 'V' && *(src + 1) == 'K')
		{
			cnt++;
		}
		src++;
	}

	return cnt;
}


int main()
{
	int n = 0;
	char s[105] = { 0 };
	scanf("%d", &n);
	scanf("%s", s);

	// 未改动的时候VK的数量
	int max_count = count_VK(s);

	for (int i = 0; i < n; i++)
	{
		// 记录当前的字符
		char ch = s[i];

		if (s[i] == 'V')
			s[i] = 'K';
		else
			s[i] = 'V';

		// 改掉后VK的数量
		int new_count = count_VK(s);
		if (new_count > max_count)
		{
			max_count = new_count;
		}

		s[i] = ch; // 恢复回来

	}
	printf("%d\n", max_count);

	return 0;
}


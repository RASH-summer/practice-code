#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>	

int test(char* src, size_t len)
{
	int avg_sum = 1;
	for (int i = 0; i < len; i++)
	{
		avg_sum *= *src - 'A' + 1;
		src++;
	}
	return  avg_sum;
}

#include <stdio.h>
#include <string.h>

int main()
{
	char s1[10] = { 0 };
	char s2[10] = { 0 };	
	
	scanf("%s", s1);
	scanf("%s", s2);

	// °Ñ×ÖÄ¸Ó³ÉäÎªÊý×Ö
	size_t len = strlen(s1);

	int sum1 = test(s1, len);
	int sum2 = test(s2, len);
	
	if ((sum1 % 47) == (sum2 % 47))
		printf("GO\n");
	else
		printf("STAY\n");

	return 0;
}
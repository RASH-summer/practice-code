#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>	

int test(char* src)
{
	int avg_sum = 1;
	while (*src)
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
	int sum1 = test(s1);
	int sum2 = test(s2);
	
	if ((sum1 % 47) == (sum2 % 47))
		printf("GO\n");
	else
		printf("STAY\n");

	return 0;
}
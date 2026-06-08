#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <string.h>

int main()
{
	char str[20] = { 0 };

	fgets(str, 19, stdin);
	size_t len = strlen(str);

	if (str[len - 1] == '\n')
		str[len - 1] = '\0';

	int i = 0;
	int count = 0;

	while (str[i] != '\0')
	{
		if (str[i] != ' ' && str[i] != '\n')
			count++;
		i++;
	}
	printf("%d\n", count);

	return 0;
}

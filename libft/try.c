#include <bsd/string.h>
#include <stdio.h>

int main()
{
	int	k = 5000;
	char * src = "123456";
	const char *str2 = "123";
	char dest [] = "123";

	k = strlcat(dest, src, 9);
	printf("text = %s, k = %d", dest, k);


	//strcpy(str2, source);
}

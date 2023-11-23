#include <string.h> 
#include <stdio.h>

int main(void)
{
    int k;

    k = strncmp("test\200", "test\0",6);
    printf("%d",k);
}
#include  <stdio.h>

int main()
{
    int a = 1;
    char * p = (char *)&a;
    if( *p )
    {
        printf("little endian!\n");
    } else
    {
        printf("big endian!\n");
    }
    return 0;
}

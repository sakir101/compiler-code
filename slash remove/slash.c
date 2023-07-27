#include<stdio.h>
int main()
{
    char string[100];

    gets(string);
    int count = 0;

    int len = strlen(string);

    for(int i=0; i<len; i++)
    {
        if(string[i] == '/')
        {
            count = count + 1;
        }
    }
    printf("'/' found %d",count);
}

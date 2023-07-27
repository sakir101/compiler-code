#include<stdio.h>
int main()
{
    char str[100] ;
    gets(str);
    int len = strlen(str);
    printf("length: %d \n",len);
   for(int i=0; i<strlen(str);i++){
    if(str[i]==' ')
    {
        printf("Space detected at ");
        printf("%d index \n",i);
        for(int j =i; j<strlen(str); j++)
        {
            str[j] = str[j+1];
            i=0;
        }
    }
   }
   printf("%s", str);
}

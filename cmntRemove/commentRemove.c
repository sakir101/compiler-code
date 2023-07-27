#include<stdio.h>
int main(){
    char string[100];
    int flag = 0;
    gets(string);
    int len = strlen(string);

    for(int i=0; i<len; i++)
    {
        if(string[i]=='/')
        {
            if(string[i+1]=='/')
            {
               printf("Single line comment\n");
               i=len;
            }
            else if(string[i+1]=='*')
            {
                for(int j= i+2; j<len; j++)
                {
                    if(string[j]=='*')
                    {
                        if(string[j+1]=='/')
                        {
                            printf("Multi line comment!\n");
                            i=j+1;
                            flag=1;
                            break;
                        }
                        else if(string[j+1]!='/')
                        {
                            printf("Not a comment!\n");
                            i=j+1;
                            flag=1;
                            break;
                        }
                    }
                }
                if(flag!=1)
                {
                    printf("Not a comment!\n");
                    flag=0;
                    break;
                }

            }
            else
            {
                printf("Error!");
                i=i+1;
            }
        }

    }
}

 #include <stdio.h>
#include <string.h>

int main()
{
    char string[100];
   // fgets(string, sizeof(string), stdin);
   gets(string);
    int flag = 0, flag2 = 1000;
    char str[100];
    int len = strlen(string);

    for(int i = 0; i < len; i++)
    {

        if(string[i] == '"')
        {
            flag = i+1;
            flag2 = 0;
            for(int j= flag; j<len; j++)
            {
                if(string[j] == '"') //check if there is closing invitation comma
                {
                    flag2 = 1;
                    for(int k = flag; k<j; k++)
                    {
                        printf("%c", string[k]); //print string

                    }
                    printf("\t");
                    flag = 0;
                    i=j+1;
                    break;
                }

            }
        }

        if(flag2 == 0)
        {
            printf("\n");
            printf("Error: No closing double invitation comma"); //print error message
            break;
        }
    }

    return 0;
}


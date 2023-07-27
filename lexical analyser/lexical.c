#include<stdio.h>
int main()
{
    int flag = 0;
    char string[100];
    char array[100][100];
    char operators[] = "+-*/%=";
    char keywords[32][10] = {"auto","break","case","char","const","continue","default",
                             "do","double","else","enum","extern","float","for","goto",
                             "if","int","long","register","return","short","signed",
                             "sizeof","static","struct","switch","typedef","union",
                             "unsigned","void","volatile","while"
                            };
    fgets(string, sizeof(string), stdin);
    char st2[100];
    int p =0;

    int len = strlen(string);
    string[len] = '\0';

    for(int i=0; i<len; i++)
    {

        if ((string[i] >= 'a' && string[i] <= 'z') || (string[i] >= 'A' && string[i] <= 'Z') || string[i] == '+' || string[i] == '-' || string[i] == '*' || string[i] == '/' || string[i] == '%' || string[i] == '=' )
        {
            printf("\n");
            for(int j=i, k=0; j<len; j++, k++)
            {
                if(string[j] == ' ')
                {
                    st2[k] = '\0';

                    for(int i = 0; i < 32; i++)
                    {
                        if(strcmp(keywords[i], st2)==0)
                        {
                            flag = 1;
                            break;
                        }
                    }
                    if(flag==1)
                    {
                        printf("%s is a keyword", st2);
                        flag=0;
                    }

                    else if(st2[0] == '+' || st2[0] == '-' || st2[0] == '*' || st2[0] == '/' || st2[0] == '%' || st2[0] == '=')
                    {
                        printf("%s is an operator", st2);
                    }

                    else
                    {
                        printf("%s is an identifier", st2);
                    }

                    k=0;
                    i=j;
                    break;
                }
                if(j+1 == len)
                {
                    st2[k] = '\0';

                    for(int i = 0; i < 32; i++)
                    {
                        if(strcmp(keywords[i], st2)==0)
                        {
                            flag = 1;
                            break;
                        }
                    }
                    if(flag==1)
                    {
                        printf("%s is a keyword", st2);
                        flag=0;
                    }

                    else if(st2[0] == '+' || st2[0] == '-' || st2[0] == '*' || st2[0] == '/' || st2[0] == '%' || st2[0] == '=')
                    {
                        printf("%s is an operator", st2);
                    }

                    else
                    {
                        printf("%s is an identifier", st2);
                    }

                    k=0;
                    i=j;
                    break;
                }

                st2[k] = string[j];

            }
        }
    }

}

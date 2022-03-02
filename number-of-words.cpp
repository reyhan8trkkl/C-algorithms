#include<stdio.h>
#define FALSE 0
#define TRUE  1

int main()
{
        int wc=0,flag =FALSE,i=0;
    char str[30];
    printf("\nEnter a string : ");
        gets(str);
    while (str[i]!='\0')
    {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
            flag = FALSE;

        else if (flag == FALSE)
        {
            flag = TRUE;
            ++wc;
        }

        ++i;
    }

        printf("\nNumber of words in string [ %s ] is: [ %d ]\n",str,wc);
        return 0;}


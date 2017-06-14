#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
int main(void)

{
    string s = get_string();
    if (s!= NULL)
    {
        printf("%c",toupper(s[0]));
        for (int i=1, l=strlen(s);i<l;i++)
        {
            if (s[i] == ' ') 
            {
                printf("%c",toupper(s[i+1]));
            }
        }
    }
    printf("\n");
}
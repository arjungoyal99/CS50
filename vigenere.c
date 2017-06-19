#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if ((argc!=2) || (atoi(argv[1])!=0))
    {
        printf("print letters \n");
        return 1;
    }
    for (int k=0; k<strlen(argv[1]);k++)
    {
        if (!isalpha(argv[1][k]))
        {
            printf("Print only letters\n");
            return 1;
        }
    }
    
    printf("plaintext: ");
    string s = get_string();
    printf("ciphertext: ");
    string h= argv[1];
    for (int d=0, t=strlen(h);d<t; d++)
    {
        if (h[d]>=65 && h[d]<=90)
        {
            h[d]=h[d]+32;
        }
    }
    
    for (int i=0, j=0, l=strlen(s), m = strlen(h);i<l;i++)
    {
        
        if (isupper(s[i]))
            {
                int p = (s[i]-65)%26;
                int k = (h[j%m]-97)%26;
                int f = ((p+k)%26)+65;
                printf("%c",f);
                j++;
            }
        else if (islower(s[i]))
            {
                int p = (s[i]-97)%26;
                int k = (h[j%m]-97)%26;
                int f = ((p+k)%26)+97;
                printf("%c",f);
                j++;
            }
        else
            {
                printf("%c",s[i]);
            }
        
    }
    printf("\n");
    return 0;
}
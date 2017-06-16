#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc!=2)
    {
        printf("print one number \n");
        return 1;
    }
    int k = (atoi(argv[1]))%26;
    printf("plaintext: ");
    string s = get_string();
    printf("ciphertext: ");
    for (int i=0, l=strlen(s);i<l;i++)
    {
        if (isupper(s[i]))
        {
            printf("%c",(((s[i]+k)-65)%26)+65);
        }
        else if (islower(s[i]))
        {
            printf("%c",((((s[i]+k)-97)%26)+97));
        }
        else
        {
            printf("%c",s[i]);
        }
    }
    printf("\n");
    return 0;
}
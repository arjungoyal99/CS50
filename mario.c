#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    do
    {
        printf("Height : ");
        n=get_int();
    }
    while ((n<0) || (n>23));
    {
        for (int i=0;i<n;i++)
        {
            int j=(n-1-i);
            while (j>0)
            {
                printf(" ");
                j=j-1;
            }
            int k=(i+1);
            while (k>0)
            {
                printf("#");
                k=k-1;
            }
            printf("  ");
            int l = i+1;
            while (l>0)
            {
                printf("#");
                l=l-1;
            }
            printf("\n");
        }
    }
    
}

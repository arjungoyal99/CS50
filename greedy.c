#include <stdio.h>
#include <cs50.h>

int main(void)

{
    float f;
    do
    {
        printf("how much change is owed\n");
        f=get_float();
    }
    while (f<0);
    {
        f=f*100;
        int z=f;
        int a= z/25;
        int b=z%25;
        int c=b/10;
        int d=b%10;
        int e=d/5;
        int g=d%5;
        printf("%i\n",a+c+e+g);
    }
}
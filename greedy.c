#include <stdio.h>
#include <cs50.h>

float getchange(void);
void printcoin(float x);

int main(void)

{
    float x;
    do
    {
        x=getchange();
    }
    while (x<0);
    {
        printcoin(x);
    }
}
float getchange(void)
{
    printf("how much change is owed\n");
    float f=get_float();
    return f;
}
void printcoin(float x)
{
    x=x*100;
    int z=x;
    int a= z/25;
    int b=z%25;
    int c=b/10;
    int d=b%10;
    int e=d/5;
    int g=d%5;
    printf("%i\n",a+c+e+g); 
}

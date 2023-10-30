#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d;
    scanf("%f%f%f",&a,&b,&c);
    d=(a*pow((1+b/100),c)-a);
    printf("%.2f",d);
}
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    scanf("%f%f",&a,&b);
    c=(a-b)/a*100;
    printf("%.2f",c);
}
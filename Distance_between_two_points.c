#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,d,e;
    scanf("%f%f%f%f",&a,&b,&c,&d);
    e=sqrt((c-a)*(c-a)+(d-b)*(d-b));
    printf("%.4f",e);
}
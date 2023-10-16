#include<stdio.h>
int main()
{
    int a,b,c;
    c=a+b;
    
    scanf("%d",&c);
    if(c%2==0&&c!=2){
        printf("YES");
    }
    else{
        printf("NO");
    }
}
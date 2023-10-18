#include<stdio.h>
int main()
{
    int c;
    scanf("%d",&c);
    if(c%2==0 && c!=2){
        printf("YES");
    }
    else{
        printf("NO");
    }
}
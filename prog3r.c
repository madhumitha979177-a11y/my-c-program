#include<stdio.h>
int main(){
    int a,sum=1,digit;
    scanf("%d",&a);
    while(a!=0){
        digit=a%10;
        sum=sum*digit;
        a=a/10;   
    }
    printf("product=%d\n",sum);
}

#include<stdio.h>
int main(){
    int a,b;//a=10 b=15
    scanf("%d %d",&a,&b);
    a=a^b;//10
    b=b^a;//10
    a=b^a;//10
    printf("%d %d",a,b);
}
    
    

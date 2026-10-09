#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("\n%d",a&&b);//and
    printf("\n%d",a||b);//or
    printf("\n%d",a^b);//xor
    printf("\n%d",!1);//logical not
    printf("\n%d",a&b);//bitwise and
    printf("\n%d",a|b);//bitwise or
    printf("\n%d",~a);//bitwise not
}

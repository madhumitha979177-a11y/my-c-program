#include<stdio.h>
int main(){
    float a,b;
    scanf("%f %f",&a,&b);
    printf("final amount:%f",a);
    printf("\ntax:%f",b);
    printf("\ntax percentange:%f",a/100*b+b);
}

#include<stdio.h>
int main(){
    int a,b,c,weight;
    scanf("%d %d %d",&a,&b,&c);
    weight=(b*75)+(c*50);
    if(a>weight){
       printf("boat is stable");
    }else{
       printf("boat will drowm");
    }
}

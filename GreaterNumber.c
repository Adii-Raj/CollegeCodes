#include <stdio.h>
int main(){
    printf("Enter two numbers\n");
    int a,b;scanf("%d %d",&a,&b);
    printf("Greater number is: ");
    if(a>b){
        printf("%d",a);
    }else{
        printf("%d",b);
    }
    return 0;
}
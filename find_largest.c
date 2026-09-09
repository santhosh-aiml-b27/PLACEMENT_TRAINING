#include<stdio.h>
int main(){
    int a,b,c ;
    printf("Enter the three numbers : ");
    scanf("%d %d %d", &a,&b,&c);
    if(a>b && a>c){
        printf("a is greater than other two numbers");
    }
    else if (b>a && b>c){
        printf("b is greater than the other two numbers");
    }
    else {
        printf("c is greater than the other two numbers");
    }
    return 0;
}
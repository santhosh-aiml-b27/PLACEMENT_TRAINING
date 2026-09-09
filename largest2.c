#include<stdio.h>
int main(){
    int a,b ;
    printf("Enter the three numbers : ");
    scanf("%d %d", &a,&b);
    if(a>b){
        printf("a is greater than b's numbers");
    }
    else {
        printf("b is greater than a's numbers");
    }
    
    return 0;
}

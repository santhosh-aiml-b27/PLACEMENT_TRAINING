#include<stdio.h>
int main(){
    int a;
    printf("Enter the number : ");
    scanf("%d",&a);
    if(a<0){
        printf("Number is negative !!!");
    }
    else{
        if(a%2==0){
            printf("Number is given even.");
        }
        else{
            printf("Given number is odd.");
        }
    }
    return 0;
}
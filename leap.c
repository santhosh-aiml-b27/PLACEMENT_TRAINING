#include<stdio.h>
int main(){
    int a;
    printf("Enter the year : ");
    scanf("%d", &a);
    if(a<0){
        printf("Year not be negative");
    }
    else{
        if(a%4==0){
        printf("The given year is leap year");
    }
        else{
        printf("Not a leap year");
    }
    }
        
    return 0;
}
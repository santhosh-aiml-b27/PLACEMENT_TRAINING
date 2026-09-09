#include<stdio.h>
void Swap(int *a,int*b){
   int temp=*a;
   *a=*b;
   *b=temp;
}
int main() {
    int x = 27;
    int y = 13;
    printf("Before swapping %d %d :\n",x,y);
    Swap(&x,&y);
    printf("After swapping %d %d :\n",x,y);
    return 0;
}
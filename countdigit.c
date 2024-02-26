#include <stdio.h>
int main(){
    int a,count=1;
    printf("enter an integer:");
    scanf("%d",&a);
    while (a>10){
        a=a/10;
        count++;
    }
    printf("the number of digits in the given number are %d",count);
}

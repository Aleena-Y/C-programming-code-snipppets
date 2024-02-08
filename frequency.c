#include <stdio.h>

int main() {
    int n,i,neg=0,pos=0;
    printf("enter the number of elements:");
    scanf("%d",&n);
    int array[n];
    for (i=0;i<n;i++){
        printf("enter element %d:",i+1);
        scanf("%d",&array[i]);
    }
    for (i=0;i<n;i++){
        if (array[i]>=0){
            pos++;
        }
        else{
            neg++;
        }
    }
    printf("the number of positive elements is: %d\n",pos);
    printf("the number of negative elements is: %d",neg);
    return 0;
}
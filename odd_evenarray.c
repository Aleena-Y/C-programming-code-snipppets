#include <stdio.h>
//code to keep odd numbers followed by even numbers in an array
int main(){
    int n,i;
    printf("Enter a number:");
    scanf("%d",&n);
    int array[n];
    for (i=0;i<n;++i){
        scanf("%d",&array[i]);
    }
    printf("array before arranging:\n");
    for (i=0;i<n;++i){
        printf("%d ",array[i]);
    }
    int x,y=0,j;
    for (i=0;i<n;++i){
        if (array[i]%2==0) {
            x = array[i];
            for (j=i;j<n;++j){
                if (array[j]%2!=0){
                    array[i]=array[j];
                    array[j]=x;
                    break;
                }
            }
        }
    }
    printf("\narray after arranging:\n");
    for (i=0;i<n;++i){
        printf("%d ",array[i]);
    }
}

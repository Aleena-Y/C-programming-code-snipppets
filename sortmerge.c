#include <stdio.h>

int main() {
    int n,i,j,temp;
    printf("Enter the length of the arrays:");
    scanf("%d",&n);
    int array1[n],array2[n],array[2*n];
    printf("array 1:\n");
    for (i=0;i<n;i++){
        printf("Enter element %d:",i+1);
        scanf("%d",&array1[i]);
    }
    printf("array 2:\n");
    for (i=0;i<n;i++){
        printf("Enter element %d:",i+1);
        scanf("%d",&array2[i]);
    }
    printf("arrays before sorting:\n");
    for (i=0;i<n;i++){
        printf("%d ",array1[i]);
    }
    printf("\n");
    for (i=0;i<n;i++){
        printf("%d ",array2[i]);
    }
    printf("\n");
    for (i=0;i<n;i++){
        for (j=0;j<n-1;j++){
            if (array1[j]>array1[j+1]){
                temp = array1[j];
                array1[j] = array1[j+1];
                array1[j+1] = temp;
            }
            if (array2[j]>array2[j+1]){
                temp = array2[j];
                array2[j] = array2[j+1];
                array2[j+1] = temp;
            }
        }
    }
    printf("arrays after sorting:\n");
    for (i=0;i<n;i++){
        printf("%d ",array1[i]);
    }
    printf("\n");
    for (i=0;i<n;i++){
        printf("%d ",array2[i]);
    }
    printf("\n");
    for (i=0;i<n;i++){
        array[i]=array1[i];
    }
    for (i=n;i<2*n;i++){
        array[i]=array2[i-n];
    }
    printf("array after merging:\n");
    for (i=0;i<2*n;i++){
        printf("%d ",array[i]);
    }
    printf("\n");
    for (i=0;i<2*n;i++){
        for (j=0;j<(2*n)-1;j++){
            if (array[j]>array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    printf("arrays after sorting:\n");
    for (i=0;i<2*n;i++){
        printf("%d ",array[i]);
    }
    return 0;
}

#include <stdio.h>
#include <string.h>
int main(){
    char string[10],sentence[100];
    int n,x,i,j,temp;
    printf("enter a sentence:");
    gets(sentence);
    printf("enter a string:");
    scanf("%s",string);
    n = strlen(string);
    x = strlen(sentence);
    for (i=0;i<x;++i){
        temp = 0;
        for (j=0;j<n;++j){
            if (string[j]==sentence[i+j]){
                temp+=1;
            }
        if (temp == n){
            i+=n;
        }
        }
        putchar(sentence[i]);
    }
}

#include <stdio.h>
#include <string.h>
int main(){
    char name[20];
    int i=0,space = 0;
    printf("enter your name:");
    gets(name);
    //program to count the number of spaces
    while (name[i] !='\0'){
        if (name[i]==' '){
            space++;
        }
        i++;
    }
    //if no middle name
    if (space == 1){
        printf("%c",name[0]);printf(".");
        printf("%s",strstr(name," "));
    }
    //if there is one middle name
    if (space == 2){
        int nspace =0,i=0,key;
        printf("%c",name[0]);
        while (nspace !=2){
            if (name[i] == ' '){
                printf(". %c",name[i+1]);
                nspace++;
                key = i;
            }
            i++;
        }
        for (i=key+2;i<strlen(name);++i){
            printf("%c",name[i]);
        }
    }
    printf("%s",strstr(name,name[i+1]));
    return 0;
}

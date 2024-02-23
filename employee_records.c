// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
    struct employee{
        char name[10];
        int age;
        int empid;
        int phone;
        char address[50];
    };
    
    int n,i,d,c,a;
    char na[10];
    
    printf("Enter the number of employees:");
    scanf("%d",&n);
    struct employee records[n];
    for (i=0;i<n;++i){
        printf("Enter details of customer %d\n",i+1);
        printf("Enter name:");
        scanf("%s",records[i].name);
        printf("Enter age:");
        scanf("%d",&records[i].age);
        printf("Enter empid:");
        scanf("%d",&records[i].empid);
        printf("Enter phone number:");
        scanf("%d",&records[i].phone);
        printf("Enter address");
        scanf("%s",records[i].address);
    }
    
    printf("Do you want to search the records? Press 1 for yes and 2 for no:");
    scanf("%d",&d);
    if (d==1){
        printf("Enter the following numbers to search:\n1.name\n2.age\n3.empid");
        scanf("%d",&c);
        if (c==1){
            printf("Enter name to be searched:");
            scanf("%s",&na);
            printf("The empID of all customers with same name are:");
            for (i=0;i<n;i++){
                if (strcmp(na,records[i].name)==0){
                    printf("%d",records[i].empid);
                }
            }
        }
        if (c==2){
            printf("Enter age:");
            scanf("%d",&a);
            int count =0,max=0;
            for (i=0;i<n;i++){
                if (records[i].age>max){
                    max = records[i].age;
                }
                if (a==records[i].age){
                    count++;
                }
            }
            printf("there are %d employees who are %d years.\n",count,a);
            for (i=0;i<n;i++){
                if (records[i].age==max){
                    printf("%s %d %d %d %s",records[i].name,records[i].age,records[i].empid,records[i].phone,records[i].address);
                }
            }
        }
        if (c==3){
            printf("Enter empid:");
            scanf("%d",&a);
            for (i=0;i<n;i++){
                if (records[i].empid == a){
                    printf("%s %d %d %d %s",records[i].name,records[i].age,records[i].empid,records[i].phone,records[i].address);
                }
            }
        }
    }
    printf("the code is executed ");
    return 0;
}

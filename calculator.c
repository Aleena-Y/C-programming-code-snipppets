#include <stdio.h>

int main() {
  int n1,n2;
  char option;
  scanf("%d %c %d",&n1,&option,&n2);
  switch (option)
    {
      case '+':
          printf("%d",n1+n2);
          break;
      case '-':
          printf("%d",n1-n2);
          break;
      case '*':
          printf("%d",n1*n2);
          break;
      default:
          printf("Default case hit.");
    }
}

#include <stdio.h>
#include <string.h>

int main() {
    int i = 0, temp = 0, strlent = 0, strlentemp = 0;
    char string[50];

    printf("Enter a string: ");
    gets(string);

    while (string[i] != '\0') {
        while (string[i] != ' ' && string[i] != '\0') {
            strlent++;
            i++;
        }
        if (strlent > strlentemp) {
            strlentemp = strlent;
            temp = i - strlent;
        }
        strlent = 0;
        if (string[i] != '\0')
            i++;
    }

    printf("The longest word is: ");
    while (string[temp] != ' ' && string[temp] != '\0') {
        printf("%c", string[temp]);
        temp++;
    }
    printf("\n");

    return 0;
}

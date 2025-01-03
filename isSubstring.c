#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isSubstring(const char str1[], const char str2[]) {
    if (strstr(str1, str2) != NULL) {
        return true;
    }
    return false;
}

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    gets(str1);

    printf("Enter the second string: ");
    gets(str2);

    if (isSubstring(str1, str2)) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *file1 = fopen("file1.txt", "r");
    FILE *file2 = fopen("file2.txt", "r");
    FILE *file3 = fopen("file3.txt", "w");

    char str1[1000], str2[1000], str3[2000];
    fgets(str1, sizeof(str1), file1);
    fgets(str2, sizeof(str2), file2);

    int i = 0, j = 0, k = 0;
    while (str1[i] != '\0' && str2[j] != '\0') {
        str3[k++] = str1[i++];
        str3[k++] = str2[j++];
    }
    while (str1[i] != '\0') {
        str3[k++] = str1[i++];
    }
    while (str2[j] != '\0') {
        str3[k++] = str2[j++];
    }
    str3[k] = '\0';

    fprintf(file3, "%s", str3);
    return 0;
}
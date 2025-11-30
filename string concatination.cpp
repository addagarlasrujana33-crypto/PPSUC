#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0, j = 0;

    printf("Enter first string: ");
    gets(str1);  // Unsafe, use fgets() in real programs
    printf("Enter second string: ");
    gets(str2);

    // Move to the end of str1
    while (str1[i] != '\0') {
        i++;
    }

    // Append str2 to str1 using formula: str1[i + j] = str2[j]
    while (str2[j] != '\0') {
        str1[i + j] = str2[j];
        j++;
    }

    str1[i + j] = '\0'; // Null-terminate the result

    printf("Concatenated string: %s\n", str1);
    return 0;
}


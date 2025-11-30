#include <stdio.h>

int main() {
    char source[] = "Hello, Addagarla!";
    char destination[100]; // Make sure it's large enough

    // Copying string using a formula-like loop
    int i = 0;
    while (source[i] != '\0') {
        destination[i] = source[i]; // Copy character
        i++;                        // Move to next character
    }
    destination[i] = '\0'; // Null-terminate the destination string

    printf("Copied string: %s\n", destination);
    return 0;
}


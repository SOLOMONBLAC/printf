#include <stdio.h>

void format_number(int number, const char* specifier) {
    char result[20];  // Assuming a maximum of 20 characters for the formatted result
    
    if (specifier[0] == 'd') {
        sprintf(result, "%d", number);
    } else if (specifier[0] == 'x') {
        sprintf(result, "%x", number);
    } else if (specifier[0] == 'o') {
        sprintf(result, "%o", number);
    }
    
    // Handle flag characters
    if (strchr(specifier, '+') != NULL && number >= 0) {
        printf("+%s\n", result);
    } else if (strchr(specifier, ' ') != NULL && number >= 0) {
        printf(" %s\n", result);
    } else if (strchr(specifier, '#') != NULL) {
        if (specifier[0] == 'x') {
            printf("0x%s\n", result);
        } else if (specifier[0] == 'o') {
            printf("0o%s\n", result);
        }
    }
}

int main() {
    // Example usage
    format_number(42, "+d");    // Output: +42
    format_number(42, " d");    // Output:  42
    format_number(42, "#x");    // Output: 0x2a
    format_number(42, "#o");    // Output: 0o52
    format_number(-42, "+d");   // Output: -42
    format_number(-42, " d");   // Output: -42
    
    return 0;
}


#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

/**
 * Checks if a string is a palindrome.
 * This version is case-sensitive and considers all characters.
 */
bool is_palindrome(const char *str) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    char str[256];

    printf("--- Palindrome Checker ---\n");
    printf("Enter a string: ");
    
    if (fgets(str, sizeof(str), stdin)) {
        // Remove trailing newline character
        str[strcspn(str, "\n")] = 0;

        if (strlen(str) == 0) {
            printf("Empty string is technically a palindrome.\n");
            return 0;
        }

        if (is_palindrome(str)) {
            printf("Result: \"%s\" is a palindrome!\n", str);
        } else {
            printf("Result: \"%s\" is NOT a palindrome.\n", str);
        }
    }

    return 0;
}

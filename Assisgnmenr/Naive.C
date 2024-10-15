#include <stdio.h>
#include <string.h>

// Function to implement the Naive String Matching algorithm
void naiveStringMatching(char text[], char pattern[]) {
    int n = strlen(text);     // Length of the text
    int m = strlen(pattern);  // Length of the pattern

    // Loop through the text and check each substring
    for (int i = 0; i <= n - m; i++) {
        int j;

        // Check for a match between the pattern and the current substring
        for (j = 0; j < m; j++) {
            if (text[i + j] != pattern[j]) {
                break;
            }
        }

        // If the pattern matches the current substring, print the index
        if (j == m) {
            printf("Pattern found at index %d\n", i);
        }
    }
}

// Driver code
int main() {
    char text[100], pattern[100];

    // Input the text
    printf("Enter the text: ");
    fgets(text, sizeof(text), stdin);
    text[strlen(text) - 1] = '\0';  // Remove the newline character

    // Input the pattern
    printf("Enter the pattern to search: ");
    fgets(pattern, sizeof(pattern), stdin);
    pattern[strlen(pattern) - 1] = '\0';  // Remove the newline character

    // Call the Naive String Matching function
    naiveStringMatching(text, pattern);

    return 0;
}

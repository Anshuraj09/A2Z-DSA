#include <stdio.h>
#include <string.h>

#define PRIME 101  // A prime number

#define d 256  // Number of characters in the input alphabet

// Function to implement Rabin-Karp string matching algorithm
void rabinKarp(char text[], char pattern[], int prime) {
    int n = strlen(text);     // Length of the text
    int m = strlen(pattern);  // Length of the pattern
    int i, j;
    int p = 0;  // Hash value for pattern
    int t = 0;  // Hash value for text
    int h = 1;

    // Calculate the value of h (the value of d^(m-1))
    for (i = 0; i < m - 1; i++)
        h = (h * d) % prime;

    // Calculate the hash value of the pattern and the first window of text
    for (i = 0; i < m; i++) {
        p = (d * p + pattern[i]) % prime;
        t = (d * t + text[i]) % prime;
    }

    // Slide the pattern over the text
    for (i = 0; i <= n - m; i++) {
        // If the hash values of the current window of text and pattern match, check characters one by one
        if (p == t) {
            for (j = 0; j < m; j++) {
                if (text[i + j] != pattern[j])
                    break;
            }
            if (j == m)
                printf("Pattern found at index %d\n", i);
        }

        // Calculate hash value for the next window of text: Remove leading digit and add trailing digit
        if (i < n - m) {
            t = (d * (t - text[i] * h) + text[i + m]) % prime;

            // Convert negative hash value to positive
            if (t < 0)
                t = (t + prime);
        }
    }
}

// Function to implement the Naive String Matching algorithm for comparison
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

// Driver code to test both algorithms and compare complexities
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

    // Perform Naive String Matching
    printf("\nNaive String Matching:\n");
    naiveStringMatching(text, pattern);

    // Perform Rabin-Karp String Matching
    printf("\nRabin-Karp String Matching:\n");
    rabinKarp(text, pattern, PRIME);

    return 0;
}

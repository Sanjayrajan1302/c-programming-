#include <stdio.h>
#include <string.h>

int main() {
    char word[100],i;
    printf("Enter a word: ");
    gets(word);

    int len = strlen(word);
    int vowels = 0, consonants = 0, repeating = 0;
    int frequency[26] = {0};

    for (i = 0; i < len; i++) {
        char c = word[i];
        if (c >= 'A' && c <= 'Z') {
            c += 32; // Convert uppercase to lowercase
        }

        if (c >= 'a' && c <= 'z') {
            frequency[c - 'a']++; // Update frequency of letter
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    for (i = 0; i < 26; i++) {
        if (frequency[i] > 1) {
            printf("%c appears %d times\n", 'a' + i, frequency[i]);
            repeating++;
        }
    }

    if (repeating == 0) {
        printf("No repeating letters\n");
    }

    return 0;
}


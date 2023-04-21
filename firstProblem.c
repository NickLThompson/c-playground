#include <stdio.h>
#include <string.h>

int main() {
    char word[20];
    
    printf("Please enter a word.\n");
    scanf("%s", &word);

    printf("\nThis is the word you entered: %s", word);

    for (int i = 0; i < strlen(word); i++) {
        printf("\n%c", word[i]);
    };

    return 0;
}

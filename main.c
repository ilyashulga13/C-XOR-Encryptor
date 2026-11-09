#include <stdio.h>
#include  <string.h>

void xorCipher(char *text, char key) {
    for (int i = 0; i < strlen(text); i++)
    {
        text[i] = text[i] ^ key;
    }
    
}

int main() {
    char message[100];
    char key = 'K';

    printf("Enter a message to encrypt: ");
    fgets(message, sizeof(message), stdin);

    message[strcspn(message, "\n")] = 0;

    printf("Original text: %s\n", message);

    xorCipher(message, key);
    printf("Encrypted text: %s\n", message);

    xorCipher(message, key);
    printf("Decrypted text: %s\n", message);

    return 0;
}
// one-time pad encryption program*****

#include <stdio.h>
#include <string.h>

void encrypt(char message[], char key[])
{
    int messageLen = strlen(message), keyLen = strlen(key), i, j;
    char encryptedMessage[messageLen];

    for (i = 0; i < messageLen; ++i)
    {
        encryptedMessage[i] = ((message[i] + key[i]) % 26) + 'A';
    }
    encryptedMessage[i] = '\0';

    printf("Encrypted Message: %s", encryptedMessage);
}

int main()
{
    char message[50], key[50];

    printf("Enter a message to encrypt: ");
    fgets(message, 50, stdin);

    printf("Enter a key: ");
    fgets(key, 50, stdin);

    encrypt(message, key);

    return 0;
}

// one-time pad decryption program*****************

#include <stdio.h>
#include <string.h>

void decrypt(char encryptedMessage[], char key[])
{
    int messageLen = strlen(encryptedMessage), keyLen = strlen(key), i, j;
    char decryptedMessage[messageLen];

    for (i = 0; i < messageLen; ++i)
    {
        decryptedMessage[i] = (((encryptedMessage[i] - key[i]) + 26) % 26) + 'A';
    }
    decryptedMessage[i] = '\0';

    printf("Decrypted Message: %s", decryptedMessage);
}

int main()
{
    char encryptedMessage[50], key[50];

    printf("Enter an encrypted message: ");
    fgets(encryptedMessage, 50, stdin);

    printf("Enter a key: ");
    fgets(key, 50, stdin);

    decrypt(encryptedMessage, key);

    return 0;
}
// **********************************************
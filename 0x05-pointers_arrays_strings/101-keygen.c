#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 8

void generate_password(char *password, int length) {
    int i;
    const char characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_-+=~";

    for (i = 0; i < length; i++) {
        int random_index = rand() % (sizeof(characters) - 1);
        password[i] = characters[random_index];
    }

    password[length] = '\0';
}

int main() {
    char password[PASSWORD_LENGTH + 1];
    srand(time(NULL));

    for (int i = 0; i < 10; i++) {
        generate_password(password, PASSWORD_LENGTH);
        printf("%s\n", password);
    }

    return 0;
}


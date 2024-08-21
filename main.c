#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void debug(){
    system("cmd.exe||/bin/sh");
}

int checkPassword() {
    char password[64];

    printf(">>> ");
    scanf("%64s", password);
    return strcmp(password, "3310") == 0;
}

int main(int argc, char **argv) {
    printf("WELCOME TO THE SECURE SERVER\n");
    if (checkPassword()) {
    debug();
    }
}
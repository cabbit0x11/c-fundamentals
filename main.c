#include <stdio.h>
#include <string.h>

int main(void) {
    char buf[100];

    if (fgets(buf, sizeof buf, stdin) == NULL) {
        return 1;
    }

    for (int i = 0; buf[i] != '\0'; i++) {
        if (buf[i] == '\n') {
            buf[i] = '\0';
            break;
        }
    }
    printf("%zu\n", strlen(buf));

    return 0;
}
#include <stdlib.h>
#include <stdio.h>

enum { BUFFER_SIZE = 32 };

int main(void) {
    while (1) {
        char *text_buffer = (char *)malloc(BUFFER_SIZE);
        if (text_buffer == NULL) {
            printf("Failed to allocate memory\n");
            break;
        }
    }
    return 0;
}

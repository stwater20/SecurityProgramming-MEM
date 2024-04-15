#include <stdlib.h>
#include <stdio.h>

enum { BUFFER_SIZE = 32 };

int f(void) {
  char *text_buffer = (char *)malloc(BUFFER_SIZE);
  if (text_buffer == NULL) {
    return -1;
  }
  return 0;
}

int main(void) {
  int result = f();
  if (result == 0) {
    printf("Memory allocated and not freed\n");
  } else {
    printf("Failed to allocate memory\n");
  }
  return 0;
}

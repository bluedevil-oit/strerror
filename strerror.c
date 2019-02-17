#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char * argv[]) {
  if(argc < 2) {
    printf("Syntax: %s ERRNO - where ERRNO is the integer error number to translate.\n", argv[0]);
    exit(1);
  }
  printf("argv[1]: %s\n", argv[1]);
  printf("strerror of errno %s is: %s\n", argv[1], strerror(atoi(argv[1])));
}

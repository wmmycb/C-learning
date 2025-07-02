#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *concat(const char *s1, const char *s2) {
  char *result;
  result = malloc(strlen(s1) + strlen(s2) + 1);
  if (result == NULL) {
    printf("Error: malloc failed in concat\n");
    exit(0);
  }
  strcpy(result, s1);
  result = strcat(result, s2);
  return result;
}

int main () {
  char s1[] = "abc";
  char s2[] = "def";
  printf("concat(abc, def): %s\n", concat(s1, s2));
  return 1;
}
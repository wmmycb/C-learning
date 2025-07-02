#include <stdio.h>
#include <string.h>
int read_line(char str[], int n){
  int ch, i = 0;
  while((ch = getchar()) != '\n'){
    if (i < n) {
      str[i++];
      str[i] = '\0';
    }
  }
  return i;
};

int main() {
  char str[] = "test 123!\n";
  char str1[10];

  printf("%s\n", strcpy(str1, "abc"));
  printf("%d\n", strlen(str1));

  return 0;
}

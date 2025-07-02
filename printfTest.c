#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int showFloat(void){
  printf("%8.1e\n", 2.3);
  printf("%10.6g\n", 0.000956);
};
int main(void) {   
  printf("%6d,%4d\n", 86, 1040);
  printf("%12.5e\n", 30.253);
  printf("%.4f\n", 83.162);
  printf("%-6.2g\n", .0000009979);

  showFloat();

  int i = -0xa;
  printf("-%x\n", -i);

  int a[10];
  printf("a[1]=%d", a[1]);

  return 0;
}

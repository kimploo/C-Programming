#include <stdio.h>

int main() {
  char var = 'A';
  putchar(var); // A
  putchar(var+1); // B
  putchar('\n');
  putchar('K'); // K
  putchar('K'+2); // M
  putchar('\007'); // /a 
  
  return 0;
}

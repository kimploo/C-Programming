#include <stdio.h>

int main() {
  char s[50];
  printf("문자열 입력: \n");
  fgets(s, sizeof(s), stdin);
  printf("gets()로 입력한 문자열: %s \n", s);
  
  return 0;
}

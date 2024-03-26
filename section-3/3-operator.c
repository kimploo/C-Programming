#include <stdio.h>

int main() {
  int a, b, c;
  a = b = c = 0;
  printf("++가 앞에 붙으면 ++a 값은 더하기 후: %d \n", ++a);
  printf("이후 값은 같음: %d \n", a);
  
  printf("++가 뒤에 붙으면 b++ 값은 더하기 전: %d \n", b++);
  printf("이후는 더하고 난 값: %d \n", b);
  
  int isTwoBiggerThanOne = 2 > 1;
  printf("isTwoBiggerThanOne %d", isTwoBiggerThanOne);
  
  char string[10];
  printf("%d", string);

  return 0;
}
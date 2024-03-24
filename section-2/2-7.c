/*
오버플로우, 언더플로우 현상
*/
#include <stdio.h>

int main() {
  short int num1, num2;
  num1 = 32787 + 1;
  num2 = -32788 - 1;
  printf("num1 : %d \n", num1);
  printf("num2 : %d \n", num2);
}
#include <stdio.h>

int a, b, c;
int product(int x, int y);

void main() {
  printf("첫 번째 숫자를 입력하세요. (1~100) : ");
  scanf("%d", &a);
  printf("두 번째 숫자를 입력하세요. (1~100) : ");
  scanf("%d", &b);
  c = product(a, b);
  printf("%d * %d = %d \n", a, b, c);
}

int product(int x, int y) {
  return (x * y);
}

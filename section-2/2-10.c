/* 변수 초기화를 하지 않은 경우 날 수 있는 암묵적인 오류 (비주얼 스튜디오는 초기화를 하지 않으면 0이 아닌가봄 .. gcc는 에러가 없네) */
#include <stdio.h>

int main () {
  int i, sum;
  for (i = 1; i <= 10; i++) 
    sum = sum + i;
  printf("1부터 10까지의 합 %d \n", sum);
}
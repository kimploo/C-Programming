#include <stdio.h>
int main() {
  /* 형식 선언과 변수 선언을 동시에 한 형태 */
  enum day1 { SUN, MON, TUE, WED, THU, FRI, SAT } d1;
  /* 열거형 처음 열거자에 시작 값을 다른 숫자로 주면 그 숫자부터 시작하여 하나씩 값을 집어넣는다. */
  enum day2 { sum = 2, mon, tue, wed, thu, fri, sat } d2;
  d1 = WED;
  d2 = wed;
  
  printf("열거형 D1 저장된 값은 %d 입니다. \n", d1);
  printf("열거형 D2 저장된 값은 %d 입니다. \n", d2);
  return 0;
}
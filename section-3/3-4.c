#include <stdio.h>

int main() {
  int intA;
  long long int llintB;
  
  char charC;
  char stringS[10];

  printf("int와 llint를 입력하세요. : \n");
  scanf("%d %lld", &intA, &llintB);
  printf("intA: %d, llintB: %lld \n", intA, llintB);
  
  printf("문자를 입력하세요. : \n");
  // 엔터키도 문자에 포함되기 때문에 이를 무시하기 위해 Enter를 입력해야 함.. 
  scanf(" %c", &charC);
  printf("charC : %c \n", charC); 
  
  printf("문자열을 입력하세요. : \n");
  // 문자열은 주소를 보낼 필요가 없다.
  scanf("%9s", stringS);
  printf("stringS : %9s \n", stringS); 
  
  return 0;
}
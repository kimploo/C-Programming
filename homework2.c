// C언어 표준 입출력 라이브러리를 불러옵니다. printf() 내장 함수를 쓸 수 있습니다.
#include <stdio.h>

// homework2.c는 1 ~ 100 사이의 숫자 num을 입력하면 1부터 num까지 모든 홀수와 짝수의 합을 출력하는 프로그램입니다.
int main() {
    // 학번과 이름을 출력합니다.
    printf("학번: 202134-365427 | 이름: 김홍식 \n");
    
    // 입력값을 할당할 num, 홀수 값의 합을 저장할 odd_total_num, 짝수 값의 합을 저장할 even_total_num을 선언하고 0을 할당합니다.
    int num = 0;
    int odd_total_num = 0;
    int even_total_num = 0;

    // 입력값에 대한 안내를 출력합니다.
    printf("1 ~ 100 사이 숫자를 입력 하세요 : \n");
    // 입력값을 정수로 변환하여 num에 할당합니다.
    scanf("%d", &num);

    if (num < 100) {
      // 반복의 기준이 될 변수 i에 입력값 num을 넣습니다.
      int i = num;
      // i가 1보다 크거나 같은 경우 while의 명령 본문을 실행합니다.
      while (i >= 1) {
        if (i % 2 == 1) {
          // i를 2로 나눈 나머지가 1인 경우 i는 홀수임으로 홀수의 합 변수 odd_total_num에 i를 더하고 할당합니다. 
          odd_total_num += i;
        } else if (i % 2 == 0) {
          // i를 2로 나눈 나머지가 0인 경우 i는 짝수임으로 짝수의 합 변수 even_total_num에 i를 더하고 할당합니다.
          even_total_num += i;
        }
        // i에서 1을 뺴고 다시 할당합니다. i = i - 1 과 같습니다.
        i--;
      }
      
      // 홀수 값의 합계와 짝수 값의 합계를 출력합니다.
      printf("홀수 값의 총 합계 : %d\n", odd_total_num);
      printf("짝수 값의 총 합계 : %d\n", even_total_num);
    } else {
      // 100의 넘는 값은 연산을 하지 않습니다.
      printf("입력값이 100이 넘습니다.\n");
    }

    return 0; // 프로그램 종료
}

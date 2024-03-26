// C언어 표준 입출력 라이브러리를 불러옵니다. printf() 내장 함수를 쓸 수 있습니다.
#include <stdio.h>

// homework1.c는 1 ~ 100 사이의 숫자 jumsu를 입력하면 그 숫자에 맞는 학점을 출력하는 프로그램입니다.
int main(void) {
    // 정수형 변수 jumsu를 선언합니다.
    int jumsu;
    
    // 학번과 이름을 출력합니다.
    printf("학번: 202134-365427 | 이름: 김홍식 \n");
    // 사용자에게 점수 입력 안내 메시지 출력합니다.
    printf("0에서 100점 사이의 점수를 입력하세요.\n");
    // 사용자로부터 입력받은 점수를 변수 jumsu에 할당합니다.
    scanf("%d", &jumsu);

    // 점수(jumsu)를 10으로 나눈 결과에 따라 학점을 출력합니다.
    // jumsu를 정수 10으로 나누면 나머지를 버린 값입니다.
    // 그래서 나눈 결과값이 7이면 70점 ~ 79점 사이를 의미하기 때문에, case 7에 원하는 명령문을 적으면 됩니다.
    // 77 / 10 == 7.7과 같은 결과가 나오기를 바라는 경우, 소수간 연산으로 바꾸면 됩니다. ( double num = 77.0 / 10.0; )
    //  ex) 77 / 10 == 7
    //  ex) 99 / 10 == 9
    switch (jumsu / 10) {
        // jumsu가 100점일 때, jumsu가 90 ~ 99점일 때
        case 10:
        case 9: 
            // A학점을 출력합니다.
            printf("%d점은 A학점입니다.\n", jumsu);
            // switch문을 탈출합니다. (나머지 case를 실행하지 않습니다.)
            break;
        // jumsu가 80 ~ 89점일 때
        case 8:
            // B학점을 출력합니다.
            printf("%d점은 B학점입니다.\n", jumsu);
            // switch문을 탈출합니다. (나머지 case를 실행하지 않습니다.)
            break;
        // jumsu가 70 ~ 79점일 때
        case 7: 
            // C학점을 출력합니다.
            printf("%d점은 C학점입니다.\n", jumsu);
            // switch문을 탈출합니다. (나머지 case를 실행하지 않습니다.)
            break;
        // jumsu가 60 ~ 69점일 때
        case 6: 
             // D학점을 출력합니다.
            printf("%d점은 D학점입니다.\n", jumsu);
            break; // switch 문 탈출
        // jumsu가 59점 이하일 때, 즉 위 모든 case에 만족하지 않을 떄
        default: 
            // F학점을 출력합니다.
            printf("%d점은 F학점입니다.\n", jumsu);
    }
    return 0; // 프로그램 종료
}

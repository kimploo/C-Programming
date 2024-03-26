# 3강 입출력함수와 연산자


## 학습목표

표준입출력함수를 이해하고 사용법을 숙지한다
각종 연산자의 기능을 이해하고 여러가지 예에 적용해본다
연산자의 우선순위를 이해한다

## 표준입출력함수

| 포준출력함수   | 기능                            |
|---------------|--------------------------------|
| `printf()`    | 화면에 여러 종류의 자료를 출력 |
| `putchar()`   | 화면에 1개의 문자를 출력       |
| `puts()`      | 화면에 문자열을 출력           |

| 포준입력함수   | 기능                            |
|---------------|--------------------------------|
| `scanf()`     | 키보드로부터 여러 종류의 자료를 입력받음 |
| `getchar()`   | 키보드로부터 1개의 문자를 입력받음       |
| `gets()`      | 키보드로부터 문자열을 입력받음           |

### printf()

전달인자에 맞추어 적절한 양식으로 터미널에 입력하는 내장 함수

```c
#include <stdio.h>
int main() {
  char charA = 'A';
  int i = 10, j = 20, k = 30;

  printf("간단한 출력 프로그램 \n");
  printf("charA = %c, c의 아스키 코드값은 %d \n", c, c);
  printf("i = %d, j = %d, k = %d");

  return 0;
}
```

```bash
간단한 출력 프로그램 
charA = A, c의 아스키 코드값은 65 
i = 10, j = 20, k = 30
```

### 출력 양식 변환기호

| 형식 문자 | 변환 형식                                    | 인자의 자료형            |
|---------|--------------------------------------------|-------------------------|
| `%d`    | 부호 있는 10진 정수로 변환하여 출력            | char, short int, int    |
| `%ld`   | 부호 있는 10진 long 정수로 변환하여 출력        | long int                |
| `%lld`  | 부호 있는 10진 long long 정수로 변환하여 출력   | long long int           |
| `%u`    | 부호 없는 10진 정수로 변환하여 출력            | unsigned int            |
| `%o`    | 부호 없는 8진수로 변환하여 출력               | unsigned int            |
| `%x`, `%X` | 부호 없는 16진수로 변환하여 출력          | unsigned int            |
| `%f`    | 10진 부동소수점 형식으로 변환하여 출력         | float, double           |
| `%lf`   | 10진 부동소수점 긴 형식으로 변환하여 출력      | long double             |
| `%e`, `%E` | 지수 형태로 출력                           | float, double           |
| `%c`    | 한 문자로 변환하여 출력                       | char                    |
| `%s`    | 문자열로 변환하여 출력                        | char *                  |
| `%p`    | 포인터 주소값 출력                            | void *                  |

### 출력 양식 편집

```c
#include <stdio.h>

int main() {
  printf("|%d| \n", 123);
  printf("|%5d| \n", 123);
  printf("|%-5d| \n", 123);
  printf("|%05d| \n", 123);
  printf("|%6.1f| \n", 123.45);
  printf("|%07.2f| \n", 123.45);
  
  return 0;
}
```

```bash
|123| 
|  123| 
|123  | 
|00123| 
| 123.5| 
|0123.45| 
```

### scanf() 함수

키보드로부터 자료를 입력받을 떄 사용되는 양식 지정 입력 함수다.
scanf() 함수의 입력 양식에 "%문자"가 아닌 다른 문자는 포함시켜서는 안된다.
모든 변수 앞에는 주소를 의미하는 &를 붙여야 한다. (문자열과 배열은 그 자체가 주소의 의미를 가지고 있어 생략한다.)

```c
#include <stdio.h>

int main() {
  int intA;
  long long int llintB;

  printf("int와 llint를 입력하세요. : \n");
  scanf("%d %lld", &intA, &llintB);
  printf("intA: %d, llintB: %lld \n", intA, llintB);
  
  return 0;
}
```

```bash
int와 llint를 입력하세요. : 
11
111
intA: 11, llintB: 111 
```

### getchar()

문자 단위의 입력함수

```c
#include <stdio.h>

int main() {
  char a;
  printf("문자 하나를 입력하세요 \n");
  a = getchar();
  printf("c = %c \n", a);
  
  return 0;
}
```

### putchar()

문자 단위 출력함수

```c
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
```

```bash
AB
KM
```

### gets()

입력한 문자열을 변수가 가리키는 공간에 저장하는 문자열 입력함수
입력받는 문자열은 엔터 키를 누를 때까지의 공백을 포함한 문자열
문자열을 입력한 다음 엔터키를 누르면 null 문자 ("\0")가 입력되어 문자열의 끝을 나타낸다
gets는 deprecated 되어 fgets가 권장된다고 함

```c
#include <stdio.h>

int main() {
  char s[50];
  printf("문자열 입력: \n");
  fgets(s, sizeof(s), stdin); // gets(s)
  printf("gets()로 입력한 문자열: %s \n", s);
  
  return 0;
}

```

```bash
문자열 입력: 
hello world 안녕하세요 김홍식입니다
gets()로 입력한 문자열: hello world 안녕하세요 김홍식입니다

```

### puts()

변수가 가리키는 문자열을 화면에 출력하는 문자열 출력함수
문자열 출력 후 자동으로 줄이 바뀐다.
문자열의 끝인 null문자 (`\0`)을 만나면 `\n`으로 바뀌어 출력하기 떄문

```c
#include <stdio.h>

int main() {
  char s1[ ] = "Computer";
  char s2[ ] = "Science";
  puts(s1);
  puts(s2);
  printf("%s", s1);
  printf("%s", s2);

  return 0
}
```

```bash
Computer
Science
ComputerScience%    
```

## 연산자

자바스크립트와 다른 점만 정리

- `++`, `--` 순서에 따라 다르게 작동하는 것 다시 확인
- `true`, `false`를 대신하는 `1`, `0`
- 크기 확인하는 `sizeof()`, 형변환 `case`, 주소 연산자 `&`, 값? 연산자 `*` 정도만 숙지

```c

```

```bash

```
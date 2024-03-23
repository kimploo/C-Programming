# GCC로 C 개발하기

## 주요 개념

- 코딩: `.c` 확장자로 시작하는 파일에 C 코드를 작성한다.
- 컴파일: 기계어가 읽을 수 있는 목적 파일(object file)을 생성한다. 
  - 목적 파일은 C 코드를 컴퓨터가 이해할 수 있는 기계어로 변경한 코드다.
- 링킹: 목적 파일을 라이브러리와 연결하여 실행 파일로 변환하는 과정

## GCC로 컴파일

```bash
gcc filename.c –o filename
```

## GCC로 실행

```bash
./filename
```

## Reference

https://www.geeksforgeeks.org/compiling-a-c-program-behind-the-scenes/
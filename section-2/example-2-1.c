#include <stdio.h>
int main() {
  printf("-- char 자료형 --\n");
  printf("char 자료형 크기: %d byte\n", sizeof(char));
  printf("signed char 자료형 크기: %d byte\n", sizeof(signed char));
  printf("unsigned char 자료형 크기: %d byte\n", sizeof(unsigned char));
  printf("\n");
  
  printf("-- short 자료형 --\n");
  printf("short 자료형 크기: %d byte\n", sizeof(short));
  printf("short int 자료형 크기: %d byte\n", sizeof(short int));
  printf("signed short 자료형 크기: %d byte\n", sizeof(signed short));
  printf("signed short int 자료형 크기: %d byte\n", sizeof(signed short int));
  printf("unsigned short 자료형 크기: %d byte\n", sizeof(unsigned short));
  printf("unsigned short int 자료형 크기: %d byte\n", sizeof(unsigned short int));
  
  printf("-- int 자료형 --\n");
  printf("int 자료형 크기: %d byte\n", sizeof(int));
  printf("signed int 자료형 크기: %d byte\n", sizeof(signed int));
  printf("unsigned 자료형 크기: %d byte\n", sizeof(unsigned));
  printf("unsigned int 자료형 크기: %d byte\n", sizeof(unsigned int));
  
  printf("-- long 자료형 --\n");
  printf("long 자료형 크기: %lu byte\n", sizeof(long));
  printf("signed long 자료형 크기: %lu byte\n", sizeof(signed long));
  printf("unsigned 자료형 크기: %lu byte\n", sizeof(unsigned));
  printf("unsigned int 자료형 크기: %lu byte\n", sizeof(unsigned int));
  printf("long long 자료형 크기: %lu byte\n", sizeof(long long));
  printf("long long int 자료형 크기: %lu byte\n", sizeof(long long int));
  printf("signed long long 자료형 크기: %lu byte\n", sizeof(signed long long));
  printf("signed long long int 자료형 크기: %lu byte\n", sizeof(signed long long int));
  printf("unsigned long long 자료형 크기: %lu byte\n", sizeof(unsigned long long));
  printf("unsigned long long int 자료형 크기: %lu byte\n", sizeof(unsigned long long int));
  
  printf("float 자료형 크기: %lu byte\n", sizeof(float));
  printf("double 자료형 크기: %lu byte\n", sizeof(double));
  printf("long double 자료형 크기: %lu byte\n", sizeof(long double));
  return 0;
}




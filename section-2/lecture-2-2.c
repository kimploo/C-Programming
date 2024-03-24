#include <stdio.h>
#include <limits.h>

int main() {
  char char_min = CHAR_MIN;
  char char_max = CHAR_MAX;
  short short_min = SHRT_MIN;
  short short_max = SHRT_MAX;
  int int_min = INT_MIN;
  int int_max = INT_MAX;
  long long_min = LONG_MIN;
  long long_max = LONG_MAX;
  long long llong_min= LLONG_MIN;
  long long llong_max = LLONG_MAX;

  printf("char 자료형 범위 : %d ~ %d \n", char_min, char_max);
  printf("short 자료형 범위 : %d ~ %d \n", short_min, short_max);
  printf("int 자료형 범위 : %d ~ %d \n", int_min, int_max);
  printf("long 자료형 범위 : %ld ~ %ld \n", long_min, long_max);
  printf("long long 자료형 범위 : %lld ~ %lld \n", llong_min, llong_max);
  
  return 0;
}

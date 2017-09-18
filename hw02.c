#include <stdio.h>

int main(){
  //Problem #1 - Multiples of 3 & 5
  int num1 = 1;
  int sum = 0;
  for(; num1 < 1000; num1++){
    if(num1%3 == 0 || num1 % 5 == 0){
      sum += num1;
    }
  }
  printf("sum = %d\n", sum);

  //Problem #5 - Smallest Multiple
  int num5 = 1;
  int solved = 0;
  int divisor = 1;
  int divisible = 1;
  while(solved == 0){
    for(divisor = 1, divisible = 1; divisor <= 20 && divisible == 1; divisor++){
      if(num5%divisor != 0){
	divisible = 0;
      }
    }
    if(divisor == 21){
      solved = 1;
    }else{
      num5++;
    }
  }
  printf("LCM of numbers 1 to 20 = %d\n", num5);

  return 0;
}

#include <stdio.h>

double add(double a, double b){
  return a + b;
}

double getmax(double a, double b){
  return (a > b) ? a : b;
}


int main (void){
  Int a = 10 ;
  Int b = 20 ;

  printf("sum = %d \n", add(a,b));
  printf("max = %d \n", getmax(a,b));
return 0;
}
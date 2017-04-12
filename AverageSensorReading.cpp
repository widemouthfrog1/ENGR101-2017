#include <stdio.h>
#include <time.h>
#include "E101.h"
int main(){
  init();
  int adc_reading;
  int total = 0;
  for (int i = 0; i<5; i=i+1){
    adc_reading = read_analog(0);
    total = total + adc_reading;
    sleep1(0,500000);
    sleep1(0,500000);
  }
  printf("%d\n",total/5);
  sleep1(0,500000);
return 0;}

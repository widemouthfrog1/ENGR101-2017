#include <stdio.h>
#include <time.h>
#include "E101.h"
int main(){
  init();
  int adc_reading0;
  int adc_reading2;
  int adc_reading4;
  adc_reading0 = read_analog(0);
  sleep1(0,500000);
  sleep1(0,500000);
  adc_reading2 = read_analog(2);
  sleep1(0,500000);
  sleep1(0,500000);
  adc_reading4 = read_analog(3);
  sleep1(0,500000);
  sleep1(0,500000);
  printf("%d\n",adc_reading0);
  printf("%d\n",adc_reading2);
  printf("%d\n",adc_reading4);
  sleep1(0,500000);
return 0;
}

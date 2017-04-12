#include <stdio.h>
#include <time.h>
#include "E101.h"
int main(){
  init();
  int adc_reading;
  int adc_biggestReading = 0;
  int adc_smallestReading = 10000;
  for (int i = 0; i<1000; i=i+1){
    adc_reading = read_analog(i);
  }
  printf("curr. reading is %d\n",adc_reading);
  if (adc_reading > adc_biggestReading){
    adc_biggestReading = adc_reading;
  }
  if (adc_reading < adc_smallestReading){
    adc_smallestReading = adc_reading;
  }
  //sleep1(0,500000);
  //sleep1(0,500000);
  printf("Biggest: %d\n",adc_biggestReading);
  printf("Smallest: %d\n",adc_smallestReading);
  sleep1(0,500000);
return 0;
}

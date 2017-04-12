#include <stdio.h>
#include <time.h>
#include "E101.h"
int main(){
  init();
  int adc_reading;
  int adc_biggestReading = 0;
  for (int i = 0; i<10; i=i+1){
    adc_reading = read_analog(0);
    if (adc_reading > adc_biggestReading){
      adc_biggestReading = adc_reading;
    }
    sleep1(0,500000);
    sleep1(0,500000);
  }
  printf("%d\n",adc_biggestReading);
  sleep1(0,500000);
return 0;
}

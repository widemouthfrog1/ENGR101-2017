#include <stdio.h>
#include <time.h>
#include "E101.h"

int main(){
  init();
  set_motor(1,254);
  set_motor(2,-254);
  sleep1(0,500000);
  set_motor(1,0);
  set_motor(2,0);
return 0;
}

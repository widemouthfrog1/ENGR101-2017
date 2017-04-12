int turn_left(int duration){
  set_motor(1,128);
  set_motor(2,128);
  sleep(0, duration);
  set_motor(1,0);
  set_motor(2,0);
return 0;
}

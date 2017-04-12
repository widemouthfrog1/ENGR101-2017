#include  <stdio.h>
int  main (){
  unsigned  int A = 60;
  unsigned  int B = 13;
  //  AND  is A & B
  //  OR is A | B - this  is  the  `pipe ' symbol
  //  XOR  is A ^ B
  // A << 2  indicates  a  bitshift  of A 2  places  to  the  left
  // B >> 1  indicates  a  bitshift  of B 1  places  to  the  right
  // For  example
  printf("%d\n", A & B);
  printf("%d\n", A|B);
  printf("%d\n", A^B);
return  0;
}

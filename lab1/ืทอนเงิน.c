#include <stdio.h>

int main()
{
  int amount = 98;
   int o,f,to,fo;
    fo = amount/50;
    to = (amount%50)/20;
    f = ((amount%50)%20)/5;
    o = ((amount%50)%20)%5; 


  printf("1: %d\n",o);
  printf("5: %d\n",f);
  printf("20: %d\n",to);
  printf("50: %d\n",fo);
}
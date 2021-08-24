#include <stdio.h>
#include <stdlib.h>

// กำหนดค่าคงที่ PI มีค่า 22.0/7
#define PI 22.0/7

void main()
{
    float radius = 1.5;
    float v;
    v = (radius*radius*radius*4/3*22/7);
    printf("The volume of this sphere is %.2f", v);
}
   
  
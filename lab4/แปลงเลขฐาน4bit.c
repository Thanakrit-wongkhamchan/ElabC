#include <stdio.h>
#include <stdlib.h>
int main()
{   
    int one,two,tree,four,inpud;
    char inpud_str[5];
    fgets(inpud_str, 5,stdin);
    inpud = atoi(inpud_str);


    four = inpud % 2;
    tree = (inpud /2)%2  ;
    two = (inpud/4)%2;
    one = (inpud/8)%2;
    printf("Binary number of %d is %d%d%d%d.",inpud,one,two,tree,four);



}
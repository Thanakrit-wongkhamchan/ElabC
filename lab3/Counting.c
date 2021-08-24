#include <stdio.h>
#include <stdlib.h>
int main()
{
    int inpud;
    char inpud_str[10];
    gets(inpud_str);

    inpud = atoi(inpud_str);



    for(inpud; inpud >= 0; inpud--){
        printf("%d\n",inpud);
    }

}
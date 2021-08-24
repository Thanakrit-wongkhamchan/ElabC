#include<stdio.h>
void main()
{
    float preGrade = 1.75;
    int preCredit = 21;
    int credit = 18;
    float requiredGrade = 2.00;
    float out, cg;
    cg = preCredit*preGrade;
    out = ((requiredGrade*(preCredit+credit))-cg)/credit;

    printf("The GPA this semester should be %.2f",out);
}
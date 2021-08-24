#include<stdio.h>
void main() {
   int computer_time = 785;  // ในโปรแกรมตรวจอาจเปลี่ยนค่าของตัวแปรนี้ แต่นิสิตไม่ต้องเปลี่ยนค่าของตัวแปรนี้
   int d,h,m;
    d = computer_time/1440;
    h = (computer_time%1440)/60;
    m = (computer_time%1440%60);

    printf("It is %d days %d hours and %d minutes." , d , h , m );
}
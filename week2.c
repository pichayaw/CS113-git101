week2 Control Flow

1.ปิดท้ายด้วย semi-colon ";"

2.If-Else มี 2 เงื่อนไข
 if(expression)
    statement1
 else
    statement2

3.Else-If มีมากกว่า 2 เงื่อนไข
 if(expression1)
    statement1
 else if(expression2)
    statement2
 else
    statement3

4.Switch ทำจนกว่าจะเจอคำว่า break แล้วออกจาก switch
 switch (expression)
 {
     case const-expr:
        statements
     case const-expr:
        statements
     default:
        statements
 }

 5.Loop - While และ For
  while(expression)
    statement

 for(x; y; z)
    statement

6.Loops-Do-While
ทำเงื่อนไขตั้งแต่ครั้งแรก และเข้าในลูป

ึ7.Break และ Continue
break ทำให้หลุดจากโปรแกรม
continue ทำให้เกิดการวนซ้ำในรอบใหม่

#include <stdio.h>
#include <stdlib.h>
char number[5];
int main(){
    fgets(number, 5, stdin);
    int i = atoi(number);
    //int count = 0;
    //while (count < i) //ใช้กับลูปที่ไม่รู้จำนวนรอบ 
    //{
        //printf("count = %d\n",count);
        //count++ ;
    //}
    //for (int j = 0; j < i ; j++) //เริ่มค่า j=0 สิ้นสุดจนกว่า j น้อยกว่า i และ j เพิ่มค่าขึ้นเรื่อยๆ
    //{
        //printf("j = %d\n",j);
    //}   
}
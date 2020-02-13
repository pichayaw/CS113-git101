week4 Functions and Program Structure

ฟังก์ชัน คือส่วนของโปรแกรมที่ถูกเขียนขึ้นเพื่อทำหน้าที่เฉพาะของมัน 
Function name
-scanf
-printf
-getch
-sqrt
-floor
-strlen

การประกาศฟังก์ชัน
-ประเภทของฟังก์ชันที่ต้องการประกาศ (int, float, char)

ค่า return ของฟังก์ชัน
-มีการส่งค่ากลับ โดยการใช้คำสั่ง return โดยในการประกาศฟังก์ชัน 
 ประเภทของฟังก์ชันบ่งบอกถึงประเภทค่าที่ต้องการส่งกลับ

#include <stdio.h>
int addTen(int x) //รับ parameter เป็นจำนวนเต็มตัวแปร x
{
    x = x + 10;
    return x; //return  ค่า x กลับเป็นจำนวนเต็มจาก data type ที่กำหนดหน้าฟังก์ชัน
}
int addTwenty(); //ประกาศฟังก์ชั่น
int x = 1000;
int main()
{
    int x = 50; //กำหนดค่าเริ่มต้นให้ตัวแปร local
    int y = addTen(x); //เรียกฟังก์ชัน addTen
    printf("x in main = %d\n",x);
    printf("addTen in main = %d\n",y);
    printf("addTwenty in main = %d\n",addTwenty());
    printf("x in addTwenty = %d\n",x);
}
int addTwenty (){
    printf("x in addTwenty = %d\n",x);
    x = x +20;
    return x;
}
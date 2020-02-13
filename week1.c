week1 Types, Operators, and Expressions

1.การใช้งานตัวแปร
1)ชื่อตัวแปร
- เป็นตัวอักษร และตัวเลข ตัวแรกต้องเป็นตัวอักษร
- "_" เป็นอักขระ
- ห้ามใช้ตัวแปรซ้ำกับศัพท์ในภาษาซี ( if, else, int, float ฯ)
2)ตั้งชื่อตัวแปร
- อ่านแล้วเข้าใจง่าย
- ใช้ "_" คั่นในชื่อ
- ใช้ตัวแรกเป็นตัวพิมพ์ใหญ่ ที่เหลือเป็นตัวเล็ก

2.ประเภทข้อมูลขนาด
- char (1 bytes)
- int (4 bytes)
- float (4 bytes)
- double (8 bytes)
- unsigned ใช้เก็บเฉพาะค่าบวก
- sizeof ไว้นับ
#include <stdio.h>
int main()
{
    char c;
    int i;
    float f;
    double d;
    printf("size of c = %d\n", sizeof(c));
    printf("size of i = %d\n", sizeof(i));
    printf("size of f = %d\n", sizeof(f));
    printf("size of c = %d\n", sizeof(c));
}

3.ค่าคงที่
- int จำนวนเต็ม
- float จำนวนจริง
- %o เลขฐาน8
- %x เลขฐาน16

4.ประกาศจัวแปร
- ตัวแปรในภาษาซี ต้องประกาศก่อนใช้งาน
1)printf(),puts()
- %d หรือ %i จำนวนเต็ม
- %f จำนวนจริง
- %.2f ทศนิยม2ตำแหน่ง
- %03d 3 ตำแหน่ง มี 0 ในนั้น
- %c character
- %s string
2)character Input and Output
-getchar()
-putchar()

5.Operators
-float%int ไม่ได้
-int%float ไม่ได้
-float%float ไม่ได้
-% ใช้สำหรับ int เท่านั้น
-int+float = float
-int/int = int

6.Relational Operators และ Logical Operators
- >
- >=
- <
- <=
- ==
- !=
- &&
- ||
- !

7.Increment and Decrement Operators
- n++ ส่งค่า n ก่อนจะบวก
- ++n ส่งค่า n ที่บวกแล้ว

#include <stdio.h>
#include <stdlib.h>
char number[20];
int main()
{
    printf("Enter name: ");
    //get(name); //รับตัวอักษร ดึงตั้งแต่คำแรกจนถึง \n (get string)
    //fgets(name, 5, stdin); //ใช้ 5 array
    //getchar(chr) //รับตัวอักษรตัวเดียว
    //printf("%s",name);
    //int i = atoi(number); //atoi = c , atof = array to float
    //long l = atol(); //atol คือ  array to long
    //double d = atof();
    //puts(number); //puts = put string
    //putchar(100);
    //putchar('u');
    //ค่า false นอกนั้น true 
    
    int found = 0;
    //float isExist = 0.0;
    //char isOnline = '\0';
    
    fgets(number,5,stdin);
    int i = i atoi(number);
    if (i > 0 && i <= 10) //&& = และ
    {
        printf("if = %d\n", i > 0 && i <= 10);
    }else if (i <= 20 || !found){
        printf("else\n");
    }

}
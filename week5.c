week5 Array and Pointer

int A[10];
A คือ array เก็บตำแหน่งเริ่มต้นของ array
- เริ่มจากตำแหน่งที่ 0
- pass by value ส่งค่าไปยังฟังก์ชัน ใช้งานได้เลย
- pass by refference ส่งค่าไปยังตำแหน่งฟังก์ชัน
array 2 มิติ
- เป็นตารางแบบ 2 ชั้น
- A[2][3]

pointer เป็นตัวแปรที่ใช้เก็บค่าตำแหน่งหรือ address ในหน่วยความจำ เริ่มจาก 0
- ใช้ * หน้าตัวที่ให้เป็น pointer
- & ใช้หาค่าตำแหน่งในหน่วยความจำของ operand

#include <stdio.h>
int main(){
    int x = 100; //10 number %d
    int q = 0144; //ox number %o
    int w = 0x64; //16 %h
    // printf("x = %d\n" , x);
    // printf("reference of x = %lu\n" , &x); //address ของ x
    // printf("reference of x = %p\n", &x); //%p ฐาน 16 %x, ฐาน 8 %o 

    // int number[] = {1 ,2 , 3, 4 ,5 ,6}; //array กำหนดขนาด
    // int number[100]; 
    // int number[100] = {1,2,3,4,5,6};
    // number[1000] = 200;
    // printf("index 1 = %d" , number[1]);
    // printf("reference of &number[1] = %p\n", &number[1]); //เก็บ address
    // printf("reference of &number[0] = %p\n", &number[0]);   
    // printf("reference of number = %p\n", &number + 1);  //เก็บใน index[0] 
    // printf("reference of number = %p\n", &number + 1);  //เพิ่มที่เก็บ
    // printf("index 1 = %d" , number[1000]); 
    // int number[] = {1 ,2 , 3, 4 ,5 ,6};
    // int *ptr = &x;  //ชี้pointer ที่เป็น address, pointer ต้องมี "*"
    // int *arrPtr;
    // arrPtr = number; //ใช้ = เพื่อเพื่อบอกว่าเป็นตัวแปรเดียวกัน
    // arrPtr += 3;
    // *arrPtr += 3; //ใช้ * เพื่อใช้ค่า address เดียวกัน
    // printf("arrPtr = %p , *arrPtr = %d" , arrPtr , *arrPtr);

    // int number[] = {1 ,2 , 3, 4 ,5 ,6};
    // for (int *ptr = number; ptr < &number[4]; ptr++)
    // {
    //     printf("[%p] = %d\n" , ptr , *ptr);
    // }
    // printf("\n");
    // int *ptr2 = number;
    // for(int i = 0; i< 5; i++){
    //     printf("[%p] = %d\n" , ptr2 + i , *(ptr2 + i));
    // }
    
    // char input[100];
    // int count = 0;
    // char c;
    // while ((c = getchar()) != '\n') //ปิด\0เอง char arr
    // {
    //     input[count] = c;
    //     ++count;
    // }
    // input[count] = '\0';
    // for (char *cPtr = input; *cPtr != '\0' ;cPtr++)
    // {
    //     printf("%c\n" , *cPtr);
    // }

    char c;
    int i;
    char s[100];
    scanf("%d %c %s", &i, &c, s); //&s คือ address pointer s
    printf("%d  %c  %s", i, c, s);
    
}
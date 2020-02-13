week6 Pointers & Dynamic memory allocation

segmentation fault
  การพยายามเข้าถึงหน่วยความจำที่เราไม่ได้จองไว้หรือหน่วยความจำที่นอกเหนือจากตัวเเปรที่เราประกาศไว้ มีโอกาสที่จะถูกระบบปฏิบัติการจะหยุด
  การทำงานของโปรเเกรม

#include <stdio.h>

// void addTen(int number[][n]], int n) //คอลลัมต้องใส่ค่าด้วย
void addTen(int *number, int n){
    for(int i = 0; i< n; i++){
        // printf("[%d] = %d" , i, number[i]);
        printf("addTen [%p] = %d\n" , number + i, *(number + i));
        *(number + i) += 10;
    }
}

int addTwenty(int *n){
    *n += 20;
    return 1; 
}

int main(){
    int number[] = {1,2,3,4,5};
    int n = 5;
    addTen(&number[0], n);
    for (int i = 0; i < n; i++)
    {
        // printf("[%d] = %d" , i, number[i]);
        printf("main [%p] = %d\n" , number + i, *(number + i));
    }
    addTwenty(&n); //ส่งค่า address ไปฟังก์ชัน Twenty
    addTwenty(&number[4]);
    printf("n = %d\n", n);
    printf("number[4] = %d", number[4]);
}
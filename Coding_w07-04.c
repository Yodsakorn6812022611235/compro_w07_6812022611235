#include <stdio.h>

int main() {
    int member;
    printf("Enter membership level (1-4): ");   // ขอให้ผู้ใช้กรอกระดับสมาชิก (1-4)
    scanf("%d", &member);           // รับค่าที่กรอกมาเก็บในตัวแปร member

    if (member == 1) {              // ตรวจสอบระดับสมาชิก
        printf("Silver Member: 5%% discount\n");                     // Silver: ส่วนลด 5%
    } else if (member == 2) {
        printf("Gold Member: 10%% discount + Reward points\n");      // Gold: ส่วนลด 10% + คะแนนสะสม
    } else if (member == 3) {
        printf("Platinum Member: 15%% discount + Reward points + Birthday gift\n");      // Platinum: ส่วนลด 15% + คะแนนสะสม + ของขวัญวันเกิด
    } else if (member == 4) {
        printf("Diamond Member: 20%% discount + Reward points + Birthday gift + VIP events\n");  // Diamond: ส่วนลด 20% + คะแนนสะสม + ของขวัญวันเกิด + กิจกรรมพิเศษ VIP
    } else {
        printf("Invalid membership level\n");     // ถ้ากรอกนอกเหนือ 1-4 จะแสดงว่าไม่ถูกต้อง
    }

    return 0;
}
#include <stdio.h>

int main() {
    float score;

    // รับค่าคะแนนสอบ midterm
    printf("กรอกคะแนนสอบ midterm: ");
    scanf("%f", &score);

    // ตรวจสอบเงื่อนไข ถ้าคะแนน >= 50 จะได้คะแนนเพิ่ม 5%
    if (score >= 50) {
        score = score + (score * 0.05);
    }

    printf("คะแนนรวม = %.2f\n", score);  // แสดงผลคะแนนรวม

    printf("End of evaluation\n");    // แสดงข้อความสิ้นสุดการประเมิน

    return 0;
}
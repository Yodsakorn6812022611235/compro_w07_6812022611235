#include <stdio.h>

int main() {
    int x, y;

    printf("กรอกค่า x: ");            // รับค่าตัวเลขจากผู้ใช้แป้นพิมพ์
    scanf("%d", &x);
    printf("กรอกค่า y: ");
    scanf("%d", &y);

    if (x > y) {                     // เปรียบเทียบค่ามากกว่าน้อยกว่า
        printf("x มากกว่า y\n");
    } else if (x < y) {
        printf("x น้อยกว่า y\n");      
    } else {
        printf("x เท่ากับ y\n");
    }

    return 0;
}
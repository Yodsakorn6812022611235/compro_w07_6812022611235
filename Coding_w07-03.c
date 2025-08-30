#include <stdio.h>  

int main() {
    int level;  // ประกาศตัวแปร level ไว้เก็บค่าที่ผู้ใช้กรอก

    printf("Enter level: ");  // แสดงข้อความให้ผู้ใช้ป้อนค่า
    scanf("%d", &level);      // รับค่าจำนวนเต็มจากผู้ใช้แล้วเก็บลงตัวแปร level

    if (level <= 0) {  
        printf("Level below 1 is not allowed\n");  // ถ้า level น้อยกว่าหรือเท่ากับ 0 ให้แสดงว่าไม่อนุญาต
    } else if (level > 4) {  
        printf("Level above 4 is not allowed\n");  // ถ้า level มากกว่า 4 ให้แสดงว่าไม่อนุญาต
    } else {
        // ถ้า level อยู่ในช่วง 1–4 จะเข้ามาทำงานใน switch
        switch (level) {
            case 1:  
                printf("Beginner\n");  // ถ้า level = 1 แสดง Beginner
                break;                 // จบ case 1
            case 2:  
                printf("Intermediate\n");  // ถ้า level = 2 แสดง Intermediate
                break;                     // จบ case 2
            case 3:  
                printf("Advanced\n");  // ถ้า level = 3 แสดง Advanced
                break;                 // จบ case 3
            case 4:  
                printf("Expert\n");  // ถ้า level = 4 แสดง Expert
                break;               // จบ case 4
            default:  
                printf("Invalid level\n");  // กันพลาด ถ้าไม่ตรง case ใดๆ
        }
    }

    return 0;  
}

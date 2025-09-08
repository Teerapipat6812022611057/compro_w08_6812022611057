#include <stdio.h>

int main() {
    int start, stop;

    // รับค่าเริ่มต้นและค่าหยุด
    printf("Enter start number: ");
    scanf("%d", &start);

    printf("Enter stop number: ");
    scanf("%d", &stop);

    // แสดงข้อความ
    printf("Start number is %d and stop number is %d\n", start, stop);

    // แสดงลำดับตัวเลข
    printf("Sequence from start to stop:");
    for(int i = start; i <= stop; i++) {
        printf(" %d", i);
    }
    printf("\n");

    // แสดงข้อความปิดท้าย
    printf("Thank you.\n");

    return 0;
}


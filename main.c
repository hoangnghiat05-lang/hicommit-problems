#include <stdio.h>

int main() {
    int t;
    
    // Đọc giá trị t (nếu hệ thống không yêu cầu printf hướng dẫn thì chỉ cần scanf)
    scanf("%d", &t);

    // Phân loại chuẩn xác theo biên độ
    if (t < 15) {
        printf("LANH\n");
    } 
    else if (t >= 15 && t < 25) {
        printf("MAT\n");
    } 
    else if (t >= 25 && t < 35) {
        printf("NONG\n");
    } 
    else {
        // Tương ứng với t >= 35
        printf("RAT_NONG\n");
    }

    return 0;
}
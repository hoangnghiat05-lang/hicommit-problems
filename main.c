#include <stdio.h>

int main() {
    int t;
    
    // Đọc nhiệt độ t
    if (scanf("%d", &t) != 1) return 0;

    // Phân loại với các mốc biên chuẩn
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
        // Các trường hợp từ 35 trở lên (t >= 35)
        printf("RAT_NONG\n");
    }

    return 0;
}
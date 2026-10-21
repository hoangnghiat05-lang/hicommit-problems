#include <stdio.h>

int main() {
    int t;
    
    // Chỉ đọc giá trị t, tuyệt đối không in câu thông báo rườm rà
    if (scanf("%d", &t) != 1) return 0;

    // Phân loại theo mốc chuẩn
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
#include <stdio.h>

int main() {
    double khoang_cach;
    double gia_tri_don_hang;
    
    // Nhập khoảng cách và giá trị đơn hàng
    if (scanf("%lf %lf", &khoang_cach, &gia_tri_don_hang) != 2) {
        return 0;
    }
    
    // 1. Kiểm tra dữ liệu không hợp lệ
    if (khoang_cach <= 0 || gia_tri_don_hang < 0) {
        printf("Khong hop le\n");
    } 
    // 2. Miễn phí giao hàng (đơn hàng >= 500000 và khoảng cách <= 15 km)
    else if (gia_tri_don_hang >= 500000 && khoang_cach <= 15) {
        printf("0\n");
    } 
    // 3. Các trường hợp còn lại dựa theo khoảng cách
    else {
        if (khoang_cach <= 5) {
            printf("15000\n");
        } else if (khoang_cach <= 15) {
            printf("25000\n");
        } else {
            printf("40000\n");
        }
    }

    return 0;
}
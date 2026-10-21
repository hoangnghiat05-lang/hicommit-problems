#include <stdio.h>

int main() {
    int a, b, c, max; 
    
    // Đọc 3 số trực tiếp (nếu hệ thống không yêu cầu printf hướng dẫn)
    scanf("%d %d %d", &a, &b, &c);
    
    max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    
    // Chỉ in ra đúng con số lớn nhất theo chuẩn format thông thường
    printf("%d\n", max);
  
    return 0;
}
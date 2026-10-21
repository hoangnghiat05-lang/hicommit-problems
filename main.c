#include <stdio.h>

int main() {
    int a, b, c, max; 
    
    // Nhập số nguyên từ bàn phím
    printf("nhap so thu nhat: ");
    scanf("%d", &a);
    printf("nhap so thu hai: ");
    scanf("%d", &b);
    printf("nhap so thu ba: ");
    scanf("%d", &c);
    
    // Giả sử giá trị a là số lớn nhất
    max = a;
    
    // So sánh max với b
    if (b > max) {
        max = b;
    }
    
    // So sánh max với c
    if (c > max) {
        max = c;
    }
    
    // In kết quả lớn nhất (đã thêm %d)
    printf("so lon nhat trong ba so la: %d\n", max);
  
    return 0;
}
#include <stdio.h>

  int main() {
    
    int a,b,c,max; 
    
    // nhap so nguyen tu ban phim
    printf("nhap so thu nhat:");
    scanf("%d",&a);
    printf("nhap so thu hai:");
    scanf("%d",&b);
    printf("nhap so thu ba:");
    scanf("%d",&c);
    //gia su gia tri a la so lon nhat
    max=a;
    // so sanh max voi b
      if (b>max) {
    max=b;
    }
    // so sanh max voi c
      if (c>max) {
    max=c;
    }
    //In ket qua lon nhat
    printf(" so lon nhat trong ba so la:",max);
  
   
      return 0;
  }
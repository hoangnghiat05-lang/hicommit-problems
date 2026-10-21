#include <stdio.h>

  int main() {
    
    int a,b,c,max; 
    
    // nhap so nguyen tu ban phim
    printf("nhap so nguyen thu nhat:",a);
    scanf("%d",&a);
    printf("nhap so nguyen thu hai:",b);
    scanf("%d",&b);
    printf("nhap so nguyen thu ba:",c);
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
    printf("\n so lon nhat trong ba so la:%d\n",max);
  
   
      return 0;
  }
#include <stdio.h>

  int main() {
    int a,b,c,max; 
    
    printf("nhap so nguyen thu nhat:");
    scanf("%d",&a);
    printf("nhap so nguyen thu hai:");
    scanf("%d",&b);
    printf("nhap so nguyen thu ba:");
    scanf("%d",c);
  
    max=a;
      if (b>max){
    max=b;
    }
      if (c>max){
    max=c;
    }
    printf("\n so lon nhat trong ba so la:%d\n",max);
  
   
      return 0;
  }
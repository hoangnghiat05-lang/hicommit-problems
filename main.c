#include <stdio.h>

  int main()
  {
    int n;
    // nhap so nguyen n
   if (scanf("%d",&n)==1)
    // kiem tra n chia het cho 2
    if  (n%2==0){
      printf("CHAN\n",n);
    }
    else{
      printf("LE\n",n);
    }
  


  return 0;
}
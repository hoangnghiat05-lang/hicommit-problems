#include <stdio.h>

  int main()
  {
    int n;
    printf("nhap mot so nguyen n\n");
    scanf("%d",&n);
    if  (n%2==0){
      printf("%d CHAN\n",n);
    }
    else{
      printf("%d LE\n",n);
    }
  


  return 0;
}
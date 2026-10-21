#include <stdio.h>

  int main()
  {
    int n;
    printf("nhap mot so nguyen:");
    scanf("%d",&n);
    if  (n%2==0){
      printf("%d là số chẵn.\n",n);
    }
    else{
      printf("là số lẻ.\n",n);
    }
  


  return 0;
}
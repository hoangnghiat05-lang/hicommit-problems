#include <stdio.h>
#include <string.h>

	int main ()
{
//khai bao bien
	int a;
	float f;
	char ch;
	char hoten[30];
	
	scanf("%d",&a);
	scanf("%f",&f);
	scanf("%c",&ch);
	
	strcpy(hoten,"Tran Huynh Hoang Nghia");
//xuat bien
	printf("\n%d,%f,%c,%s",a,f,ch,hoten);

  return 0;
}
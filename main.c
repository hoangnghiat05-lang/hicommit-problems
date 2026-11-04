#include <stdio.h>
int main(){
  float dtb;
  int drl;
  int xlht;
  int xlhk;
  scanf("%d",&dtb);
  scanf("%d",&drl);
  if (dtb>=9.0){
    xlht=1;
  }else if(dtb>=8.0){
    xlht=2;
  }else if(dtb>=7.0){
    xlht=3;
  }else {
    xlht=4;
  }
  if (drl>=90){
    xlhk=1;
  }else if(drl>=80){
    xlhk=2;
  }else if(drl>=70){
    xlht=3;
  }else {
    xlhk=4;
  }
  if (xlht==1&&xlhk==1){
    printf("HOC_BONG_XUAT_SAC");
  }else if (xlht==2&&xlhk==2||xlhk==1){
    printf("HOC_BONG_GIOI");
  }else if (xlht==1&&xlhk==2){
    printf("HOC_BONG_GIOI");
  }
  }else if (xlht==3&&xlhk==3||xlhk==2||xlhk==1){
    printf("HOC_BONG_KHA");
  }else if (xlht==2&&xlhk==3){
    printf("HOC_BONG_KHA");
  }else if(xlht==1&&xlhk==3){
    printf("HOC_BONG_KHA");
  }
  else{
    printf("KHONG_DAT");
  }
  return 0;
}
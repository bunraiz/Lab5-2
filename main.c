#include <stdio.h>
int main(void) {
  int num,result;
  printf("Enter Your Number : ");
  scanf("%d",&num);
  if (num > 0){
    result = num * 15;
  }
  else{
    result = num * (-15);
  }
  printf("Your Result is : %d",result);
  return 0;
}


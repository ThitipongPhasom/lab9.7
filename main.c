#include <stdio.h>
float Q,A,ans=1;
float power(float a,int b){
  int i;
  for(i=1;i<=b;i++){
    ans *= a;
  }
  return ans;
}
int main(void){
  do {
    printf("Enter Number : ");
    scanf("%f",&Q);
    printf("Enter Power : ");
    scanf("%f",&A);
    int x =A;
    if(A!=x || A<0) {
      A = -1;
      printf("Can't do this !!!!!!\n\n");
    }
  }while(A<0);
  power(Q,A);
  printf("\n%f\n",ans);
  return 0;
}
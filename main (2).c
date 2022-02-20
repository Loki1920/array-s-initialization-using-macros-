//arrays using macros

#include<stdio.h>
#define N 5

int main(){
  int a[N],i;
  for(i=0;i<N;i++){
    printf("enter the value of index %d :",i);
    scanf("%d",&a[i]);
  }
  printf("\n Array elements are as follows :\n");
  for(i=0;i<N;i++){
    printf("%d ",a[i]);

  }
  return 0;
}
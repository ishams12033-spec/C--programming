#include<stdio.h>
int main(){
  int age;
  scanf("%d",&age);
  if(age>=18){
    if( age>=60){
      printf("senior citizen");
    }
    else{
      printf("eligible to vote");
    }
  
  }
  else{
    printf("not eligible to vote");
  }
  return 0;
}

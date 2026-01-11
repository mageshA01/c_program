#include<stdio.h>

int add(int x,int y){
  return x+y;
}
int mul(int x,int y){
  return x*y;
}
int main(){
  int a=100,b=200;
printf("%d",add(a,b));
printf("%d",mul(a,b));
return 0;
}
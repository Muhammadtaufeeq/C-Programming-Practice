#include<stdio.h>
int main(){

for(int i=2 ; i<=100 ; i++){
  if(i%2!=0) // for even number upto 100 ...
  {
    continue;
  }
  printf("\t%d " , i);
} 

return 0 ;
}
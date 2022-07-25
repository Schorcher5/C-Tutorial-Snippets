#include<stdio.h>

int main(void){

  int wow = 10;

  helper(&wow);
  printf("%i",wow);



  return 0;
}




helper(int *wow){
  

  *wow += 5;

}

/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int max (int num1, int num2) {
  //check if num1 is greater than num2
    //if so, your answer is num1
   //otherwise, your answer is num2
  if (num1 > num2){
    return num1;
  }
  
  else{
    return num2;
  }

}

int main(void) {
  printf("max(42, -69) is %d\n", max(42, -69));
  printf("max(33, 0) is %d\n", max(33, 0));
  printf("max(0x123456, 123456) is %d\n", max(0x123456, 123456));
  printf("max(0x451215AF, 0x913591AF) is %d\n", max(0x451215AF,0x913591AF));
  //compute the max of 0x451215AF and 0x913591AF and print it out as a decimal n\
umber

  return 0;

}
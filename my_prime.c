#include <stdio.h>
int FindPrime(int num){
	//check if num is equal or less than 1. if so, print out that it is not prime. else, comtinue execution.
	if (num <= 1){
    printf("it is not a prime\n");
    return 0;
    }

	//iterate through all the numbers starting from 2 to num-1. if x==1 is seen, output it is not a prime.
    for (int i =2; i<num; i++){
       int x = num % i;
        if (x==0){
        printf("it is not a prime\n");
        return 0;
        }
    }
// if after the whole iterations, no x==0 is seen, output it is a prime number.    
printf("it is a prime\n");
}



int main()
{
     FindPrime(24);
    

    return 0;
}
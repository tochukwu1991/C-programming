#include <stdio.h>
int FindPrime(int num){
    for (int i =2; i<num; i++){
       int x = num % i;
        if (x==0){
        printf("it is not a prime\n");
        return 0;
        }
    }
    
printf("it is a prime\n");
}



int main()
{
     FindPrime(24);
    

    return 0;
}
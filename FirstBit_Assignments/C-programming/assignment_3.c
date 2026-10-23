// LOOPS ASSIGNMENT 
#include<stdio.h>

void main(){
    // //1. Print numbers from 1 to 10
    // int i = 1;
    //  while (i<=10)
    //  {
    //     printf("%d\n",i);
    //     i++;
    //  }

     
    // //  2 Print table for given number.
    //  int j= 1;
    // while (j<=10)
    // {
    //    int  res =  5*j;
    //     printf("%d",res);
    //     j++;
    // }
    
// Sum of numbers in given range.
// Find sum of numbers from start to end.
// Input: start = 1, end = 5
// Output: 15
    

// int start ,end , sum;
//  start = 1;
//  end = 5 ;  
//  sum = 0 ;
// while (start<=end)
// {
//      sum = sum+start;
//      start++;
// }
// printf("%d",sum);


// 7. Check the given number is prime or not.

int num = 8;
int i  = 2 ;
int status = 0;
    while (i<=num/2 )                                                          
    {
      if(num%i==0){
         status = 1 ;
        break;
      i++;
    }
}
if(status==0){
    printf("This number is prime number");
}
else{
    printf("This number is not prime number");
}

// Check the given number is Armstrong number or not..
// Input: n = 153

  
 
 


}


 
  
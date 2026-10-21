#include<stdio.h>
#include <string.h>


void main(){

// Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the desired operations.


    // int num1 = 10 ;
    // int num2 = 20 ;
    // int operator = '+';
    
    // if (operator =='+'){
    //     int sum = num1+num2;
    //     printf("%d", sum);
    // }
    // else if(operator == '-'){
    //     int sub = num1-num2;
    //     printf("%d",sub);
    // }
    // else if(operator == '*'){
    //     int mul= num1*num2;
    //     printf("%d",mul);
    // }
    
    // else if(operator == '/'){
    //     int div = num1/num2;
    //     printf("%d",div);
    // }
    
    // else if(operator == '%'){
    //     int mod= num1%num2;
    //     printf("%d",mod);
    // }
    // else{
    //     printf("Wrong operator provided");
    // }
    



    // 2. Accept three sides of a triangle from the user and determine whether the triangle isequilateral, isosceles, or scalene.

//     int s1,s2,s3;
    
//     s1 = 5 ; 
//     s2 = 5;
//     s3 = 5;

//     if(s1==s2 && s2==s3){
//         printf("The given triangle is euqilatral tringle");

//     }else if((s1==s2 ||s1==s3 || s2==s3)){
//         printf("The given triangle is Isosceles Triangle");
//     }
//     else{
//         printf("The given triangle is scalene Triangle");
// }

// 3 Write a program to find greatest of three numbers using nested if-else.


// int a ,b ,c ;
// a = 55;
// b = 95; 
// c= 223;

// if(a>b){
//     if(a>c){
//         printf("The greater number is %d",a);
//     }
//     else{
//         printf("The greater number is %d", c);
//     }
// }
// else{
//     if(b>c){
//         printf("The greater number is %d",b);
//     }else{
//         printf("The greater number is %d" ,c);
//     }
// }

// 4. Ask the user to enter marks.
// Then show the result based on these rules:
// If marks are more than 75 → show "Distinction"
// If marks are more than 65 → show "First Class"
// If marks are more than 55 → show "Second Class"
// If marks are 40 or more → show "Pass Class"
// If marks are less than 40 → show "Fail"

//   int marks;

//     printf("Enter your marks: ");
//     scanf("%d", &marks);

//     if (marks > 75)
//     {
//         printf("Distinction");
//     }
//     else if (marks > 65)
//     {
//         printf("First Class");
//     }
//     else if (marks > 55)
//     {
//         printf("Second Class");
//     }
//     else if (marks >= 40)
//     {
//         printf("Pass Class");
//     }
//     else
//     {
//         printf("Fail");
//     }


//  5. Accept the price from user. Ask the user if he is a student (user may say y or n). If he
// is a student and he has purchased more than 500 than discount is 20% otherwise
// discount is 10%.But if he is not a student then if he has purchased more than 600
// discount is 15% otherwise there is not discount.
//  char user[20] = "Student";
//     int price, discount, final_price;

//    price = 550;

//     if (strcmp(user, "Student") == 0)
//     {
//         if (price > 500)
//         {
//             discount = price * 20 / 100;
//         }
//         else
//         {
//             discount = price * 10 / 100;
//         }

//         final_price = price - discount;
//         printf("Final price: %d", final_price);
//     }
//     else if (price > 600)
//     {
//         discount = price * 15 / 100;
//         final_price = price - discount;
//         printf("Final price: %d", final_price);
//     }


// 6. Accept a number and check if it is divisible by 3, 5, or both.
// (Print "Divisible by 3 but not by 5" or "Divisible by 5 but not by 3" or "Divisible by
// both" or” Divisible by None”)


// int no = 13;

//  if(no%3==0 && no%5==0){
//     printf("The no is divisible by 3 & 5");
//  }
//  else if(no%3==0){
//     printf("The no is divisible by 3");
//  }
//  else if(no%5==0){
//     printf("The no is divisible by 5");
//  }
//  else{
//     printf("The number is not divisible by 3 nor 5");
//  }


// 7. Accept the age and check if the person is:
// Child (age < 12),Teenager (12–19),Adult (20–59),Senior (60 and above)

    int age = 45;
    if(age<12){
        printf("Child");  
    }  else if(12<age && age<19){

        printf("Teenager");
    }
         else if(20<age && age<59){
                        printf("Adult");
                }
                    else if(age>60){
                        printf("Senior");
                    }


}
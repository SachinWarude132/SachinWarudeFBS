 #include<stdio.h>
  
 void main(){

    // 1. Write a program to check whether a number is even or odd.
     int num = 10 ;
      if(num%2==0){
        printf("The number is Even");
      }
      else{
        printf("The number is False");
      }


    //   2. Write a program to check given 3 digit number is pallindrome or not.

    int NUM = 555 ;
    int L = NUM%10;
    int F = NUM/100;

    if(L==F){
        printf("The Number is pallindrome");
    }
    else{
        printf("The nummber is not Pallidrome");
    }


    // 3. Write a program to check whether a given year is a leap year.

        int year = 2016 ;

        if(year%4==0 && year%100!=0 || year%400 ==0){
            printf("The %d year  is leap year",year );
        }
        else{
            printf("The %d year is not a leap year" ,year);
        }

    // 4. Write a program to check whether a given character is a vowel or consonant.

    char ch = 'c';

    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        printf("The given alphabet %c is vowel " ,ch);
    }
    else{
        printf("The given alphabet %c is not a vowel",ch);
    }

    // 5. Write a program to check whether a person is eligible to vote (age ≥ 18).

    int age = 25 ;
    if(age>=18){
        printf("The person is eligible to vote");

    }
    else{
        printf("The person is not elgible to vote");
    }


    // 6. Write a program to check whether a given character is uppercase or lowercase.

    char chh ='c';
    if(chh >='a'&& chh <='z'){
        printf("The character is lowercase");

    }
    else{
        printf("The character is Uppercase");
    }

    int da, ta ,hra,basic;

    if(basic<=5000){
         da = 10*basic/100;
        ta = 20*basic/100;
        hra = 25*basic/100;
    }else{
         da = 15*basic/100;
        ta = 25*basic/100;
        hra = 30*basic/100;
    }
 }
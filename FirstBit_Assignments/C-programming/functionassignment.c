#include<stdio.h>


    void Evenodd(){
        int num ;
        printf("Enter the Number : ");
        scanf("%d" , &num);
        if(num%2==0){
            printf("The number is even\n");
        }
        else{
            printf("The number is odd\n");
        }
    }



    void Pallindrome(){
           int NUM;
           printf("Enter the Num For pallindrome : ");
           scanf("%d",& NUM);
    int L = NUM%10;
    int F = NUM/100;

    if(L==F){
        printf("The Number is pallindrome");
    }
    else{
        printf("The nummber is not Pallidrome");
    }
    }


    void Leapyear(){
        int year;
        printf("Enter the Year : ");
        scanf("%d",&year);
        
         if(year%4==0 && year%100!=0 || year%400 ==0){
            printf("The %d year  is leap year",year );
        }
        else{
            printf("The %d year is not a leap year" ,year);
        }
    }


    void CheckVowelOrConsonants(){
                char ch ;
                printf("Enter the character :");
                scanf("%c",&ch);

    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        printf("The given alphabet %c is vowel " ,ch);
    }
    else{
        printf("The given alphabet %c is not a vowel",ch);
    }
    }


    void EligibleToVote(){
        int age ;
        printf("Enter the age : ");
        scanf("%d", age);
    if(age>=18){
        printf("The person is eligible to vote");

    }
    else{
        printf("The person is not elgible to vote");
    }

    }


    void Charactercase(){
     char ch ;
                printf("Enter the character :");
                scanf("%c",&ch);
    if(ch >='a'&& ch <='z'){
        printf("The character is lowercase");

    }
    else{
        printf("The character is Uppercase");
    }
    }

    void Totalsalary(){
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


 void main(){
    // assignment -1

    Evenodd();
    Pallindrome();
    Leapyear();
    CheckVowelOrConsonants();
    EligibleToVote();
    Charactercase();

    // 7.
      int da, ta ,hra,basic;
    basic =5000;
        Totalsalary();  
    int T_s = basic + da + ta + hra ;
    printf("the total salary is %d" ,T_s);

 }
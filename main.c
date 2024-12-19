//main is created by Kishore.V

#include<stdio.h> //headerfile
void add(int number1,int number2);
void subraction(int number1,int number2);
void multiply(int number1,int number2,int number3); //program to multiply two number
void division(int number1,int number2); //program to divide two number
int main (){
int number1 = 20; //sample input value1
int number2 = 2;  //sample input value2
int number3 = 3; //sample input value3
add(number1,number2);
subraction(number1,number2);   
multiply(number1,number2,number3);
division(number1,number2);
}
void add(int number1,int number2){
int add_result;
add_result=number1+number2;
printf("Addition of Two number is %d",add_result);
}
void subraction(int number1,int number2){
int result=0;
result=number1-number2;
printf("Subraction of Two numbers is %d",result);
}

void multiply(int number1,int number2, int number3){
int result=0;
result=number1*number2;
printf("Multiplication of Two numbers is %d",result);
}

void division(int number1,int number2){
int result=0;
result=number1/number2;
printf("Division of Two numbers is %d",result);
}

//main is created by Kishore.V

#include<stdio.h> //headerfile
void add(int num1,int num2);
void subraction(int number1,int number2);

int main (){
int number1 = 20; //sample input value1
int number2 = 2;  //sample input value2
add(num1,number2);
subraction(number1,number2);   
}
void add(int num1,int num2){
int add_result;
add_result=num1+num2;
printf("Addition of Two number is %d",add_result);
}
void subraction(int number1,int number2){
int result=0;
result=number1+number2;
printf("Subraction of Two numbers is %d",result);
}

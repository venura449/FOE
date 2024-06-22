#include <stdio.h>
float add(int a,int b);
float sub(int a,int b);
float div(int a,int b);
float mul(int a,int b);

int main(){
	float num1 = 0;
	float num2 = 0;
	char choice;
	
	printf("Enter Number 01,02 : ");
	scanf("%f %f",&num1,&num2);
	
	printf("Addition : %.2f\n",add(num1,num2));
	printf("Substraction : %.2f\n",sub(num1,num2));
	printf("Division : %.2f\n",div(num1,num2));
	printf("Multiplication : %.2f",mul(num1,num2));
	
	
}

float add(int a,int b){
	return a+b;
}

float sub(int a ,int b){
	return a-b;
}
float div (int a, int b){
	return a/(float)b;
}
float mul(int a,int b){
	return a*b;
}

/*
Student Name : Kabir D Shrestha 
Subject : bProgramming Fundamental
Lab No. : 05
Program : Write a program to add to numbers
Date :2016-10-18
*/
#include<stdio.h>
	int main(){
		int a,b;
		printf("Enter the first number:");
		scanf("%d",&a);
		
		printf("Enter the second number:");
		scanf("%d",&b);
		
		
		printf("\nUse of '+' operator:\n");
		printf("%d+%d=%d",a,b,a+b);
		
		
		printf("\nUse of '-' operator:\n");
		printf("%d-%d=%d",a,b,a-b);
		
		
		printf("\nUse of '*' operator:\n");
		printf("%d*%d=%d",a,b,a*b);
		
		
		printf("\nUse of '/' operator:\n");
		printf("%d/%d=%d",a,b,a/b);
		
		printf("\nUse of '%' operator:");
		printf("%d %% %d=%d",a,b,a%b);
		
		return 0;
	}

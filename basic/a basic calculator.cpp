#include <stdio.h>
int main()
{
double num1;
double num2;
char op;

printf("enter first number: ");
scanf("%lf", &num1);
printf("enter second number: ");
scanf("%lf", &num2);
printf(" enter operation in words:");
scanf("%s", &op);

if (op == '+'){
	printf("the sum of %lf and %lf is %lf ",num1 ,num2, num1 + num2 );
	return op;
}
if (op == '-'){
		printf("the difference of %lf and %lf is %lf ",num1 ,num2, num1 - num2 );
	return op;
}
if (op == '/'){
		printf("the quotient of %lf and %lf is %lf ",num1 ,num2, num1 / num2 );
	return op;
}
if (op == '*'){
		printf("the product of %lf and %lf is %lf ",num1 ,num2, num1 * num2 );
	return op;
}else{
	printf("invalid operator");
return 0; 
}
}

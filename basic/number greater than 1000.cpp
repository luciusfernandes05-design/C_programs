#include <stdio.h>
int main(){
	int num1;
	printf("what is your number?");
	scanf("%d", &num1);
	if(num1 < 1000){
		printf("%d is less than 1000", num1);
	}else if(num1 == 1000){
		printf("%d is equal to 1000", num1);
	}else{
		printf("%d is greater than 1000", num1);
	}
return 0;
}
	

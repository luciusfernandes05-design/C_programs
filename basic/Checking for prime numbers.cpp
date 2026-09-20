#include <stdio.h>
int main(){
	int num1;
	int i;
	int count = 0;
	printf("what is your number?");
	scanf("%d", &num1);
	if(num1 == 0 || num1 == 1){
		printf("%d is neither prime number nor composite", num1);
	}else{
		for(i =2; i<=num1; i++){
		if(num1 % i == 0){
		count++;
	}
}
		if(count == 1){
		printf("%d is a prime number", num1);
	}else{
	printf("%d is not a prime number", num1);
	 }

}
return 0;
}
	

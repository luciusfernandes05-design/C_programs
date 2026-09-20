#include <stdio.h>
int main(){
	int temp;
	int num;
	int num1;
	int rev = 0;
	printf("what is your number?");
	scanf("%d", &num);
	num1 = num;
for (; num != 0; num /= 10) {
        temp = num % 10;                 
        rev = (rev * 10) + temp;  
    }
printf("the reverse of %d is %d", num1, rev);
return 0;
}
	

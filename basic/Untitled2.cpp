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
printf("the reverse of %d is %d \n", num1, rev);
if(num1 == rev){
	printf ("The given number is a palandrome");
}else{
	printf("Therefore, the given number is not a palandrome");
}
return 0;
}
	

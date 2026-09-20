#include <stdio.h>
int main(){
	int secretnumber = 5;
	int guess;
	int guesscount = 0;
	int guesslimit = 3;
	int outofguesses = 0;
	
	while(guess != secretnumber && outofguesses == 0) {
		if (guesscount < guesslimit) {
			printf("enter number:");
			scanf("%d", &guess);
			guesscount++;
	   }else{
	   		outofguesses = 1;
		}
	}
	if( outofguesses == 1){
		printf("you are out of guesses :(");
	}else{
	printf("You win!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
	}

	return 0;
}
	

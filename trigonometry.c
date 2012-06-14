/*******************************************
**There is nothing here yet, so using     **
**any trigonometry beyond pythagoras      **
**in this programme is quite impossible...**
*******************************************/
#include <stdio.h>
#include <math.h>

trigonometry (void){
	char selector;
	printf ("do you have lines and angles, just angles or just lines? \nFor just angles please enter "aa" for just lines please enter "ll" and for a mix of the two please enter "la");
	scanf ("%s",selector);
	if (selector == "aa" || selector == "AA"){
		angleangle();
	}else if (selector == "ll" || selector == "LL"){
		lineline();
	}else if (selector == "la" || selector == "al" || selector == "LA" || selector == "AL"){
		angleline();
	}else{
		main();
	}
}

angleangle (void){
	
}

angleline (void){

}

lineline (void){
	double a,b,c,A,B,C;
}
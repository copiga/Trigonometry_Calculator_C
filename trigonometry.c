/*******************************************
**There is nothing here yet, so using     **
**any trigonometry beyond pythagoras      **
**in this programme is quite impossible...**
*******************************************/
#include <stdio.h>
#include <math.h>
//#include <ctype.h> perhaps pointless...but may be needed to work, i need it for "toupper()" which may or may not be there...

trigonometry (void){
	char selector;
	printf ("do you have lines and angles, just angles or just lines? \nFor just angles please enter "aa" \nfor just lines please enter "ll" \nand for a mix of the two please enter "la");
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
	char selectora, selectorb;
	double a,b,c,A,B,C;
	printf ("which types of line do you have?\n");
	printf ("please enter the first type of line you have\n");
	printf ("(o)pposite (a)djacent or (h)ypotenuse?");
	scanf ("%c", selectora)
	flushall();
	printf ("please enter the second type of line you have\n");
	printf ("(o)pposite (a)djacent or (h)ypotenuse?");
	scanf ("%c", selectorb);
	flushall();
	toupper (selectora);				//as below...
	toupper (selectorb);				//dont know whether these will work without ctypes.h...
	if (selectora == 'O' && selectorb == 'A' || selectora == 'A' && selectorb == 'O'){
}
/*******************************************
**There is nothing here yet, so using     **
**any trigonometry beyond pythagoras      **
**in this programme is quite impossible...**
*******************************************/
#include <stdio.h>
#include <math.h>
#include <ctype.h> 
#include <string.h>
main (){trigonometry();}

trigonometry (void){
	char selectora;
	char selectorb;
	printf ("do you have lines and angles, just angles or just lines? \nFor just angles please enter \"aa\" \nfor just lines please enter \"ll\" \nand for a mix of the two please enter \"la\"");
	scanf ("%c%c", &selectora, &selectorb);
	flushall ();
	selectora = toupper (selectora);
	selectorb = toupper (selectorb);
	if (selectora == 'A' && selectorb == 'A'){
		angleangle();
	}else if (selectora == 'L' && selectorb == 'L'){
		lineline();
	}else if (selectora == 'A' && selectorb == 'L' || selectora == "L" && selectorb == 'A'){
		angleline();
	}else{
		main();
	}
}

angleangle (void){
	printf ("dbhdf");
}

angleline (void){
printf ("uuuuuu");
}

lineline (void){
	char selectora, selectorb, selectorc;
	double a,b,c,A,B,C;
	printf ("which types of line do you have?\n");
	printf ("please enter the first type of line you have\n");
	printf ("(o)pposite (a)djacent or (h)ypotenuse?");
	scanf ("%c", &selectora);
	flushall();
	printf ("please enter the second type of line you have\n");
	printf ("(o)pposite (a)djacent or (h)ypotenuse?");
	scanf ("%c", &selectorb);
	flushall();
	selectora = toupper (selectora);
	selectorb = toupper (selectorb);
	if (selectora == 'O'){
		if (selectorb == 'H'){
			linelinesoh();
		}else if (selectorb == 'A'){
			linelinetoa();
		}
	}else if (selectora == 'H'){
		if (selectorb == 'O'){
			linelinesoh();
		} else if (selectorb == 'A'){
			linelinetoa();
		}
	}else if (selectora == 'A'){
		if (selectorb == 'O'){
			linelinetoa();
		}else if (selectorb == 'H'){
			linelinecah();
		}
	}else{
		main();
	}
}
linelinesoh(){
printf ("linelinesoh");
}
linelinecah(){
printf ("linelinecah");
}
linelinetoa(){
printf ("linelinetoa");
}
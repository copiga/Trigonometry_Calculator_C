#include <stdio.h>
#include <math.h>
#include "trigonometry.c"
#include "pythagoras.c"

main(){
	char selector;
	printf ("do you wish to calculate (p)ythagoras or (o)ther trigonometric functions? \n");
	scanf ("%c", &selector);
	flushall();
	if (selector == 'p' || selector == 'P'){
		pythagoras();
	}else if (selector == 'O' || selector == 'o' || selector == 'T' || selector == 't'){
		trigonometry();
	}else{
		printf ("\n");
		main();
	}
	return (0);
}

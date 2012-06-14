#include <stdio.h>
#include <math.h>

pythagoras () {
	char selector;
	printf ("What are you calculating? \nIs it the (H)ypotenuse or a (D)ifferent line?");
	scanf ("%c", &selector);
	if (selector == 'H' || selector == 'h'){
		hypotenuse();
	}else if(selector == 'D' || selector == 'd' || selector == 'L' || selector == 'l'){
		otherline();
	} else{
		main();
	}
}
hypotenuse (void){
	double a,b,c,asq,bsq,csq;
	printf ("Please enter one of the sides");
	scanf ("%lf", &a);
	printf ("Please enter the other side");
	scanf ("%lf", &b);
	printf ("%f by %f\n", a, b);
	a=a*a;
	b=b*b;
	c=sqrt(a+b);
	printf ("%lf", c);
}
otherline (void){
	double a,b,c,asq,bsq,csq;
	printf ("Please enter the hypotenuse");
	scanf ("%lf", &c);
	printf ("Please enter the other side");
	scanf ("%lf", &b);
	c=c*c;
	b=b*b;
	a=sqrt(c-b);
	printf ("%lf", a);
}
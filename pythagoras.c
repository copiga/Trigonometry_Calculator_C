pythagoras () {
	char selector;
	printf ("What are you calculating? \nIs it the (H)ypotenuse or a (D)ifferent line?\nor for the main menu please enter \"M\"");
	scanf ("%c", &selector);
	flushall();
	selector = toupper (selector);
	if (selector == 'H'){
		hypotenuse();
	}else if(selector == 'D' || selector == 'L'){
		otherline();
	} else if (selector == 'M'){
		main();
	} else{
		pythagoras();
	}
}
hypotenuse (){
	double a,b,c,asq,bsq,csq;
	printf ("Please enter one of the sides");
	scanf ("%lf", &a);
	flushall();
	printf ("Please enter the other side");
	scanf ("%lf", &b);
	flushall();
	printf ("%lf by %lf\n", a, b);
	a=a*a;
	b=b*b;
	c=sqrt(a+b);
	printf ("the hypotenuse is %lf", c);
	sleep (1000);
	printf ("\n\npress any key to exit or \"m\" to start from the beginning");
	if (toupper(getchar())=='M'){
		flushall();
		main();
	}else{
		return (0);
	}
}
otherline (){
	double a,b,c,asq,bsq,csq;
	printf ("Please enter the hypotenuse");
	scanf ("%lf", &c);
	flushall();
	printf ("Please enter the other side");
	scanf ("%lf", &b);
	flushall();
	c=c*c;
	b=b*b;
	a=sqrt(c-b);
	printf ("the line is %lf long", a);
	sleep (1000);
	printf ("\n\npress any key to exit or \"m\" to start from the beginning");
	if (toupper(getchar())=='M'){
		flushall();
		main();
	}else{
		return (0);
	}
}
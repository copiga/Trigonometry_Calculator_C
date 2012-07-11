trigonometry (){
	char selectora;
	char selectorb;
	puts ("do you have lines and angles, just angles or just lines? \nIf you have both angles and lines please enter \"al\"\nIf you only have lines please enter \"ll\"\nOr for the main menu please enter \"m\"");
	scanf ("%c%c", &selectora, &selectorb);
	flushall ();
	selectora = toupper (selectora);
	selectorb = toupper (selectorb);
	
	if (selectora == 'L' && selectorb == 'L'){
		lineline();
	}else if (selectora == 'A' && selectorb == 'L'){
		angleline();
	}else if (selectora == 'L' && selectorb == 'A'){
		angleline();
	}else if (selectora == 'M' || selectorb == 'M'){
		main();
	}else {
		trigonometry();
	}
}

angleline (){
	char selector;
	puts ("what type of line do you have?\nis it (o)pposite or (a)djacent to the angle that you have or is it the (h)ypotenuse?\nor if you wish to go to the previous menu please enter \"p\"");
	scanf ("%c", &selector);
	flushall();
	selector = toupper (selector);
	if (selector == 'A'){
		anglelineadjacent();
	} else if (selector == 'O'){
		anglelineopposite();
	} else if (selector == 'H'){
		anglelinehypotenuse();
	} else if (selector == 'P'){
		trigonometry();
	} else {
		angleline();
	}
}

anglelineadjacent(){
	double a,h,o,A,B,C,pi;
	pi = 3.14159265358979323;
	puts ("please enter the length of the adjacent line\n");
	scanf ("%lf", &a);
	flushall ();
	puts ("please enter the size of the angle in degrees\n");
	scanf ("%lf", &A);
	flushall ();
	A = A/(180/pi);
	h = a/cos(A);
	o = a*tan(A);
	A = A*(180/pi);
	B = 90;
	C = 180-(A+B);
	printf ("the hypotenuse is %lf long\n", h);
	printf ("the adjacent is %lf long\n", a);
	printf ("the opposite is %lf long\n", o);
	printf ("the angle you gave me is %lf degrees\n", A);
	printf ("angle B is %lf\n", B);
	printf ("angle C is %lf\n", C);
	sleep (1000);
	printf ("\n\npress any key to exit or \"m\" to start from the beginning");
	if (toupper(getchar())=='M'){
		flushall();
		main();
	}else{
		return (0);
	}
}

anglelinehypotenuse(){
	double a,h,o,A,B,C,pi;
	pi = 3.14159265358979323;
	puts ("please enter the length of the hypotenuse\n");
	scanf ("%lf", &h);
	flushall ();
	puts ("please enter the size of the angle in degrees\n");
	scanf ("%lf", &A);
	flushall ();
	A = A/(180/pi);
	a = h*cos(A);
	o = a*tan(A);
	A = A*(180/pi);
	B = 90;
	C = 180-(A+B);
	printf ("the hypotenuse is %lf long\n", h);
	printf ("the adjacent is %lf long\n", a);
	printf ("the opposite is %lf long\n", o);
	printf ("the angle you gave me was %lf degrees\n", A);
	printf ("angle B is %lf\n", B);
	printf ("angle C is %lf\n", C);
	sleep (1000);
	printf ("\n\npress any key to exit or \"m\" to start from the beginning");
	if (toupper(getchar())=='M'){
		flushall();
		main();
	}else{
		return (0);
	}
}

anglelineopposite(){
	double a,h,o,A,B,C,pi;
	pi = 3.14159265358979323;
	puts ("please enter the length of the opposite\n");
	scanf ("%lf", &o);
	flushall ();
	puts ("please enter the size of the angle in degrees\n");
	scanf ("%lf", &A);
	flushall ();
	A = A/(180/pi);
	a = h*cos(A);
	h = o/sin(A);
	A = A*(180/pi);
	B = 90;
	C = 180-(A+B);
	printf ("the hypotenuse is %lf long\n", h);
	printf ("the adjacent is %lf long\n", a);
	printf ("the opposite is %lf long\n", o);
	printf ("the angle you gave me was %lf degrees\n", A);
	printf ("angle B is %lf\n", B);
	printf ("angle C is %lf\n", C);
	sleep (1000);
	printf ("\n\npress any key to exit or \"m\" to start from the beginning");
	if (toupper(getchar())=='M'){
		flushall();
		main();
	}else{
		return (0);
	}
}

lineline (){
	char selectora, selectorb;
	puts ("which lines do you have?\nplease enter \"ah\" for adjacent and hypotenuse, \"oh\" for opposite and hypotenuse or \"oa\" for opposite and adjacent\nOr if you want to go to the previous menu please enter \"P\"");
	scanf ("%c%c", &selectora, &selectorb);
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
			linelinecah();
		}
	}else if (selectora == 'A'){
		if (selectorb == 'O'){
			linelinetoa();
		}else if (selectorb == 'H'){
			linelinecah();
		}
	}else if (selectora == 'P' || selectorb == 'P'){
		trigonometry();
	}else{
		lineline();
	}
}

linelinesoh(){
	double a,o,h,A,B,C,pi;
	pi = 3.14159265358979323;
	puts ("please enter the opposite\n");
	scanf ("%lf", &o);
	flushall();
	printf ("please enter the hypotenuse\n");
	scanf ("%lf",&h);
	flushall();
	A = asin (o/h);
	A = A*180/pi;
	B = 90;
	C = 180-(A+B);
	printf ("A = %lf\n", A);
	printf ("B = %lf\n", B);
	printf ("C = %lf\n", C);
	sleep (1000);
	printf ("\n\npress any key to exit or \"m\" to start from the beginning");
	if (toupper(getchar())=='M'){
		flushall();
		main();
	}else{
		return (0);
	}
}

linelinecah(){
	double a,o,h,A,B,C,pi;
	pi = 3.14159265358979323;
	puts ("Calculating \"A\" from the adjacent and hypotenuse\n");
	puts ("please enter the adjacent\n");
	scanf ("%lf",&a);
	flushall();
	printf ("please enter the hypotenuse\n");
	scanf ("%lf",&h);
	flushall();
	A = a/h;
	A = acos (A);
	A = A *(180/pi);
	B = 90;
	C = 180-(A+B);
	printf ("A = %lf\n", A);
	printf ("B = %lf\n", B);
	printf ("C = %lf\n", C);
	sleep (1000);
	printf ("\n\npress any key to exit or \"m\" to start from the beginning");
	if (toupper(getchar())=='M'){
		flushall();
		main();
	}else{
		return (0);
	}
}

linelinetoa(){
	double a,o,h,A,B,C,pi;
	pi = 3.14159265358979323;
	puts ("Calculating \"A\" from the adjacent and opposite\n");
	puts ("please enter the adjacent\n");
	scanf ("%lf",&a);
	flushall();
	printf ("please enter the opposite\n");
	scanf ("%lf",&o);
	flushall();
	A = o/a;
	A = atan (A);
	A = A * 180/pi;
	B = 90;
	C = 180-(A+B);
	printf ("A = %lf\n", A);
	printf ("B = %lf\n", B);
	printf ("C = %lf\n", C);
	sleep (1000);
	printf ("\n\npress any key to exit or \"m\" to start from the beginning");
	if (toupper(getchar())=='M'){
		flushall();
		main();
	}else{
		return (0);
	}
}


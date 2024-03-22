#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<math.h>
#define Pi  3.14159265 

int main()	
{ 	
	int op1;
	char op2;
	double num1, num2, result, deg;
	
	COORD c;
	c.X=35; c.Y=2;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c) ;
	printf("Welcome to my Calculator\n\n");
	printf("     Created by Rajneesh Kumar\n\n");
	while(1)
	{
		printf("  1. Arithmatic Operation\t\t");
		printf("  2. Angles\t");
		printf("  3. Percentage\t");
		printf("  4. Square\t");
		printf("  5. Cube\n");
		printf("  6. Rectangle\t");
		printf("  7. Tringle\t");
		printf("  8. Cricle\t");
		printf("  9. Sphere\t");
		printf("  10. Exit\n\n");
		printf(" Select the option: ");	
		scanf("%d",&op1);
    switch (op1) // switch on the first operator
    {
        case 1:
		//Arithmatic Operator
        	printf("Enter the first number: ");
   			 scanf("%lf", &num1);
    		printf("choose the operator (+, -, *, /, ^): ");
   			 scanf(" %c", &op2); // note the space before %c to ignore whitespace
			printf("Enter the second number: ");
    		scanf("%lf", &num2);
            switch (op2) // switch on the operator
            {
                case '+':
                    result = num1 + num2;
                    break;
                case '-':
                    result = num1 - num2;
                    break;
                case '*':
                    result = num1 * num2;
                    break;
                case '/':
                    if (num2 == 0)
                    {
                        printf("Error: division by zero\n");
                        return 0;
                    }
                    result = num1 / num2;
                    break;
                case '^':
                    result = pow(num1, num2);
                    break;
                default:
                    printf("Error: invalid operator\n\n");
                    return 0;
            }
            printf("%.2lf %c %.2lf  = %.2lf\n\n", num1, op2, num2,  result);
            break;
		case 2:
		//Angles
			while(1)
			{
				printf("1- sin\t\t");
				printf("2- cos\t\t");
				printf("3- tan\t\t");
				printf("4- cosec\t");
				printf("5- sec\t\t");
				printf("6- cot\t\t");
				printf("7- Exit\n\n");
				printf("Select the option: ");	
				scanf("%d",&op1);
				switch(op1)
				{
					case 1:
						printf("Enter the degree : ");
						scanf("%lf",&deg);
						num1 = deg * Pi / 180 ; //convert into radians
						result = sin(num1);
						printf("sin(%lf) = %lf\n\n", deg, result);
						break;
					case 2:
						printf("Enter the degree : ");
						scanf("%lf",&deg);
						num1 = deg * Pi / 180 ; //convert into radians
						result = cos(num1);
						printf("cos(%lf) = %lf\n\n", deg, result);
						break;
					case 3:
						printf("Enter the degree : ");
						scanf("%lf",&deg);
						num1 = deg * Pi / 180 ; //convert into radians
						result = tan(num1);
						printf("tan(%lf) = %lf\n\n", deg, result);
						break;
					case 4:
						printf("Enter the degree : ");
						scanf("%lf",&deg);
						num1 = deg * Pi / 180 ; //convert into radians
						num2 = sin(num1);
						result = 1/num2;
						printf("cosec(%lf) = %lf\n\n", deg, result);
						break;
					case 5:
						printf("Enter the degree : ");
						scanf("%lf",&deg);
						num1 = deg * Pi / 180 ; //convert into radians
						num2 = cos(num1);
						result = 1/num2;
						printf("sec(%lf) = %lf\n\n", deg, result);
						break;
					case 6:
						printf("Enter the degree : ");
						scanf("%lf",&deg);
						num1 = deg * Pi / 180 ; //convert into radians
						num2 = tan(num1);
						result = 1/num2;
						printf("cot(%lf) = %lf\n\n", deg, result);
						break;
					case 7:
						return 0;
					default : 
						printf("Invalid Choice\n\n");
				}
				break;
			}
			break;	
		case 3: 
		//Percentage
			printf("Enter the first number: ");
			scanf("%lf",&num1);	
			printf("Enter the second number: ");
			scanf("%lf",&num2);	
			result = (num1 / num2) * 100 ;
			printf("(%0.2lf / %0.2lf) * 100 = %0.2lf\n\n", num1, num2, result);
			break;
		case 4:
		//Square
			printf("Enter the first number: ");
			scanf("%lf",&num1);	
			printf("%0.3lf ^ %0.3lf = %0.3lf\n\n", num1, num1, num1*num1);
			break;
		case 5:
		//Cube
			printf("Enter a number: ");
			scanf("%lf",&num1);
			result = num1 * num1 *num1;
			printf("the cube is %0.3lf\n\n", result);
			break;
		case 6:
		//Rectangular
			while(1)
			{
				printf("1. Perimeter of rectangular\t\t");
				printf("2. Area of rectangular\t\t");
				printf("3. Exit\n\n");
				printf("Enter your choise: ");
				scanf("%d",&op1);
				
				switch(op1)
				{
					case 1:
						printf("Enter the Length of rectangular : ");
						scanf("%lf",&num1);
						printf("Enter the width of rectangular : ");
						scanf("%lf",&num2);
						result = 2 * (num1 + num2);
						printf("Perimeter of rectangular = 2 * (%0.3lf + %0.3lf) = %0.3lf\n\n", num1, num2, result);
						break;
					case 2:
						printf("Enter the Length of rectangular : ");
						scanf("%lf",&num1);
						printf("Enter the width of rectangular : ");
						scanf("%lf",&num2);
						result = num1 * num2 ;
						printf("Area of rectangular = %0.3lf * %0.3lf = %0.3lf\n\n", num1, num2, result);
						break;
					case 3:
						return 0;
					default :
						printf("Invalid choice\n\n");
				}
				break;
			}
			break;
		case 7:
		//Triangle
			while(1)
			{
				printf("1. Scalene Triangle\t "); //visambahau tribhuj
				printf("2. Equilateral Triangle\t "); //sambahu tribhuj
				printf("3. Isosceles Triangle \t "); //samdubahau tribhuj
				printf("4. Basic Triangle Formula\t");
				printf("5. Exit\n\n ");
				printf("Enter your choice : ");
				scanf("%d",&op1);
				switch(op1)
				{
					float a, b, c, s, h, ar, per;
					case 1:
						printf("1- Perimeter of Scalene Triangle\t");
						printf("2- Area of Scalene Triangle\t");
						printf("3- Exit\n\n");
						printf("Enter your choice : ");
						scanf("%d",&op1);
							switch(op1)
							{
								case 1:
										printf("Enter the first side of scalene triangle : ");
										scanf("%f",&a);
										printf("Enter the second side of scalene triangle : ");
										scanf("%f",&b);
										printf("Enter the third side of scalene triangle : ");
										scanf("%f",&c);
									per = (a + b +c);
									printf("Perimeter of Scalene Triangle = (%0.2f + %0.2f + %0.2f) = %0.2f\n\n", a, b, c, per);
									break;
								case 2:
										printf("Enter the first side of scalene triangle : ");
										scanf("%f",&a);
										printf("Enter the second side of scalene triangle : ");
										scanf("%f",&b);
										printf("Enter the third side of scalene triangle : ");
										scanf("%f",&c);
									printf("By Heron's Formula : \n\n");
									s = (a + b + c) / 2 ;
									ar = sqrt((s - a) * (s - b) *  (s - c));
									printf("Area of scleten teriangle = %0.2f\n\n", ar);
									break;
								case 3:
									return 0;
									default :
										printf("Invalid Choice\n\n");
										break;
							}
						break;
					case 2:
						printf("1- Perimeter of Equilateral Triangle\t");
						printf("2- Area of Equilateral Triangle\t");
						printf("3- Exit\n\n");
						printf("Enter your choice : ");
						scanf("%d",&op1);
						
						switch(op1)
							{	
								case 1:
									printf("Enter the first side of equilateral triangle : ");
									scanf("%f",&a);
									printf("Enter the second side of equilateral triangle : ");
									scanf("%f",&b);
									printf("Enter the third side of equilateral triangle : ");
									scanf("%f",&c);
									per = a + b + c ; // if a=b=c then per=3a=3b=3c
									printf("Parimeter of Equilateral Triangle = %0.2f\n\n", per);
									break;
								case 2:
									printf("Enter the first side of equilateral triangle : ");
									scanf("%f",&a);
									printf("Enter the second side of equilateral triangle : ");
									scanf("%f",&b);
									printf("Enter the third side of equilateral triangle : ");
									scanf("%f",&c);
									ar= ((sqrt(3) / 4) * a * b);
									printf("Area of Equilateral Triangle = %0.2f\n\n", ar);
									break;
								case 3: 
									return 0;
								default :
									printf("Invalid Choice\n\n");
									break;
							}
						break;	
					case 3:
						printf("1- Perimeter of Isoscelen Triangle\t");
						printf("2- Area of Isoscelen Triangle\t");
						printf("3- Exit\n\n");
						printf("Enter your choice : ");
						scanf("%d",&op1);
						switch(op1)
						{
								printf("1- Perimeter of basic Triangle\t");
								printf("2- Area of basic Triangle\t");
								printf("3- Exit\n\n");
								printf("Enter your choice : ");
								scanf("%d",&op1);
							case 1:
								printf("Enter the base of isosceles triangle : ");
								scanf("%f",&a);
								printf("Enter the second side of isosceles triangle : ");
								scanf("%f",&b);
								printf("Enter the third side of isosceles triangle : ");
								scanf("%f",&c);
								per = (2 * a + b/*or 'c'*/);
								printf("Perimeter of Isosceles Triangle = %0.2f\n\n", per);
								break;
							case 2:
								printf("Enter the base of isosceles triangle : ");
								scanf("%f",&a);
								printf("Enter the second side of isosceles triangle : ");
								scanf("%f",&b);
								printf("Enter the third side of isosceles triangle : ");
								scanf("%f",&c);
								h = sqrt((b * b)-((a * a) / 4));
								ar = (1 / 2) * a/*base*/ * h/*hight*/ ;
								printf("Area of Isosceles Triangle = %0.2f\n\n", ar);
								break;
							case 3:
								return 0;
							default :
								printf("Invalid Choice\n\n");
								break;
						}
						break;
					case 4:
						printf("1- Perimeter of Basics Triangle\t");
						printf("2- Area of Basic Triangle\t");
						printf("3- Exit\n\n");
						printf("Enter your choice : ");
						scanf("%d",&op1);
						switch(op1)
						{
							case 1:
								printf("Enter the first side of basic triangle : ");
								scanf("%f",&a);
								printf("Enter the second side of basic triangle : ");
								scanf("%f",&b);
								printf("Enter the third side of basic triangle : ");
								scanf("%f",&c);
								s = (a + b + c);
								printf("Perimeter of basic Triangle = %0.2f\n\n", per);
								break;
							case 2:
								printf("Enter the base of a basic triangle : ");
								scanf("%f",&b);
								printf("Enter the hight of a basic triangle : ");
								scanf("%f",&h);
								ar = (1 / 2) * b/*base*/ * h/*hight*/ ;
								printf("Area of basic Triangle = %0.2f\n\n", ar);
								break;
							case 3:
								return 0;
							default :
								printf("Invalid choice");
								break;	
						}
						break;
					case 5:
						return 0;
					default :
						printf("Invalid Choice\n\n");
						break;
				}
			}
			break;
		case 8:
		//circle
			while(1)
			{
			printf("1- Perimeter of Circle Triangle\t");
			printf("2- Area of Circle Triangle\t");
			printf("3- Exit\n\n");
			printf("Enter your choice : ");
			scanf("%d",&op1);
			switch(op1)
				{
					double per;
					case 1:
						printf("Enter the Radius of a circle : ");
						scanf("%lf",&num1);
						per = 2 * Pi * num1 ;
						printf("Perimeter of circle = %lf\n",per);
						break;	
					case 2:
						printf("Enter the Radius of a circle : ");
						scanf("%lf",&num1);
						per = 2 * Pi * num1 * num1 ;
						printf("Area of circle = %lf\n",per);
						break;
					case 3:
						return 0;
					default :
						printf("Invalid Choise");
						break;
				}
			}
			break;
		case 9:
		//Sphere
			while(1)
			{
			printf("1- Diameter of Sphere Triangle\t");
			printf("2- Circumference of Sphere Triangle\t");
			printf("3- Surface Area of Sphere Triangle\n");
			printf("4- Volume of Sphere Triangle\t");
			printf("5- Exit\n\n");
			printf("Enter your choice : ");
			scanf("%d",&op1);
			switch(op1)
				{
					double per;
					case 1:
						printf("Enter the Radius of a sphere : ");
						scanf("%lf",&num1);
						per = 2 * num1 ;
						printf("Diameter of sphere = %lf\n\n",per);
						break;
					case 2:
						printf("Enter the Radius of a sphere : ");
						scanf("%lf",&num1);
						per = 2 * Pi * num1 ;
						printf("Circumference of sphere = %lf\n\n",per);	
						break;
					case 3:
						printf("Enter the Radius of a sphere : ");
						scanf("%lf",&num1);
						per = 4 * Pi * num1 * num1 ;
						printf("Surface Area of Sphere = %lf\n\n",per);
						break;
					case 4:
						printf("Enter the Radius of a sphere : ");
						scanf("%lf",&num1);
						per = (4/3) * Pi * num1 *num1 * num1 ;
						printf("Volume of sphere = %lf\n\n",per);
						break;
					case 5:
						return 0;
					default :
						printf("Invalid choise");
						break;
				}
			}
			break;	
		case 10: 
			return 0;	
		default :
			printf("Please select valid choise\n\n") ;
			break;
	}
	getch();
	}
}

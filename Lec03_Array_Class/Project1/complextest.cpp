//#include "Complex.h"
#include "Car.h"
void main()
{
	//Complex a, b, c;
	//a.read("A= ");
	//b.read("B= ");
	//c.add(a, b);
	//a.print("A= ");
	//b.print("B= ");
	//c.print("C= ");

	Car myCar;
	Car momsCar (10, "k5", 2);
	myCar.changeGear();
	myCar.display();
	myCar.speedUp();
	myCar.whereAmI();
	myCar.~Car();
}
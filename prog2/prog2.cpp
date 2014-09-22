#include <iostream>

#include <math.h>

using namespace std;

/*
Author: Logan Clarke
Lab Assignment #2
Purpose: This program calculates the amount of paint needed to paint a given area. 
It asks the user for the dimensions of the surface as well as the coverage in sq ft 
per gallon for the given area. It will output the amount of paint needed to paint the
surface (rounded up)* to the nearest gallon. 
*/

int main() {



double l, w, c, a, pn;
int ipn;

//Aquire the length, width, and coverage of the sureface to be painted from the user
cout<< "Please enter the length (in feet) of the surface to be painted: " <<endl;
cin>>l;
cout<< "Please enter the width (in feet) of the surface to be painted: " <<endl;
cin>>w;
cout<< "Please enter the coverage (in sq ft/gallon) of the surface to be painted: " <<endl;
cin>>c;

//calculate area
a = (l*w);

//calculate paint needed
pn = a/c;

/*convert pn to int and add if statement to ensure the pn is 
rounded up to the nearest gallon, the if statement will add 1 gallon 
to pn if pn is not a whole number */
ipn= int (pn);


if ((ipn/pn) != 0){
pn = ipn+1;
}


//output the paint needed
cout<< "The amount of paint needed is: " <<pn<<endl;

return 0;
}

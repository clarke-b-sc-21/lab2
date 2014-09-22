#include <iostream>
#include <math.h>

using namespace std;

/*

Author: Logan Clarke
Lab Assignment #2
Purpose: This program calculates the roots of a quadratic equation using 
the infamous quadratic formula. It asks the user for three coefficients (a,b, & c);
and displays the two roots. 
*/



int main() {


//Attain the coefficients from the user
double a,b,c,r1,r2;
cout<< "Please enter the first coefficient: " <<endl;
cin>> a;
cout<< "Please enter the second coefficient: " << endl;
cin>> b;
cout<< "Please enter the third coefficient: " << endl;
cin>> c; 


//Calculate the roots of the quadratic equation given by the coefficients
  r1= (  (-b) + (sqrt( (b*b) - (4*a*c) ))  ) / ( (2*a)  );  
  r2= (  (-b) - (sqrt( (b*b) - (4*a*c) ))  ) / ( (2*a)  );

//Display the roots once calculated
cout<< " The first root is: "  << r1 << endl;
cout<< " The second root is: "  << r2 << endl;

	return 0;


}

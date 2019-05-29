// Create a program that would compute the values based on the given sides of the triangle. 
// A. Compute for all Interior Angles of the triangle.
// B. Classify whether the triangle is Scalene, Isosceles, or Equilateral.
// C. Determine the Area and Perimeter of the triangle.
// D. Classify whether the triangle is Acute, Right, or Obtuse.
// E. Compute for length of Apothem and Circumcenter.


#include <iostream>
#include <cmath>
#define PI 3.14159265 //Constant Value of Pi

using namespace std;
 

double Angle(double a,double b,double c)
{
	// Formula to compute the Interior Angles
	double Theta = acos((pow(a,2)+pow(b,2)-pow(c,2))/(2*a*b))*180/PI;
	return Theta;
}

int main()
{
	double a,b,c;
	double A,B,C;
	double Perimeter, Area, P;
	double Apothem, Circumcenter;	

	// Input the measurements of the 3 sides
	cout << "\nEnter 1st side: "; 
	cin >> a;
	cout << "Enter 2nd side: "; 
	cin >> b;
	cout << "Enter 3rd side: "; 
	cin >> c;

	if(a+b>c && b+c>a && c+a>b)
	{
		
		A = Angle(b,c,a);
		B = Angle(c,a,b);
		C = 180-A-B;

		// Outputs the Interior Angles
		cout << "\nAngle A: " << A << endl;
		cout << "Angle B: " << B << endl;
		cout << "Angle C: " << C << endl;
		
		// Identifies if the Triangle is Equilateral, Scalemne, or Isosceles
		if(a == b && a == c && b == c)
		  cout << "\n(An Equilateral Triangle)" << endl;
		else if(a != b && a != c && b != c)
		  cout << "\n(A Scalene Triangle)" << endl;
		else
		  cout << "\n(An Isosceles Triangle)" << endl;
	
	
		// Formula to compute the Perimeter
		Perimeter = a + b + c;
		P=.5*Perimeter;
		// Formula to compute the Area
		Area=sqrt(P *(P - a)*(P - b)*(P - c)) ; 
		
		// Outputs the Perimeter and Area
		cout << "\nPerimeter: " << Perimeter << endl;
		cout << "Area: " << Area << endl;
		
		// Identifies if the Triangle is Acute, Obtuse, Right or Not a Triangle
		if(A>0 && A<90 && B>0 && B<90 && C>0 && C<90)
		  cout << "\n(An Acute Triangle)" << endl;
		else if(A>90 || B>90 || C>90)
		  cout << "\n(An Obtuse Triangle)" << endl;
		else if(a*a+b*b==c*c || b*b+c*c==a*a || c*c+a*a==b*b)
		  cout << "\n(A Right Triangle)" << endl;
	}
	else
		cout << "\nERROR! Not a triangle!";
			
	// Formula to compute the Apothem		
	Apothem = 2 * Area / Perimeter;
	
	// Formula to compute the Circumcenter
	Circumcenter = (a * b * c) / sqrt((a + b + c) * (b + c - a) * (a + b - c));
	
	// Outputs the Apothem and Circumcenter
	cout << "\nApothem of the triangle = " << Apothem << endl;
	cout << "Circumcenter of the triangle = " << Circumcenter << endl;
	
	return 0;
}


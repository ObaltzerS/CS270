#include <iostream>
using namespace std;

// printStars
// pre-condition: Receives integer argument telling how many stars to print.
// post-condition: Prints a row of numStars asterisks.
void printStars(int numStars)
{
  int s = 0;
  while(s < numStars) {
    cout << "*";
    s++;
  }
  cout << endl;
}

// findBoxVolume
// pre-condition: Receives double arguments for width, height, and depth of a box.
// Assume that the three given dimensions are all positive > 0.
// post-condition: return volume as a type double value.
double findBoxVolume(double width, double height, double depth) 
{
  // compute product of box width x height x depth
  double v = width * height * depth;
	
	return v;
}

// TRY IT #4 EXTRA WORK
// Define a function to find the area of a circle using the formula 
// area is equal to 3.141 times radius squared.
// Next, add a statement to call and your new function.

double areaCircle(double radius){

	double area = (3.141 * (radius * radius));
	return area;
}

// findCircleArea
// pre-condition: receives a type double value for the radius
// post-condition: returns area as a type double value.


int main() {
	printStars(10);
	printStars(20);
	
	// TRY IT #1. Print a row of 30 stars.
	
	
	// TRY IT #2. Write a while counting loop that counts from 1 to 20.
	//            Inside the body of the while loop, call printStars with the loop counter variable as the argument.
	//            What shape do you expect this loop to print?

	// a triangle
	for (int i = 20; i > 0; i--){
		printStars(i);
	}

	// a square
	for (int i = 0; i < 20; i++){
		printStars(20);
	}
	
	cout << "Volume of a box is " << findBoxVolume(2, 4, 3) << " cubic inches" << endl;
	
	// TRY IT #3. Prompt the person to enter type double values for width, height, and depth.
	// Call findBoxVolume passing it the variables that hold the person's three input values.
	// Print a message indicating the volume of the shape.

	
	double width;
	cout << "Please enter the width: " << endl;
	cin >> width;

	double radius;
	cout << "enter area of circle";
	cin >> radius;
	cout << endl;
	cout << areaCircle(radius) << " is the area of a circle with radius " << radius << endl;
	
}


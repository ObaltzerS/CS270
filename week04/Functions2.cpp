#include <iostream>
using namespace std;

// TRY IT: 
// What happens if we move the function definitions after/below the main function definition?

// the main function then knows the definitions of the child functions, with main before it doesnt know 


// Example function that receives no arguments, returns no value.
void printStars()
{
  int s = 0;
  while(s < 10) {
    cout << "*";
    s++;
  }
  cout << endl;
}

// Example function that receives, no arguments, returns a type double value.
double findBoxVolume() 
{
  // compute product of box width x height x depth
  double v = 2 * 4 * 3;
	
	return v;
}

int main() {
	printStars();
	
	cout << "Volume of a box is " << findBoxVolume() << " cubic inches" << endl;
	
	double boxVolume = findBoxVolume();
	cout << "The box volume is " << boxVolume << " cubic inches" << endl;
	
	if ( findBoxVolume() > 20 )
		cout << "Box volume is more than 20." << endl;
}
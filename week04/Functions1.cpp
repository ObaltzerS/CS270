#include <iostream>
using namespace std;

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
	// Experiment and observe. Type your responses in // comments for each TRY IT question.
	
	// TRY IT #1. What happens if we type the comment // before both of these two statements?
	//printStars();
	//printStars();
	
	// TRY IT #2. Why don't we get any visible numeric result from these two statements?
	cout << "Calling findBoxVolume..." << endl;
	findBoxVolume();
	
	// TRY IT #3. Why do we get a visible numeric result this time?
	cout << "Volume of a box is " << findBoxVolume() << " cubic inches" << endl;
	
	double boxVolume = findBoxVolume();
	cout << "The box volume is " << boxVolume << " cubic inches" << endl;
	
	// TRY IT #4. Call findBoxVolume() as part of the Boolean Question for an if-else statement.
	// Example. if volume of the box is more than 20 then print one message; else, print another.

	if (findBoxVolume() > 20){
		cout << "box volume is greater than 20" << endl;

	}
	
	// TRY IT #5. Call findBoxVolume() as part of a while loop's Boolean condition.
	// Example. while loopCounter < findBoxVolume call printStars()

	int counter = 0;
	while (findBoxVolume() > counter){
		cout << counter << endl;
		counter++;
	}
	
	return 0;
}

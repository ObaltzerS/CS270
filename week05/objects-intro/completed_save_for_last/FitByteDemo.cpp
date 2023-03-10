#include <iostream>
#include "FitByte.h"

int main() 
{
  std::cout << "FitByte Marathon Walker!\n";
	
	// (1) Declare a FitByte object
	FitByte Alice;
	
	// (2) Walk some miles
	Alice.walk(10);
	Alice.walk(5);
	
	// (3) Call methods to get and print distance and calories
	std::cout << "Distance walked today: " << Alice.getMilesWalked() << " miles." << std::endl;
	std::cout << "Calories burned today: " << Alice.getCaloriesBurned() << std::endl;
	
	return 0;
}
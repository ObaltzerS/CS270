#include <iostream>
#include <cmath>

using namespace std;

int main(){
    cout << "enter the temperature" << endl;
    double T;
    cin >> T;
    cout << "enter windspeed" << endl;
    double V;
    cin >> V;
    int windchill;
    windchill = 35.74 + 0.6215 * T - 35.75 * pow(V, 0.16) + 0.4275 * T * pow(V, 0.16);
    cout << windchill;

    return 0;
}
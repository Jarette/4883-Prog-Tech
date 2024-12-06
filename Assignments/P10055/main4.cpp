/**
* Name: Jarette Greene 
* Course 4883 Programming Techniques
* Date: 9/7/2024
*/
#include <iostream>
#include <sstream>
#define endl "\n"

using namespace std;
int main() {
	// storing input values
    long int B = 0, A = 0;
	stringstream ss;

	// looping through all values in input file 
    while (cin >> A >> B) {
		// performs subtraction based on which value is greater to ensure
		// no negative results
		if (A > B){
			//  saving result to buffer
			ss << A - B << endl;
		}else{
			ss << B - A << endl;
		}
	}
	// displaying buffer
	cout << ss.str();
    return 0;
}
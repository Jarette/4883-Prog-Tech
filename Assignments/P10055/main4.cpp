/**
* Name
* Course
* Date
*/
#include <iostream>
#include <sstream>
#define endl "\n"

using namespace std;
int main() {
    long int B = 0, A = 0;
	stringstream ss;

    while (cin >> A >> B) {
		if (A > B){
			ss << A - B << endl;
		}else{
			ss << B - A << endl;
		}
	}
	cout << ss.str();
    return 0;
}
// P05 Interstate Highways
//		Determine whether highway number is a primary or auxiliary highway, north/south, or east/west
// Samantha Roldan
//

#include <iostream>  
using namespace std;

int main() {
	int highwayNumber;
	int primaryNumber;

	cout << "*** P05: Interstate Highways ***";
	cout << endl;

	cout << endl;
	cout << "Enter Highway Number (valid 1 through 999): ";
	cin >> highwayNumber;

	if ((highwayNumber >= 1) && (highwayNumber <= 999)) {  // if a valid highway number
		if (highwayNumber > 99) { // if highway number is auxiliary
			primaryNumber = highwayNumber % 100;
			cout << endl;
			cout << "I-" << highwayNumber << " is auxiliary, serving I-" << primaryNumber << ", going ";
		}
		else {  // if highway number is primary
			primaryNumber = highwayNumber;
			cout << endl;
			cout << "I-" << highwayNumber << " is primary, going ";
		}
		if (primaryNumber % 2 == 0) {  // if primary number is even
			cout << "east/west." << endl;
		}
		else {  //if primary number is odd
			cout << "north/south." << endl;
		}
	}
	else { // if highway number is not within the range
		cout << endl;
		cout << highwayNumber << " is not a valid interstate highway number" << endl;
	}

	return 0;
}
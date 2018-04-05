#include <iostream>
#include <cstring>
using namespace std;

class BirthDate {
	public:
		int year;
		int month;
		int day;
		void print () {
			cout << month << "/" << day<< "/" << year;
		}
		
};

int main () {
	
	BirthDate bob;
	
	
	cout << "Enter Bob's birthday day: ";
	cin >> bob.day;
	
	cout << "Enter Bob's birthday month: ";
	cin >> bob.month;
	
	cout << "Enter Bob's birthday year: ";
	cin >> bob.year;
	
	cout << " Bob's birthday is : ";
	bob.print ();
	cout << endl;
	
	return 0;
	
}
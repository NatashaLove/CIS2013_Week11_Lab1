#include <iostream>
#include <cstring>
using namespace std;

struct myDate {
int day;
int month;
int year;	
	
};

struct Person {
	myDate birthday;
	string firstname;
	string lastname;
	int age;
}

void printmyDate (Person d);

int main () {
	
	myDate bob_bday;
	myDate tom_bday;
	Person bob;
	bob.firstname = "Bob";
	bob.lastname = "Rockers";
	bob.age = 41;
	
	/*cout << "Enter Bob's birthday day: ";
	cin >> bob_bday.day;
	
	cout << "Enter Bob's birthday month: ";	
	cin >> bob_bday.month;
	
	cout << "Enter Bob's birthday year: ";
	cin >> bob_bday.year;
	
	cout << "Bob's DOB is ";
	printmyDate (bob_bday);*/
	
	cout << "Enter" << bob.firstname << "birthday day: ";
	cin >> bob.birthday.day;
	// etc with .month, .year..
	
	cout << bob.firstname << " " << bob.lastname << "DOB :"
	
	printmyDate (bob);
	
	cout <<endl;
	
	// cout << "Tom has the same DOB : ";
	
	// tom_bday = bob_bday;
	
	// printmyDate (tom_bday);
	
	return 0;
}

void printmyDate (Person d) {
	
	cout << d.birthday.month << "/" << d.birthday.day << "/" << d.birthday.year;
}
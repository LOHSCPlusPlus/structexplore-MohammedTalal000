#include <iostream>
using namespace std;

// Put the person struct here
  struct PersonName {
    string firstName;
    string lastName;
    PersonName();
  };

  PersonName::PersonName() {
    firstName = "Unknown";
    lastName = "Unknown";
  }

int main() {
	// Create two instances of person here, and assign the names.
  PersonName person1;
    cout << "First name: " << person1.firstName << endl << "last Name: " << person1.lastName << endl << endl;

  PersonName person2;
    cout << "First name: " << person2.firstName << endl << "last Name: " << person2.lastName << endl << endl;

	// Add the prints here

	return 0;
}

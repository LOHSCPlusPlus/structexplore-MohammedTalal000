#include <iostream>
using namespace std;

// Put the person struct here
  struct PersonName {
    string firstName;
    string lastName;
  };

int main() {
	// Create two instances of person here, and assign the names.
  PersonName person1;
  PersonName person2;

  person1.firstName = "Dorian";
  person1.lastName = "Gray";

  person2.firstName = "Charlie";
  person2.lastName = "Brown";

	// Add the prints here

  cout << "First name: " << person1.firstName << endl << "last Name: " << person1.lastName << endl << endl;
  cout << "First name: " << person2.firstName << endl << "last Name: " << person2.lastName << endl << endl;

	return 0;
}

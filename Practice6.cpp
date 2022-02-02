#include <iostream>
using namespace std;

// Put the person struct here
  struct PersonName {
    string firstName;
    string lastName;
    PersonName();
    PersonName(string first, string last);
  };

  PersonName::PersonName() {
    firstName = "Unknown";
    lastName = "Unknown";
  }
  PersonName::PersonName(string first, string last) {
    firstName = first;
    lastName = last;
  }


void printPerson(PersonName person) {

cout << "First name: " << person.firstName << endl << "last Name: " << person.lastName << endl << endl;

}

void ChangeLastName(PersonName &person, string lastName) {
  lastName = "Torvalds";
  person.lastName = lastName;

}


int main() {
	// Create two instances of person here, and assign the names.
  PersonName person1("Linus", "Van Pelt");
  printPerson(person1);
  ChangeLastName(person1, person1.lastName);
  printPerson(person1);

  PersonName person2;
  printPerson(person2);

	// Add the prints here

	return 0;
}

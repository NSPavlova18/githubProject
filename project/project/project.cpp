// project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

struct ACCOUNT {
	string firstName = "";
	string lastName = "";
	int age = 0;;
	string country = "";
	string city = "";
	int id = 0;
};

struct SHOE {
	string gender = "";
	string brand = "";
	string model = "";
	double size;
	string color = "";
	double price;
	int id = 0;
};

 /*
 void signUp(ACCOUNT person[], int& accountCount) {
	cout << "\nEnter your first name: ";
	cin >> person[accountCount].firstName;

	cout << "\nEnter your last name: ";
	cin >> person[accountCount].lastName;

	cout << "\nEnter your age: ";
	cin >> person[accountCount].age;

	cout << "\nEnter your country: ";
	cin >> person[accountCount].country;

	cout << "\nEnter your country: ";
	cin >> person[accountCount].city;

	accountCount++;
}
*/

void insertDeliver(SHOE deliver[], int& deliverCount) {
	cout << "\nEnter gender: ";
	cin >> deliver[deliverCount].gender;

	cout << "\nEnter shoe brand: ";
	cin >> deliver[deliverCount].brand;

	cout << "\nEnter shoe model: ";
	cin >> deliver[deliverCount].model;

	cout << "\nEnter shoe size: ";
	cin >> deliver[deliverCount].size;

	cout << "\nEnter shoe color: ";
	cin >> deliver[deliverCount].color;

	cout << "\nEnter shoe price: ";
	cin >> deliver[deliverCount].price;

	deliverCount++;
}

/*
ACCOUNT searchForAccount(ACCOUNT* people, int& accountCount, int id) {

	for (int i = 0; i < accountCount; i++) {
		if (people[i].id == id) {
			return people[i];
		}
	}
	
}
*/

void editDeliver(SHOE deliver[], int& deliverCount) {
	string gender;
	string brand;
	string model;
	double size;
	string color;
	double price;

	cout << "\nEnter gender: ";
	cin >> gender;

	cout << "\nEnter shoe brand: ";
	cin >> brand;

	cout << "\nEnter shoe model: ";
	cin >> model;

	cout << "\nEnter shoe size: ";
	cin >> size;

	cout << "\nEnter shoe color: ";
	cin >> color;

	cout << "\nEnter shoe price: ";
	cin >> price;

	for (int i = 0; i < deliverCount; i++) {

		if (deliver[i].gender == gender && deliver[i].brand == brand && deliver[i].model == model && deliver[i].size == size && deliver[i].color == color && deliver[i].price == price) {

			for (int i = 0; i < deliverCount; i++) {
				deliver[i] = deliver[i + 1];
			}
		}
		deliverCount--;
	}

}

/*
void newAccount(ACCOUNT* people, int& accountCount, ACCOUNT newAccount, int& maxId) {
	newAccount.id = maxId;
	people[accountCount] = newAccount;
	accountCount++;
	maxId++;
}
*/

/*
void showAccounts(ACCOUNT* people, SHOE deliver[], int& accountCount, int& maxId, int& deliverCount) {

	cout << "ACCOUNTS:" << endl;
	cout << endl;

	for (int i = 0; i < accountCount; i++) {

		cout << i + 1 << ". " << people[i].firstName << " " << people[i].lastName << ", ";
		cout << people[i].age << " years old ";
		cout << "From " << people[i].city << ", " << people[i].country << endl;

		cout << endl;
		cout << "\n List of the delivers: " << endl;
		cout << endl;

		for (int i = 0; i < deliverCount; i++)
		{
			cout << deliver[i].gender << "," << deliver[i].brand << "," << deliver[i].model << endl;
			cout << deliver[i].size << "," << deliver[i].color << "," << deliver[i].price << endl;

		}
		cout << endl;
	}

}
*/



bool showMainMenu(SHOE deliver[], ACCOUNT person[], ACCOUNT* people, int& deliverCount, int& accountCount, int& maxId) {
	int choice;

	cout << "\n*********************************************" << endl;
	cout << "*                                           *" << endl;
	cout << "*W E L C O M E   T O   S H O E   H E A V E N*" << endl;
	cout << "*                                           *" << endl;
	cout << "*********************************************" << endl;
	cout << "?WHAT DO YOU WANT TO DO?" << endl;
	cout << "Choose:" << endl;
	cout << "1. Sign up" << endl;
	cout << "2. Make a deliver" << endl;
	cout << "3. Edit deliver" << endl;
	cout << "4. View account's delivers" << endl;
	cout << "5. View cash" << endl;
	cout << "9. Exit" << endl;
	cout << "Your choice: ";

	cin >> choice;

	switch (choice) {
	/*
	case 1: {
		signUp(person, accountCount);
		break;
	}
	*/
	/*
	case 2: {
		insertDeliver(deliver, deliverCount);
		break;
	}
	*/
	case 3: {
		editDeliver(deliver, deliverCount);
		break;
	}
	/*
	case 4: {
		showAccounts(people, deliver, accountCount, maxId, deliverCount);
		break;
	}
	*/
	case 5: {
		;
		break;
	}
	case 9: {
		return false;
	}
	default:
		break;

	}
}

int main()
{
	cout << "Hello";
}



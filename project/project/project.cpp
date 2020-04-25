// project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct SHOE{
	string gender = "";
	string brand = "";
	string model = "";
	double size = 0;
	string color = "";
	double price = 0;
	int id = 0;
};

void insertDeliver(SHOE deliver[], int& deliverCount){
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

void deleteDeliver(SHOE deliver[], int& deliverCount){
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

		if (deliver[i].gender == gender and deliver[i].brand == brand and deliver[i].model == model and deliver[i].size == size and deliver[i].color == color and deliver[i].price == price) {

			for (int i = 0; i < deliverCount; i++) {
				deliver[i] = deliver[i + 1];
			}
		}
		deliverCount--;
	}

}

void showDeliverMenu(SHOE deliver[], int& deliverCount) {

	cout << "\n List of your deliver: " << endl;

	for (int i = 0; i < deliverCount; i++)
	{
		cout << deliver[i].gender << "," << deliver[i].brand << "," << deliver[i].model << endl;
		cout << deliver[i].size << "," << deliver[i].color << "," << deliver[i].price << endl;

	}
}

bool showMainMenu(SHOE deliver[], int& deliverCount) {
	int choice;

	cout << "\n*********************************************" << endl;
	cout << "*                                           *" << endl;
	cout << "*W E L C O M E   T O   S H O E   H E A V E N*" << endl;
	cout << "*                                           *" << endl;
	cout << "*********************************************" << endl;
	cout << "?WHAT DO YOU WANT TO DO?" << endl;
	cout << "Choose:" << endl;
	cout << "1. Make a deliver" << endl;
	cout << "2. Edit deliver" << endl;
	cout << "3. Delete deliver" << endl;
	cout << "4. View your deliver" << endl;
	cout << "5. Accessories" << endl;
	cout << "9. Exit" << endl;
	cout << "Your choice: ";

	cin >> choice;

	switch (choice) {
	case 1: {
		insertDeliver(deliver, deliverCount);
		break;
	}
	case 2: {
		;
		break;
	}
	case 3: {
		deleteDeliver(deliver, deliverCount);
		break;
	}
	case 4: {
		showDeliverMenu(deliver, deliverCount);
		break;
	}
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
	
}



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

void insertDeliver(SHOE deliver[], int& deliverCount)
{
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

void deleteDeliver(SHOE deliver[], int& deliverCount)
{
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

int main()
{
	
}



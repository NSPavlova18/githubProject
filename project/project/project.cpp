// project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

struct SHOE{
	string gender = "";
	string brand = "";
	string model = "";
	double size = 0;
	string color = "";
	double price = 0;
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

int main()
{
	
}



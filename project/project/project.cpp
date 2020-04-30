#include <iostream>
#include <string>
#include <Windows.h>
#include <stdlib.h>

using namespace std;


bool orderPlaced_Checker = false;

bool account_Created = false;


struct parameters {

	string gender, brand, model, color;
	double size;
} shoe;

struct credentials {

	string email, name, gender, city, address;
} user;





void startMenu() //mainmenu function 
{
	system("cls");

	cout << "\n***********************************************" << endl;
	cout << "*                                             *" << endl;
	cout << "* W E L C O M E   T O   S H O E   H E A V E N *" << endl;
	cout << "*                                             *" << endl;
	cout << "***********************************************" << endl;
	cout << "?WHAT DO YOU WANT TO DO?" << endl;
	cout << "Choose:" << endl;
	cout << "1. Sign up" << endl;
	cout << "2. Make an order" << endl;
	cout << "3. Edit order" << endl;
	cout << "4. View cart" << endl;
	cout << "5. Exit" << endl;
	cout << "Your choice: ";
}

void sign_Up() //signup function 
{

    account_Created = true;

    string user_gender;

    system("cls");

    cout << "Sign up form" << endl;

    cout << "What is your name" << endl;
    cin >> user.name;

    cout << "What is your gender(male, female)" << endl;
    cin >> user.gender;

    cout << "email:" << endl;
    cin >> user.email;

    cout << "City:" << endl;
    cin >> user.city;

    cout << "Address:" << endl;
    cin >> user.address;


}




void take_Order() //takeOrder function 
{

 


    system("cls");

 

    cout << "Enter the brand of your shoe: ";
    cin >> shoe.brand;

 

    cout << "Enter the model of the shoe: ";
    cin >> shoe.model;

 

    cout << "Enter the type of the shoe (for male/female): ";
    cin >> shoe.gender;

 

    cout << "Select a color (white, black, red, blue or yellow):" << endl;

 

    cin >> shoe.color;

 

    cout << "Type the size of the shoe: ";
    cin >> shoe.size;

 


    cout << "Your order was placed! ";

 

    orderPlaced_Checker = true;

 

    Sleep(2000);

 

    startMenu();

 

}




void orderIsShipping() //shipping order
{
	system("cls");

	if (account_Created == true)
	{
		cout << "Order is now shipping to: " << user.city << " Address:" << user.address << endl;

		cout << "You will recieve an email to : " << user.email << " when your order has arrived!";

		Sleep(5000); //pause for 5 seconds
	}

	else
	{

		string choice;

		cout << "You don't have an account!" << endl;
		cout << "Make one?" << endl;
		cin >> choice;


		if (choice == "yes") sign_Up();

		else startMenu();
	}

}

void place_Order() //placeorderfunction
{
	system("cls");

	if (orderPlaced_Checker == true)
	{

		string choice;

		cout << "Place order for: " << shoe.brand << " " << shoe.model << " " << shoe.color << " " << shoe.gender << " " << shoe.size << endl;
		cin >> choice;

		if (choice == "yes") orderIsShipping(); 

		else
		{
			cout << "Order canceled!";
		}

		Sleep(1000); //pause for 1 second


	}

	else
	{
		cout << "It seems that your cart is empty!";
	}


}







void edit_Order()
{
    system("cls");

 

    string choice;

 

    cout << "Your order is: " << endl;
    cout << "Brand:" << shoe.brand << endl;
    cout << "Model: " << shoe.model << endl;
    cout << "Type exit if you want to exit: "<<endl;

 

    cout << "Type the parameter you want to edit: " << endl;
    cin >> choice;

 

    if (choice == "brand")
    {
        cin >> shoe.brand;
    }

 

    if (choice == "exit")
    {
        startMenu();
    }

 

}

void view_Cart()
{

	string choice;

	cout << "********** C A R T **********" << endl;

	cout << "The brand of your shoe is: " << shoe.brand << endl;
	cout << "The model of your shoe is: " << shoe.model << endl;
	cout << "The type of the shoe is (for male/female): " << shoe.gender << endl;
	cout << "The color of the shoe: " << shoe.color << endl;



	cout << "Place order?: ";
	cin >> choice;

	if (choice == "yes")place_Order();

}


int main()
{
	int choice;

	do {

		system("cls");

		startMenu();

		cin >> choice;

		if (choice == 1) sign_Up();
		if (choice == 2) take_Order();
		if (choice == 3) edit_Order();
		if (choice == 4) view_Cart();



	} while (choice != 5);






}

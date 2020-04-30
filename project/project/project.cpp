#include <iostream>
#include <string>
#include <Windows.h>
#include <stdlib.h>

using namespace std;





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




//shipping order (Yavor)









//place order function (Iliya)





//edit order function (Nevenna)

//view cart func (Yavor)


//int main (Iliya)
#include <iostream>
#include <string>
#include <Windows.h>


using namespace std;

bool orderPlacedChecker = false; //bool to check if the user's order is placed

bool accountCreated = false; // bool to check if our user is registered in the system, so he can place his order


struct PARAMETERS { //all parameters of the shoe

    string gender, brand, model, color;
    double size;

} shoe;


struct CREDENTIALS { //our user's data

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


void signUp() //here our user can make an account into our system, so he can place an order

{
    accountCreated = true;

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


void takeOrder() //here we declare an order into the system
{

    system("cls");

    cout << "Enter the brand of your shoe: ";
    cin >> shoe.brand;

    cout << "Enter the model of the shoe: ";
    cin >> shoe.model;

    cout << "Enter the gender of the shoe (for male/female): ";
    cin >> shoe.gender;

    cout << "Select a color (white, black, red, blue or yellow):" << endl;
    cin >> shoe.color;

    cout << "Type the size of the shoe: ";
    cin >> shoe.size;

    cout << "Your order was placed! ";

    orderPlacedChecker = true;

    Sleep(2000);

    startMenu();

}


void orderIsShipping() //this function ships the order to the adress that our user gave us
{

    system("cls");

    if (accountCreated == true)
    {

        cout << "Order is now shipping to: " << user.city << " Address:" << user.address << endl;
        cout << "You will recieve an email to : " << user.email << " when your order has arrived!";

        Sleep(5000); //pause for 5 seconds

    }

    else
    { // here it uses the account_created bool so we can know if our client has an account, so we can know where to send the shoes to

        string choice;

        cout << "You don't have an account!" << endl;
        cout << "Make one?" << endl;

        cin >> choice;

        if (choice == "yes") signUp();

        else startMenu();

    }

}



void placeOrder() //here we ask the user if he wants to place his order

{

    system("cls");

    if (orderPlacedChecker == true)
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

    else //this pops if he hasn't made an order yet
    {

        cout << "It seems that your cart is empty!";

    }

}



void editOrder() // here our client can edit his order. This makes it much more faster to change an order, because

//he doesn't have to do the hole proccess again

{

    system("cls");

    string choice;

    cout << "Your order is: " << endl;
    cout << "Brand:" << shoe.brand << endl;
    cout << "Model: " << shoe.model << endl;
    cout << "Gender: " << shoe.gender << endl;
    cout << "Color: " << shoe.color << endl;
    cout << "Size: " << shoe.size << endl;

    cout << "Type exit if you want to exit: " << endl << endl;

    do {

        cout << "Type the parameter you want to edit: " << endl;

        cin >> choice;


        if (choice == "brand" || choice == "Brand")
        {

            cout << endl << "Please type the new brand:" << endl;

            cin >> shoe.brand;

        }


        if (choice == "model" || choice == "Model")
        {

            cout << endl << "Please type the new shoe model:" << endl;

            cin >> shoe.model;

        }



        if (choice == "gender" || choice == "Gender")
        {

            cout << endl << "Please type the new gender:" << endl;

            cin >> shoe.gender;

        }



        if (choice == "model" || choice == "Model")
        {

            cout << endl << "Please type the new color:" << endl;

            cin >> shoe.color;

        }


        if (choice == "size" || choice == "Size")
        {

            cout << endl << "Please type the new size:" << endl;

            cin >> shoe.size;

        }

    } while (choice != "exit");


    if (choice == "exit")

    {

        cout << endl;
        cout << "Your changes have been saved :)";

        Sleep(3000);

        startMenu();

    }


    cout << "Type the parameter you want to edit: " << endl;

    cin >> choice;


    if (choice == "exit")
    {

        cout << endl;

        cout << "Your changes have been saved :)";

        Sleep(3000);


        startMenu();

    }

}



void viewCart() // here our client can inspect his cart and the orders he made
{

    string choice;

    cout << "********** C A R T **********" << endl;

    cout << "The brand of your shoe is: " << shoe.brand << endl;
    cout << "The model of your shoe is: " << shoe.model << endl;
    cout << "The gender of the shoe is (for male/female): " << shoe.gender << endl;
    cout << "The color of the shoe: " << shoe.color << endl;

    cout << "Place order?: ";

    cin >> choice;

    if (choice == "yes") placeOrder();

}



int main()
{

    int choice;

    do {

        system("cls");

        startMenu();

        cin >> choice;


        if (choice == 1) signUp();

        if (choice == 2) takeOrder();

        if (choice == 3) editOrder();

        if (choice == 4) viewCart();

        if (choice == 5) exit(0);

    } while (choice != 5);
    



}


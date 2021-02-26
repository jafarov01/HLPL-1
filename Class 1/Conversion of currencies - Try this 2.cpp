//---------------------------------------------Part 1 - Try This Exercises ----------------------------------------------------
#include "std_lib_facilities.h"
//----------------------------------------Conversion of currencies - Try this 2----------------------------------------------------

int menu()
{
    int choice;
    cout << "\t\t1- Japanese yen to USD\n";
    cout << "\t\t1- Euro to USD\n";
    cout << "\t\t1- British pound to USD\n";

    cout << "--> Enter your choice of exchange (1, 2, 3): ";
    cin >> choice;
    return choice;
}

void conversion()
{
    int amount;
    int option = menu();
    constexpr double pound = 1.384185;
    constexpr double euro = 1.21258;
    constexpr double yen = 0.009556;

    if (option == 1)
    {
        cout << "--> Enter the amount of Japanese yen: ";
        cin >> amount;
        cout << amount << " yen" << " = " << amount * yen << char(36) << endl;
    }
    else if (option == 2)
    {
        cout << "--> Enter the amount of Euro: ";
        cin >> amount;
        cout << amount << " euro" << " = " << amount * euro << char(36) << endl;
    }
    else if (option == 3)
    {
        cout << "--> Enter the amount of British Pound: ";
        cin >> amount;
        cout << amount << " pound" << " = " << amount * pound << char(36) << endl;
    }
    else
    {
        cout << "\tWRONG INPUT!\n";
        menu();
    }
}


int main() 
{
    conversion();
    return 0;
}

//-----------------------------------------------------------------------------------------------------------------------------
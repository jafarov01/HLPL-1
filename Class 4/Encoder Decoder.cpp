#include "std_lib_facilities.h"
#include "encoder.h"
#include "decoder.h"


int main()
{
    int option;

    cout << "|-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n\n";
    cout << "\t\t1- Encoding\n\t\t2- Decoding\n\t\t3- Exit\n\n";
    cout << "|-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n\n";
    cout << "Your Option: ";
    cin >> option;
    switch (option)
    {
    case 1:
        encoder();
        break;
    case 2:
        decoder();
        break;
    case 3:
        exit(0);
    default:
        break;
    }

}


#include "std_lib_facilities.h"
#include <Windows.h>
const int number_of_inputs_encoder = 15;

void encoder()
{
    system("cls");
    int encoder_array[number_of_inputs_encoder] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
    int N = 0;  //
    int K = 0;  // 1 <= K <= 10
    int number;
    int chooseOut;
    int count = 0;
    ofstream outFile, encoded;

    outFile.open("inputForEncoding.txt");
    encoded.open("encoded.txt");
    cout << ">>> ";
    cin >> N;
    outFile << N << endl;
    for (int i = 0; i < N; i++)
    {
        cout << ">>> ";
        cin >> K;
        outFile << K;
        for (int j = 0; j < K; j++)
        {
            cin >> number;
            outFile << ' ' << number;
            encoder_array[number - 1]++;
        }
        outFile << endl;

        for (int k = 0; k < number_of_inputs_encoder; k++)
        {
            for (int h = 0; h < encoder_array[k]; h++)
            {
                for (int n = 0; n < k + 1; n++)
                    encoded << '1';
                if (encoder_array[k] != 0)
                    encoded << '-';
            }
        }
        encoded << endl;

        for (int m = 0; m < number_of_inputs_encoder; m++) {
            encoder_array[m] = 0;
        }
    }

    //printing the output from the file;
    cout << "\n\n|-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n\n";
    cout << ">>> Your message has been taken and encoded.\n\n";
    cout << "\t\t1- Open the input and ouput files\n\t\t2- Print the output here\n";
    cout << "\n\n|-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n\n";
    cout << "Your option: ";
    cin >> chooseOut;
    switch (chooseOut)
    {
    case 1:
    {
        ShellExecuteW(NULL, L"open", L"C:\\Users\\Mexluq\\source\\repos\\Encoder\\encoded.txt", L"", L"C:\\Users\\Mexluq\\source\\repos\\Encoder\\", SW_SHOW);
        ShellExecuteW(NULL, L"open", L"C:\\Users\\Mexluq\\source\\repos\\Encoder\\inputForEncoding.txt", L"", L"C:\\Users\\Mexluq\\source\\repos\\Encoder\\", SW_SHOW);
        break;
    }
    case 2:
    {
        cout << "\n\n|-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n\n\n";

        cout << ifstream("encoded.txt").rdbuf();

        cout << "\n\n\n|-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n";
        break;
    }
    default:
        break;
    }


    outFile.close();
    encoded.close();
}
#include "std_lib_facilities.h"

const int number_of_inputs_decoder = 15;

void decoder()
{
    system("cls");
    int decoder_array[number_of_inputs_decoder] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
    int N = 0;  //
    int K = 0;  // 1 <= K <= 10
    int number;
    int count_digits = 0;
    int optionOut;
    ofstream out_encoded, decoded;

    out_encoded.open("inputForDecoding.txt");
    decoded.open("decoded.txt");
    cout << ">>> ";
    cin >> N;
    out_encoded << N << endl;
    for (int i = 0; i < N; i++)
    {
        cout << ">>> ";
        cin >> K;
        out_encoded << K;
        for (int j = 0; j < K; j++)
        {
            cin >> number;
            out_encoded << ' ' << number;
            count_digits = 0;
            while (number != 0)
            {
                count_digits++;
                number /= 10;
            }
            if (count_digits < 10)
                decoder_array[count_digits - 1]++;
        }
        out_encoded << endl;

        for (int k = 0; k < 9; k++) //indices of array
        {
            for (int h = 0; h < decoder_array[k]; h++) //the value in each index
            {
                decoded << k + 1;
            }
            if (decoder_array[k] != 0)
                decoded << '-';
        }
        decoded << endl;
        for (int m = 0; m < number_of_inputs_decoder; m++) {
            decoder_array[m] = 0;
        }
    }

    //printing the output from the file;
    cout << "\n\n|-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n\n";
    cout << ">>> Your message has been taken and encoded.\n\n";
    cout << "\t\t1- Open the input and ouput files\n\t\t2- Print the output here\n";
    cout << "\n\n|-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n\n";
    cout << "Your option: ";
    cin >> optionOut;
    switch (optionOut)
    {
    case 1:
    {
        ShellExecuteW(NULL, L"open", L"C:\\Users\\Mexluq\\source\\repos\\Encoder\\decoded.txt", L"", L"C:\\Users\\Mexluq\\source\\repos\\Encoder\\", SW_SHOW);
        ShellExecuteW(NULL, L"open", L"C:\\Users\\Mexluq\\source\\repos\\Encoder\\inputForDecoding.txt", L"", L"C:\\Users\\Mexluq\\source\\repos\\Encoder\\", SW_SHOW);
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

    out_encoded.close();
    decoded.close();
}
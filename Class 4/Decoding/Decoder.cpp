#include "std_lib_facilities.h"

int main()
{
    int arr[9] = { 0,0,0,0,0,0,0,0,0 };
    int N = 0;  //
    int K = 0;  // 1 <= K <= 10
    int number;
    int count_digits = 0;
    ofstream out_encoded, decoded;

    out_encoded.open("out_encoded.txt");
    decoded.open("decoded.txt");

    cin >> N;
    out_encoded << N << endl;
    for (int i = 0; i < N; i++)
    {
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
                arr[count_digits - 1]++;
        }
        out_encoded << endl;
        
        for (int k = 0; k < 9; k++) //indices of array
        {
            for (int h = 0; h < arr[k]; h++) //the value in each index
            {
                decoded << k + 1;
            }
            if (arr[k] != 0)
                decoded << '-';
        }
        decoded << endl;
        arr[0] = 0; arr[1] = 0; arr[2] = 0;
        arr[3] = 0; arr[4] = 0; arr[5] = 0;
        arr[6] = 0; arr[7] = 0; arr[8] = 0;
    }
    out_encoded.close();
    decoded.close();
}
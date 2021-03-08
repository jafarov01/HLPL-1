#include "std_lib_facilities.h"

int main()
{
    int arr[9] = { 0,0,0,0,0,0,0,0,0 };
    int N = 0;  //
    int K = 0;  // 1 <= K <= 10
    int number;
    int count = 0;
    ofstream outFile, encoded;

    outFile.open("outfile.txt");
    encoded.open("encoded.txt");

    cin >> N;
    outFile << N << endl;
    for (int i = 0; i < N; i++)
    {
        cin >> K;
        outFile << K;
        for (int j = 0; j < K; j++)
        {
            cin >> number;
            outFile << ' ' << number;
            arr[number - 1]++;
        }
        outFile << endl;

        for (int k = 0; k < 9; k++)
        {
            for (int h = 0; h < arr[k]; h++)
            {
                for (int n = 0; n < k + 1; n++)
                    encoded << '1';

                if (arr[k] != 0)
                    encoded << '-';
            }
        }
        encoded << endl;
        arr[0] = 0; arr[1] = 0; arr[2] = 0;
        arr[3] = 0; arr[4] = 0; arr[5] = 0;
        arr[6] = 0; arr[7] = 0; arr[8] = 0;
    }
    outFile.close();
    encoded.close();
}


/*
*   Copyright (C) 2021-02-10 Jafarov Makhlug 
*   
*   The purpose of this code is a real example of censorship of curse words in applications - ex.given: games.
*
*   This code is made by Me, just as simple as shown below. You can freely take this code and modify if necessary. Glad this code will help you. Regards!

*   //github.com/jafarov01
*   //https://www.linkedin.com/in/jafarov01/
*/
//---------------------------------------------Part 1 - Try This Exercises ----------------------------------------------------
#include "std_lib_facilities.h"
//----------------------------------------Bleep disliked words - Try this 6----------------------------------------------------

int main()
{
    bool check = false;
    vector <string> words;
    vector <string> disliked = {"sikim", "amk", "fuck", "asshole"};
    cout << "Enter words... \n";
    for (string word; cin >> word;) {
        check = false;
        for (string n : disliked)
        {
            if (n == word)
            {
                words.push_back("Bleep");
                check = true;
            }
        }
        if (check == false)
            words.push_back(word);
    }
    cout << "\n-----------------------------------------------------------\n";
    for (string s : words)
    {
        cout << s << endl;
    }
    return 0;
}
//-----------------------------------------------------------------------------------------------------------------------------
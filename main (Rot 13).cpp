#include <iostream>
#include <string>
using namespace std;

// FCI – Programming 1 – 2018 - Assignment 2
// Program Name: Rot 13 cipher
// Last Modification Date : 3/3/2018
// Author1 and ID and Group : 20170085 , G4
// Teaching Assistant: Eng . El - Desouqi

int main()
{
    cout << "1-cipher \n2-Decipher\n your choice : "; // the user choose what he want to do
    int decision;
    cin >> decision ;
    while (decision < 1 || decision > 3 )
    {
        cout << "please enter number from 1 and 2 " ;
        cin >> decision ;
    }
    string the_word ;
    if (decision == 1)
    {
        cout << "Please enter the text : " ; // taking the text from user
        cin.ignore();
        getline(cin, the_word);
        for (int i=0 ; i < the_word.length() ; i++  )
        {
            the_word[i] = tolower(the_word[i]) ;
            if ((the_word[i] - 'a') < 13) //check if the character at the first 13 characters in the alphabet or the second
                // convert each character
                the_word [i] = (the_word[i]) + 13;
            else
                the_word [i] = (the_word[i]) - 13;
        }
    }
    if (decision == 2)
    {
        cout << "please enter the cipher text :" ; //taking cipher text from the user and convert each character
        cin.ignore() ;
        getline(cin, the_word);
        for (int c = 0 ; c < the_word.length() ; c++  )
        {
            the_word[c] = tolower(the_word[c]) ;
            if ((the_word[c] - 'a') < 13 )
                the_word [c] = (the_word[c]) + 13 ;
            else
                the_word[c] = (the_word[c]) - 13;
        }

    }
    cout << the_word ;


    return 0;
}

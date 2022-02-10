//**************************************************************************
//Author:       Kristy Wheeler
//Project:      LuhnProject
//Date:         2/8/22
//Description:  This program improves upon the Luhn function by including input
//              validation...FIXME
//Sources:      https://www.geeksforgeeks.org/luhn-algorithm/
//**************************************************************************

#include "functions.h"

// Driver code
int main()
{
    //prompt user and collect card input
    string cardNum;
    cout << "Please enter a card number without spaces: ";
    cin >> cardNum;

    int size;
    size = cardNum.length();
    //invoke function to check user input
    while (!(checkInput(cardNum, size))) {
         cout << "Invalid input. Please enter again: ";
         cin >> cardNum;
         size = cardNum.length();
    }

    if (checkLuhn(cardNum)) {
        cout << "This is a valid card";
    }
    else
        cout << "This is not a valid card number.";
    return 0;
}

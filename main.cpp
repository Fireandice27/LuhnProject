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
    //prompt user for card input and
    string cardNum;
    cout << "Please enter a card number without spaces: ";
    cin >> cardNum;

    //check user input


    if (checkLuhn(cardNum))
        cout << "This is a valid card";
    else
        cout << "This is not a valid card number.";
    return 0;
}

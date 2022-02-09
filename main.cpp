#include <bits/stdc++.h>
#include "functions.h"
#include <iostream>
using namespace std;


// Driver code
int main()
{
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

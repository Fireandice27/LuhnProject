//
//
//

#include "functions.h"

// Returns true if given card number is valid
bool checkLuhn(const string& cardNum)
{
    int numDigits = cardNum.length();

    int nSum = 0, isSecond = false;
    for (int i = numDigits - 1; i >= 0; i--) {

        int d = cardNum[i] - '0';

        if (isSecond == true)
            d = d * 2;

        // We add two digits to handle
        // cases that make two digits after
        // doubling
        nSum += d / 10;
        nSum += d % 10;

        isSecond = !isSecond;
    }
    return (nSum % 10 == 0);
}
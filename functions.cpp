#include "functions.h"

// returns true if given card number is valid per Luhn algorithm
bool checkLuhn(const string& cardNum)
{
    int numDigits = cardNum.length();

    // uncomment to enable unit test
    // testDigitLength(numDigits, cardNum);

    int nSum = 0, isSecond = false;
    for (int i = numDigits - 1; i >= 0; i--) {

        int d = cardNum[i] - '0';

        if (isSecond == true)
            d = d * 2;

        // We add two digits to handle cases that make
        // two digits after doubling
        nSum += d / 10;
        nSum += d % 10;

        isSecond = !isSecond;
    }

    return (nSum % 10 == 0);
}

// returns true if input is valid
bool checkInput(string &cardNum, int size) {
    bool validInput = true;
    //check that all values in string are digits
    for (int i; i <= size - 1; i++) {
        if (!isdigit(cardNum[i])) {
            validInput = false;
        }
    }
    //check for 15 or 16 digit length
    if (size < 15 || size > 16) {
        validInput = false;
    }
    return validInput;
}

// unit test to check that no cardNum anomalies slipped through
bool lengthMatch (int numDigits, int cardNumLength) {
    bool doesLengthMatchNumDigits = (numDigits == cardNumLength);
    return doesLengthMatchNumDigits;
}

// call this when unit testing is desired
// will output 1 if values match
void testDigitLength(int numDigits, string cardNum) {
    cout << lengthMatch(numDigits, cardNum.length());
}
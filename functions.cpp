#include "functions.h"

// Returns true if given card number is valid per Luhn algorithm
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
// returns true if input is valid
bool checkInputDigits(string &cardNum, int size) {
    //fails the error checking if a character is entered that is not a digit
    for (int i; i <= size - 1; i++) {
        if (!isdigit(cardNum[i])) {
            return false;
        }
    }
    return true;
}
bool checkInputLength (string &cardNum, int size) {
    if (size < 15 || size > 16) {
        return false;
    }
    return true;
}
//void testDigits() {
//    cout << checkInput()
//}
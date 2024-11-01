#include <iostream>
#include <cmath>
using namespace std;

int main () {
    cout << "Welcome to Armstrong number identifier !!!" << endl;
    int num, originalNum, remainder, result = 0;
    int n = 0; // Number of digits

    cout << "Enter an integer: ";
    cin >> num;

    originalNum = num;

    // Find the number of digits in num
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    // Compute the sum of the power of each digit
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    // Check if num is an Armstrong number
    if (result == num)
        cout << num << " is an Armstrong number." << endl;
    else
        cout << num << " is not an Armstrong number." << endl;


    return 0;
}
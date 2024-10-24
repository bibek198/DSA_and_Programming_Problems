// Write a program that takes a number as input and output whether
// the number is prime or not prime

#include <iostream>
using namespace std;

void prime_checker(int num) {
    // num < 1 should be corrected to num <= 1, because 1 is not a prime number.
    if (num <= 1) {
        cout << "Neither Prime nor not prime" << endl;
        return;
    }

    int divider = 2;
    //The loop condition divider * divider < num should be divider * divider <= num
    //so that numbers like 9 (which have a square root as a divisor) are handled correctly.
    //Why use divider * divider <= num is part of optimizing the code.
    while (divider * divider <= num) {
        if (num % divider == 0) {
            cout << "Not Prime" << endl;
            return; 
            // not the "break"
            // Consider using return statements after printing "Not Prime" or "Prime"
            // to terminate the function immediately, ensuring only one message is printed.
        }
        divider++;
    }
    cout << "Prime" << endl;
}


int main () {
    int num;
    cout << "Welcome to Prime Checkter !!!" << endl;
    cout << "Enter a number : " ;
    cin >> num;
    prime_checker(num);

}


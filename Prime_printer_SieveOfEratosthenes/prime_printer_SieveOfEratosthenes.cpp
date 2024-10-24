// Write a program that prints all the prime from 0 to given number n (n inclusive)

#include <iostream>
using namespace std;

void print_prime (int num) {
      if (num < 2) {
        cout << "No primes available" << endl;
        return;
    }

    // Initialize all elements to 1 (true) for primes
    int prime[num + 1];
    for (int i = 0; i <= num; i++) {
        prime[i] = 1;
    } 

    int divider = 2;
    while (divider * divider <= num) {
        if (prime[divider] == 1) {
             // Mark multiples of the divider as non-prime
            for (int i = divider * divider; i <= num; i += divider) {
                prime[i] = 0;
            }
        }
        divider++;
    }

    // Print prime numbers
    for (int i = 2; i <= num; i++) {
        if (prime[i] == 1) {
            cout << i << " " ;
        }
    }
    cout << endl;
}

int main () {
    cout << "Welcome to Prime Printer !!!" << endl;
    int num;
    cout << "Enter a number : " ;
    cin >> num;
    cout << "List of print is : " ;
    print_prime(num);

}
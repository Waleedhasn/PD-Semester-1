#include <iostream>
using namespace std;

bool isPrime(int number);

int main() {
    int number;
    cout << "Enter Number: ";
    cin >> number;
    if (isPrime(number)) {
        cout << number << " is a prime number." << endl;
    } else {
        cout << number << " is not a prime number." << endl;
    }
}

bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }
    for (int i = 2; i <= number / 2; i=i+1) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

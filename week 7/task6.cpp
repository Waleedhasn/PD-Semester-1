#include <iostream>
using namespace std;

bool isPrime(int num);
int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Primorial(" << n << ") = " << primorial(n) << endl;
    return 0;
}
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
 primorial(int n)  result = 1;
    int count = 0;
    int num = 2;
    
    while (count < n)
     {
        if (isPrime(num)) {
            result *= num;
            count++;
        }
        num=num+1;
    }
    
    return result;
}



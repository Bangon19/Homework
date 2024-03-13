#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int number) {
    if (number <= 1) {
        return false; // False
    }
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return false; // False
        }
    }
    return true; // True
}

int main() {
    int inputNumber;
    cout << "Nhập số nguyên cần kiểm tra: ";
    cin >> inputNumber;

    if (isPrime(inputNumber)) {
        cout << inputNumber << " là số nguyên tố" << endl;
    } else {
        cout << inputNumber << " không phải là số nguyên tố" << endl;
    }

    return 0;
}
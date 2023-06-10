#include <iostream>
#include <cmath>
#include < Windows.h>
using namespace std;

bool isPrime(int num) {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    if (num < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

void findTwinPrimes(int N) {
    
    cout << "Прості здвоєні числа, менші за " << N << ": ";

    for (int p = 2; p < N - 2; p++) {
        if (isPrime(p) && isPrime(p + 2)) {
            cout << "(" << p << ", " << p + 2 << ") ";
        }
    }

    cout << endl;
}

int main() {
    int N;
    cout << "Введіть число N: ";
    cin >> N;

    findTwinPrimes(N);

    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cin >> n;
    if (n < 2) {
        cout << "Not Prime" << endl;
        return 0;
    }
    bool isPrime = true;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }
    if (isPrime)
        cout << n << " is Prime" << endl;
    else
        cout << n << " is Not Prime" << endl;
    return 0;
}

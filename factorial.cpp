#include <iostream>

using namespace std;

int factorial(int n) {
    if (n <= 0 ) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    cout << "3 factorial is: " << factorial(3) << endl;
    cout << "6 factorial is: " << factorial(6) << endl;
    cout << "-5 factorial is: " << factorial(-5) << endl;
}
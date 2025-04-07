#include <iostream>
using namespace std;

int main() {
    int i = 2, j = 3, k = 4;
    i = i++ + ++j;
    j = j-- - --k;
    k = --i * j++;
    cout << "i = " << i << ", j = " << j << ", k = " << k << endl;
    return 0;
}
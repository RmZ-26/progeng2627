#include <iostream>
using namespace std;

void printSorted(int n1, int n2) {
    if (n1 <= n2) {
        cout << n1 << " " << n2 << endl;
    } else {
        cout << n2 << " " << n1 << endl;
    }
}

int main() {
    int n1, n2;
    cout << "Enter a number: " << endl;
    cin >> n1;
    cout << "Enter another number: " << endl;
    cin >> n2;

    printSorted(n1, n2);
    return 0;
}
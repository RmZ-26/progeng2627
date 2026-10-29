#include <iostream>
using namespace std;
#include <cmath>

int main(){
    int base, number, i=1, sum=0;
    cout << "enter base" << endl;
    cin >> base;
    cout << "enter number" << endl;
    cin >> number;
    while (i <= number){
        sum += pow(base, i);
        i++;
    }
cout << "Sum of powers =" << sum;
}


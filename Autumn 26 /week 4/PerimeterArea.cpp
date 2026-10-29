#include <iostream>
using namespace std;

void calc(int length, int width, int&perimeter, int&area){
perimeter = ((length * 2) + (width * 2));
area = (length * width);
}

int main(){
    int length, width, perimeter, area;
    cout << "enter length" << endl;
    cin >> length;
    cout << "enter width" << endl; 
    cin >> width;
calc(length, width, perimeter, area);
cout << perimeter << endl;
cout << area << endl;
}

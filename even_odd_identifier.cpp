#include <iostream>
using namespace std;

int main() {
int n;
cout << "Enter the number you want to check: ";         //INPUT N
cin >> n;

if (n % 2 == 0) {
    cout << "The number entered is even\n" << endl;    //EVEN CASE
}
else { 
    cout << "The number entered is odd\n" << endl;     //ODD CASE
}

return 0;
}

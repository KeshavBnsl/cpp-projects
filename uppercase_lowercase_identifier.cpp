#include <iostream>
using namespace std;

int main() {

char ch;
cout << "Enter the character: "; 
cin >> ch;

if(ch >= 'a' && ch <= 'z') {
   cout << "Entered character is lowercase" << endl;
} 
else if(ch >= 'A' && ch <= 'Z') {
   cout << "Entered character is uppercase" << endl;
}
else{
    cout << "Invalid character entered" << endl;
}

return 0;
}

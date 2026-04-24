#include <iostream> 
using namespace std;

int main() {

int n;
cout << "Enter the value of number you want to check: ";  //FOR INPUT
cin >> n;

if (n > 0) {
    cout << "Number entered is positive\n" << endl;
} 
else if(n == 0) {                                        //IF N=0
    cout << "Number entered is zero\n" << endl;
}
else {
    cout << "Number entered is negative\n" << endl;
}

return 0;
}

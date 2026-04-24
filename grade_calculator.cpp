#include <iostream>
using namespace std;

int main() {

    int s1,s2,s3,s4,s5;

    cout << "Enter the marks obtained in Maths: ";
    cin >> s1;

    cout << "Enter the marks obtained in English: ";
    cin >> s2;

    cout << "Enter the marks obtained in Physics: ";
    cin >> s3;

    cout << "Enter the marks obtained in Chemistry: ";
    cin >> s4;

    cout << "Enter the marks obtained in Physical Education: ";
    cin >> s5;

    float total = s1 + s2 + s3 + s4 + s5;
    cout << "Total Marks obtained = " << total << endl;

    float percent = (total / 500)*100;
    cout << "Percentage = " << percent << endl;

    if(percent >= 90) {
        cout << "Grade = A" << endl;
    }
    else if(percent >= 75 && percent <= 89) {
        cout << "Grade = B" << endl;
    }
    else if(percent >= 60 && percent <= 74) {
        cout << "Grade = C" << endl;
    }
    else if(percent >= 45 && percent <= 59) {
        cout << "Grade = D" << endl;
    }
    else{
        cout << "Grade = F" << endl;
    }

return 0;
}

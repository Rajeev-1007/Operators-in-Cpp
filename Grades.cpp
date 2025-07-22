#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e;
    float avg;

    cout << "Enter English Marks: ";
    cin >> a;
    cout << "Enter Math Marks: ";
    cin >> b;
    cout << "Enter Science Marks: ";
    cin >> c;
    cout << "Enter Social Science Marks: ";
    cin >> d;
    cout << "Enter Hindi Marks: ";
    cin >> e;

    avg = (a + b + c + d + e) / 5.0;

    cout << "Average Marks: " << avg << endl;

    if (avg >= 90)
        cout << "Grade: A+" << endl;
    else if (avg >= 80)
        cout << "Grade: A" << endl;
    else if (avg >= 70)
        cout << "Grade: B" << endl;
    else if (avg >= 60)
        cout << "Grade: C" << endl;
    else if (avg >= 50)
        cout << "Grade: D" << endl;
    else
        cout << "Grade: F" << endl;

    return 0;
}
# Operators-in-Cpp
# Name: Rajeev Ramesh Reddy E
# PRM: 24070123081
Aim: To study and implement Operators in C++.


Software used: VS Code.

Theory:
C++ provides a rich set of operators that perform various operations on data. Arithmetic operators (+, -, *, /, %) handle basic math, while relational operators (==, !=, <, >, <=, >=) compare values. Logical operators (&&, ||, !) are used in decision-making constructs like if and while. Assignment operators (=, +=, -=, *=, /=, %=) update variable values, and bitwise operators (&, |, ^, ~, <<, >>) manipulate binary data directly. C++ also supports increment/decrement (++, --), conditional (?:), and comma (,) operators for advanced usage. The sizeof operator determines memory usage, and type cast operators convert data types. Operators can be overloaded within classes to define custom behaviors. Mastery of these operators enhances code efficiency, clarity, and flexibility across applications.


CODE: Here's a C++ program to check if the number is positive or negative using operators.


    #include <iostream>
    using namespace std;

    int main()
    {
    int number;
    cout << "Enter number: ";
    cin >> number;

    if (number > 0)
    {
        cout << "Number is positive";
    }
    else if (number < 0)
    {
        cout << "Number is negative";
    }
    else
    {
        cout << "Number is zero";
    }

    return 0;
    }

CODE: Here's a C++ program to calculate an indivual's grade using operators.

    #include <iostream>
    using namespace std;

    int main()
    {
    int a, b, c, d, e;
    float avg;

    cout << "Enter English Marks: ";
    cin >> a;
    cout << "Enter Math marks: ";
    cin >> b;
    cout << "Enter Science marks: ";
    cin >> c;
    cout << "Enter Social Science marks: ";
    cin >> d;
    cout << "Enter Hindi marks: ";
    cin >> e;

    avg = (a + b + c + d + e) / 5.0;

    if (avg > 80 && avg < 90)
    {
        cout << "Grade A";
    }
    else if (avg > 70 && avg <= 80)
    {
        cout << "Grade B";
    }
    else if (avg >= 60 && avg <= 70)
    {
        cout << "Grade C";
    }
    else if (avg >= 50 && avg < 60)
    {
        cout << "Grade D";
    }
    else
    {
        cout << "Grade F";
    }

    return 0;
    }

CODE: Here's a C++ program to check the quadrant in which the co-ordinates are present using operators.

    #include <iostream>
    using namespace std;

    int main()
    {
    int x;
    int y;

    cout << "Enter co-ordinate x: ";
    cin >> x;

    cout << "Enter co-ordinate y: ";
    cin >> y;

    if (x > 0 && y > 0)
    {
        cout << "Coordinates are in the first quadrant";
    }
    else if (x < 0 && y > 0)
    {
        cout << "Coordinates are in the second quadrant";
    }
    else if (x < 0 && y < 0)
    {
        cout << "Coordinates are in the third quadrant";
    }
    else if (x > 0 && y < 0)
    {
        cout << "Coordinates are in the fourth quadrant";
    }
    else if (x != 0 && y == 0)
    {
        cout << "Coordinates are on the x-axis";
    }
    else if (x == 0 && y != 0)
    {
        cout << "Coordinates are on the y-axis";
    }
    else if (x == 0 && y == 0)
    {
        cout << "Coordinates are at the origin";
    }

    return 0;
    }
    

Conclusion: C++ operators enable efficient data manipulation, logic control, and decision-making. Mastering them ensures cleaner code, optimized performance, and enhanced problem-solving across diverse applications.




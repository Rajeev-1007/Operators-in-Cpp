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
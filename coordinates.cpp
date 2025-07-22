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
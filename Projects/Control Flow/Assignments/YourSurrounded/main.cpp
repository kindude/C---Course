#include <iostream>

using namespace std;

int main()
{
    int x, y;
    int rectangle_x{20}, rectangle_y{10};

    cout << "Welcome to territory control. Please type in your x and y positions" << endl;
    cout << "Type in your x location : " << endl;
    cin >> x;
    cout << "Type in your y location : " << endl;
    cin >> y;

    if ( x * y > rectangle_x * rectangle_y)
        cout << "You are out of reach!" << endl;
    else 
        cout << "You are completely surrounded. Don't move !";

    return 0;
}

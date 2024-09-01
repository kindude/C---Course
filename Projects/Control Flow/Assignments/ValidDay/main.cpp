#include <iostream>

using namespace std;

int main()
{

    const int Monday{1};
    const int Tuesday{2};
    const int Wednesday{3};
    const int Thursday{4};
    const int Friday{5};
    const int Saturday{6};
    const int Sunday{7};

    int day;

    cout << "Which day is today [1 : Monday, ... , 7: Sunday] : " << endl;
    cin >> day;

    switch (day)
    {
    case Monday:
        cout << "Today is Monday. Let's have some fun" << endl;
        break;

    case Tuesday:
        cout << "Today is Tuesday. Let's have some fun" << endl;
        break;

    case Wednesday:
        cout << "Today is Wendesday. Let's have some fun" << endl;
        break;
    case Thursday:
        cout << "Today is Thursday. Let's have some fun" << endl;
        break;
    case Friday:
        cout << "Today is Friday. Let's have some fun" << endl;
        break;
    case Saturday:
        cout << "Today is Saturday. Let's have some fun" << endl;
        break;

    case Sunday:
        cout << "Today is Sunday. Let's have some fun" << endl;
        break;

    default:
        cout << day << " is not a valid day. Bye!" << endl;
        break;
    }

    return 0;
}

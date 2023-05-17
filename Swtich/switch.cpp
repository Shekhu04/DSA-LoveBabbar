#include <iostream>
using namespace std;

int main()
{

    char ch = '1';
    int num = 1;

    cout << endl;

    switch (ch)
    {

    case 1:
        cout << "First" << endl;
        break;

    case '1':
        switch (num)
        {
        case 1:
            cout << "Value of num is " << num << endl;
            break;
        }
        break;

    default:
        cout << "It is default case" << endl;
    }
    cout << endl;

    switch (num)
    {

    case 1:
        cout << "First" << endl;
        break;

    case '1':
        switch (num)
        {
        case 1:
            cout << "Value of num is " << num << endl;
            break;
        }
        break;

    default:
        cout << "It is default case" << endl;
    }
    cout << endl;

    switch (2 * num)
    {

    case 1:
        cout << "First" << endl;
        break;

    case '1':
        switch (num)
        {
        case 1:
            cout << "Value of num is " << num << endl;
            break;
        }
        break;

    case 2:
        cout << "Second" << endl;
        break;

    default:
        cout << "It is default case" << endl;
    }
    cout << endl;
}

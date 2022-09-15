#include <iostream>
using namespace std;
int main()
{
    char button;
    cout << "input a charater: ";
    cin >> button;

    switch (button)
    {
    case 'a':
        cout << "Hello" << endl;
        break;
    case 'b':
        cout << "Bhollaa" << endl;
        break;
    case 'c':
        cout << "Cioa" << endl;
        break;

    default:
        cout << "I am still learning more" << endl;
        break;
    }
    return 0;
}
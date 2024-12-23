#include <iostream>

using namespace std;

int main()
{
    char a;
    cout<<"enter a character";
    cin>>a;
    switch(a)
    {
    case 'A':
        cout<<"character is A";
        break;

    case 'B':
        cout<<"character is B";
        break;
        case 'C':
        cout<<"character is C";
        break;
        case 'D':
        cout<<"character is D";
        break;
        default:
            cout<<"invalid character";
    }
    return 0;

}

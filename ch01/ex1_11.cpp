#include <iostream>
using namespace std;

int main()
{
    int begin = 0;
    int end = 0;
    cout << "Enter two numbers: ";
    cin >> begin >> end;
    
    int min = 0;
    int max = 0;
    if (begin < end) {
        min = begin;
        max = end;
    }
    else {
        min = end;
        max = begin;
    }
    while (min <= max) {
        cout << min << " ";
        ++min;
    }
    cout << endl;

    return 0;
}
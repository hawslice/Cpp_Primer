#include <iostream>
using namespace std;

int main()
{
    int null = 0, *p = &null;
    cout << typeid("hello").name() << endl;
    return 0;
}
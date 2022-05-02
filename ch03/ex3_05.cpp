#include <iostream>
#include <string>
using namespace std;

int main()
{
    string line;
    string str;
    cin >> line;
    while (cin >> str) {
        line += " ";
        line += str;
    }
    cout << line << endl;
    return 0;
}
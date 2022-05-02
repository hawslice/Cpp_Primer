#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    string::size_type str1_size = str1.size();
    string::size_type str2_size = str2.size();

    if (str1_size == str2_size) {
        cout << "equal" << endl;
    }
    else {
        if (str1_size > str2_size) {
            cout << str1 << endl;
        }
        else {
            cout << str2 << endl;
        }
    }

    return 0;
}
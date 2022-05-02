#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<string> vec;
    string line;
    while (getline(cin, line)) {
        vec.push_back(line);
    }
    for (const string &str : vec) {
        cout << str << endl;
    }

    return 0;
}
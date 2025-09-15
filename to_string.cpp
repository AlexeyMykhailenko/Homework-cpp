#include <iostream>
#include <string>
#include <format>
using namespace std;

int main(){
    int x;
    string s;
    cout << "Enter a number: ";
    cin >> x;

    s = to_string(x);

    cout << format("Number {} is now converted to string - {}", x, s) << endl;

    return 0;
}

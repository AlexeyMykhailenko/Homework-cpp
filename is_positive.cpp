#include <iostream>
#include <format>
using namespace std;


int main(){
    int x;
    cout << "Enter a number to check it: ";
    cin >> x;

    if(x > 0){
        cout << format("This number ({}) is positive", x) << endl;

    } else if (x < 0 ){
        cout << format("This number ({}) is negative", x) << endl;

    } else {
        cout << format("Number {} is neither positive nor negative", x) << endl;
    }
    
    return 0;
}

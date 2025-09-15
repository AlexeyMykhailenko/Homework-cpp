#include <iostream>
#include <format>
using namespace std;

int main() {
    const char * str = "String";
    int length = 0;
    
    while(str[length] != '\0'){
        length++;
    }
    
    cout << format("Length is {}", length) << endl;
    
}

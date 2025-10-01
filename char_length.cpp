#include <iostream>

int main() {
    const char * str = "String";
    int l = 0;
    
    while(str[l] != '\0'){
        l++;
    }
    
    std::cout << "Length is " << l << std::endl;
    
}

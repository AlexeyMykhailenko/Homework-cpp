#include <iostream>
// #include <string>
// #include <format>
// using namespace std;

//int main(){
//    int x;
//    string s;
//    cout << "Enter a number: ";
//    cin >> x;

//    s = to_string(x);

//    cout << format("Number {} is now converted to string - {}", x, s) << endl;

//    return 0;
//}

const unsigned int in_num = 2342352345;

int main(){
    std::cout << "In num: " << in_num << std::endl;
    unsigned int current_num = in_num;
    while (current_num > 0)
    {
        int last_digit = current_num % 10;
        std::cout << last_digit << std::endl;
        current_num /= 10;
    }
    
    std::cout << current_num << std::endl;
}

#include <iostream>

int main(){
    int sum = 0;

    int x;
    std::cout << "Enter a limit: ";
    std::cin >> x;
    
    int y;
    std::cout << "Enter a limit: ";
    std::cin >> y;
    
    if(x > y){
        x+=1;
        y-=1;

        for(int i = y; i < x; i++) {
            if(i % 2 == 1) continue;

            sum+=i;
        }
        std::cout << "Sum - " << sum << std::endl;

    } else if (y > x) {
        x-=1;
        y+=1;

        for(int i = x; i < y; i++){
              if(i % 2 == 1) continue;
  
            sum+=i;
        }
        std::cout << "Sum - " << sum << std::endl;

    } else{
        std::cout << "An error occured. No integer found in this interval!" << std::endl;
        }
    
}

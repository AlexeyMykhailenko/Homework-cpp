#include <iostream>
using namespace std;

int main(){
    int sum = 0;

    int x;
    cout << "Enter a limit: ";
    cin >> x;
    
    int y;
    cout << "Enter a limit: ";
    cin >> y;
    
    if(x > y){
        x+=1;
        y-=1;

        for(int i = y; i < x; i++) {
            if(i % 2 == 1) continue;

            sum+=i;
        }
        cout << "Sum - " << sum << endl;

    } else if (y > x) {
        x-=1;
        y+=1;

        for(int i = x; i < y; i++){
              if(i % 2 == 1) continue;
  
            sum+=i;
        }
        cout << "Sum - " << sum << endl;

    } else{
        cout << "An error occured. No integer found in this interval!" << endl;
        }
    
}

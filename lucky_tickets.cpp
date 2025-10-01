#include <iostream>

int* arr(int x){
   int *num = new int[6];
   int y = 5;
   while(x){
      num[y--] = x%10;
      x /= 10;
   }

   return num;
}

bool chck(int x) {
   int *n = arr(x);

   int pt1 = n[0] + n[1] + n[2];
   int pt2 = n[3] + n[4] + n[5];

   return (pt1 == pt2);
}

int main(){
   int  *n = arr(5);
   const int lim = 1000000;

   for (int i = 0; i < lim; i++) {
      if (chck(i)) {
         std::cout << i << '\n';
      }
   }
}

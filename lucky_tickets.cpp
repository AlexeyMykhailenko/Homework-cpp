#include <iostream>

int* numarray(int v){
   int *num = new int[6];
   int i = 5;
   while(v){
      num[i--] = v%10;
      v /= 10;
   }

   return num;
}

bool tix(int v) {
   int *n = numarray(v);

   int batch1 = n[0] + n[1] + n[2];
   int batch2 = n[3] + n[4] + n[5];

   return (batch1 == batch2);
}

int main(){
   int  *n = numarray(5);

   for (int i = 0; i < 1000000; i++) {
      if (tix(i)) {
         std::cout << i << '\n';
      }
   }
}

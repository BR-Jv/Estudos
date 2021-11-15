#include <iostream>;

using namespace std;

int main(){
   float x, r;
   cin >> x;
   if(x > 0){
      r = 5*x + 10;
   }else if(x == 0) {
      r = 1;
   } else {
      r = 2*x + 1;
   }
   cout << r;
   return 0;
}

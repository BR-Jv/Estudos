#include <iostream>;

using namespace std;

int main(){
   int x, y;
   
   cin >> x;
   x >= 0 ? y = 5*x + 2 : y = 3*x + 1;
   cout << y ;
   return 0;
}

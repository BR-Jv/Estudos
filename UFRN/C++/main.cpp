#include <iostream>

using namespace std;

int main(){
   int x, y , z, t;
   cin >> x >> y >> z;
   if(x < y){ // 12 < 3 
      t = x; //
      x = y; //
      y = t; //
   }
   if(x < z){ //12 < 15
      t = x; // t = 12
      x = z; // x = 15
      z = t; // z = 12
   }
   if(y < z){ //3<15
      t = y; //t = 3
      y = z; //y = 12
      z = t; //z = 3
   }
   cout << x << " " << y << " " << z << endl;
   return 0;
}
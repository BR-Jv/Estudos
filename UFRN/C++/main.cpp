#include <iostream>

using namespace std;

int main(){
   int x = 5, y = 7;
   x = x++ + ++x;
   y += -x;
   cout<<"x: "<<x<<"y: "<<y;
}
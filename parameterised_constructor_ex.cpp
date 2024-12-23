#include<iostream>
using namespace std;
class add{
int a,b;
public:
   add(int x,int y){
   a=x;
   b=y;
   }
   int sum()
   {
   return(a+b);
   }
   };
   int main()
   {
   add d(10,20);
   cout<<"sum="<<d.sum();
   return 0;
   }

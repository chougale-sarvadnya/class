#include<iostream>
using namespace std;
class add{
int a,b;
public:
   void getdata(int x,int y)
   {
   a=x;
   b=y;
   }
   friend int sum(add d);
   };
   int sum(add d){
   return(d.a+d.b);
   }
   int main(){
   add d;
   d.getdata(10,20);
   cout<<"sum"<<sum(d);
   return 0;
   }

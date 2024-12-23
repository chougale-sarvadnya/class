#include<iostream>
using namespace std;
class circle{
float r,area;
public:
   void display(){
   area=3.14*r*r;
   cout<<"area:"<<area;
   }
};
int main(){
circle c;
c.r=2;
c.display();
return 0;
}

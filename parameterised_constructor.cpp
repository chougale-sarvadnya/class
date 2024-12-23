#include<iostream>
using namespace std;
class rect{
float area;
public:
    rect()
    {
    area=0;
    }
rect(int a, int b)
{
area=a*b;
}
void display()
{
cout<<"area is:"<<area<<endl;
}
};
int main()
{
rect r;
rect r1(10,20);
r.display();
r1.display();
return 0;
}

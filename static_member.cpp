#include<iostream>
using namespace std;
class value
{
static int count;
public:
void display()
{
cout<<"\n no of objects are created"<<count<<endl;
}
};
int value::count;
int main()
{
value a,b,c;
a.display();
b.display();
c.display();
return 0;
}

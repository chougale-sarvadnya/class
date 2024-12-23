#include<iostream>
using namespace std;
class sample{
int a,b;
public:
sample(int x,int y)
{
a=x;
b=y;
}
void display()
{
cout<<"a"<<a;
cout<<"b"<<b;
}
};
int main(){
sample s(10,20);
s.display();
return 0;
}

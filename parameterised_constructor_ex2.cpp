#include<iostream>
#include<string.h>
using namespace std;
class student{
char name[20];
public:
student(char*n)//parameterised constructor
{
strcpy(name,n);
}
void display()
{
cout<<"Hello"<<name;
}};
int main(){
student s("chaitali");
s.display();
return 0;
}

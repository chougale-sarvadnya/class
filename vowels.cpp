#include<iostream>
using namespace std;
int main(){
char a;
cout<<"enter a character:";
cin>>a;
switch(a)
{
case 'a':
case'e':
case'i':
case'o':
case'u':
cout<<"character is vowel";
break;
default:

cout<<"character is not vowel ";
}
return 0;
}

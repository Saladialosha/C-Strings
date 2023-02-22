#include<iostream>
using namespace std;
#include<string>
main()
{
string a("onetwothree");
char y=a.at(4);
cout<<y<<endl;
cout<<a.substr(2,4)<<endl;
cout<<a.find_last_of('r')<<endl;
}

#include<iostream> 

using namespace std ;

int main()
{
int a=20;
//int* b=(int*)a;
int* c=&a;
cout<<"Value of A:"<<a<<endl;
//cout<<"Address of A in memory:\t"<<b<<endl;
cout<<"Address of A in memory using c:\t"<<c<<endl;
cout<<"Value at Address of A in memory using c:\t"<<*c<<endl;
return 0;
}
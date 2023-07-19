#include<iostream> 

using namespace std; 

int main(){

int nos[]={12,22,32};

int* d=nos;
cout<<"Address of array \t"<<nos<<endl;
cout<<"Address of array through 'D'\t"<<d;
return 0;
}
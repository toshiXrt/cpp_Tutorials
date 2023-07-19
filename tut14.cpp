#include<iostream> 

using namespace std; 
union gfg{
char a;
int b;
double c;
};
int main()
{
	gfg a1;
	a1.a='X';
	cout<<"The character value is :\t"<<a1.a<<endl;
	cout<<"The character value address is :\t"<<&(a1.a)<<endl;
	a1.b=352;
	cout<<"The integer value is :\t"<<a1.b<<endl;
	cout<<"The integer value address is :\t"<<&(a1.b)<<endl;
	a1.c=52.6;
	cout<<"The double value is :\t"<<a1.c<<endl;
	cout<<"The double value address is :\t"<<&(a1.c)<<endl;

	cout<<"Valur of int a is :\t" <<a1.b<<endl;
	cout<<"Valur of int a Address is :\t" <<&(a1.b)<<endl;

	cout<<"Valur of char a is :\t" <<a1.a<<endl;
	cout<<"Valur of char a Address is :\t" <<&(a1.a)<<endl;
return 0;
}
// typedef struct gfg
// {
//     // Data Members
// int roll;
// int age;
// int marks;
	
// // Member Functions
// void printDetails()
// {
// 	cout<<"Roll = "<<roll<<"\n";
// 	cout<<"Age = "<<age<<"\n";
// 	cout<<"Marks = "<<marks;
// }

// }x;
// int main(){
// x g1;
// g1.roll=60;
// g1.age=26;
// g1.marks=230;
// g1.printDetails();
// return 0;
// }
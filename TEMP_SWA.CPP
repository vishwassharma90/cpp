//swapping function
#include<conio.h>
#include<iostream.h>

template<class T>
void swap(T& a,T& b)
{
a=a+b;
b=a-b;
a=a-b;
}

/*template<class X, class Y>
void swap(X a,Y b)
{
a=a+b;
b=a-b;
a=a-b;

cout<<"numbers are"<<a<<"\t"<<b;
}*/

main()
{
clrscr();

int a,b;
cout<<"enter the 2 numbers=";
cin>>a>>b;

swap(a,b);

cout<<"numbers are="<<a<<"\t"<<b;

float f1,f2;
cout<<"enter the two numbers=";
cin>>f1>>f2;

swap(f1,f2);

cout<<"numbers are="<<f1<<"\t"<<f2;

/*int c;
float f3;
cout<<"two numbers are=";
cin>>c>>f3;

swap(c,f3);

float f4;
int d;
cout<<"enter the two numbers=";
cin>>f4>>d;

swap(f4,d);*/

getch();
}
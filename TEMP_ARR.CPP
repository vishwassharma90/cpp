#include<conio.h>
#include<iostream.h>
#define n 5

template<class T>
class Array
{
private: T arr[n];

public:
	Array();
	Array(T arr[n]);
	//Array(Array &A)
	void getData();
	void showData();

};
	template<class T>
	Array<class T>::Array()
	{
	for(int i=0;i<n;i++)
		arr[i]=0;
	}

	template<class T>
	Array<class T>::Array(T arr[n])
	{
	for(int i=0;i<n;i++)
		this->arr[i]=arr[i];
	}

	template<class T>
	void Array<class T>::getData()
	{
	cout<<endl<<"enter the array elements=";
	for(int i=0;i<n;i++)
		cin>>arr[i];
	}

	template<class T>
	void Array<class T>::showData()
	{
	cout<<endl<<"array elements=";
	for(int i=0;i<n;i++)
		cout<<arr[i]<<endl;
	}

main()
{
clrscr();

Array<int> A1;
A1.getData();
A1.showData();

Array<float> A2;
A2.getData();
A2.showData();

getch();
}
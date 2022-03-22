//Viet chuong trinh ve hinh tam giac co chieu cao n.
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"\nMoi ban nhap vao chieu cao:"; cin>>n;
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=i;j++)
		{
		cout<<"*";
		}
		cout<<"\n";
	}
	return 0;
}
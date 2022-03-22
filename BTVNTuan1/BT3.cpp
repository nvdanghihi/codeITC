//Viet chuong trinh tinh tich P=2*4*6*....*2n.
#include<iostream>
using namespace std;
int main()
{
	int P,n;
	P=1;
	cout<<"\nMoi ban nhap n: "; cin>>n;
	for (int i=1;i<=n;i++)
	{
		P=P*(2*i);
	}
	cout<<"\nTich day so la: P="<<P<<endl;
	return 0;
	
}
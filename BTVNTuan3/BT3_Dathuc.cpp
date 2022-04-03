#include<iostream>
using namespace std;
class DaThuc3
{
	private:
	 	int a,b,c,d;
 	public:
 		DaThuc3(int a=0,int b=0,int c=0,int d=0)
 			{
			 	this->a=a;
			 	this->b=b;
			 	this->c=c;
			 	this->d=d;
			 }
	 void nhap()
 	{
 		cout<<"\nMoi nhap he so a:"; cin>>a;
 		cout<<"\nMoi nhap he so b:"; cin>>b;
 		cout<<"\nMoi nhap he so c:"; cin>>c;
 		cout<<"\nMoi nhap he so d:"; cin>>d;
	}
 	void in()
 	{
	 	cout<<a<<"x^3 + "<<b<<"x^2 + "<<c<<"x + "<<d;
 	}
 	int getA()
 	{
	 	return a;
	 }
	 int getB()
 	{
	 	return b;
	 }
	 int getC()
 	{
	 	return c;
	 }
	 int getD()
 	{
	 	return d;
 	}
	~DaThuc3(){}//Ham huy.
};
int main()
{
	DaThuc3 a[2];
	cout<<"\n-----NHAP VAO DA THUC---";
	for(int i=0;i<2;i++)
	{
		cout<<"\nDa thuc thu "<<i+1<<":";
		a[i].nhap();
		cout<<endl;
	}
	cout<<"\nDA THUC BAN VUA NHAP LA:";
	for(int i=0;i<2;i++)
	{
		cout<<"\nDa thuc thu "<<i+1<<":";
		a[i].in();
	}
	cout<<"\nTONG HAI DA THUC LA:";
	for (int i=1;i<2;i++)
		{
			cout<<a[0].getA()+a[1].getA()<<"x^3 + "
				<<a[0].getB()+a[1].getB()<<"x^2 + "
				<<a[0].getC()+a[1].getC()<<"x + "
				<<a[0].getD()+a[1].getD();
		}
		cout<<endl;
		cout<<"\nHIEU HAI DA THUC LA:";
	for (int i=1;i<2;i++)
		{
			cout<<a[0].getA()-a[1].getA()<<"x^3 + "
				<<a[0].getB()-a[1].getB()<<"x^2 + "
				<<a[0].getC()-a[1].getC()<<"x + "
				<<a[0].getD()-a[1].getD();
		}
		cout<<endl;
		
	return 0;
}
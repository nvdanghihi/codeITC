#include<iostream>
using namespace std;
class MayIn
{
	private:
		int sohieu;
		int soluong;
	public:
		void nhapkho(int q)
		{
			cout<<"\nNhap vao so mat hang:";
			cin>>q;
		}
		void xuatkho(int q)
		{
			cout<<"\nSo mat hang xuat kho : "<<q<<endl;
		}
};
class MayInLaser : public MayIn
{
	private:
		char dpi[30];
	public:
};
int main()
{
	return 0;
}
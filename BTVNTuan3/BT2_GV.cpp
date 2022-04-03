#include<iostream>
#include<string>
using namespace std;
class GiaoVien
{
	private:
 		char ht[30];
 		int t;
 		char bc[15];		//Bang cap.
 		char cn[20];		//Chuyen nganh.
 		float bl;
 		float lcb;			//Bac luong.
	public:
		friend istream& operator >> (istream& is, GiaoVien &a)
		{
			cout<<"\nNhap ho ten giao vien:";
			is>>a.ht;
			fflush(stdin);
			cout<<"\nNhap so tuoi:";
			is>>a.t;
			fflush(stdin);
			cout<<"\nNhap bang cap:";
			is>>a.bc;
			cout<<"\nNhap chuyen nganh:";
			is>>a.cn;
			fflush(stdin);
			cout<<"\nNhap bac luong:";
			is>>a.bl;
		}
		float tinh()
		{
	 		return lcb=bl*610;
		}	
		friend ostream& operator << (ostream& os,GiaoVien &a)
		{
			os<<"Ho ten:"<<a.ht<<endl;
			os<<"Tuoi:"<<a.t<<endl;
			os<<"Bang cap:"<<a.bc<<endl;
			os<<"Chuyen nganh:"<<a.cn<<endl;
			os<<"Bac luong:"<<a.bl<<endl;
			os<<"Luong co ban:"<<a.tinh()<<endl;
		}
};
int main()
{
	int n;
	cout<<"\nNhap so giao vien:"; cin>>n;
	GiaoVien a[n];
	cout<<"\n\t\t\t\t-----NHAP THONG TIN GIAO VIEN---:";
	for (int i=0;i<n;i++)
	{
		cout<<"\n---GIAO VIEN THU "<<i+1<<":"<<endl;
		cin>>a[i];
	}
	cout<<"\n-----\t\t\t\tTHONG TIN GIAO VIEN BAN VUA NHAP LA---:";
	for(int i=0;i<n;i++)
	{
		cout<<"\n---GIAO VIEN THU "<<i+1<<":"<<endl;
		cout<<a[i];
	}
	return 0;
}
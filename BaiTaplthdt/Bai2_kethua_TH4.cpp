//Ho va ten : Nguyen Thi Huyen My
//MSSV : 1755248020100172
//input : xay dung lop Myaddress va lop Person
//output : lop Person ke thua tu lop Myaddress va hien thi cac thong tin cua cac doi tuong tu thuoc tinh cua 2 lop
#include<iostream>
#include<string.h>
using namespace std;
class Myaddress
{
	protected :
		string tinh,huyen;
	public :
		Myaddress()
		{
			tinh=huyen='khong';
		}
		void nhap()
		{
			cout<<"\nNhap ten tinh : ";
			fflush(stdin);
			getline(cin,tinh);
			cout<<"Nhap ten huyen : ";
			fflush(stdin);
			getline(cin,huyen);
		}
		
		void hienthi()
		{
			cout<<"\t\t"<<huyen<<"\t\t"<<tinh;
		}
				
};

class Person : public Myaddress
{
	protected :
		string name;
		int phone;
		float salary;
	public :
		Person()
		{
			name='khong co';
			phone=0;
			salary=0;
		}
		void nhap()
		{
			Myaddress::nhap();
			cout<<"Nhap ten : ";
			fflush(stdin);
			getline(cin,name);
			cout<<"Nhap so dien thoai : "; cin>>phone;
			cout<<"Nhap so tien luong : "; cin>>salary;			
		} 
		void hienthi()
		{			
			cout<<"\n"<<name<<"\t\t"<<phone<<"\t\t\t"<<salary; 
			Myaddress::hienthi();			
		}	
			
};
int main()
{
	int n;
	Person a[20];
	cout<<"So can bo la : "; cin>>n;
	cout<<"\nNHAP THONG TIN CAN BO";
	for(int i=0; i<n; i++)
	{
		cout<<"\nCan bo thu "<<i+1<<" : ";
		a[i].nhap();
	}
	
	cout<<"\nHIEN THI THONG TIN CAN BO";
	cout<<"\n"<<"Ho ten"<<"\t\t"<<"So dien thoai"<<"\t\t"<<"Luong"<<"\t\t"<<"Huyen"<<"\t\t"<<"Tinh";
	for(int i=0; i<n; i++)
	{
		a[i].hienthi();
	}
	return 0;
}
















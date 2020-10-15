//Ho va ten : Nguyen Thi Huyen My
//MSSV : 1755248020100172
//input : lop nguoi va lop sinh vien
//output : lop sinh vien ke thua tu lop nguoi va hien thi cac thong tin cua sinh vien tu thuoc tinh cua 2 lop
#include<iostream>
#include<string.h>
using namespace std;
class nguoi
{
	protected :
		string hoten;
		int namsinh;
	public :
		void Gioithieubanthan()
		{
			cout<<"\nNhap ho ten : ";
			fflush(stdin);
			getline(cin,hoten);
			cout<<"Nhap nam sinh : "; cin>>namsinh;
		}
				
};

class sinhvien : public nguoi
{
	protected :
		int mssv;
		string nganh;
		int ngaysinh,thangsinh;
		string que;
		int sdt;
	public :
		void Gioithieubanthan()
		{
			nguoi::Gioithieubanthan();
			cout<<"Nhap mssv : "; cin>>mssv;
			cout<<"Nhap chuyen nganh : ";
			fflush(stdin);
			getline(cin,nganh);
			cout<<"Nhap ngay sinh : "; cin>>ngaysinh;
			cout<<"Nhap thang sinh : "; cin>>thangsinh;
			cout<<"Nhap que quan : "; 
			fflush(stdin);
			getline(cin,que);
			cout<<"Nhap so dien thoai : "; cin>>sdt;
		} 
		void display()
		{			
			cout<<"\n"<<hoten<<"\t\t"<<mssv<<"\t\t"<<ngaysinh<<"/"<<thangsinh<<"/"<<namsinh<<"\t\t\t"<<que<<"\t\t\t"<<sdt;			
		}	
			
};
int main()
{
	int n;
	sinhvien a[20];
	cout<<"So sinh vien la : "; cin>>n;
	cout<<"\nNHAP THONG TIN CAC SINH VIEN";
	for(int i=0; i<n; i++)
	{
		cout<<"\nSinh vien thu "<<i+1<<" : ";
		a[i].Gioithieubanthan();
	}
	
	cout<<"\nHIEN THI THONG TIN CAC SINH VIEN";
	cout<<"\n"<<"Ho ten"<<"\t\t"<<"MSSV"<<"\t\t"<<"Ngay sinh"<<"\t\t"<<"Que quan"<<"\t\t"<<"So dien thoai";
	for(int i=0; i<n; i++)
	{
		a[i].display();
	}
	return 0;
}


//Ho va ten : Nguyen Thi Huyen My
//MSSV : 1755248020100172
//input : xay dung lop Mydate va Myfile
//output : lop Myfile ke thua tu lop Mydate va hien thi cac thong tin tu thuoc tinh cua 2 lop
#include<iostream>
#include<string.h>
using namespace std;
class Mydate
{
	protected :
		int d,m,y;
	public :
		void nhap()
		{
			cout<<"Nhap ngay : ";cin>>d;
			cout<<"Nhap thang : ";cin>>m;
			cout<<"Nhap nam : ";cin>>y;
		}
		void hienthi()
		{
			cout<<"\t\t\t"<<d<<"-"<<m<<"-"<<y;
		}
				
};

class Myfile : public Mydate
{
	protected :
		string filename;
		int filesize;
	public :
		void nhap()
		{					
			cout<<"\nMo ta ten tep : ";
			fflush(stdin);
			getline(cin,filename);
			if(filename.size()>255)
			{
				cout<<"Khong duoc nhap qua 255 ky tu! Moi nhap lai!";
				cout<<"\nNhap lai mo ta ten tep : ";
				fflush(stdin);
				getline(cin,filename);
			}
			cout<<"Mo ta kich thuoc tep : "; cin>>filesize;
			Mydate::nhap();	
		} 
		void hienthi()
		{			
			cout<<"\n"<<"\t"<<filename<<"\t\t\t\t"<<filesize;
			Mydate::hienthi();
		}	
			
};
int main()
{
	Myfile *a[5];
	cout<<"\nNHAP THONG TIN CAC TEP";
	for(int i=0; i<1; i++)
	{
		cout<<"\nTep thu "<<i+1<<" : ";
		a[i]=new Myfile;
		a[i]->nhap();
	}
	
	cout<<"\n---------------------HIEN THI THONG TIN CAC TEP-----------------";
	cout<<"\n"<<"\tTen tep"<<"\t\t\t"<<"Kich thuoc tep"<<"\t\t\t"<<"Ngay thang nam";
	for(int i=0; i<5; i++)
	{
		a[i]->hienthi();
	}
	return 0;
}


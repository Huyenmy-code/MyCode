//Ho va ten : Nguyen Thi Huyen My
//MSSV : 1755248020100172
//input : nhap ho ten, lop, diem trung binh, hoc bong, hoc phi cua sinh vien qua cac lop ke thua;
//output : in ra man hinh thong tin cua cac sinh vien bang con tro;
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
using namespace std;
class SV
{
	private:
		string lop,hoten;
	public:
		SV(string l, string t)
		{
			lop=l;
			hoten=t;
		}
		~SV(){};
		void display()
		{
			cout<<"\n"<<hoten<<"\t"<<lop;
		}		
};
class SVSP:public SV
{
	private:
		float dtb;
		string hocbong;
	public:
		SVSP(string l, string t, float d, string hb):SV(l,t)
		{
			dtb=d;
			hocbong=hb;
		}
		void display()
		{
			SV::display();
			cout<<"\t\t"<<dtb<<"\t\t"<<hocbong;
		}
};
class SVCN:public SVSP
{
	private:
		float hocphi;
	public:
		SVCN(string l,string t,float d, string hb,float hp):SVSP(l,t,d,hb)
		{
			hocphi=hp;
		}
		void display()
		{
			SVSP::display();
			cout<<"\t\t"<<hocphi;
		}
};

int main()
{
	string l,t,hb;
	float d,hp;
	int n;
	SVCN *p[5];
	cout<<"Bao nhieu sinh vien :";cin>>n;
	cout<<"\n--------NHAP THONG TIN CAC SINH VIEN--------";
	for(int i=0; i<n; i++)
	{
		cout<<"\nNhap thong tin sinh vien thu "<<i+1<<" :";
		cout<<"\nNhap ho ten :";
		fflush(stdin);
		getline(cin,t);
		cout<<"Nhap lop :";
		fflush(stdin);
		getline(cin,l);
		cout<<"Nhap diem trung binh :";cin>>d;
		cout<<"Nhap hoc bong :";
		fflush(stdin);
		getline(cin,hb);
		cout<<"Nhap hoc phi :";cin>>hp;
		p[i]=new SVCN(l,t,d,hb,hp);
	}
	
	cout<<"\n-------HIEN THI THONG TIN CAC SINH VIEN------";
	cout<<"\nHo ten"<<"\t"<<"Lop"<<"\t"<<"Diem trung binh"<<"\t\t"<<"Hoc bong"<<"\t"<<"Hoc phi";
	for (int i=0; i<n; i++)
	{
		p[i]->display();
	}
}

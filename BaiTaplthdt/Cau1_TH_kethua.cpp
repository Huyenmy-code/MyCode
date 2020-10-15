//Ho va ten : Nguyen Thi Huyen My
//MSSV : 1755248020100172
//input : nhap so hieu thuoc tinh, ngay, thang, nam, ten, kich thuoc cua tep qua cac lop ke thua;
//output : in ra man hinh thong tin cua cac tep bang con tro va sap xep tang dan theo ngay thang;
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
using namespace std;
class MyArrt{
	private:
			int a;
	protected:
		MyArrt(int arrt)
		{
			a=arrt;
		}
		void display()
		{
			cout<<a;
		}	
};
class Mydate{
	private:
		int d,m,y;
	public:
		Mydate(int dd,int mm,int yy){d=dd;m=mm;y=yy;}
		void display()
		{
			cout<<d<<"-"<<m<<"-"<<y;
		}
		int operator >(Mydate &a)
		{
			if ((y>a.y)||((y==a.y)&&(m>a.m))||((y==a.y)&&(m==a.m)&&(d>a.d)))
			{
				return 1;
			}
			return 0;
		}
};
class Myfile:protected MyArrt,public Mydate
{
	private:string name;
		 	int size;
	public:
		Myfile (int arrt,int dd,int mm, int yy,string ten, int kichthuoc): MyArrt(arrt),Mydate(dd,mm,yy)
		{
			name=ten;
			size=kichthuoc;
		}
		void display()
		{
			cout<<"\n"<<name<<"\t\t"<<size<<"\t\t";Mydate::display();cout<<"\t\t";MyArrt::display();
		}
};
int main()
{
    int a,d,m,y,s;
    string t;
    int n;
    Myfile *p[10];  
    cout<<"Nhap so tep :";cin>>n;
    for (int i=0; i<n; i++){
    	cout<<"Nhap so hieu thuoc tinh : ";cin>>a;
    	cout<<"Nhap ngay : ";cin>>d;
    	cout<<"Nhap thang : ";cin>>m;
    	cout<<"Nhap nam : ";cin>>y;
    	cout<<"Nhap ten tep : ";
    	fflush(stdin);
		getline(cin,t);
    	cout<<"Nhap kich thuoc tep : ";cin>>s;
    	p[i]=new Myfile(a,d,m,y,t,s);  	
	}
	
	cout<<"\nHien thi:";
    cout<<"\nTen tep"<<"\t\t"<<"Kich thuoc"<<"\t"<<"Ngay"<<"\t"<<"So hieu thuoc tinh"<<"\t";
	for (int i=0; i<n; i++)
    {  	
    	p[i]->display();
	}
	
	cout<<"\n\nSap xep";
    cout<<"\nTen tep"<<"\t\t"<<"Kich thuoc"<<"\t"<<"Ngay"<<"\t"<<"So hieu thuoc tinh"<<"\t";
	for (int i=0; i<n; i++)
    {  	
    	for(int j=i+1; j<n; j++)
    	{
    		if (*p[i]>*p[j])
    		swap (p[i],p[j]);
		}
    	p[i]->display();
	}
    return 0;
}


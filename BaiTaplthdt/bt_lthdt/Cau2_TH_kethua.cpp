//Ho va ten : Nguyen Thi Huyen My
//MSSV : 1755248020100172
//input : nhap ngay, thang, nam, ten,dia chi, so dien thoai, luong cua can bo qua cac lop ke thua;
//output : in ra man hinh thong tin cua cac can bo bang con tro va sap xep tang dan theo ngay thang;
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
using namespace std;
class Mydate{
	private:
		int d,m,y;
	public:
		Mydate(int dd,int mm,int yy)
		{
			d=dd;m=mm;y=yy;
		}
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
class Person:public Mydate
{
	private:string name,address;
			int phone;
	public:
		Person(int dd,int mm, int yy,string n, string a, int p):Mydate(dd,mm,yy)
		{
			name=n;
			address=a;
			phone=p;
		}
		void display()
		{
			Mydate::display();
			cout<<"\t\t"<<name<<"\t\t"<<address<<"\t\t"<<phone;
		}
};
class Officer:public Person
{
	private:int salary;
	public:
		Officer (int dd,int mm, int yy, string n, string a, int p, int s):Person(dd,mm,yy,n,a,p)
		{
			salary=s;
		}
		void display()
		{
			cout<<"\n";  
			Person::display();
			cout<<"\t\t"<<salary;
		}
};
int main()
{
    int d,m,y,dt,s;
    string n,a;
    int k;
    Officer *p[5];  
    cout<<"Bao nhieu can bo :";cin>>k;
    cout<<"\n-------NHAP THONG TIN CAC CAN BO--------";
    for (int i=0; i<k; i++){
    	cout<<"\nThong tin can bo thu "<<i+1<<" :\n";
    	cout<<"Nhap ngay : ";cin>>d;
    	cout<<"Nhap thang : ";cin>>m;
    	cout<<"Nhap nam : ";cin>>y;
    	cout<<"Nhap ten can bo : ";
    	fflush(stdin);
		getline(cin,n);
		cout<<"Nhap dia chi can bo : ";
    	fflush(stdin);
		getline(cin,a);
		cout<<"Nhap so dien thoai :";cin>>dt;
    	cout<<"Nhap luong : ";cin>>s;
    	p[i]=new Officer(d,m,y,n,a,dt,s);  	
	}
	
	cout<<"\n-------HIEN THI CAC CAN BO VUA NHAP--------";
    cout<<"\nNgay"<<"\t\t"<<"Ho ten"<<"\t\t"<<"Dia chi"<<"\t\t"<<"So dien thoai"<<"\t"<<"Luong\n";
	for (int i=0; i<k; i++)
    {  	
    	p[i]->display();
	}
	
	cout<<"\n\n-------CAC CAN BO SAU KHI SAP XEP--------";
    cout<<"\nNgay"<<"\t\t"<<"Ho ten"<<"\t\t"<<"Dia chi"<<"\t\t"<<"So dien thoai"<<"\t"<<"Luong\n";
	for (int i=0; i<k; i++)
    {  	
    	for(int j=i+1; j<k; j++)
    	{
    		if (*p[i]>*p[j])
    		swap (p[i],p[j]);
		}
    	p[i]->display();
	}
    return 0;
}


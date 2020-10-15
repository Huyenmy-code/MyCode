#include<iostream>
using namespace std;
class mytime{
private:
	int h,m,s;
protected:
	void settime(int hh,int mm, int ss){h=hh;m=mm;s=ss;}
	void display()
	{
		cout<<h<<":"<<m<<":"<<s;
	}
};//hetlop
class mydate{
private:
	int d,m,y;
protected:
	void setdate(int dd,int mm,int yy){d=dd;m=mm;y=yy;}
	void display()
	{
		cout<<d<<"-"<<m<<"-"<<y;
	}
};//het lop
class datetime:protected mytime,protected mydate{
public:
	void setdatetime(int dd,int mm,int yy, int hh,int pp, int ss)
	{
		mydate::setdate(dd,mm,yy);
		mytime::settime(hh,pp,ss);
	}
	void display()
	{
		cout<<"Ngay: ";mydate::display();
		cout<<"  Gio: ";mytime::display();
	}
};//het lop
int main()
{
    int a,b,c,d,e,f;
    
    cout<<"\nNhap ngay, thang, nam, gio, phut, giay: ";
    cin>>a>>b>>c>>d>>e>>f;
    datetime *p;
    p= new datetime;
    p=new datetime[a,b,c,d,e,f];
    p->display();
    return 0;
}


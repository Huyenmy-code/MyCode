#include<iostream>
using namespace std;
class mycolor {
private:
	int color;
public:
	mycolor (int k=0)
	{
	   color=k;
	}
void dsp()
{
cout<<color;
}
/* void add()
{
cin>>color;
} */
};
class point {
private:
	float x,y;
public:
	point (float ox=0,float oy=0)
	{
		x=ox;
		y=oy;
	}
void move (float dx,float dy)
{
x=x+dx;
y=y+dy;
}
void dsp()
{
    cout<<"\n x="<<x<<"y="<<y;
}
};	
class triangle: public mycolor {
private:
point A,B,C;
public:
  triangle (int k,point X,point Y,point Z):mycolor(k)
	{
		A=X;
		B=Y;
		C=Z;
	}
void move (float dx,float dy)
	{
		A.move(dx,dy);
		B.move(dx,dy);
		C.move(dx,dy);
	}
void dsp()
	{
		A.dsp();
		B.dsp();
		C.dsp();
		cout<<"\n Mau:"; mycolor::dsp();
	}
};	
int main()
{

float x1,y1,x2,y2,x3,y3,dx,dy;
int k;
	cout<<"Nhap toa do dinh A:";
	cin>>x1>>y1;
	point A(x1,y1);
    cout<<"Nhap toa do dinh B:";
	cin>>x2>>y2;
	point B(x2,y2);
	cout<<"Nhap toa do dinh C:";
	cin>>x3>>y3;
	point C(x3,y3);
	cout<<"\n nhap mau cua tam giac :";cin>>k;
	cout<<"Nhap dx,dy:";cin>>dx>>dy;
	triangle TG(k,A,B,C);
	cout<<"\n toa do dinh va mau cua tam giac truoc khi tien:\n";
	TG.dsp();
    TG.move(dx,dy);
    cout<<"\n sau khi tien:"<<endl;
    TG.dsp();
return 0;
}

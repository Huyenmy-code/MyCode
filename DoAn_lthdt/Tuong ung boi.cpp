#include<iostream>
using namespace std;
class shape{
	private:
	public:
		virtual float dientich(){
			return 0;
		}
		virtual float chuvi(){
			return 0;
		}
		virtual void nhap (){
		}
		virtual void hien(){
			cout<<"Dien tich :"; cout<<dientich();cout<<"\n";
			cout<<"Chu vi:"; cout<<chuvi();
		}
};
class circle: public shape{
	protected: int r;
	public:
		circle(){
			r=0;
		}
		void nhap(){
			cout<<"\nNhap ban kinh :"; cin>>r;
		}
		float dientich(){
			return 3.14*r*r;
		}
		float chuvi(){
			return 3.14*2*r;
		}
};
class rec: public shape{
	private:
		int cd;
		int cr;
	public:
		rec(){
			cd=0;
			cr=0;
		}
		void nhap(){
			cout<<"\n\nNhap cd:";cin>>cd;
			cout<<"Nhap cr:";cin>>cr;
		}
		float dientich(){
			return cd*cr;
		}
		float chuvi(){
			return 2*(cd+cr);
		}
};
int main(){
	shape *a;
	
	a=new circle;
	a->nhap();
	a->chuvi();
	a->dientich();
	a->hien();
	
	a=new rec;
	a->nhap();
	a->chuvi();
	a->dientich();
	a->hien();
	
	return 0;
}

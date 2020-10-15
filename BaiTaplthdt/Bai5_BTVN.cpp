//Ho va ten : Nguyen Thi Huyen My
//MSSV : 1755248020100172
//input : a,b,c
//output : in ra ket qua cua phuong trinh bac hai ax2 + bx + c = 0 ;

#include <iostream>
#include<math.h>
using namespace std;
class GPT2{
    private : int a,b,c;
    public :
        GPT2(){
        	a=0;
        	b=0;
        	c=0;
		}
        void nhap(){
            cout<<"Nhap a = "; cin>>a;
            cout<<"Nhap b = "; cin>>b;
            cout<<"Nhap c = "; cin>>c;
        }
        void xuat(){
            if(b>0 && c>0)
                cout<<"Phuong trinh bac 2 la :  "<<a<<"X2 + "<<b<<"X + "<<c<<" = 0";
            else if (b>0 && c<0)
                cout<<"Phuong trinh bac 2 la :  "<<a<<"X2 + "<<b<<"x "<< c<<" = 0";
            else if (b<0 && c>0)
                cout<<"Phuong trinh bac 2 la :  "<<a<<"X2 "<< b<<"X + "<<c<<" = 0";
            else
                cout<<"Phuong trinh bac 2 la :  "<<a<<"X2 "<< b<<"X "<< c<<" = 0";
        }
        void giaipt(){
            int t = b*b - 4*a*c;
            if (t>0){
                cout<<"\nPhuong trinh co 2 nghiem phan biet : ";
                cout<<"\nx1 = "<<(-b-sqrt(t))/(2*a);
                cout<<"\nx2 = "<<(-b+sqrt(t))/(2*a);
            }
            else if (t==0){
                cout<<"\nPhuong trinh co nghiem kep : x = "<<-b/(2*a);
            }
            else{
                cout<<"\nPhuong trinh vo nghiem ! ";
            }
        }
};
int main()
{
    GPT2 a,b;

	cout<<"+++++Nhap phuong trinh thu 1 ++++++++\n";
    a.nhap();
    a.xuat();
    a.giaipt();

    cout<<"\n\n+++++Nhap phuong trinh thu 2 ++++++++\n";
    b.nhap();
    b.xuat();
    b.giaipt();
    return 0;
}

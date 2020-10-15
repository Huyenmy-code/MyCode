//Ho va ten : Nguyen Thi Huyen My
//MSSV : 1755248020100172
//input : tu so, mau so
//output : hien thi phan so dang tu so / mau so va phan so rut gon

#include <iostream>
using namespace std;
class PS{
    private : int ts,ms;
    public :
        PS(){
            ts=0;
            ms=1;
        }
        void nhap(){
            cout<<"Nhap tu so :"; cin>>ts;
            cout<<"Nhap mau so :"; cin>>ms;
        }
        void xuat(){
            cout<<"Phan so la :  "<<ts<<"/"<<ms;
        }
        int ucln(int m, int n){
            if(m==n) return m;
            else if (m>n)
                m=m-n;
            else if (m<n)
                n=n-m;
        }
        void rutgon(PS a){
            int m =ucln(a.ts , a.ms);
            a.ts = a.ts / m;
            a.ms = a.ms / m;
            cout<<"\n==4
            2> Phan so rut gon la :  "<<a.ts<<"/"<<a.ms<<endl;
        }

};
int main()
{
    PS a,b,c;

    cout<<"----------Nhap phan so thu 1 :\n ";
    a.nhap();
    a.xuat();
    c=a;
    c.rutgon(a);

    cout<<"\n\n------------Nhap phan so thu 2 :\n";
    b.nhap();
    b.xuat();
    c=b;
    c.rutgon(b);

    return 0;
}

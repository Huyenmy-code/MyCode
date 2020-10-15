//Ho va ten : Nguyen Thi Huyen My
//MSSV : 1755248020100172
//input : a,b
//output : in ra So phuc a + bi ;
#include <iostream>
using namespace std;
class Complex{
    private : int a,b;
    public :
        Complex(){
            a=0;
            b=0;
        }
        void nhap(){
            cout<<"\nNhap a = "; cin>>a;
            cout<<"Nhap b = "; cin>>b;
        }
        void inra(){
            cout<<"So phuc la : ";
            if (b>0)
                cout<<a<<"+"<<b<<"i\n";
            else
                cout<<a<<b<<"i\n";
        }
};
int main()
{
    Complex a,b;

    cout<<"\n++++++Nhap so phuc 1 ++++++";
    a.nhap();
    a.inra();

    cout<<"\n++++++Nhap so phuc 2 ++++++";
    b.nhap();
    b.inra();

    return 0;
}

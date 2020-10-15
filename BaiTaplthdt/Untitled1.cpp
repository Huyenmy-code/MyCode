

#include<string.h>
#include<stdio.h>
#include<iostream>
using namespace std;
class ChucVu
{
protected:
    string Machucvu, Tenchucvu;
    float Tienthuong;
public:
    float TThuong(){
        return Tienthuong;
    }
    ChucVu(string Mcv="", string Tcv="", float TT=0)
    {
        Machucvu = Mcv;
        Tenchucvu = Tcv;
        Tienthuong = TT;
    }
    void Hienthi()
    {
        cout<<Machucvu<<"\t"<<Tenchucvu<<"\t"<<Tienthuong<<"\t\t";
    }
};
class NgaySinh
{
protected:
    int ngay, thang, nam;
public:
    NgaySinh(int d=1,int m=1, int y=1)
    {
        ngay = d;
        thang = m;
        nam = y;
    }
    void Hienthi()
    {
        cout<<ngay<<"/"<<thang<<"/"<<nam<<"\t\t";
    }
};
class CanBo:public NgaySinh,public ChucVu
{
protected:
   string Macanbo, Tencanbo, Diachi, Dienthoai;
   float Luong;
public:
    CanBo(string Mcb="",string Tcb="", string Dc="", string Dt="", float luong=0,int d=1, int m=1, int y=1,string Mcv="", string Tcv="", float TT=0):NgaySinh(d,m,y),ChucVu(Mcv,Tcv,TT)
    {
        Macanbo = Mcb;
        Tencanbo = Tcb;
        Diachi = Dc;
        Dienthoai = Dt;
        Luong = luong;
    }
    float TongTien()
    {
        return Luong+Tienthuong;
    }
    int operator > (CanBo &a)
    {
        return Luong > a.Luong;
    }
    void Hienthi()
    {
        cout<<Macanbo<<"\t"<<Tencanbo<<"\t"<<Diachi<<"\t"<<Dienthoai<<"\t"<<Luong<<"\t\t";
        NgaySinh::Hienthi();
        ChucVu::Hienthi();
        cout<<TongTien();
        cout<<endl;
    }
};
int main()
{
    CanBo *a[5];
    cout<<"NHAP DU LIEU CHO CAC DOI TUONG"<<endl;
    for(int i=0; i<2; i++)
    {
        string Machucvu, Tenchucvu,Macanbo, Tencanbo, Diachi, Dienthoai;
        float Tienthuong,Luong;
        int ngay, thang, nam;
        cout<<"\nNhap du lieu cho doi tuong thu "<<i+1<<":"<<endl;
        fflush(stdin);
        cout<<"Nhap ma can bo: ";getline(cin,Macanbo);fflush(stdin);
        cout<<"Nhap ten can bo: ";getline(cin,Tencanbo);fflush(stdin);
        cout<<"Nhap dia chi: "; getline(cin,Diachi);fflush(stdin);
        cout<<"Nhap DT: "; getline(cin,Dienthoai);fflush(stdin);
        cout<<"Nhap luong:";cin>>Luong;
        cout<<"Nhap ngay:";cin>>ngay;
        cout<<"Nhap thang:";cin>>thang;
        cout<<"Nhap nam:";cin>>nam; fflush(stdin);
        cout<<"Nhap ma chuc vu: ";getline(cin,Machucvu);fflush(stdin);
        cout<<"Nhap ten chuc vu: ";getline(cin,Tenchucvu);fflush(stdin);
        cout<<"Nhap tien thuong: "; cin>>Tienthuong;
        a[i]=new CanBo(Macanbo, Tencanbo, Diachi, Dienthoai,Luong,ngay, thang, nam,Machucvu, Tenchucvu,Tienthuong);
    }
    cout<<"Ma CB\t"<<"Ten CB\t"<<"Dia chi\t"<<"DT\t"<<"Luong\t\t"<<"Ngay thang nam\t"<<"Ma CV\t"<<"Ten CV\t"<<"Tien thuong\t"<<"Tong tien"<<endl;
    for(int i=0; i<2; i++)
        a[i]->Hienthi();
    for(int i=0; i<1;i++)
        for(int j=i+1;j<2;j++)
    {
        if(*a[j]>*a[i])
        {
            swap(*a[i],*a[j]);
        }
    }
    cout<<"\nDANH SACH CAN BO THEO LUONG GIAM DAN"<<endl;
    cout<<"Ma CB\t"<<"Ten CB\t"<<"Dia chi\t"<<"DT\t"<<"Luong\t\t"<<"Ngay thang nam\t"<<"Ma CV\t"<<"Ten CV\t"<<"Tien thuong\t"<<"Tong tien"<<endl;
    for(int i=0; i<2; i++)
        a[i]->Hienthi();
}

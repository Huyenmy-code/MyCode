#include<iostream>
#include<conio.h>
using namespace std;
 
class sinhvien
{
   int mssv;
  public:
   void getnumber()
   {
              cout<<"Nhap MSSV: ";
              cin>>mssv;
   }
   void putnumber()
   {
              cout<<"\n\n\tMSSV la: "<<mssv<<"\n";
   }
};
 
class diemthi:virtual public sinhvien
{
  
  public:
   int diemthi1,diemthi2;
   void getmark()
   {
              cout<<"Nhap cac diem thi\n";
              cout<<"Diem thi 1 la: ";
              cin>>diemthi1;
              cout<<"Diem thi 2 la: ";
              cin>>diemthi2;
   }
   void putmark()
   {
              cout<<"\tCac diem thi da nhap\n";
              cout<<"\n\tDiem thi 1 la: "<<diemthi1;
              cout<<"\n\tDiem thi 2 la: "<<diemthi2;
   }
};

class gdthechat:public virtual sinhvien
{
 
  public:
    int diemtc;
    void getscore()
    {
              cout<<"Nhap diem Giao duc the chat: ";
              cin>>diemtc;
    }
    void putscore()
    {
              cout<<"\n\tDiem Giao duc the chat la: "<<diemtc;
    }
};

class ketqua:public diemthi,public gdthechat
{
    int tongdiem;
  public:
   void display()
   {
      tongdiem=diemthi1+diemthi2+diemtc;
      putnumber();
      putmark();
      putscore();
      cout<<"\n\tTong diem: "<<tongdiem;
   }
};
 
int main()
{
   ketqua obj;
   
   obj.getnumber();
   obj.getmark();
   obj.getscore();
   obj.display();
   return 0;
}

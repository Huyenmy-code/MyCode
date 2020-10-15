//Ho va ten : Nguyen Thi Huyen My
//MSSV : 1755248020100172
//input : ho ten, diem ky 1, diem ky 2.
//output : hien thi ho ten, diem ky 1, diem ky 2, diem trung binh ca nam va sap xep sinh vien theo diem trung binh ca nam
#include <iostream>
#include <string>

using namespace std;
class Student
{
    private: float DiemK1, DiemK2, DiemTBC;
             string Hovaten;
    public:
        void NhapDL()
        {
            cout<<"\nNhap ho va ten:";
            fflush(stdin);
            getline(cin, Hovaten);
            cout<<"Nhap diem hoc ky 1:"; cin>>DiemK1;
            cout<<"Nhap diem hoc ky 2:"; cin>>DiemK2;
        }
        void HienThiDL()
        {
            cout<<"\nHo va ten:"<<Hovaten<<endl;
            cout<<"Diem hoc ky 1:"<<DiemK1;
            cout<<"\nDiem hoc ky 2:"<<DiemK2;
            cout<<"\nDiem trung binh ca nam:"<<(DiemK1+2*DiemK2)/3;
        }
  
        int operator >(Student b)
        {
        	if (((DiemK1+2*DiemK2)/3)> ((b.DiemK1+2*b.DiemK2)/3))
			{
				return 1;
			}
			return 0;
		}        		
};


int main()
{
    Student stud[10];
    int n;
    cout<<"So sinh vien can nhap la : "; cin>>n;
    for(int i=0; i<n; i++)
    {
        cout<<"\nNhap thong tin sinh vien thu "<<i+1<<":";
        stud[i].NhapDL();
    }
    cout<<"\n\nHien thi nhung sinh vien vua nhap:";
    for(int i=0; i<n; i++)
    {
        cout<<"\n\nSinh vien thu "<<i+1<<":";
        stud[i].HienThiDL();
    }
    cout<<"\n---------SAP XEP DANH SACH SINH VIEN GIAM DAN THEO DIEM TBC---------";
    for (int i=0 ; i<n ; i++)
	{
		for (int j=i+1 ; j<n; j++)
		{
			if (stud[j]>stud[i])
			{
				swap (stud[i],stud[j]);
			}	
		}
		cout<<"\t";	
		stud[i].HienThiDL();
	}
    return 0;
}

//Ho va ten : Nguyen Thi Huyen My
//MSSV : 1755248020100172
//input : ngay, thang, nam
//output : hien thi ngay thang nam theo dang ngay-thang-nam

#include <iostream>
using namespace std;
class Mydate
{
    private: int ngay, thang, nam;
    public:
    	Mydate(){
    		ngay = 1;
    		thang = 1;
    		nam = 2020;
		}
        void nhap()
        {
            cout<<"\nNhap ngay: "; cin>>ngay;
            cout<<"Nhap thang: "; cin>>thang;
            cout<<"Nhap nam: "; cin>>nam;
        }
        void hienthi()
        {
            cout<<"Ngay thang nam sinh la:"<<ngay<<"-"<<thang<<"-"<<nam<<endl;
        }
};
int main()
{
    Mydate date[5];

    cout<<"    NHAP NGAY THANG NAM\n";
	for (int i=0 ; i<5 ; i++){
		cout<<"\nNhap ngay thang nam cho doi tuong "<<i+1<<":";
		date[i].nhap();
	}

    cout<<"\n    HIEN THI\n";
	for (int i=0 ; i<5 ; i++){
		cout<<"\nHien thi doi tuong "<<i+1<<":"<<endl;
		date[i].hienthi();
	}

    return 0;
}











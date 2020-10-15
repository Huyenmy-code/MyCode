//Ho va ten : Nguyen Thi Huyen My
//MSSV : 1755248020100172
//input : ngay, thang, nam
//output : hien thi ngay thang nam theo dang ngay-thang-nam va sap xep tang dan

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
            cout<<ngay<<" - "<<thang<<" - "<<nam<<endl;
        }
        int operator >=(Mydate a)
        {
        	if ((nam>a.nam)||((nam==a.nam)&&(thang>a.thang))||((nam==a.nam)&&(thang==a.thang)&&(ngay>a.ngay)))
        	{
        		return 1;
			}
        	return 0;	
		}
};
int main()
{
    Mydate date[20];
    int n;
	cout<<"So doi tuong can nhap la : "; cin>>n;
    cout<<"-----------------NHAP NGAY THANG NAM-------------\n";
	for (int i=0 ; i<n ; i++){
		cout<<"\nNhap ngay thang nam cho doi tuong "<<i+1<<":";
		date[i].nhap();
	}

    cout<<"\n---------------HIEN THI--------------\n";
	for (int i=0 ; i<n ; i++){
		cout<<"\nHien thi doi tuong "<<i+1<<":    ";
		date[i].hienthi();
	}
	
	cout<<"\n---------------SAP XEP CAC DOI TUONG TANG DAN--------------\n";
	for (int i=0 ; i<n ; i++)
	{
		for (int j=i+1 ; j<n; j++)
		{
			if (date[i]>=date[j])
			{
				swap (date[i], date[j]);
			}	
		}
		cout<<"\t";	
		date[i].hienthi();
	}
	Mydate max=date[0];
	cout<<"\nThoi gian lon nhat :";
	for (int i=1 ; i<n ; i++)
	{
		if (date[i]>=max)
			{
				swap (date[i],max);
			}		
	}max.hienthi();	

    return 0;
}











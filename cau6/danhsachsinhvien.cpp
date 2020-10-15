#include <iostream>
#include<string>
using namespace std;
class thisinh {
    private :   string hoten;
                int sbd, dtoan, dly, dhoa, tong;
    public :
        void nhapsv(){
        	cin.ignore();
            cout<<"Nhap ho va ten : ";
			fflush(stdin);
            getline(cin,hoten);
            cout<<"Nhap so bao danh : "; cin>>sbd;
            cout<<"Nhap diem toan : "; cin>>dtoan;
            cout<<"Nhap diem ly : "; cin>>dly;
            cout<<"Nhap diem hoa : "; cin>>dhoa;

        }
        void hienthisv(){
            cout<<"\nHo va ten : "<<hoten<<endl;
            cout<<"So bao danh : "<<sbd<<endl;
            cout<<"Diem toan : "<<dtoan<<endl;
            cout<<"Diem ly : "<<dly<<endl;
            cout<<"Diem hoa : "<<dhoa<<endl;
            cout<<"Tong diem : "<<dtoan+dly+dhoa;
        }
        int sum(){
        	return (dtoan+dly+dhoa);
		}

        int timkiemsv(){
        	if ((dtoan + dly + dhoa) > 18){
        		cout<<endl;
        		hienthisv();
			}
		}

};
int swap(thisinh &x,thisinh &y){
        		thisinh t=x;
        		x=y;
        		y=t;
		}

int main()
{
    thisinh a[10];
	int n;
    cout<<"So sinh vien can nhap : "; cin>>n;
    cout<<"NHAP THONG TIN SINH VIEN";

    for (int i=0; i<n; i++){
    	cout<<"\n - Nhap thong tin sinh vien thu "<<i+1<<" :"<<endl;
        a[i].nhapsv();
    }

	cout<<"HIEN THI THONG TIN CAC SINH VIEN";
    for (int i=0; i<n; i++){
    	cout<<"\n\n - Sinh vien thu "<<i+1<<" :";
        a[i].hienthisv();
	}


    cout<<"\n\nSap xep danh sach sinh vien theo thu tu tang dan ve diem so:"<<endl;
	for(int i=0 ; i<n ; i++){
		for(int j=i+1 ; j<n ; j++){
			if(a[i].sum()>a[j].sum()){
				swap(a[i],a[j]);
			}
		}
	}
	for (int i=0 ; i<n ; i++){
        cout<<"\n"<<i+1<<".";
		a[i].hienthisv();
	}
	cout<<"\n\nDanh sach nhung sinh vien co tong diem tren 18 :";
	for (int i=0 ; i<n ; i++){
	    cout<<"\n";
		a[i].timkiemsv();
	}
	cout<<"\n\nSinh vien co diem cao nhat :\n";
	thisinh max=a[0];
	for(int i=1 ; i<n ; i++){
		if (max.sum()<a[i].sum())
			swap(max,a[i]);
	}max.hienthisv();

    return 0;
}

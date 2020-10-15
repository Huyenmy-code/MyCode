//Ho va ten : Nguyen Thi Huyen My
//MSSV : 1755248020100172
//input : gio, phut , giay
//output : hien thi thoi gian theo dang gio:phut:giay

#include <iostream>
using namespace std;
class MyTime
{
    private: int gio,phut,giay;
    public:
    	MyTime(){
    		gio = 0;
    		phut = 0;
    		giay = 0;
		}
        void nhap()
        {
            cout<<"\nNhap gio: "; cin>>gio;
            if ((gio>=0)&&(gio<24)){
			}
		 	else {
			 cout<<"Nhap sai! Moi nhap lai so gio :"; cin>>gio;
			 }
            cout<<"Nhap phut: "; cin>>phut;
            if ((phut>=0)&&(phut<59)){
			}
		 	else {
			 cout<<"Nhap sai! Moi nhap lai so phut :"; cin>>phut;
			 }
            cout<<"Nhap giay: "; cin>>giay;
            if ((giay>=0)&&(giay<59)){
			}
		 	else {
			 cout<<"Nhap sai! Moi nhap lai so giay :"; cin>>giay;
			 }
        }

        void output() {
            cout<<"Thoi gian la:"<<gio<<":"<<phut<<":"<<giay<<endl;
        }
};


int main()
{
    MyTime time[5];

    cout<<"    NHAP THOI GIAN\n";
	for (int i=0 ; i<5 ; i++){
		cout<<"\nNhap thoi gian cho doi tuong "<<i+1<<":";
		time[i].nhap();
	}

    cout<<"\n    HIEN THI \n";
	for (int i=0 ; i<5 ; i++){
		cout<<"\nHien thi thoi gian cho doi tuong "<<i+1<<":"<<endl;
		time[i].output();
	}


    return 0;
}










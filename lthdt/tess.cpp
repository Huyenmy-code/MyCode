#pragma once
#include <iostream>

using namespace std;
class Time
{
	private:
	int d,m,y;
    public:
    	
        int nhap()
        {    
		        
			cout<<"Ngay (1-31):"; cin>>d;
			if ((d>31)||(d<1))
			{
				cout<<"Sai ngay :"; cin>>d;
			}
			else
			{
            cout<<"Thang (1-12):"; cin>>m;
			if ((m>12)||(d<1))
			{
				cout<<"Sai thang :"; cin>>m;
			} 
			else
			{
				if (((m==2)&&(d>29))||((m==4)&&(d>30))||((m==6)&&(d>30))||((m==9)&&(d>30))||((m==11)&&(d>30)) )
				{
				cout<<"Nhap lai ngay:";cin>>d;
				}  
				else{
				            
			cout<<"Nam (1900-2020):"; cin>>y;
			if ((y>2020)||(y<1900))
			{
				cout<<"Sai nam :"; cin>>y;
			} 
			}
			}
			
			} 
        }

        string Ngay()
		{
			return to_string(d) + "/" + to_string(m) + "/" + to_string(y);
		}
};

int main ()
{
	Time a;
	a.nhap();
	a.Ngay();
	return 0;
}

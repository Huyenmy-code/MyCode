#pragma once
#include <iostream>

using namespace std;
class Time
{
	private:
	int d,m,y;
    public:
    	int a=0;
    	int b=0;
    	int c=0;
        void nhap()
        {    
			while (a==0)
			{        
				cout<<"Ngay (1-31):"; cin>>d;
				if ((d>31)||(d<1))
				{
					cout<<"Sai ngay !\n Moi nhap lai ngay ! ";
					a=0;
				}
				else
					break;
			}
			while (b==0)
			{        
				cout<<"Thang (1-12):"; cin>>m;
				if ((m>12)||(m<1))
				{
					cout<<"Sai thang ! \n Moi nhap lai thang !";
					b=0;
				}
				else
					break;
			}
			 
			if (((m==2)&&(d>29))||((m==4)&&(d>30))||((m==6)&&(d>30))||((m==9)&&(d>30))||((m==11)&&(d>30)) )
			{
				cout<<"Nhap lai ngay:";cin>>d;
			}
			while (c==0)
			{        
				cout<<"Nam (1900-2020):"; cin>>y;
				if ((y<=2020)&&(y>1900))
				{
					break;
				}
				else
				{
					cout<<"Sai Nam !\n Moi nhap lai nam ! ";
					c=0;
				}
			}               
  
        }

        string Ngay()
		{
			return to_string(d) + "/" + to_string(m) + "/" + to_string(y);
		}
};



		#include<iostream>
		#include<conio.h>
		using namespace std;
		 
		class lopA
		{
		  public:
		   void hienthiA()
		   {
		        cout<<"\nLop A ";
		   }
		};
		 
		class lopB:virtual public lopA
		{	  
		  public:
		   void hienthiB()
			{
		        cout<<"\nLop B ";
			}
		};
		
		class lopC:public virtual lopA
		{		 
		  public:
		    void hienthiC()
		    {
		        cout<<"\nLop C ";
		    }
		};
		
		class lopD:public lopB,public lopC
		{
		  public:
		   void hienthiD()
		   {
		   		hienthiA(); 
		   		hienthiB();
		   		hienthiC();
				cout<<"\nLop D ";
		   }
		};
		 
		int main()
		{
		   lopD d;
		   d.hienthiD();
		   return 0;
		}

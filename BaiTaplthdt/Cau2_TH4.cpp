//Ho va ten : Nguyen Thi Huyen My
//MSSV : 1755248020100172
//input : nhap mot so k va mot vector a co n phan tu;
//output : in ra man hinh vector a và vector k*a;
#include<stdio.h>
#include<iostream>
using namespace std;
class vector{
	private:
		int n;
		float *v;
	public:
		vector(int a)
		{
			n=a;
			v=new float [n];
		}
		vector(vector &a)
		{
			n=a.n;
		 	v=new float [n];
		 	for (int i=0;i<n;i++)
		 	{
		 		v[i]=a.v[i];	
			}
		   
		}
		~vector()
		{
			delete v;
		}
		void nhap()
		{
			for(int i=0; i<n; i++)
			{
				cout<<"Nhap phan tu thu "<<i+1<<" : "; cin>>v[i];
			}
		}
		void hienthi()
		{
			for (int i=0; i<n;i++)
			{
				cout<<v[i]<<"\t\t";
			}
		}
		vector operator =(vector &a)
		{
			n=a.n;
		 	v=new float [n];
		 	for (int i=0;i<n;i++)
		 	{
		 		v[i]=a.v[i];
			}
		}
		 
		friend vector operator *(int k,vector &a)
		{
		 	int i;
		 	vector c=a;
			for (i=0;i<a.n;i++)
			{
				c.v[i]=k*a.v[i];		 		
			} 
			c.hienthi();     
		}
};
int main(){

	int n,k;
	cout<<"Nhap so phan tu cua vector a:  ";cin>>n;
	vector a(n);
	a.nhap();
	
	cout<<"Vector a la :   ";
	a.hienthi();
	
	cout<<"\nNhap k:  "; cin>>k;
    cout<<"\nVector k*a la:  "; 
    k*a;
	return 0;
}

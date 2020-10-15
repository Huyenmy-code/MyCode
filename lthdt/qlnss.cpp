#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include "Time.cpp"
using namespace std;
class NhanVien 
{	private:		
		char hoten[30],que[20],loainv[20], gtinh[5];
		int luong,  NVdien, ngaynghi,gioitinh;
		int manv; 
	public:
		Time ns,ngayvao;
		NhanVien(){}

		virtual void nhap()
	    {
	    	int a=0;
	    	int b=0;
	    	int c=0;
	    	char str1[5]= "Nu";
			char str2[5]= "nu";
			char str3[5]= "nam";
			char str4[5]= "Nam";
	    	cout<<"\nNhap ho ten : "; fflush(stdin); gets(hoten);
			cout<<"Nhap MaNV: "; cin>>manv;
			while (a==0){
				cout<<"Nhap gioi tinh (Nam/Nu): "; fflush(stdin); gets(gtinh);
				if ((strcmp(gtinh,str1)==0)||(strcmp(gtinh,str2)==0)||(strcmp(gtinh,str3)==0)||(strcmp(gtinh,str4)==0))
				{
					break;
				}
				else
				{
					cout<<"Nhap sai ! ";
					a=0;
				}
			}
			
			if ((strcmp(gtinh,str1)==0)||(strcmp(gtinh,str2)==0))
	        {
	        	while (c==0)
	        	{
	        		cout<<"Nghi ngay nao trong tuan: "; cin>>ngaynghi;
	        		if ((ngaynghi==2)||(ngaynghi==3)||(ngaynghi==4)||(ngaynghi==5)||(ngaynghi==6)||(ngaynghi==7))
	        		{
	        			break;
					}
					else
					{
						cout<<"Nhap sai thu trong tuan! Moi nhap lai!\n";
						c=0;
					}
				}	            
	        }
			cout<<"Nhap que quan: "; fflush(stdin); gets(que);
			cout<<"Nhap ngay sinh: "; ns.nhap();
			cout<<"Nhap ngay vao cong ty: "; ngayvao.nhap();
			while (b==0)
			{
				cout<<"Nhap luong: "; cin>>luong;
				if (luong<1000000)
				{
					cout<<"Nhap sai! Moi nhap lai luong ! ";
					b=0;
				}
				else 
					break;
			}
	    }
        void xuat()
		{			
        	cout<<"\n\n\tMaNV: "<< manv << "\n\t" <<"HoTen: " <<hoten << "\t\t\t" <<"QueQuan: "<< que<< "\n\t" << "GioiTinh: "<< gtinh 
			<< "\t\t\t"<<"NgayVao: "<< ngayvao.Ngay()  << "\n\t" <<"Luong: "<< luong
			<< "\t\t\t"<<"NgaySinh: "<< ns.Ngay(); 
		}
        int nunghi()
        {
        	char str1[5]= "Nu";
        	char str2[5]= "nu";
         	if ((strcmp(gtinh,str1)==0)||(strcmp(gtinh,str2)==0))
         	{
         		return ngaynghi;
			}
        	
		}

        
};
class NvVanPhong :public NhanVien
{
  public:
  		
		int phong;
  	    NvVanPhong(){}
        
        void nhap()
        {
        	int a=0;
			NhanVien::nhap();
			while (a==0)
			{		
				cout<<"Nhan vien phong: "; cin>>phong;
				if ((phong<1)||(phong>5))
				{
					cout<<"Khong ton tai phong nay! Moi nhap lai phong!\n";
					a=0;
				}
				else
					break;
			}
        }
        void xuat()
		{
        	NhanVien::xuat();
        	cout<<"\n\tPhong :"<<phong; 
			cout<<"\n_______________________________________________________";       	
    	}

};
class CongNhanSX :public NhanVien
{
  public:
      	int manv,dmslsp;
        CongNhanSX(){}
        
        void nhap()
		{
        	NhanVien::nhap();
        	int a=0;
        	while (a==0)
        	{
        		cout<<"Dinh muc so luong san pham:"; cin>>dmslsp;
        		if ((dmslsp<300)||(dmslsp>1000))
        		{
        			cout<<"Khong nam trong pham vi dinh muc cua cong ty X! Moi nhap lai!\n";
        			a=0;
				}
				else
					break;
			}       		
		}
        void xuat(){
        	NhanVien::xuat();
        	cout<<"\n\tDinh muc so luong san pham:"<<dmslsp;
    		cout<<"\n_______________________________________________________";
        }
};

class NvChuyenDi :public NhanVien
{
 
  public:
    	Time ngaydi;
        NvChuyenDi(){}
        
        void nhap()
		{
        	NhanVien::nhap();
    		cout<<"Nhap ngay chuyen di:"; ngaydi.nhap();    					
        }
        void xuat()
		{
        	NhanVien::xuat();
        	cout<<"\n\tNgay chuyen di:"<<ngaydi.Ngay();
        	cout<<"\n_______________________________________________________";
        }

};


int main()
{
    FILE *fp,*fp2,*fp3;
    char ch;
    int chon;
    NvVanPhong nvvp;
    CongNhanSX cnsx;
    NvChuyenDi nvcd;
    do {system("cls");
    	cout << "================= MENU =================\n";
        cout << "  1. Nhap Nhan Vien Van Phong\n";
        cout << "  2. Nhap Cong Nhan San Xuat\n";
        cout << "  3. Nhap Nhan Vien Chuyen Di\n";
        cout << "  4. Thong Ke Tat Ca Nhan Vien\n";
        cout << "  5. Thong Ke Nhan Vien Van Phong\n";
        cout << "  6. Thong Ke Cong Nhan San Xuat\n";
        cout << "  7. Thong Ke Nhan Vien Chuyen Di\n";
        cout << "  8. Thong Ke Nhan Vien Nu Nghi Theo Thu\n";
        cout << "  0. Thoat!\n";
        cout << "   Nhap Lua Chon:  ";cin>>chon;
                	switch(chon)
                	{
						case 1:
	                        { 
								cout<<"\n_________Nhan Vien Van Phong__________"<<endl;
	                            fp = fopen("D:\\NhanVienVanPhong.text","a");
	                            
	                            do
	                            {
	                                nvvp.nhap();
	                                fwrite(&nvvp,sizeof(nvvp),1,fp);
	                                
	                                nvvp.xuat();
									cout<<endl;
	                                cout<<"\nBan muon nhap them (y/n) : ";
	                                ch = getche();
	                            }while(ch=='y' || ch=='Y');
		                        fclose(fp);
		                        
		                        break;
	                        }
                 		case 2:
	                        {  
						 		cout<<"\n_________Cong Nhan San Xuat__________"<<endl;
	                            fp = fopen("D:\\CongNhanSanXuat.text","a");
	                            
	                            do
	                            {
	                                cnsx.nhap();
	                                fwrite(&cnsx,sizeof(cnsx),1,fp);
	                                
	                                cnsx.xuat();
									cout<<endl;
	                                cout<<"\nBan muon nhap them (y/n) : ";
	                                ch = getche();
	                            }while(ch=='y' || ch=='Y');
		                        fclose(fp);
		                        
		                        break;
	                        }
                        case 3:
	                        {  
						 		cout<<"\n_________Nhan Vien Chuyen Di__________"<<endl;
	                            fp = fopen("D:\\NhanVienChuyenDi.text","a");
	                            
	                            do
	                            {
	                                nvcd.nhap();
	                                fwrite(&nvcd,sizeof(nvcd),1,fp);
	                                
	                                nvcd.xuat();
									cout<<endl;
	                                cout<<"\nBan muon nhap them (y/n) : ";
	                                ch = getche();
	                            }while(ch=='y' || ch=='Y');
		                        fclose(fp);
		                       
		                        break;
	                        }
                        case 4:
	                        {	
								cout<<"\n_____________Tat Ca Nhan Vien___________"<<endl;
	                            fp = fopen("D:\\NhanVienVanPhong.text","r");
	                            fp2 = fopen("D:\\CongNhanSanXuat.text","r");
	                            fp3 = fopen("D:\\NhanVienChuyenDi.text","r");
	                            int i = 1;
	                            while(fread(&nvvp,sizeof(nvvp),1,fp)>0)
	                            {
	                                cout<<"\n+ Nhan vien thu "<<i++<< ":";
	                                nvvp.xuat();
									cout<<endl;
									
	                            }
		                        
		                        while(fread(&cnsx,sizeof(cnsx),1,fp2)>0)
	                            {
	                                cout<<"\n+ Nhan vien thu "<<i++<< ":";
	                                cnsx.xuat();
									cout<<endl;
	                            }
		                        
		                        while(fread(&nvcd,sizeof(nvcd),1,fp3)>0)
	                            {
	                                cout<<"\n+ Nhan vien thu "<<i++<< ":";
	                                nvcd.xuat();
									cout<<endl;
	                            }
	                            fclose(fp);
	                            fclose(fp2);
		                        fclose(fp3);
		                        system("pause");
		                        break;
	                        }
                        case 5:
	                        {	
								cout<<"\n_____________Nhan Vien Van Phong___________"<<endl;
	                            fp = fopen("D:\\NhanVienVanPhong.text","r");
	                            int i = 1;
	                            while(fread(&nvvp,sizeof(nvvp),1,fp)>0)
	                            {
	                                cout<<"\n+ Nhan vien thu "<<i++<< ":";
	                                nvvp.xuat();
									cout<<endl;
	                            }
		                        fclose(fp);
		                        system("pause");
		                        break;
	                        }
                        case 6:
	                        {	cout<<"\n_____________Cong Nhan San Xuat___________"<<endl;
	                            fp = fopen("D:\\CongNhanSanXuat.text","r");
	                            int i = 1;
	                            while(fread(&cnsx,sizeof(cnsx),1,fp)>0)
	                            {
	                                cout<<"\n+ Nhan vien thu "<<i++<< ":";
	                                cnsx.xuat();
									cout<<endl;
	                            }
		                        fclose(fp);
		                        system("pause");
		                        break;
	                        }
                        case 7:
	                        {	
								cout<<"\n_____________Nhan Vien Chuyen Di___________"<<endl;
	                            fp = fopen("D:\\NhanVienChuyenDi.text","r");
	                            int i = 1;
	                            while(fread(&nvcd,sizeof(nvcd),1,fp)>0)
	                            {
	                                cout<<"\n+ Nhan vien thu "<<i++<< ":";
	                                nvcd.xuat();
									cout<<endl;
	                            }
	                        	fclose(fp);
	                        	system("pause");
	                        	break;
	                        }
                        case 8:
                        	{
                        		int thu;
                        		cout<<"__________Nhan Vien Nu Nghi Theo Thu Trong Tuan_________";
                        		cout<<"\nNhan vien nu nghi vao thu :"; cin>>thu;
                        		int i=1;
                        		fp = fopen("D:\\NhanVienVanPhong.text","r");
	                            fp2 = fopen("D:\\CongNhanSanXuat.text","r");
	                            fp3 = fopen("D:\\NhanVienChuyenDi.text","r");

                        		while (fread(&nvvp,sizeof(nvvp),1,fp)>0)
                        		{
                        			if (nvvp.nunghi()==thu)
                        				{
                        					cout<<"\n+ Nhan vien thu "<<i++<< ":";
	                                	nvvp.xuat();
										cout<<endl;
										}                       				
								}
			
								while (fread(&cnsx,sizeof(cnsx),1,fp2)>0)
                        		{
                        			if (cnsx.nunghi()==thu)
									{
										cout<<"\n+ Nhan vien thu "<<i++<< ":";
	                                	cnsx.xuat();
										cout<<endl;
									}
								}
								
								
								while (fread(&nvcd,sizeof(nvcd),1,fp3)>0)
                        		{
                        			if (nvcd.nunghi()==thu)
									{
                        				cout<<"\n+ Nhan vien thu "<<i++<< ":";
	                                	nvcd.xuat();
										cout<<endl;
									}									
								}
								fclose(fp);
								fclose(fp2);
								fclose(fp3);
								system("pause");
								break;
							}
                    	
                 		case 0:
	                        {
	                            break;
	                        }
                        default: cout<<"\nNhap Sai! Nhap lai !";
                        system("pause");
                    }
        }while(chon);
	return 0;
}

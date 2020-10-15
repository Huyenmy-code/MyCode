#pragma once
#include <iostream>
#include <fstream>
#include <vector>
//#include  "Time.cpp"
using namespace std;
class NhanVien 
{		
	public:
		string hoten, luong,gtinh,  que, ns, ngayvao;
		int manv,  NVdien, ngaynghi;
		NhanVien(){}
		virtual int nhap(int ma, int loainv)
	    {
	    	manv=ma;
	    	NVdien=loainv;
	    	cin.ignore();
	        cout<<"\nNhap Ho Ten: ";
			fflush(stdin); 
			getline(cin,hoten);
	        cout<<"Gioi tinh (Nam/Nu) :";	
	        fflush(stdin);
	        getline(cin,gtinh);
	        if((gtinh=="Nam")||(gtinh=="nam")||(gtinh=="Nu")||(gtinh=="nu"))
	        {   }
			else 
			{
				cout<<"Moi nhap lai gioi tinh !";
	        	cout<<"\nGioi tinh (Nam/Nu) :";	
	        	fflush(stdin);
	        	getline(cin,gtinh);
			}
	        if ((gtinh=="nu")||(gtinh=="Nu"))
	        {
	            cout<<"Nghi ngay nao trong tuan: "; cin>>ngaynghi;
	        }
	        cout<<"Que quan: ";
			fflush(stdin);
			getline(cin,que);
	        cout<<"Ngay Sinh (d/m/y) : "; 
			fflush(stdin);
			getline(cin,ns);
	        cout<<"Ngay vao Cong Ty (d/m/y) : ";
			fflush(stdin);
			getline(cin,ngayvao);
	        cout<<"Luong: ";
	        fflush(stdin);
	        getline(cin,luong);
	        return 1;
	    }
      virtual  void save(){
        	ofstream myfile;
   			myfile.open ("D:\\Nhanvien.txt", std::ios_base::app);
			myfile << manv << "," << hoten << "," << gtinh << "," << que << "," << ns << ","<< ngayvao << ","<< luong<<","<< NVdien<< "\n"; 
    		myfile.close();
        }
        virtual  void nvnghi(){
        	ofstream myfile;
        	
        		myfile.open ("D:\\NvNuNghi.txt", std::ios_base::app);
        	if ((gtinh=="nu")||(gtinh=="Nu"))
        	{
				myfile << manv << "," << ngaynghi<< "\n"; 
	    		
			}
   			myfile.close();
        }
        
     virtual  void display(){
			
			string loainv;
			if(NVdien == 1){
				loainv = "Nhan Vien Van Phong";
			}
			else if(NVdien == 2){
				loainv = "Cong Nhan San Xuat";
			}
			else if(NVdien == 3){
				loainv = "Nhan Vien Chuyen Di";
			}
	
        	cout<<"\n\nMaNV: "<< manv << "\n" <<"HoTen: " <<hoten << "\t\t\t" <<"QueQuan: "<< que<< "\n" << "GioiTinh: "<< gtinh << "\t\t\t"<<"NgayVao: "<< ngayvao  << "\n" <<"NgaySinh: "<< ns
			<< "\t\t"<<"Luong: "<< luong <<"\n"<<"Nhan vien thuoc dien: "<<loainv; 
			
        }
         
};

class NvVanPhong :public NhanVien
{
  public:
  		int manv;
		int phong;
   		NhanVien nvn;
  	    NvVanPhong(){}
        
        int nhap(int ma, int NVdien){
        	manv = ma;
        	nvn.nhap(ma,NVdien);		
			cout<<"Nhan vien phong: "; cin>>phong;
		
			int luuNV;
			cout << "----------------Luu thong tin nhan vien-----------------\n";
			cout << "1.Luu.\n";
			cout << "2.Luu va hien ra man hinh.\n";
			cout << "3.Hien thi ra man hinh va khong luu.\n";
			cout << "Nhap Lua chon:";   cin >> luuNV;
			if(luuNV == 1){
				save();
				return 1;
			}
			if(luuNV == 2){
				display();
				save();
				return 1;
			}
			return 0;
				
        }
        void save(){
        	ofstream myfile;
   			myfile.open ("D:\\NVVP.txt", std::ios_base::app);
			myfile << manv << ",   "<< phong << "\n";
    		myfile.close();
    		nvn.save();
    		nvn.nvnghi();
    		        }
        void display()
        {
        	ofstream myfile;
   			myfile.open ("D:\\NVVP.txt", std::ios_base::app);
			myfile << manv << ",   "<< phong << "\n";
    		myfile.close();
    		nvn.save();
    		nvn.nvnghi();
			cout << "NHAN VIEN VAN PHONG: "; nvn.display();
			cout<<" \nPhong: " << phong <<"\n";
			cout<<"\n____________________________________________________";
        }
       
};

class CongNhanSX :public NhanVien
{
  public:
      	int manv,dmslsp;
   		NhanVien nvn;
        CongNhanSX(){}
        
        int nhap(int ma, int NVdien){
        	manv = ma;
        	nvn.nhap(ma,NVdien);
        	cout<<"Dinh muc so luong san pham:"; cin>>dmslsp;
			
			int luuNV;
			cout << "----------------Luu thong tin nhan vien-----------------\n";
			cout << "1.Luu.\n";
			cout << "2.Luu va hien ra man hinh.\n";
			cout << "3.Hien thi ra man hinh va khong luu.\n";
			cout << "Nhap Lua chon:";   cin >> luuNV;
			if(luuNV == 1){
				save();
				return 1;
			}
			if(luuNV == 2){
				display();
				save();
				return 1;
			}
			return 0;
				
        }
        void save(){
        	ofstream myfile;
   			myfile.open ("D:\\CNSX.txt", std::ios_base::app);
			myfile << manv << "," << dmslsp << "\n";
    		myfile.close();
    		nvn.save();
    		cout<<"\n____________________________________________________";
        }
        void display(){
        	
			cout << "CONG NHAN SAN XUAT: "; nvn.display();
			cout<< "\n"<<"Dinh muc slsp: "<< dmslsp <<"\n";
			cout<<"\n____________________________________________________";
        }
        
};

class NvChuyenDi :public NhanVien
{
 
  public:
  	int manv;
    	string ngaydi;
   		NhanVien nvn;
        NvChuyenDi(){}
        
        int nhap(int ma, int NVdien){
        	manv = ma;
        	nvn.nhap(ma,NVdien);	
			cin.ignore();	
			cout<<"Ngay chuyen di : "; 
			fflush(stdin);
			getline(cin,ngaydi);
			int luuNV;
			cout << "----------------Luu thong tin nhan vien-----------------\n";
			cout << "1.Luu.\n";
			cout << "2.Luu va hien ra man hinh.\n";
			cout << "3.Hien thi ra man hinh va khong luu.\n";
			cout << "Nhap Lua chon:";   cin >> luuNV;
			if(luuNV == 1){
				save();
				return 1;
			}
			if(luuNV == 2){
				display();
				save();
				return 1;
			}
			return 0;
				
        }
        void save(){
        	ofstream myfile;
   			myfile.open ("D:\\NVCD.txt", std::ios_base::app);
			myfile << manv << "," << ngaydi << "\n";
    		myfile.close();
    		nvn.save();
        }
        void display(){
        	ofstream myfile;
   			myfile.open ("D:\\NVCD.txt", std::ios_base::app);
			myfile << manv << "," << ngaydi << "\n";
    		myfile.close();
    		nvn.save();
			cout << "NHAN VIEN CHUYEN DI: "; nvn.display();
			cout<<"\n"<<"Ngay chuyen di: "<< ngaydi <<"\n";
			cout<<"\n____________________________________________________";
        }
        
};

class QLNS:public NvVanPhong,CongNhanSX,NvChuyenDi
{ 
public: 
    vector<NhanVien> DSnhanvien;
    vector<NvVanPhong> DSnvvp;
	vector<CongNhanSX> DScnsx;
	vector<NvChuyenDi> DSnvcd;

	vector<string> split (string s, char kitu) {
	        vector<string> result;
	        int i = 0;
			for(int j = 0; j < s.length();j++){
				if(s[j] == kitu){
					result.push_back(s.substr(i, j - i));
	
					i = j + 1;
				}
			}
			result.push_back(s.substr(i,  s.length() - i));

	        return result;
	}
	void readNhanVien(){
		ifstream file("D:\\NhanVien.txt");
	    string str; 
	    while (getline(file, str)) {
	        vector<string> nvien = split (str, ',');
	    	if(nvien.size() > 5){
	    		NhanVien nv;
	    		nv.manv = stoi(nvien[0]);
	    		nv.hoten = nvien[1];
				nv.gtinh = nvien[2];
				nv.que = nvien[3];
				nv.ns=nvien[4];
				nv.ngayvao=nvien[5];
				nv.luong =nvien[6];
				nv.NVdien = stoi(nvien[7]);
	    		DSnhanvien.push_back (nv);
	    	}
	    }
	}
	NhanVien getNhanVien(int manv){
		NhanVien nvien;
		for (NhanVien nv : DSnhanvien) {
           if(nv.manv == manv){
			   nvien = nv;
			   break;
           }
        }
		return nvien;
	}
	void readNVVP(){
		ifstream file("D:\\NVVP.txt");
	    string str; 
	    while (getline(file, str)) {
	        vector<string> nvien = split (str, ',');
	    	if(nvien.size() > 5){
	    		NvVanPhong nv;
	    		nv.manv = stoi(nvien[0]);
	    		nv.phong =stoi(nvien[1]);
	    		nv.nvn = getNhanVien(nv.manv);
	    		DSnvvp.push_back (nv);
	    	}
	    }
	}
	void readCNSX(){
		ifstream file("D:\\CNSX.txt");
	    string str; 
	    while (getline(file, str)) {
	        vector<string> nvien = split (str, ',');
	    	if(nvien.size() > 5){
	    		CongNhanSX nv;
	    		nv.manv = stoi(nvien[0]);
	    		nv.dmslsp=stoi(nvien[1]);
				nv.nvn = getNhanVien(nv.manv);
	    		DScnsx.push_back (nv);
	    	}
	    }
	}
	void readNVCD(){
		ifstream file("D:\\NVCD.txt");
	    string str; 
	    while (getline(file, str)) {
	        vector<string> nvien = split (str, ',');
	    	if(nvien.size() > 5){
	    		NvChuyenDi nv;
	    		nv.manv = stoi(nvien[0]);
				nv.ngaydi =nvien[1];
				nv.nvn = getNhanVien(nv.manv);
	    		DSnvcd.push_back (nv);
	    	}
	    }
	}
	
	int getManv(){
		int newmanv = 0;
        for (NhanVien nv : DSnhanvien) {
           if(newmanv < nv.manv){
               newmanv = nv.manv;
           }
        }
        return newmanv + 1;
	}
	void timkiem()
	{
		string tim = "";
	    cout << "Nhap ma cua nhan vien can tim:";cin >> tim;
		NhanVien nv;
	    
			int manv = stoi(tim);
	        nv = getNhanVien(manv);
	        //nv.readNhanVien();
	        nv.display();
	}
	void nhapnv(){
		
		int manv = getManv();
	    int loainv;
	    cout << "\n----------------Nhom Nhan Vien-----------------\n";
		cout << "1.Nhan vien van phong.\n";
		cout << "2.Cong nhan san xuat.\n";
		cout << "3.Nhan vien chuyen di\n";
		cout << "4.Tro ve.\n";
		cout << "Lua chon:";cin >> loainv;
	    
	    if(loainv == 1){
	        NvVanPhong nvvp;
	    	int kq=nvvp.nhap(manv, loainv);
	    	if (kq==1)
	    	{
	    		DSnvvp.push_back (nvvp);
	    		DSnhanvien.push_back(nvvp.nvn);
			}
	    
	    }
		else if (loainv == 2){
	        CongNhanSX cnsx ;
	    	int kq=cnsx.nhap(manv, loainv);
	    	if (kq==1)
	    	{
	    		DScnsx.push_back (cnsx);
	    		DSnhanvien.push_back(cnsx.nvn);
			}
	    }
	    else if(loainv == 3){
	        NvChuyenDi nvcd ;
	    	int kq=nvcd.nhap(manv, loainv);
	    	if (kq==1)
	    	{
	    		DSnvcd.push_back (nvcd);
	    		DSnhanvien.push_back(nvcd.nvn);
			}
	    }
	    
	}
};

int main()
{
	QLNS ql;
	ql.readNhanVien();
	ql.readNVVP();
	ql.readCNSX();
	ql.readNVCD();

	int Luachon;
	do {
		cout << "\n----------------MENU-----------------\n";
		cout << "1.Nhap nhan vien.\n";
		cout << "2.Thong ke tat ca nhan vien.\n";
		cout << "3.Thong ke nhan vien van phong.\n";
		cout << "4.Thong ke cong nhan san xuat.\n";
		cout << "5.Thong ke nhan vien chuyen di.\n";
		cout << "6.Thoat.\n";
		cout <<"************************************************\n";
		cout << "Lua chon:";cin >> Luachon;
		switch (Luachon)
		{
		case 1:
			ql.nhapnv();
			break;
		case 2:
			
			 for (int i = 0; i < ql.DSnhanvien.size();i++){
				NhanVien nv = ql.DSnhanvien[i];
				nv.display();
			}
			
			break;
		case 3:
			
			for (int i = 0; i < ql.DSnvvp.size();i++){
				NvVanPhong nv = ql.DSnvvp[i];
				nv.display();
			}
			
			break;
		case 4:
			
			for (int i = 0; i < ql.DScnsx.size();i++){
				CongNhanSX nv = ql.DScnsx[i];
				nv.display();
			}
			
			break;
		case 5:
			
			for (int i = 0; i < ql.DSnvcd.size();i++){
				NvChuyenDi nv = ql.DSnvcd[i];
				nv.display();
			}
		
			break;
		case 6:	
			break;
		default:
			
			break;
		}
	} while (Luachon != 6);

}

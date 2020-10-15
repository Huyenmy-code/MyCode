#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

       class Student
       {
           private:
                int msv;
                char hoten[10];
                float diem1, diem2, diem3, diemtong;
           public:
                void input()
                {
                    cout<<"\nMa sinh vien:"; cin>>msv;
                    cout<<"Ho va ten:"; fflush(stdin); gets(hoten);
                    cout<<"Diem 1:"; cin>>diem1;
                    cout<<"Diem 2:"; cin>>diem2;
                    cout<<"Diem 2:"; cin>>diem3;
                    diemtong = diem1 + diem2 + diem3;
                }
               void output()
                {
                    cout<<endl;
                    cout<<"MSV:"<<msv<<endl;
                    cout<<"Ho ten:"<<hoten<<endl;
                    cout<<"Diem 1:"<<diem1<<endl;
                    cout<<"Diem 2:"<<diem2<<endl;
                    cout<<"Diem 3:"<<diem3<<endl;
                    cout<<"Diem tong:"<<diemtong<<endl;
                }
       };

       int main()
       {
              FILE *fp;
              char ch;
              Student Stu;

              fp = fopen("D:/lthdt/Student.txt","w");            //Statement   1

              do
              {
                      Stu.input();

                      fwrite(&Stu,sizeof(Stu),1,fp);

                      Stu.output();
                      cout<<"\nDo you want to add another data (y/n) : ";
                      ch = getch();

              }while(ch=='y' || ch=='Y');

              cout<<"\nData written successfully...";

              fclose(fp);
              return 0;
       }

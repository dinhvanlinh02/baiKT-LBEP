#include <iostream>
using namespace std;
  int Nhap()
{
int x;
   do{cin>>x;
   if(x<1)
    cout<<"Nhap sai, yeu cau nhap lai!";}
     while(x<1);
     return x;
}
  long Tinh(int x, int y)
{float p=1;
for(int i=1; i<=y; i++)
p=p*x;
return p;
}
int main()
{
int x, y;
 cout<<"Nhap so nguyen x: ";
 cin>>x;
 cout<<"Nhap so nguyen y: ";
 cin>>y;
 cout<< x << " ^ "<< y <<" = "<< Tinh(x,y);
 cout<<endl;
 }

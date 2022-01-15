#include<iostream>
using namespace std;


int main(int argc, char**argv)
{
	float A,B,x1,x2,y1,y2;
	
	cout<<"===menghitung nilai garis tengah==="<<endl;
	cout<<"masukkan nilai x1 =";cin>>x1;
	cout<<"masukkan nilai y1 =";cin>>y1;
	cout<<"masukkan nilai x2 =";cin>>x2;
	cout<<"masukkan nilai y2 =";cin>>y2;
	
	A=(x1+y2)/2;
	B=(y1+y2)/2;
	
	cout<<"Nilai tengah garis pada koordinat("<<A<<","<<B<<")";
	
	return 0;
}

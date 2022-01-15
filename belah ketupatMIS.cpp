#include<string.h>
#include<conio.h>
#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;

int main (){
	
	printf("Perulangan 2 Belah Ketupat\n\n");
	
	printf("MUHAMMAD MISBAHUDDIN IJLAL\n\n");
	string tampil = "";
	int x = 6;
	
	//==================================== ketupat atas
	int r = x;
	while (r > 0){
		
		//------------------------------------- Spasi 1
		int space = r;
		while (space >= 0){
			cout<<tampil<<" ";
			space--;
		}
		
		//------------------------------------- Kiri 1
		int kiri = 1;
		while(kiri < x-(r-1)){
			cout<<tampil<<"*";
			kiri++;
		} 
		
		//------------------------------------- kanan 1
		int kanan = 1;
		while(kanan < kiri-1){
			cout<<tampil<<"*";
			kanan++;
		}
		
		//------------------------------------- spasi 2
		int space2 = r;
		while (space2 > 0){
			cout<<tampil<<"  ";
			space2--;
		}
		
		//------------------------------------- kiri 2
		int kiri2 = 1;
		while (kiri2 < x-(r-1)){
			cout<<tampil<<"*";
			kiri2++;
		}
		
		//------------------------------------- kanan 2
		int kanan2 = 1;
		while(kanan2 < kiri2-1){
			cout<<tampil<<"*";
			kanan2++;
		}
		
		cout<<tampil<<"\n";
		r--;
	}
	
	//==================================== Ketupat bawah
	int b = 0;
	while (b <= x){
		
		//------------------------------------- spasi 1
		int spaceb=b+1;
		while (spaceb > 0){
			cout<<tampil<<" ";
			spaceb--;
		}
		
		//------------------------------------- kiri 1
		int kirib=0;
		while (kirib < x-b){
			cout<<tampil<<"*";
			kirib++;
		}
		
		//------------------------------------- kanan 1
		int kanab=kirib;
		while (kanab > 1){
			cout<<tampil<<"*";
			kanab--;
		}
		
		//------------------------------------- spasi 2
		int spaceb2=b+1;
		while (spaceb2 > 1){
			cout<<tampil<<"  ";
			spaceb2--;
		}
		
		//------------------------------------- kiri 2
		int kirib2=0;
		while (kirib2 < x-b){
			cout<<tampil<<"*";
			kirib2++;
		}
		
		//------------------------------------- kanan 2
		int kanab2=kirib2;
		while (kanab2 > 1){
			cout<<tampil<<"*";
			kanab2--;
		}
		
		cout<<tampil<<"\n";
		b++;
	}
	
	return 0;
}


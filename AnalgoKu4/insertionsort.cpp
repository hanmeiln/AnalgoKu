/*
Nama    : Hana Meilina Fauziyyah
NPM     : 140810180012
Kelas   : B
Program : Insertion Sort
******************************************/

#include <iostream>
#include <conio.h>
using namespace std;

int data[100],data2[100],n;
void insertion_sort();

main(){
    cout<<"=============Insertion Sort============="<<endl;
    cout<<endl;
	cout<<"Masukkan Jumlah Data : ";
	cin>>n;
	cout<<endl;
	cout<<"========================================"<<endl;
	cout<<endl;
	for(int i=1;i<=n;i++){
	  cout<<"Masukkan data ke-"<<i<<" : ";
	  cin>>data[i];
	  data2[i]=data[i];
	}
	cout<<"========================================"<<endl;
	cout<<endl;
	cout<<"Data Setelah di Sort : "<<endl;
	for(int i=1; i<=n; i++){
	  cout<<data[i]<<" ";
	}
    cout<<endl;
    cout<<endl;
	cout<<"========================================"<<endl;

	getch();
}

void insertion_sort(){
	int temp,i,j;
	for(i=1;i<=n;i++){
	    temp = data[i];
		j = i -1;
	    while(data[j]>temp && j>=0){
			data[j+1] = data[j];
	   	    j--;
	    }
	    data[j+1] = temp;
	}
}

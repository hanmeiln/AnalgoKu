/*
Nama    : Hana Meilina Fauziyyah
NPM     : 140810180012
Kelas   : B
Program : Insertion Sort
******************************************/

#include <iostream>
#include <conio.h>
using namespace std;


int main(){
	int arr[100],n,temp;
    cout<<"==============Bubble Sort==============="<<endl;
    cout<<endl;
	cout<<"Masukkan Jumlah Data : ";
	cin>>n;
	cout<<endl;
	cout<<"========================================"<<endl;
	cout<<endl;

	for(int i=0;i<n;++i){
		cout<<"Masukkan Elemen ke-"<<i+1<<" : ";cin>>arr[i];
	}

	for(int i=1;i<n;i++){
		for(int j=0;j<(n-1);j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	cout<<endl;
	cout<<"========================================"<<endl;
	cout<<endl;
	cout<<"Data Setelah di Sort : "<<endl;
	for(int i=0;i<n;i++){
		cout<<" "<<arr[i];
	}
    cout<<endl;
    cout<<endl;
	cout<<"========================================"<<endl;
}

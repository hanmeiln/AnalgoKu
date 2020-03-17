/*
Nama Program        : Kasus 4
Nama                : Hana Meilina Fauziyyah
NPM                 : 140810180012
Kelas               : B
Deskripsi Program   : Insertion Sort
**************************************************/

#include <iostream>
using namespace std;

int data[100],data2[100],n;
void insertSort();

main(){
	cout<<"=========Insertion Short=========="<<endl;
	cout<<"Masukkan Jumlah Data : ";
	cin>>n;
	cout<<"================================="<<endl;

	for(int i=1;i<=n;i++){
	  cout<<"Masukkan data ke-"<<i<<" : ";
	  cin>>data[i];
	  data2[i]=data[i];
	}
	cout << "=================================" << endl;
	insertSort();
	cout<<"Data Setelah di Urutkan : "<<endl;

	for(int i=1; i<=n; i++){
	  cout<<data[i]<<" ";
	}
	cout<<endl;
	cout<<"=================================="<<endl;
}

void insertSort(){
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

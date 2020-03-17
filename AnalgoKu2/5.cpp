/*
Nama Program        : Kasus 5
Nama                : Hana Meilina Fauziyyah
NPM                 : 140810180012
Kelas               : B
Deskripsi Program   : Selection Sort
**************************************************/

#include <iostream>
using namespace std;

int data[100],datdata[100], n;
void change(int s, int r);
void selectionSort();

main(){
	cout<<"==========Selection Short===============";
	cout<<endl;
	cout<<"Masukkan jumlah data : ";
	cin>>n;
	cout<<"===================================="<<endl;

	for(int i=1;i<=n;i++){
		cout<<"Masukkan data ke-"<<i<<" : ";
		cin>>data[i];
		datdata[i]=data[i];
	}

	selectionSort();
	cout<<"======================================"<<endl;
	cout<<"Data Setelah di Urutkan : "<<endl;
	for(int i=1; i<=n; i++){
	  	cout<<" "<<data[i];
	}
	cout<<endl;
	cout<<"=====================================";
}

void change(int s, int r){
	int t;
	t = data[r];
	data[r] = data[s];
	data[s] = t;
}

void selectionSort(){
	int pos,i,j;
	for(i=1; i<=n-1 ;i++){
	    pos = i;
	    for(j = i+1;j<=n;j++){
		   if(data[j] < data[pos]) pos = j;
		}
        if(pos != i) change(pos,i);
    }
}

/*
Nama Program        : Kasus 3
Nama                : Hana Meilina Fauziyyah
NPM                 : 140810180012
Kelas               : B
Deskripsi Program   : Binary Search
**************************************************/

#include <iostream>
using namespace std;

main(){
	int n, i, array[100], cari, awal, akhir, tengah;
	cout<<"===========Binary Search============="<<endl;
	cout<<"Masukkan banyak data : ";
	cin>>n;
	cout<<"=================================="<<endl;

	for (i=0; i<n; i++){
		cout<<"Data ke-"<<i+1<<" :";
		cin>>array[i];
	}

	cout<<"Masukkan data yang di cari : ";
	cin>>cari;
	awal=0;
	akhir=n-1;
	cout<<"==================================="<<endl;

	while(awal <= akhir){
        tengah = (awal+akhir)/2;
		if(array[tengah]<cari){
			awal = tengah + 1;
        }
		else if(array[tengah]==cari){
			cout<<"Ditemukan pada data ke-"<<tengah+1<<"\n";
			break;
		}
		else{
			 akhir = tengah - 1;
		}
		tengah = (awal + akhir)/2;
	}

	if(awal>akhir){
		cout<<"Data tidak ditemukan"<<endl;
	}
	cout<<"==================================="<<endl;
	//getch();
}

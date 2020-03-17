/*
Nama Program        : Kasus 1
Nama                : Hana Meilina Fauziyyah
NPM                 : 140810180012
Kelas               : B
Deskripsi Program   : Pencarian Nilai Maksimal
**************************************************/

#include <iostream>
using namespace std;

main(){
    int n, maks, i, x[99];

	cout<<"=================================="<<endl;
	cout<<"======Mencari Nilai Maksimal======"<<endl;
	cout<<"=================================="<<endl;

	for(;;){
        cout<<"Masukkan jumlah data : ";
		cin>>n;
		if(n<2){
			cout<<"Minimal berisi 2 data"<<endl;
			continue;
		}
		break;
	}
	cout<<"Masukkan data : "<<endl;
	for (i=0; i<n; i++){
		cout<<"Data ke-"<<i+1<<": ";
		cin>>x[i];
	}
	i=1;
	maks=x[0];
	do {
		if(x[i]>maks){
			maks=x[i];
		}
		i=i+1;
	}
	while(i<n);
	cout<<"Nilai maksimal adalah : "<<maks<<endl;
}

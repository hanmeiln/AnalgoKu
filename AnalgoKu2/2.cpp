/*
Nama Program        : Kasus 2
Nama                : Hana Meilina Fauziyyah
NPM                 : 140810180012
Kelas               : B
Deskripsi Program   : Sequential Search
**************************************************/

#include <iostream>
using namespace std;

main(){
    int n, cari, A[100], index, jwb;
	bool found = false;
	cout<<"==========SEQUENTIAL SEARCH=========="<<endl;
	cout<<"Masukan banyak data =  ";
    cin>>n;
	cout<<"====================================="<<endl;

	for(int i=0; i<n; i++){
	   cout<<"Data ke-" << i+1 << " : ";
	   cin>>A[i];
	}

	cout<<"Masukan data yang dicari : ";
	cin>>cari;
	cout<<"====================================="<<endl;


	for(int i=0; i<n; i++){
	    if(A[i] == cari){
	 	    found = true;
	        index = i;
	    	i = n;
	   }
	}
	if(found == true){
	   cout<<"Data ditemukan pada data ke-"<<index+1;
	   cout<<endl;
	}
	else{
	   cout<<"Data tidak Ada!"<<endl;
	}
	cout<<"====================================="<<endl;
	cout<<"\n";
}

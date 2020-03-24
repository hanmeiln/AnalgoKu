/*
Nama    : Hana Meilina Fauziyyah
NPM     : 140810180012
Kelas   : B
Program : Selection Sort
******************************************/

#include <iostream>
#include<conio.h>
using namespace std;

int data[100],data2[100], n;
void tukar(int a, int b);
void selection_sort();

main(){
    cout<<"=============Selection Sort============="<<endl;
    cout<<endl;
	cout<<"Masukkan Jumlah Data : ";
	cin>>n;
	cout<<endl;
	cout<<"========================================"<<endl;
	cout<<endl;
	for(int i=1;i<=n;i++){
		cout<<"Masukkan data ke "<<i<<" : ";
		cin>>data[i];
		data2[i]=data[i];
	}
	cout<<endl;

	selection_sort();
	cout<<"========================================"<<endl;
	cout<<endl;
	cout<<"Data Setelah di Sort : "<<endl;
	for(int i=1; i<=n; i++){
	  	cout<<" "<<data[i];
	}
	cout<<endl;
	cout<<endl;
	cout<<"========================================"<<endl;

	getch();
}

void tukar(int a, int b){
	int t;
	t = data[b];
	data[b] = data[a];
	data[a] = t;
}

void selection_sort(){
	int pos,i,j;
	for(i=1;i<=n-1;i++)
	{
	    pos = i;
	    for(j = i+1;j<=n;j++)
	    {
		   if(data[j] < data[pos]) pos = j;
		}
        if(pos != i) tukar(pos,i);
    }
}

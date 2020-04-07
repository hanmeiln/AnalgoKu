/*
Nama    : Hana Meilina Fauziyyah
NPM     : 140810180012
Kelas   : B
Program : Breadth First Search
******************************************/

#include<iostream>
using namespace std;

int main(){
	int vertexSize = 8;
	int adjacency[8][8] = {
		{0,1,1,0,0,0,0,0},
		{1,0,1,1,1,0,0,0},
		{1,1,0,0,1,0,1,1},
		{0,1,0,0,1,0,0,0},
		{0,1,1,1,0,1,0,0},
		{0,0,0,0,1,0,0,0},
		{0,0,1,0,0,0,0,1},
		{0,0,1,0,0,0,1,0}
	};
	bool discovered[vertexSize];
	for(int i = 0; i < vertexSize; i++){
		discovered[i] = false;
	}
	int output[vertexSize];
	discovered[0] = true;
	output[0] = 1;

	int counter = 1;
	for(int i = 0; i < vertexSize; i++){
		for(int j = 0; j < vertexSize; j++){
			if((adjacency[i][j] == 1)&&(discovered[j] == false)){
				output[counter] = j+1;
				discovered[j] = true;
				counter++;
			}
		}
	}
    cout<<"===================================================="<<endl;
    cout<<"                Breadth First Search"<<endl;
    cout<<"===================================================="<<endl;
    cout<<endl;
	cout<<"BFS : "<<endl;
	for(int i = 0; i < vertexSize; i++){
		cout<<output[i]<<" ";
	}
	cout<<endl;
	cout<<endl;
	cout<<"===================================================="<<endl;
}

#include<iostream>
using namespace std;

int main(){
	
	string x="Kurt Sam gwapo";
	int x_size =x .size ();
	x[0]='C';
	x_size-=5;
	
	cout<< x <<"\n";
	cout<< x_size <<"\n";
	cout<< x [x_size] <<"\n";
	
}
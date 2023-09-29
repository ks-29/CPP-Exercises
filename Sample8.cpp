#include<iostream>
using namespace std;

int main(){
	string name;
	int num;
	char letter;
	
	cout<<"Enter a String:";
	getline(cin,name);
	
	
	cout<<"Enter a Numbeer:";
	cin>>num;
	
	cout<<"Enter a Letter:";
	cin>>letter;
	
	name[num]=letter;
	
	cout<<"New Text is:"<<name;
	return 0;
}
#include<iostream>
using namespace std;

int main() {
	
	string name;

	
	cout<<"Enter Your Name: ";
	cin>>name;
	int size = name.size();
	cout<<"\nYour Name in Vertical Order: ";
		
	for(int x = 0; x<size; x++){
		
		
		
		cout<<"\n"<<name[x];
	}
	
	
	
	
	
			return 0;
}
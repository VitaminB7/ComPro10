#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
    string a;
    string b;
    
	ifstream source;
	ofstream dest;
	source.open("cheerbook.txt");
	dest.open("cheerbook_copy.txt");
	
	cout<<"-------------------- BOOM ---------------------"<<endl;
    while(getline(source,a))
    {
        dest<<a<<'\n';
        
    }
    cout<<"-------------------- HA!! ---------------------"<<endl;
    source.close();
    dest.close();
	return 0;
}

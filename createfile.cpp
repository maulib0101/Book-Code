#include<iostream>
#include<fstream>
using namespace std;
int main(){
	
	
	ofstream file("new.txt");             //creating file
	file<<"My name is MAULI"<<endl;           //writing in file
	file.close();
	
	string text;
	
	ifstream readfile("new.txt");        //reading from the file
	
	while(getline(readfile,text)){
		cout<<text;
	}readfile.close();
	
	return 0;
}

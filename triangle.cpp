#include <iostream>
#include <string>
using namespace std;

int main(){
	cout<<"Your triangle's height >= 2"<<":"<<" ";
	int y;	//height
	string c;	 // ky tu in ra
	cin >> y;
	cout<<"Input your letter"<<":"<<" ";
	cin>> c;	//the word use to create the triangle
	for ( int i = 0 ; i <= y - 1; i++ ){
		for (int j = 0; j <= 2*y - 1; j++){
			if (j < y - i || j > y + i){
				cout<<"  ";
			}else{
				cout<<c;
			}
		}
		cout<<endl;
	}
}

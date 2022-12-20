//menentukan Bilangan Prima atau Bukan
#include <iostream>
using namespace std;

int main(){
	int input;
	cout << "Masukan Angka : ";
	cin >> input;
	string hasil = "Prima";
	for(int x=2; x<input; x++){
		if(input%x==0){
			hasil = "Bukan Prima";
		}
	}
	cout << input << " adalah bilangan " << hasil << endl;
}

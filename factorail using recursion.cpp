#include<iostream>
using namespace std;
int factorial(int num){
	if(num > 1){
		
		return num * factorial(num-1);
	}
}
int main(){
	cout << factorial(12);
	return 0;
}

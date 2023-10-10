#include<iostream>
using namespace std;

void series(int number){
	int i = 1;
	int temp = 1;
	if(number % 2 != 0){
		while(i <= number){
			if(i == 1){
				cout<<temp<<" ";
				i+=2;
			}
			else{
				temp = temp+2;
				cout<<temp<<" ";
				i+=2;
			}
		}
	}
	else{
		while(i <= number-1){
			if(i == 1){
				cout<<temp<<" ";
				i++;
			}
			else{
				temp = temp+2;
				cout<<temp<<" ";
				i++;
			}
		}
	}
	
}

int main(){
	int a = 4;
	series(a);
	return 0;
}

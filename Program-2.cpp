#include<iostream>
using namespace std;

void series(int number){
	int i = 1;
	int temp = 1;
	while(i <= number){
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

int main(){
	int a = 4;
	series(a);
	return 0;
}

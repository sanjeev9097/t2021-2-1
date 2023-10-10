#include<bits/stdc++.h>
using namespace std;

void frequency(int arr[], int n){
	map<int, int> mp;
	int temp = 1;
	while(temp <= 9){
		int count = 0;
		if(!mp.empty()){
			for(int i = 0; i < n; i++){
				if(arr[i] % temp == 0){
					count++;
				}
			}
			mp[temp] = count;
			temp++;
		}else{
			mp[temp] = n;
			temp++;
		}		
	}
	
	for(auto it : mp){
		cout<<it.first<<" : "<<it.second<<endl;
	}	
}

int main(){
	int arr[] = {1,2,8,9,12,46,76,82,15,20,30};
	int n = sizeof(arr) / sizeof(arr[0]);
	frequency(arr, n);
	return 0;
}

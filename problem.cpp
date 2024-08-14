#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int q[n];
	int count=0;
	for(int i=0; i<n; i++){
		cin >> q[i];
		if(q[i]==1){
			count++;
		}
	}
	if(count>=1){
		cout << "HARD";
	}
	else{
		cout << "EASY";
	}


	return 0;
}
#include <iostream>
using namespace std;

int main() {
	int num;
	
	cout<<"Enter number : ";
	cin>>num;
	
	int arr[num];
	
	for(int i=0; i<=num-1; i++) {
		cout<<"Enter array "<<i+1<<" : ";
		cin>>arr[i];
	}
	
	for(int i=0; i<=num-1; i++) {
		for(int j=0; j< num-i-1; j++) {
			if(arr[j]>arr[j+1]) {
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	
	for(int i=0; i<=num-1; i++) {
		cout<<arr[i]<<" ";
	}
	
	return 0;
}

#include <iostream>
using namespace std;

int main() {
	int arr[10], sum=0, min=9999, max=0;
	
	for(int i=0; i<=9; i++) {
		cout<<"Enter number "<<i+1<<" : ";
		cin>>arr[i];
		
		sum+=arr[i];
		
		if(arr[i]>max) {
			max=arr[i];
		}
		if(arr[i]<min) {
			min=arr[i];
		}
	}
	cout<<"Sum = "<<sum<<endl;
	cout<<"Max = "<<max<<endl;
	cout<<"Min = "<<min;
	
	return 0;
}

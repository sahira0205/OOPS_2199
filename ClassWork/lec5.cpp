#include<iostream>
using namespace std;
int main(){
	int n,i;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
//	int maxi=arr[0];
//	for (int i=0;i<n;i++){
//		if(maxi<arr[i]){
//			maxi=arr[i];
//		}
//	}
//	cout<<maxi<<endl;

for(int i=0;i<n;i+=2)
{
	int temp=arr[i];
	arr[i]=arr[i+1];
	arr[i+1]=temp;
}
for(int i=0;i<n;i++){n
	cout<<arr[i]<" ";
}
	return 0;
}  

//STL:Standard template library
//container:to store same data type
//algorithm:searching ,sorting etc
//iterators: haar line pr function perform krna
//inside main 10^6 outside 10^7
//
//#include<iostream>
//using namespace std;
//int arr[5];
////array<int,5>arr; (array container)
//
//int main(){
//for (int i=0;i<5;i++){
//	cout<<arr[i];
//}
//
//return 0;
//}
//arr.at:return first element
//begin:pointer point in starting
//end:pointer points before ending
//reverse end:

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int arr[5];
int arr[5]={1};
int main(){
	int arr[5];//Garbage value
	for(int i=0;i<5;i++){
		cout<<arr[i];
	}
	int arr[5]={1};
    int arr[5];
    array<int,5>arr={1};
	for(int i=0;i<5;i++){
		cout<<arr[i];
	}
	for(auto it=arr.begin();it!=arr.end();it++){
		cout<<*it<<endl;
	}
	return 0;
}

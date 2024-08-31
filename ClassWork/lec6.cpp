#include<iostream>
#include<string.h>
using namespace std;
void reverse(){
int i=0;
int n;
int j=n-1;
while(i<j){
	swap(arr[i],arr[j]);
	i++;
	j--;
}
	
}
int main(){
//    string str="Hello";
//    int l=str.length();
//    for (int i = 0; i < l / 2; i++) {
//    	swap(str[i], str[l - i - 1]);
//    }
//    cout << "Reversed string: " << str << endl;    
char arr[15];
cin>>arr;
int n;
int l=strlen(arr);
reverse();
cout<<reverse()<<endl;

	return 0;
}

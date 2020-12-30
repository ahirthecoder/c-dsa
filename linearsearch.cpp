#include<iostream>
using namespace std;
void linearsearch(int a[],int n)
{
	int temp=-1;
	for(int i=0;i<5;i++){
		
	if(a[i]==n){
		cout<<"Number is found in array at "<<i<<" index"<<endl;
		temp=0;
		break;
	}
	}
	if(temp==-1){
		cout<<"No elemnt found"<<endl;
	}
}
int main(){
	int arr[5]={1,22,55,66,77};
	cout<<"enter a number you want to search"<<endl;
	int n;
	cin>>n;
	linearsearch(arr,n);
	return 0;
}

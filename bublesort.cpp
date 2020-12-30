#include<iostream>
using namespace std;

void bublesort(int a[],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j+1]<a[j])
				{
					int temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
		}
		
	}
}
int main(){
	
	int a[5];
	cout<<" enetr 5 random interger "<<endl;
	for(int i=0;i<5;i++){
		cin>>a[i];
	}
	
	cout<<"unsorted array "<<endl;
	for(int i=0;i<5;i++){
		cout<<a[i]<<" ";
	}
	bublesort(a,5);
	cout<<endl;
	
	cout<<"sorted array "<<endl;
	for(int i=0;i<5;i++){
		cout<<a[i]<<" ";
	}
	
	return 0;
}

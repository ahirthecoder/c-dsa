#include<iostream>

using namespace std;
void selectionsort(int arr[])
{
	for(int i=0;i<4;i++){
		int min=i;
		for(int j=i+1;j<5;j++){
			if(arr[j]<arr[min])
				min=j;
			
		}
		
		if(min!=i){
			int temp=arr[min];
			arr[min]=arr[i];
			arr[i]=temp;
		}
	}
}
int main(){
	int a[5];
	cout<<"enetr 5 integer in random order: "<<endl;
	for(int i=0;i<5;i++){
		cin>>a[i];
	}
	cout<<"unsorted array"<<endl;
	for(int i=0;i<5;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	selectionsort(a);
	
	cout<<"sorted array"<<endl;
	for(int i=0;i<5;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}

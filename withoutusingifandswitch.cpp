#include<iostream>
#include <bits/stdc++.h>
#include<string>
using namespace std;

string s[10]={"zero","one","two","three","four","five","six","seven","eigth","nine"};
void print(int n){
	
	int i=0;
	int arr[10];
	while(n){
		
	int p=n%10;
	arr[i]=p;
	i++;
	n=n/10;	
	}
	for(int j=i;j>0;j--){
		cout<<s[arr[j]]<<" ";
	}
}

int main(){
	int n;
	cin>>n;
	
	print(n);
	return 0;
}

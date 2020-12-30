#include<iostream>
using namespace std;

int main(){
    int a[5];
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
   int key;
   for(int i=1;i<5;i++){
       key=a[i];
       int j=i-1;
       while(j>=0 && a[j]>key)
       {
           a[j+1]=a[j];
           j--;
       }
       a[j+1]=key;
   }
   
    
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    
return 0;    
}

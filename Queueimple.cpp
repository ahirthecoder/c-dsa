#include<iostream>
using namespace std;

class queue{
	private: 
	int front;
	int rear;
	int arr[5];
	
	public:
		queue(){
			front=-1;
			rear=-1;
			for(int i=0;i<5;i++){
				arr[i]=0;
			}
		}
		
	bool isempty(){
		if(front==-1 && rear==-1)
		return true;
		else
		return false;
	}
	bool isfull(){
		if(rear == 4)
			return true;

		else
		return false;
	}
	
	void enq(int val){
		if(isfull()){
			cout<<"queue is full";
			return;
		}
		else if(isempty()){
			rear=0;
			front=0;
			arr[rear]=val;
		}
		else{
			rear++;
			arr[rear]=val;
		}
	}
	int deq(){
	int x;
		if(isempty()){
			cout<<"queue is empty"<<endl;
			return 0;
		}
		else if (front == rear){
			x=arr[front];
			arr[front]=0;
			rear=-1;
			front=-1;
			return x;
		}
		else{
			x=arr[front];
			arr[front]=0;
			front++;
			return x;
			
			
		}
	}
	
	int count(){
		return rear-front+1;
	}
	
	void display(){
		cout<<"all values in the queues are :"<<endl;
		for(int i=0;i<5;i++){
			cout<<arr[i]<<" ";
		}
	}
};
int main(){
	queue q1;
	int option;
	int value;
	do{
		cout<<"select option"<<endl;
		cout<<"1.enqueue"<<endl;
		cout<<"2.Dequeue"<<endl;
		cout<<"3.isempty"<<endl;
		cout<<"4.isfull"<<endl;
		cout<<"5.count"<<endl;
		cout<<"6.display"<<endl;
		cout<<"7.clear screen"<<endl;
		cin>>option;
			switch(option){
				case 1:
					cout<<"enter a value to enter in queue "<<endl;
					cin>>value;
					q1.enq(value);
					break;
				case 2:
					cout<<"dequeue operation "<<q1.deq()<<endl;
					break;
				case 3:
					if(q1.isempty()){
						cout<<"queue is empty"<<endl;
					}
					else{
						cout<<"queue is not empty"<<endl;
					}
					break;
				case 4:
					if(q1.isfull()){
						cout<<"queue is full"<<endl;
					}
					else{
						cout<<"queue is not full"<<endl;
				}
					break;
				case 5:
					cout<<"count of the item in queue :"<<q1.count()<<endl;
					break;
				case 6:
					q1.display();
					break;
				case 7:
					system("cls");
					break;
				default:
					break;
				
			}
		}while(option);
	return 0;
}

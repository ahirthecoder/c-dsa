#include<iostream>
using namespace std;

class Node{
	public:
		int key;
		int data;
		Node* next;
		Node(){
			key=0;
			data=0;
			next=NULL;
			
		}
		Node(int k,int d){
			key =k;
			data=d;
		}
};

class singlylinklist{
	public:
		Node* head;
		singlylinklist(){
			head=NULL;
		}
		singlylinklist(Node *n){
			head=n;
		}
		
		Node* nodeexits(int k){
			Node* temp=NULL;
			Node* ptr=head;
			while(ptr!=NULL){
				if(ptr->key==k)
				{
					temp=ptr;
				}
				ptr=ptr->next;
			}
			return temp;
			
		}
		//in the last
		void apend(Node *n){
			if(nodeexits(n->key)!=NULL){
				
				cout<<"Node exits already in list with"<<n->key<<endl;
			}			
			else{
				if(head==NULL){
					head=n;
					cout<<"Node appended"<<endl;
				}
				else{
					Node *ptr=head;
					while(ptr!=NULL){
						ptr=ptr->next;
						
					}
					ptr->next=n;
					cout<<"node appended"<<endl;
				}
			}
		}
		//prepand
		void prepend(Node *n){
			if(nodeexits(n->key)!=NULL){
				cout<<"key is allready exists in link eneter new key"<<endl;
			}
			else{
				n->next=head;
				head=n;
				cout<<"Node prepand"<<endl;
			}
		}
		//insert after the key
		void insertafterkey(int k,Node *n){
			Node* ptr=nodeexits(k);
			if(ptr==NULL){
				cout<<"No node will with this "<<k<<endl;
			}
			else{
				if(nodeexits(n->key)!=NULL){
					cout<<"Node already with this key"<<endl;
				}
				else{
					n->next=ptr->next;
					ptr->next=n;
				}
			}
		}
	
	void deletebykey(int k){
		if(head==NULL)
		{
			cout<<" LInked List is Empty"<<endl;
		}
		
		else if(head!=NULL){
			if(head->key==k){
				head=head->next;
				cout << "Node UNLINKED with keys value : " << k << endl;
			}
			else{
				Node * temp=NULL;
				Node * prev=head;
				Node * cur=head->next;
				while(cur!=NULL){
					if(cur->key==k){
						temp=cur;
						cur=NULL;
					}
					else{
						cur=cur->next;
						prev=prev->next;
					}
				}
				if(temp!=NULL){
					prev->next=temp->next;
					cout << "Node UNLINKED with keys value : " << k << endl;
				}
				
				else{
					cout<<"there is no such a key"<<endl;
				}
				
			}
		}
	}
	
	
	void updatebykey(int k,int d)
	{
		Node *ptr=nodeexits(k);
		
		if(ptr!=NULL){
			ptr->data=d;
			cout<<"Node updated"<<endl;
		}
		else{
			cout<<"Node dosen't exit by this key"<<endl;
		}
	}
	void printlist(){
		if(head==NULL){
			cout<<"Link was a empty"<<endl;
		}
		else{
			cout<<"linkedlist values are"<<endl;
			Node* temp=head;
			while(temp!=NULL){
				cout<<"( "<<temp->key<<" , "<<temp->data<<" ) -->";
				temp=temp->next;
			}
		
		}
	}
};

int main(){
	singlylinklist s;
	int option;
	int k,k1;
	int value;
	do{
		cout<<"/n 0.to exit... "<<endl;
		cout<<"1.append Node"<<endl;
		cout<<"2.Prepand Node"<<endl;
		cout<<"3.Insertnode by key"<<endl;
		cout<<"4.Delete Node by key"<<endl;
		cout<<"5.update Node By key"<<endl;
		cout<<"6.print list"<<endl;
		cout<<"7.clear screen"<<endl;
		
		cin>>option;
		Node * n1=new Node();
		
		switch(option){
		case0:
			break;
		case 1:
			cout<<"Enter key & data of the Node to be Appended" << endl;
			cin>>k;
			cin>>value;
			n1->key=k;
			n1->data=value;
			s.apend(n1);
			
			break;
		case 2:	
			cout<<"Enter key & data of the Node to be prepended" << endl;
			cin>>k;
			cin>>value;
			n1->key=k;
			n1->data=value;	
			s.prepend(n1);
			break;
		case 3:
			cout<<"enter a key you want to enter NEW node after that key "<< endl;
			cin>>k1;
			cout << "Enter key & data of the New Node first: " << endl;
      		cin >> k;
      		cin >> value;
      		n1 -> key = k;
      		n1 -> data = value;
				s.insertafterkey(k1,n1);
				break;
			
		case 4:
			 cout << "Delete Node By Key Operation - \nEnter key of the Node to be deleted: " << endl;
      		 cin >> k1;
      		 s.deletebykey(k1);
	  		break;	
	  
	  case 5:
			cout<<"enter key and data to update a node "<<endl;
		  	cin>>k;
		  	cin>>value;
		  	s.updatebykey(k,value);
		  	break;
		case 6:
			s.printlist();
		  		break;
		case 7:
			system("cls");
			break;
		default:
      cout << "Enter Proper Option number " << endl;
		}
	}while(option!=0);
	return 0;
}

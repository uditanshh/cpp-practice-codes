#include<iostream>
using namespace std;
 
 struct node
 {
 	int data;
 	node *next;
  }*start;
 
void getdataAtFirst()
{
  	node *temp,*last;
  	temp=new node();
  	cin>>temp->data;
  	last=start;
  	if(start==NULL){
  		temp->next=temp;
	  }
	else{
		while(last->next!=start)
  			last=last->next;
		last->next=temp;
		temp->next=start;
	}
	
	start=temp;
  	cout<<"node created";
}
void delAtFirst(){
	node *temp,*last;
	
	temp=start;
	last=start;
	while(last->next!=start)
		last=last->next;
	start=start->next;
	last->next=start;
	delete temp;
	cout<<"\nNode Deleted";
}
void traverse()
{
	node *temp;
	temp=start;
	do{
	cout<<"\t"<<temp->data;
	temp=temp->next;
   }while(temp!=start);
}
void delAtLast()
{
	node *last,*secondlast;
	secondlast=start;
	while(secondlast->next->next!=start)
		secondlast=secondlast->next;
	last=secondlast->next;
	delete last;
	secondlast->next=start;
	cout<<"\n deleted at last";
}
void ial()
{
	node *temp,*last;
	temp=new node();
	last=start;
	while(last->next!=start)
	last=last->next;
	cin>>temp->data;
	last->next=temp;
	temp->next=start;
	cout<<"Node Created.";
	
}
void increment(int n)
{
	node *temp;
	temp=start;
	do
	{
		temp->data=temp->data +n;
		temp=temp->next;
    }while(temp!=start);
	
}
void icratlast(int n)
{
	node *last;
	last=start;
	while(last->next!=start)
	last=last->next;
	last->data=last->data + n;
}
void icatse(int n)
{
	node *second;
	second=start;
	while(start->next!=second)
	second=second->next;
	second->data=second->data + n;
}
void mul(int n)
{
	node *temp;
	temp=start;
	do{
     temp->data=temp->data * n	;
     temp=temp->next;
	}while(temp!=start);
}
void division()
{
	node *temp;
	temp=start;
	do{
		temp->data=temp->data/2;
		temp=temp->next;
	}while(temp!=start);
}
void subtraction(int n)
{
	node *temp;
	temp=start;
	do{
		temp->data=temp->data-n;
		temp=temp->next;
	}while(temp!=start);
}
void multiplex()
{
	node *temp;
	temp=start;
	do{
		temp->data=temp->data*-5;
		temp=temp->next;
	}while(temp!=start);
}

int main()
{
	start=NULL;
	int op,n;
	while(1)
	
	{
	cout<<endl;
	cout<<"\n enter your choice \n1.enter your data \n2.Traverse \n3.Delete at first \n4.delete at last \n5.insert at last \n6.insertion by number given by user\n7.increment at last by any number \n8.increment second by any number\n9.multiplication\n10.division by 2\n11.subtraction\n12.multiplex\n13.exit";
	cin>>op;
	switch(op)
		{
		case 1:
			getdataAtFirst();
			break;
		case 2:
			traverse();
			break;
		case 3:
			delAtFirst();
			break;
		case 4:
			delAtLast();
			break;
		case 5:
			ial();
			break;
		case 6:
			cout<<"\nEnter a value";
			cin>>n;
			increment(n);
			break;
		case 7:
			cout<<"\nenter any number";
			cin>>n;
			icratlast(n);
			break;
		case 8:
			cout<<"\nenter any number";
			cin>>n;
			icatse(n);
			break;
		case 9 :
			cout<"\nenter any no.";
			cin>>n;
			mul(n);
			break;
		case 10:
			division();
			break;
		case 11:
				cout<<" \n enter any number";
				cin>>n;
				subtraction(n);
				break;
		case 12:
			multiplex();
			break;
			case 13:
			return 0;
		default:
			cout<<"\n invalid choice";
		}
	}
}
	
	















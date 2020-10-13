#include<iostream>
using namespace std;
struct node
{
	int data;
	 node *next;
}*start;
void getdata()
{
	node *temp;
	node *last,*secondlast;
	
	temp=new node();
	secondlast=start;
	cin>>temp->data;
	
}
void cexchange()
{
	node *temp,*secondlast,*last,*second;
	temp =new node();
	secondlast=start;
	while(secondlast->next->next!=start)
	{
	secondlast=secondlast->next;
}
last=secondlast->next;
second=start->next;
secondlast->next=start;
last->next=second;
start->next=last;
start=last;
for(int i=0;i<3;++i)
{
	temp=temp->next;
}
}
int main()
{
	start=NULL;
	int op;
	while(1){
		cout<<"\n enter your choice \n1.enter data \n2.pupose \n3.exit";
		cin>>op;
		switch(op){
			case 1:
				getdata();
				break;
				case 2:
				cexchange();
				break;
			case 3:
			return 0;
			default:
				cout<<"Invalid choice";
		}
	}
}


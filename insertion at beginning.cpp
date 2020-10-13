#include<iostream>
using namespace std;

struct node
{
	node *next;
	int data;
	 }*start;
	 void getdata()
	 {
	 	int data;
	 	cout<<"enter data";
	 	cin>>data;
	 }
	 void insert1()
	 {
	 	node *temp;
	 	temp=new node();
	 	if(temp==NULL)
	 	{
	 		cout<<"overflow";
	 		return ;
	 		
		 }
	 cin>>temp->data;
	 temp->next=start;
	 start=temp;
	 cout<<"element added";
}
int main()
{
	start=NULL;
	getdata();
	insert1();
	return 0;
}
	 

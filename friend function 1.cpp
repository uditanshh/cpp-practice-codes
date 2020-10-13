#include<iostream>
using namespace std;
class distance
{
	int m;
	public:
     void distance()
		{
			m=0;
		}
void display()
{
	cout<<"meters value : "<<m;
}
friend void addvalue(distance &d);
};


   void addvalue(distance d )
{
	d.m=d.m+10;
}
int main()
{
	distance d1;
	d1.display();
	addvalue(d1);
	d1.display();
	return 0;
}

#include <iostream>
using namespace std;
int fight (int a,int b)
{
	static int c=0;
	c=c+1;
	return a*b+c;

}
int main()
{
	int a=90;
	int b=34;
	cout<<"the fight between a,b and c is : "<<fight(a,b)<<endl;
	cout<<"the fight between a,b and c is : "<<fight(a,b)<<endl;
	cout<<"the fight between a,b and c is : "<<fight(a,b)<<endl;
	cout<<"the fight between a,b and c is : "<<fight(a,b)<<endl;
	cout<<"the fight between a,b and c is : "<<fight(a,b)<<endl;
	cout<<"the fight between a,b and c is : "<<fight(a,b)<<endl;
	cout<<"the fight between a,b and c is : "<<fight(a,b)<<endl;
	cout<<"the fight between a,b and c is : "<<fight(a,b)<<endl;
	cout<<"the fight between a,b and c is : "<<fight(a,b)<<endl;
	cout<<"the fight between a,b and c is : "<<fight(a,b)<<endl;
	cout<<"the fight between a,b and c is : "<<fight(a,b)<<endl;
	cout<<"the fight between a,b and c is : "<<fight(a,b)<<endl;
	cout<<"the fight between a,b and c is : "<<fight(a,b)<<endl;
	cout<<"the fight between a,b and c is : "<<fight(a,b)<<endl;
	cout<<"the fight between a,b and c is : "<<fight(a,b)<<endl;
	
	
}

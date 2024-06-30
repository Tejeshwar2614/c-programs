#include<iostream>
using namespace std;
//OPPS concept in C++
//class and object is the first thing we have to learn in OOPS;
     
       //so here is my first program in  OOPS using object and class;
       
class hero 
{
//here we are creating a attribute as public which means that the data member we have created inside the class that data member 
//we can write outside the class also
	public :
	//if we are not creating the public so when we are going to use that data member outside the class it will show the error that you data members are "private";
		string name;
		int health;
		char level;	
};
int main()
{
	//Now we are going to create an of class;
	hero myobj ;   //obect name;
	myobj.name  = "Tejeshwar singh";
	myobj.health = 700;
	myobj.level = 'A';
	cout<<myobj.name<<endl;
	cout<<myobj.health<<endl;
	cout<<myobj.level<<endl;
	
	
}
//ths is a new class for access modifier :: private;
using namespace std;
class hero1
{
	public :
		string h1 ;
		int life ;
		char level1;
		//if you are creating the data members as a private members than you can't write that data member outside the class but there is one way that you can write :: by using get/set;
		string geth1(){
			return h1;
		}
		//using get we  can get the value ;
		int getlife (){
			return life;
		}
		char getlevel1(){
			return level1;
	    }
		//using set we can set the value
};
int main()
{
	//cout<<"This is the second class"<<endl;
	hero1 ramesh;
	ramesh.h1 = "Tejeshwar";
	ramesh.life = 500;
	ramesh.level1 = 'B';
	cout<<ramesh.h1<<endl;
	cout<<ramesh.life<<endl;
	cout<<ramesh.level1<<endl;
}


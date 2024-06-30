#include <iostream >
using namespace std;
class tej
{
	public:
	int x;
	public:
		tej()
		{
			x=10;
		}
		friend class tejesh;
};
class tejesh
{
	public:
		void display(tej &t)
		{
			cout<<"the value of the x is: "<<t.x<<endl;
		}
};
int main()
{
	tej object1;
	tejesh object2;
	object2.display(object1);
}

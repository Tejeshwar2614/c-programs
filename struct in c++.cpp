#include <bits/stdc++.h>
using namespace std;
union tej
{
	int t;
	char d;
};
int main()
{
	tej name;
	name.t=34;
	name.d='s';
	cout<<name.t<<endl;
	cout<<name.d<<endl;
}

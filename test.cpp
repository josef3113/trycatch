#include <iostream>

using namespace std;

struct ERRORofdiv
{
	int x;

	ERRORofdiv(int xx=0):x(xx){};
	~ERRORofdiv(){};
};

class ERRORgeneral
{
public:
	ERRORgeneral(){};
	~ERRORgeneral(){};
};

void main ()
{
	int x,y;
	cout<<"insert the num and div"<<endl;
	cin>>x>>y;

	try
	{
		if (y==0)
			throw ERRORofdiv(0);
		if (x==y)
			throw ERRORgeneral();
		
		cout<<x/y<<endl;
	}
	catch(ERRORofdiv e)
	{
		if(e.x==0)
			cout<<"cant to div by zero"<<endl;
		if(e.x==1)
			cout<<"the number its equal"<<endl;
	}
	catch(ERRORgeneral)
	{
		cout<<"its one idiot"<<endl;
	}

	system("pause");
}
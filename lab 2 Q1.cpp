#include<iostream>
#include<math.h>
using namespace std;
class point
{
	float x,y,z;
public:
	void read()
	{
		cout<<"x= "; cin>>x;
		cout<<"y= "; cin>>y;
		cout<<"z= "; cin>>z;
	}
	void negate()
	{
		/*cout<<"-x= "<<-1*x<<endl;
		cout<<"-y= "<<-1*y<<endl;
		cout<<"-z= "<<-1*z<<endl;*/
		x*=-1;
		y*=-1;
		z*=-1;
	}
	float norm()
	{
		return sqrt((x*x)+(y*y)+(z*z));
	}
};
void main()
{
	point p1;
	p1.read();
	p1.negate();
	cout<<"distance="<<p1.norm()<<endl;



	system("pause");
}
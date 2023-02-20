#include<iostream>
using namespace std;
class comma
{
	private:
		int x,y,z;
		public:
		comma(int a,int b,int c)
		{
			x=a;
			y=b;
			z=c;
		}
		comma()  //Default constructor	
		{
			
		}
		void display()
		{
			cout<<"x="<<x<<endl<<"y="<<y<<endl<<"z="<<z;
		}
		comma operator,(comma c)
		{
			comma temp;
			temp.x=c.z;
			temp.y=c.y;
			temp.z=c.x;
			return temp;
		}
};
int main()
{
	comma c1(1,2,3),c2(4,5,6),c3,c4;
	c3=(c1,c2);  // Here assignment operator goes on when not using comma operator show me 4,5,6.
	c3.display();
	cout<<endl<<endl<<"after using comma operator"<<endl;
	c4=(c1,c2);   //comma operator show me 6,5,4.
	c4.display();
	return 0;
}

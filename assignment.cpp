#include<iostream>
using namespace std;
class complex
{
	private:
		int real,img;
		public:
			complex(int r,int i)
			{
				real=r;
				img=i;
			}
			complex()
			{
				cout<<"Default constructor";
			}
			complex & operator=(complex &c)
			{
				this->real=c.real;
				this->img=c.img;
				return *this;
			}
			void display()
			{
				cout<<"real="<<real<<"img="<<img;
			}
};
int main()
{
	complex c1(2,3);
	complex c2;
	c2=c1;
	c2.display();
	
}

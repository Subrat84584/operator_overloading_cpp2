#include<iostream>
using namespace std;
class complex
{
	private:
		int real,img;
		public:
			void setData(int real,int img)
			{
				this->real=real;
				this->img=img;
			}
			void display()
			{
				cout<<"real is="<<real<<"img ="<<img;
			}
};
int main()
{
   complex c1;
   c1.setData(2,3);
   c1.display();
   return 0;
}

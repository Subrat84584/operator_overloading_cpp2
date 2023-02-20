#include<iostream>
using namespace std;
class Arrow
{
	int mark;
	public:
		Arrow(int a)
		{
			mark=a;
		}
		void display()
		{
			cout<<mark<<endl;
		}
		Arrow *operator->()
		{
			return this;
		}
		
};
int main()
{
	Arrow a1(50);
	a1.display();
	a1->display();
	return 0;
}

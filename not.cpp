#include<iostream>
using namespace std;
class integer
{
	int i;
	public:
		integer(int i):i(i)
		{
		}
		int operator!()
		{
			return -i;
		}
};
int main()
{
	integer x=10;
	cout<<!x; 
	return 0;
}

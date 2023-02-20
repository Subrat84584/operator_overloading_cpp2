#include<iostream>
using namespace std;
const int size=10;
class Array
{
	private:
		int arr[size];
		public:
			Array()
			{
				register int i;
				for(i=0;i<size;i++)
				{
				   arr[i]=i;
			    }
			}
			int operator[](int i)
			{
				if(i>size)
				{
					cout<<"index out of bound"<<endl;
					return arr[0];
				}
				return arr[i];
			}
};
int main()
{
	Array a1;
	cout<<"Value of A[2]:"<<a1[2]<<endl;
	cout<<"Value of A[5]:"<<a1[5]<<endl;
	return 0;
}

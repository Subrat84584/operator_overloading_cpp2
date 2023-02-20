#include<iostream>
using namespace std;
class complex
{
	private:
		int real,img;
		public:
			friend istream& operator>>(istream &is,complex &c)
			{
				
				is>>c.real;
				is>>c.img;
				return is;
				
			}
			complex()
			{
				
			}
			friend ostream& operator<<(ostream &os,complex &c)
			{
				os<<"Real="<<c.real<<"img="<<c.img<<endl;
				return os;
			}
			
};
int main()
{
	complex c1;
	cin>>c1;
	cout<<c1;    //cout.operator<<(c1)
}


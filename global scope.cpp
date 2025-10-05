#include<iostream>
using namespace std;
int x=1;
void square(int n)
{
	cout<<n*n<<endl;
}
int main(int argc, char** argv)
{
	int num;
	cout<<x<<endl;
	cin>>num;
	square(num);
	return 0;
}
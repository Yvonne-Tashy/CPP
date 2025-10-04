#include<iostream>
using namespace std;
class animal
{
	public:
		string aname,color;
		void move();
		animal();//default constuctor(it lacks parameters)
};
void animal::move()
{
	cout<<"Animal moving sddf\n";
}
	animal::animal()
	{
		cout<<"Creating an animal....\n";
		color="black";
		aname="XYZ";
	}
int main()
{
	animal w;
	w.move();//even without this the function is called automatically
	w.aname;
	cout<<"Color of animal="<<w.color<<endl;
	return 0;
}
#include<iostream>
using namespace std;
class animal
{
private:
	string aname;
	int legs, wings;

public:// function overloading
	void move ()//member function definition
	{
		cout << "Motion by flight..." << endl;
	}
	void  move (int r)//member function definition
	{
		cout << "Motion by flight" << r << "miles" << endl;
	}
};//class definition
class owl: public animal
{
private:
	string name;
	int wings, legs;
public:
	string color;
	void hoot (int h)
	{
		cout << "Hooting " << h << " times." << endl;
	}
};
int main(int argc, char** argv)
{
	owl n;
	n.move();
	n.move(17);
	n.hoot(17);
	n.color = "black";
	cout << n.color;
	return 0;
}

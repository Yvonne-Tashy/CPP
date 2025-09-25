#include<iostream>
using namespace std;
class animal
{
public:
	string aname, color;
	void move();
	animal();//default constuctor(it lacks parameters)
	animal(string m, string cr);
	animal(animal &original);
};
void animal::move()
{
	cout << "Animal moving sddf\n";
}
animal::animal(string m, string cr)
{
	cout << "Creating an animal using PC....\n";
	color = cr;
	aname = m;
}
animal::animal()
{
	cout << "Creating an animal using DC....\n";
	color = "black";
	aname = "XYZ";
}
animal::animal(animal &original)
{
	cout << "Creating an animal using CC....\n";
	color = original.color;
	aname = original.aname;
}
int main()
{
	animal w;
	animal k("cow", "Brown");
	animal h("Dog", "white");
	animal p(k);
	cout << "Color of animal=" << p.color << endl;
	return 0;
}

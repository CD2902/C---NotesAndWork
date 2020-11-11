# include <iostream>
using namespace std;

class Rectangle
{
	private:
		double length;
		double width;
	public:
		void setwidth(double);
		void setlength(double);
		double getwidth();
		double getlength();
		double getarea();
};

int main()
{
	Rectangle chris;
	double fwidth, flength;
	cin>>fwidth;//12
	cin>>flength;//25
	
	chris.setwidth(fwidth);
	chris.setlength(flength);
	
	cout<<chris.getwidth()<<endl<<chris.getlength()<<endl<<chris.getarea();
	return 0;
}

void Rectangle::setwidth(double pwidth)
{
	width=pwidth;
}

void Rectangle::setlength(double plength)
{
	length=plength;
}

double Rectangle::getwidth()
{
	return width;
}

double Rectangle::getlength()
{
	return length;
}

double Rectangle::getarea()
{
	return width*length;
}



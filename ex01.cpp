#include <string>
#include <iostream>

using namespace std;

class days
{
private:
	string starttime;
	string date;
public:
	void readStartTime(istream& in);
	void	print();
};

void days::readStartTime(istream & in)
{
	getline(in, starttime);
}

void days::print(void)
{
	cout << this->starttime;
}


int main()
{
	days Day1;
	Day1.readStartTime(cin);
	Day1.print();
	return 0;
}


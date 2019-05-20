#include <iostream>
using namespace std;
class Employee
{
	private:
	char Name[20];
	int Age;
	double Salary;
	int ID;
	char Address[100];

	public:
		void info()
		{
			cout << "Name  " << endl;
			cin >> Name;
			cout << "Age  " << endl;
			cin >> Age;
			cout << "Salary  " << endl;
			cin >> Salary;
			cout << "ID  " << endl;
			cin >> ID;
			cout << "Address  " << endl;
			cin >> Address;
			cout << endl;
		}
		void putinfo()
		{
			cout << "Name  " <<Name<< endl;
			cout << "Age  " <<Age<< endl;
			cout << "Salary  " <<Salary<< endl;
			cout << "ID  " <<ID<< endl;
			cout << "Address  " <<Address<< endl;
		}
};

class Manager : public Employee
{
	private:
	char CompanyName[50];

	public:
		void iinfo()
		{
			cout << "Company Name  " << endl;
			cin >> CompanyName;
			cout << endl;
		}
		void putiinfo()
		{
			cout << "Company Name  " << CompanyName << endl << endl;
		}
};

/*void main()
{
	Manager X;
	X.info();
	X.iinfo();
	X.putinfo();
	X.putiinfo();
	
	system("pause");

	
}*/

class Engineer : public Employee 
{
	private:
		char ProjectName[50];
	public:
		void iiinfo()
		{
			cout << "Project Name  " << endl;
			cin >> ProjectName;
			cout << endl;
		}
		void putiiinfo()
		{
			cout << "Project Name  " << ProjectName << endl << endl;
		}

};

void main()
{
	Manager X;
	Engineer Y;
	Y.info();
	Y.putinfo();
	Y.iiinfo();
	Y.putiiinfo();
	X.info();
	X.iinfo();
	X.putinfo();
	X.putiinfo();
	system("pause");
}

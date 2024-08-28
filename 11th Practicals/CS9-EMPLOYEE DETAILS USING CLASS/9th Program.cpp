#include <iostream>
using namespace std;
class emp {
	public:
		int eno;
		char name[20], des[20];
		void get() {
			cout << "Enter the employee number: ";
			cin >> eno;
			cout << "Enter the employee name: ";
			cin >> name;
			cout << "Enter the designation: ";
			cin >> des;
		}
};
class salary :public emp {
	float bp, hra, da, pf, np;
	public:
		void get1() {
			cout << "Enter the Basic Pay: ";
			cin >> bp;
			cout << "Enter the House Rent Allowance: ";
			cin >> hra;
			cout << "Enter the Dearness Allowance: ";
			cin >> da;
			cout << "Enter the Provient Fund: ";
			cin >> pf;
		}
		void calculate() {
			np = bp+hra+da-pf;
		}
		void display() {
			cout<<eno<<"\t"<< name <<"\t"<<des<<"\t"<<bp<<"\t"<<hra<<"\t"<<da<<"\t"<<pf<<"\t"<<np<<"\n";
		}
};
int main() {
	int i, n;
	char ch;
	salary s[10];
	cout << "Enter the number of employee: ";
	cin >> n;
	for(i = 0; i < n; i++) {
		s[i].get();
		s[i].get1();
		s[i].calculate();
	}
	cout << "\n\t\t\tEmployee Details\n";
	cout << "\ne_no \te_name \tdes \tbp \thra \tda \tpf \tnp \n";
	for(i = 0; i < n; i++) {
		s[i].display();
	}
	return 0;
}
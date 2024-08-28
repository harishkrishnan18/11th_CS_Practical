#include <iostream>
using namespace std;
class Student {
	protected:
		int Rno;
	public:
		void Readno(int r) {
			Rno = r;
		}
		void Writeno() {
			cout << "\nRoll no: " << Rno;
		}
};
class Test :public Student {
	protected:
		float Mark1, Mark2;
	public:
		void Readmark(float m1, float m2) {
			Mark1 = m1;
			Mark2 = m2;
		}
		void Writemark() {
			cout << "\n\n     Marks Obtained\n";
			cout << "\nMark1               :" << Mark1;
			cout << "\nMark2               :" << Mark2;
		}
};
class Sports {
	protected:
		int score;  //score = Sports mark
	public:
		void Readscore(int s) {
			score = s;
		}
		void Writescore() {
			cout << "\nSports Score        :" << score;
		}
};
class Result :public Test, public Sports {
	int Total;
	public:
		void display() {
			Total = Mark1 + Mark2 + score;
			Writeno();
			Writemark();
			Writescore();
			cout << "\nTotal Marks Obtained:" << Total << endl;
		}
};
int main() {
	Result stud1;
	stud1.Readno(1201);
	stud1.Readmark(93.5, 95);
	stud1.Readscore(80);
	cout << "\nHYBRID INHERITANCE PROGRAM\n";
	stud1.display();
	return 0;
}

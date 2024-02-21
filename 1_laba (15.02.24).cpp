#include <iostream> 
#include <cmath> 
#include <vector> 
#include <algorithm>
using namespace std;

class worker {
	string FIO;
	int oklad;
	int perc;
public:
	worker (const string& n, int h, int z) : FIO(n), oklad(h), perc(z) {}
	string get_FIO() {
		return FIO;
	}
	int get_oklad() {
		return oklad;
	}
	int get_perc() {
		return perc;
	}
	void print() {
		cout << "FIO is: " << FIO << endl;
		cout << "oklad is: " << oklad << endl;
		cout << "perc is: " << perc << endl;
	}
	int get_salary() {
		return oklad + (oklad * perc / 100);
	}

};

int main() {
	vector<worker> mas = {
		worker("Valeev I.D.", 56000,15),
		worker("Egoshin S.A.", 100000,20),
		worker("Kostin L.S.", 70000,10)
	};
	for (int i = 0;i < mas.size();++i) {
		mas[i].print();
		cout << "Salary is: " << mas[i].get_salary() << endl;
	}
}
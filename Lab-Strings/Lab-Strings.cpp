#include <iostream>
#include <string>

using namespace std;

class Stroka_strochenka {
public:

	Stroka_strochenka(int a) {
		cout << "Введите строчку ";
		getline(cin, this->strochka);
	};

	void CoutStr() {
		cout << this->strochka;
		cout << endl;
	};

	void Cout3Str_Num1() {
		cout << "Exercise 1";
		cout << this->strochka << "," << this->strochka << "," << this->strochka << ",";
		cout << endl;
	}

	int getSymbol_count() {
		return this->strochka.size();
	}

	string getStr() {
		return this->strochka;
	}

	void prikol_Num2() {
		cout << "Exercise 2";
		if (this->strochka.size() > 5) {

			string tempStr{ this->strochka, 0, 3 };
			string tempStr2 = this->strochka.substr(this->strochka.length() - 3);

			cout << tempStr << " " << tempStr2;
		}
		else {
			for (size_t i = 0; i < this->strochka.length(); i++)
			{
				cout << this->strochka[0];
			}
		}
	}

	void deleteSpaces() {
		cout << "Exercise 3 ";

		cout << this->strochka;
	}

private:
	string strochka;
	int symbol_count;
};

int main()
{
	setlocale(LC_ALL, "ru"); // Не работает доконца

	Stroka_strochenka str1(3);
	str1.deleteSpaces();
}
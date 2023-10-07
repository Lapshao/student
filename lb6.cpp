#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");
	cout << "/n       јЋ≈Ќƒј–№/n/n " << endl;
	int a;
	cin >> a;
	switch (a) {
	case 1:
		cout << "январь - первый мес€ц" << endl;
		break;
	case 2:
		cout << "‘евраль - второй мес€ц" << endl;
		break;
	case 3:
		cout << "ћарт - третий мес€ц" << endl;
		break;
	case 4:
		cout << "јпрель - четвертый мес€ц" << endl;
		break;
	case 5:
		cout << "ћай - п€тый мес€ц" << endl;
		break;
	case 6:
		cout << "»юнь - шестой мес€ц" << endl;
		break;
	case 7:
		cout << "»юль - седьмой мес€ц" << endl;
		break;
	case 8:
		cout << "јвгуст - восьмой мес€ц" << endl;
		break;
	case 9:
		cout << "—ент€брь - дев€тый мес€ц" << endl;
		break;
	case 10:
		cout << "ќкт€брь - дес€тый мес€ц" << endl;
		break;
	case 11:
		cout << "Ќо€брь - одиннадцатый мес€ц" << endl;
		break;
	case 12:
		cout << "ƒекабрь - двенадцатый мес€ц" << endl;
		break;
	default:
		cout << "“акого мес€ца нет" << endl;
		break;



	}

	int _;
	cin >> _;
	return 0;
}
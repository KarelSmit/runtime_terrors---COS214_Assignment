#include "MedicUnit.cpp"
#include "FootUnit.cpp"
#include "Battalion.cpp"

#include <iostream>

using namespace std;

int main()
{
	MedicUnit m = MedicUnit();
	cout << "MedicUnit HP = " << m.getHP() << endl;
	cout << "MedicUnit RP = " << m.getRP() << endl;
	cout << "MedicUnit Dmg = " << m.getDmg() << endl;
	return 0;
}

#include "InfantryUnit.cpp"
#include "FootUnit.cpp"
#include "Battalion.cpp"

#include <iostream>

using namespace std;

int main()
{
	InfantryUnit m = InfantryUnit();
	cout << "InfantryUnit HP = " << m.getHP() << endl;
	cout << "InfantryUnit RP = " << m.getRP() << endl;
	cout << "InfantryUnit Dmg = " << m.getDmg() << endl;
	return 0;
}

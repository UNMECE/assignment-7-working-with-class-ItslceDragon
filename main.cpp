#include <iostream>
#include "Electric_Field.h"
#include "Magnetic_Field.h"
using namespace std;

int main() {
	cout << "Electric Fields: " << endl;

	Electric_Field E_default;
	E_default.display();
	cout << "Magnitude: " << E_default.calculateMagnitude() << endl;
	cout << "Inner Product: " << E_default.innerProduct() << endl;
	cout << endl;

	Electric_Field E_components(100, 10.9, 1.7);
	E_components.display();
	cout << "Magnitude: " << E_components.calculateMagnitude() << endl;
	cout << "Inner Product: " << E_components.innerProduct() << endl;
	cout << endl;

	Electric_Field E_set;
	E_set.setE(4.2, 5.1, 7.3);
	E_set.display();
	cout << "Magnitude: " << E_set.calculateMagnitude() << endl;
	cout << "Inner Product: " << E_set.innerProduct() << endl;
	cout << endl;

	cout << "Magnetic Fields " << endl;

	Magnetic_Field B_default;
	B_default.display();
	cout << "Magnitude: " << B_default.calculateMagnitude() << endl;
	B_default.calculateUnitVector();
	cout << endl;

	Magnetic_Field B_components(3.3, 4.4, 5.5);
	B_components.display();
	cout << "Magnitude: " << B_components.calculateMagnitude() << endl;
	B_components.calculateUnitVector();
	cout << endl;

	Magnetic_Field B_set;
	B_set.setB(1.0, 2.0, 3.0);
	B_set.display();
	cout << "Magntiude: " << B_set.calculateMagnitude() << endl;
	B_set.calculateUnitVector();

	return 0;
}

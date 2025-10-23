#include <iostream>
#include <cmath>
#include "Magnetic_Field.h"
using namespace std;

Magnetic_Field::Magnetic_Field() {
	B = new double[3];
	B[0] = B[1] = B[2] = 0.0;
}

Magnetic_Field::Magnetic_Field(double Bx, double By, double Bz) {
	B = new double[3];
	B[0] = Bx;
	B[1] = By;
	B[2] = Bz;
}

Magnetic_Field::~Magnetic_Field() {
	delete[] B;
}

void Magnetic_Field::setB(double Bx, double By, double Bz) {
	B[0] = Bx;
	B[1] = By;
	B[2] = Bz;
}

double Magnetic_Field::getBx() const {
	return B[0];
}

double Magnetic_Field::getBy() const {
	return B[1];
}

double Magnetic_Field::getBz() const {
	return B[2];
}

double Magnetic_Field::calculateMagnitude() const {
	return sqrt(B[0] * B[0] + B[1] * B[1] + B[2] * B[2]);
}

void Magnetic_Field::calculateUnitVector() const {
	double mag = calculateMagnitude();
	if (mag == 0) {
		cout << "Unit Vector undefined for a 0 magnitude field." << endl;
		return;
	}
	
	cout << "Magnetic Field Unit Vector: " << B[0]/mag << ", " << B[1]/mag << ", " << B[2]/mag << endl;
}

void Magnetic_Field::display() const {
       cout << "Magnetic Field: " << B[0] << ", " << B[1] << ", " << B[2] << endl;
}       

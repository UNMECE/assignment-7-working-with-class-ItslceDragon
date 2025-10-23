#ifndef MAGNETIC_FIELD_H
#define MAGNETIC_FIELD_H

class Magnetic_Field {
	private:
		double *B;
	
	public:
		Magnetic_Field();
		Magnetic_Field(double Bx, double By, double Bz);
		~Magnetic_Field();

		void setB(double Bx, double By, double Bz);
		double getBx() const;
		double getBy() const;
		double getBz() const;

		double calculateMagnitude() const;
		void calculateUnitVector() const;
		void display() const;
};

#endif

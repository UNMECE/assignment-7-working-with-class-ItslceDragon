#ifndef ELECTRIC_FIELD_H
#define ELECTRIC_FIELD_H

class Electric_Field {
	private:
		double *E;
	
	public: 
		Electric_Field();
		Electric_Field(double Ex, double Ey, double Ez);
		~Electric_Field();
		
		void setE(double Ex, double Ey, double Ez);
		double getEx() const;
		double getEy() const;
		double getEz() const;

		double calculateMagnitude() const;
		double innerProduct() const;
		void display() const;
};

#endif

#include <stdio.h>
#include <iostream>

class complex
{
public:
complex(float r, float i);
friend complex operator +(complex,complex);
friend complex operator -(complex,complex);
friend complex operator *(complex,complex);
//complex operator /();
complex& operator +=(complex&);
complex& operator -=(complex&);
complex& operator *=(complex&);
//complex operator /=(complex);
bool operator ==(complex);
complex operator =(complex);
friend std::ostream& operator <<(std::ostream &s, complex &b);
float getreal();
float getimag();
float amplituda();
float faza();
private:
float real;
float imag;
};


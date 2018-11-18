#include <stdio.h>
#include <iostream>


class complex
{
public:
complex(float r=0.0f, float i=0.0f);
float getreal();
float getimag();
friend complex operator +(complex,complex);
friend complex operator -(complex,complex);
friend complex operator *(complex,complex);
friend complex operator /(complex,complex);
complex& operator +=(complex&);
complex& operator -=(complex&);
complex& operator *=(complex&);
complex& operator /=(complex&);
bool operator ==(complex);
void operator =(complex);
friend std::ostream& operator <<(std::ostream &s, complex &b);
float amplituda();
float faza();
private:
float real;
float imag;
};


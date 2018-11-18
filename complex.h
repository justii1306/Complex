#include <stdio.h>
#include <iostream>


class complex
{
public:
complex(float r=0.0, float i=0.0);
float getreal() const;
float getimag() const;
friend complex operator +(const complex,const complex);
friend complex operator -(const complex,const complex);
friend complex operator *(const complex,const complex);
friend complex operator /(const complex,const complex);
complex& operator +=(const complex&);
complex& operator -=(const complex&);
complex& operator *=(const complex&);
complex& operator /=(const complex&);
bool operator ==(const complex);
complex& operator =(const complex);
friend std::ostream& operator <<(std::ostream &s, const complex &b);
float amplituda();
float faza();
private:
float real;
float imag;
};


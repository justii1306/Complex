#include <string.h>
#include <ctype.h>
#include "test.h"

test::test(char n[]){
	l=strlen(n);
	this->len=l;
	napis->new char[len];
	this->napis=n;}

test operator +(char n[], const tekst& t2){
    char nap[]=n+t2.napis;
    test result(nap);
    return result;}

bool test:: test==(const test& t2){
	if(this->len!=t2.len)
		return false;
	if((int r=strcasecmp(this->napis,t2.napis)==0)	
	return false;;
    return true;}

void tekst::operator =(tekst& t1,tekst& t2){
    t4.len=t3.len;
    t4.napis=t3.napis;}

test& test::operator = (tekst& zr){
	this->len=zr.len;
	this->napis=zr.napis;
	return *this;}

test::~test(){
	delete napis;}

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

test::~test(){
	delete napis;}

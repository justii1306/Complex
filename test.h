#include <string.h>
#include <ctype.h>

class tekst{
	public:
	tekst(char[]);
	~test();
	friend tekst operator +(string, const tekst&);
	bool operator ==(const tekst&, const tekst&);
	test& operator=(const test& dot);
	privite:
	char napis[];
	int len;





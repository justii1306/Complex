#include "test.h"
#include <string.h>
#include <ctype.h>

main(){
	teskt t1=("To jest tekst");
	teskt t2=("TEKST");
	Tekst t3,t4;
	t4=t3;
	t3[3]=t3[6]='X'
	std::count<<t3<<std::endl;
	if (t3==t1)std::count<<"t1==t3";else std::cout <<"t1!=t3";
	if (t4==t1)std::count<<"t1==t4";else std::cout <<"t1!=t4";
	return 0;	
}

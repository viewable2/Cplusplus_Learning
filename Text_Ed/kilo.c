#include "unistd_old.h"
#include <_mingw.h>

// io - windows - warning_unistd-old is defined


int main (){

	char c;
	while (read(STDIN_FILENO, &c, 1) == 1);
	
	return 0;
}
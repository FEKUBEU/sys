#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {

	char * tty_name;
	tty_name = ttyname(0);
	puts(tty_name);
	return EXIT_SUCCESS;
}

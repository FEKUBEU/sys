#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main() {
	
	char cwd[4096];
        getcwd(cwd,sizeof(cwd));
	puts(cwd);
	return EXIT_SUCCESS;
}

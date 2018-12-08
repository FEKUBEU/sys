#include <stdio.h>
#include <stdlib.h>
#include <pwd.h>
#include <unistd.h>

int main (){
	
	struct passwd *pw;
	uid_t uid;
	
	uid = geteuid();
	
	pw  = getpwuid(uid);
	
	printf("%d\n",uid);
	puts (pw->pw_name);
	
	return EXIT_SUCCESS;
}

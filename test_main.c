#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	if (fork() == 0) {
		printf("child pid=%d\n", (int)getpid());
		sleep(180);
	}
	else {
		printf("parent pid=%d\n", (int)getpid());
		sleep(180);
	}

	return 0;
}

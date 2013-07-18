TARGET=hook_bind_lo.so

all: hook_fork.so test_main

hook_fork.so: hook_fork.c
	gcc -Wall -fPIC -shared -o hook_fork.so hook_fork.c

test_main: test_main.c
	gcc -o test_main test_main.c

run: hook_fork.so test_main
	LD_PRELOAD=./hook_fork.so ./test_main

clean:
	rm -rf hook_fork.so test_main


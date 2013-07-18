//
//	hook_fork.cpp - fork() function hook sample
//
//  shell:
//	    $ LD_PRELOD=/path/to/hook_fork.so ./target_program
//
//  gdb:
//      $ gdb ./target_program
//      (gdb) set environment LD_PRELOAD=LD_PRELOD=/path/to/hook_fork.so
//      (gdb) run
//
//  gdbserver:
//      $ gdbserver --wrapper env LD_PRELOAD=./hook_fork.so -- :2222 ./test_main
//
//      see also: http://sourceware.org/gdb/current/onlinedocs/gdb/Server.html
// 
int fork()
{
	return 0;
}

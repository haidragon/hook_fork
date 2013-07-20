//
//	hook_fork.cpp - fork() function hook sample
//
//  shell:
//     Linux, FreeBSD
//       $ gcc -Wall -fPIC -shared -o hook_fork.so hook_fork.c
//       $ LD_PRELOD=/path/to/hook_fork.so ./target_program
//     
//     Mac OS X
//       $ gcc -Wall -fPIC -shared -o hook_fork.dylib hook_fork.c
//       $ DYLD_INSERT_LIBRARIES=/path/to/hook_fork.dylib DYLD_FORCE_FLAT_NAMESPACE=Y ./target_program
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

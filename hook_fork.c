//
//	hook_bind_lo.cpp - bind() function hook sample
//
//  shell:
//	    $ LD_PRELOD=/path/to/hook_fork.so ./target_program
//
//  gdb:
//      $ gdb ./target_program
//      (gdb) set environment LD_PRELOAD=LD_PRELOD=/path/to/hook_fork.so
//      (gdb) run
// 
int fork()
{
	return 0;
}

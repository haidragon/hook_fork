hook_fork.cpp
========
fork() function hook sample

shell
========
Linux, FreeBSD
<pre>
  $ gcc -Wall -fPIC -shared -o hook_fork.so hook_fork.c
  $ LD_PRELOD=/path/to/hook_fork.so ./target_program
</pre>

Mac OS X
<pre>
  $ gcc -Wall -fPIC -shared -o hook_fork.dylib hook_fork.c
  $ DYLD_INSERT_LIBRARIES=/path/to/hook_fork.dylib DYLD_FORCE_FLAT_NAMESPACE=Y ./target_program
</pre>

gdb
========
<pre>
  $ gdb ./target_program
  (gdb) set environment LD_PRELOAD=LD_PRELOD=/path/to/hook_fork.so
  (gdb) run
</pre>

gdbserver
========
<pre>
  $ gdbserver --wrapper env LD_PRELOAD=./hook_fork.so -- :2222 ./test_main
</pre>

see also:
  * http://sourceware.org/gdb/current/onlinedocs/gdb/Server.html

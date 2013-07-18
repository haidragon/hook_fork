hook_fork.cpp
========
fork() function hook sample

shell
========
<pre>
  $ LD_PRELOD=/path/to/hook_fork.so ./target_program
</pre>

gdb
========
<pre>
  $ gdb ./target_program
  (gdb) set environment LD_PRELOAD=LD_PRELOD=/path/to/hook_fork.so
  (gdb) run
</pre>

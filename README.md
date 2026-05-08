Build with:
gcc -o ncurses_test -lcurses ncurses_test.cpp

Run with:
export TERM=tvi910
./ncurses_test > file.txt
(put your term variable back or restart shell)
try ls -l file.txt 
and od -a file.txt
is it about 30 bytes?  or 4K?

Thanks!


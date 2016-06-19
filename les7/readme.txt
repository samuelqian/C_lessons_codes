linux pipe
 
1. redirection:
./a.out 1>> a.txt //it means, the output will not display on terminal,but to file a.txt 
./a.out 1>output.txt 2>error.txt

a.out  a.txt  main.c  readme.txt
cisco@ubuntu:~/workspace/les7$ ./a.out >a.out 2>fault.txt <input.txt
cisco@ubuntu:~/workspace/les7$ ./a.out >a.out <input.txt
bash: input.txt: No such file or directory
cisco@ubuntu:~/workspace/les7$ ls
a.out  a.txt  fault.txt  main.c  readme.txt
cisco@ubuntu:~/workspace/les7$ cat fault.txt 
bash: input.txt: No such file or directory
cisco@ubuntu:~/workspace/les7$ 

ls | grep diag // this is like pipe output of ls commnad to the next command grep.

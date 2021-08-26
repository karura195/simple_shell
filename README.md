# Our own simple shell

This is a simple shell we made for our final project in C

### About

The program recreates the basic functionality found in the traditional Unix shell.

### Compilation
Our simple shell is compiled this way:
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
```

### Output
The program should have the exact same output as `sh` as well as the exact same error output. The only difference is when it prints an error, the name of the program must be equivalent the `argv[0]`.

Example of error with `sh`:
```
$ echo "qwerty" | /bin/sh
/bin/sh: 1: qwerty: not found
$ echo "qwerty" | /bin/../bin/sh
/bin/../bin/sh: 1: qwerty: not found
$
```

Same error with our program:
```
$ echo "qwerty" | ./hsh
./hsh: 1: qwerty: not found
$ echo "qwerty" | ./././hsh
./././hsh: 1: qwerty: not found
$
```

### Examples
```
$ /bin/pwd
/home/vagrant/shell
```

```
$ ls -la
total 108
drwxr-xr-x 4 root root  4096 Aug 26 09:15 .
drwx------ 1 root root  4096 Aug 26 09:15 ..
drwxr-xr-x 2 root root    28 Aug 26 08:54 authors
-rw-r--r-- 1 root root   256 Aug 26 08:55 AUTHORS
-rwxr-xr-x 1 root root   436 Aug 25 21:46 check_type.c
-rw-r--r-- 1 root root   431 Aug 25 20:02 exec_cmd.c
-rwxr-xr-x 1 root root   239 Aug 25 21:46 exiter.c
-rw-r--r-- 1 root root   232 Aug 25 22:16 free_args.c
-rw-r--r-- 1 root root 12288 Aug 25 23:29 .free_args.c.swp
-rwxr-xr-x 1 root root   627 Aug 25 21:13 _getpath.c
drwxr-xr-x 8 root root   220 Aug 26 08:56 .git
-rwxr-xr-x 1 root root 18448 Aug 25 23:18 hsh
-rwxr-xr-x 1 root root   382 Aug 25 21:46 init_shell.c
-rw-r--r-- 1 root root   504 Aug 25 20:10 is_builtin.c
-rw-r--r-- 1 root root  1378 Aug 26 08:27 main.c
-rw-r--r-- 1 root root  1657 Aug 26 08:56 man_1_simple_shell
-rwxr-xr-x 1 root root   856 Aug 25 21:12 pathcat.c
-rwxr-xr-x 1 root root   350 Aug 25 21:12 print_env.c
-rw-r--r-- 1 root root   603 Aug 26 09:15 README.md
-rw-r--r-- 1 root root  1326 Aug 25 22:03 shell.h
-rwxr-xr-x 1 root root  2040 Aug 25 23:15 strings.c
-rw-r--r-- 1 root root   855 Aug 25 23:18 token_maker.c
-rw-r--r-- 1 root root   383 Aug 25 20:20 ver_paths.c
```

```
$ hola
./hsh: No such file or directory
```

### Authors
[Karla Diaz](https://github.com/karura195)
[Edgar Flores](https://github.com/zye7ert)

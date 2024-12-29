```
gcc -S -o hello.S hello.c
```

```
as -o hello.o hello.S
```

```
ld -o hello -lc -dynamic-linker /lib64/ld-linux-x86-64.so.2 hello.o -e main
```

```
./hello
```
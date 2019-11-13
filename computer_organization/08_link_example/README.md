
$ gcc -g -c add_lib.c link_example.c
$ objdump -d -M intel -S add_lib.o
$ objdump -d -M intel -S link_example.o

$ gcc -o link-example add_lib.o link_example.o

$ objdump -d -M intel -S link-example

# inline

inline:函数内联->把一个实际调用的函数产生的指令，直接插入到的位置，来替换对应的函数调用指令

在 GCC 编译的时候，加上对应的一个让编译器自动优化的参数 -O，编译器就做做函数内联的优化。


$ gcc -g -c -O function_example_inline.c
$ objdump -d -M intel -S function_example_inline.o



/*
compile
$ gcc -g -c test.c
decompile
$ objdump -d -M intel -S test.o
*/

// test.c
int main() { 
	int a = 1; 
	int b = 2; 
	a = a + b;
}

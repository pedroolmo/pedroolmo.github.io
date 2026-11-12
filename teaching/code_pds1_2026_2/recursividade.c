#include <stdio.h>

void a();
void b();
void c();

void c() {
	printf("c");
	a();
}
void b() {
	printf("b");
	c();
}
void a() {
	printf("a");
	b();
}

int main() {	
	a();
	return 0;
}
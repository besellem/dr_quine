/*
	Colleen.c - besellem
*/
#include <stdio.h>
int hey(void) { return 1; }
int main(void){
	/*
		some serious process going on
	*/
	const char s[] = "/*%1$c%2$cColleen.c - besellem%1$c*/%1$c#include <stdio.h>%1$cint hey(void) { return 1; }%1$cint main(void){%1$c%2$c/*%1$c%2$c%2$csome serious process going on%1$c%2$c*/%1$c%2$cconst char s[] = %3$c%4$s%3$c;%1$c%2$cprintf(s,10,9,34,s);%1$c%2$chey();%1$c%2$creturn (0);%1$c}%1$c";
	printf(s,10,9,34,s);
	hey();
	return (0);
}

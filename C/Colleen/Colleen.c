/*
	Colleen.c - besellem
*/
#include <stdio.h>
int hey(void) { return 1; }
int main(void){
	/*
		some serious process going on
	*/
	const char s[] = "/*%c%cColleen.c - besellem%c*/%c#include <stdio.h>%cint hey(void) { return 1; }%cint main(void){%c%c/*%c%c%csome serious process going on%c%c*/%c%cconst char s[] = %c%s%c;%c%cprintf(s,10,9,10,10,10,10,10,9,10,9,9,10,9,10,9,34,s,34,10,9,10,9,10,9,10,10);%c%chey();%c%creturn (0);%c}%c";
	printf(s,10,9,10,10,10,10,10,9,10,9,9,10,9,10,9,34,s,34,10,9,10,9,10,9,10,10);
	hey();
	return (0);
}

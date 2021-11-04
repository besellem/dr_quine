#include <stdio.h>
#define NL 10
#define Q 34
#define FT(x) int main(){const char s[] = "#include <stdio.h>%c#define NL 10%c#define Q 34%c#define FT(x) int main(){const char s[] = %c%s%c;FILE *f = fopen(%cGrace_kid.c%c, %cw%c);fprintf(f,s,NL,NL,NL,Q,s,Q,Q,Q,Q,Q,NL,NL,NL,9,NL,NL);fclose(f);return 0;}%cFT(0)%c/*%c%cthis is a comment%c*/%c";FILE *f = fopen("Grace_kid.c", "w");fprintf(f,s,NL,NL,NL,Q,s,Q,Q,Q,Q,Q,NL,NL,NL,9,NL,NL);fclose(f);return 0;}
FT(0)
/*
	this is a comment
*/

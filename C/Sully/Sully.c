#include <stdio.h>
#include <stdlib.h>
#define VAR "Sully_%d"
#define VT 9
#define NL 10
#define Q 34
int main(){
	int i = 5;
	char compil[52], filename[11], exec[11];
	const char s[] = "#include <stdio.h>%c#include <stdlib.h>%c#define VAR %cSully_%%d%c%c#define VT 9%c#define NL 10%c#define Q 34%cint main(){%c%cint i = %d;%c%cchar compil[52], filename[11], exec[11];%c%cconst char s[] = %c%s%c;%c%cif (i == 0) return 1;%c%csprintf(compil, %cclang -Wall -Wextra -Werror %cVAR%c.c -o %cVAR, i-1, i-1); sprintf(filename, VAR%c.c%c, i-1); sprintf(exec, %c./%cVAR, i-1);%c%cFILE *f = fopen(filename, %cw%c); fprintf(f,s,NL,NL,Q,Q,NL,NL,NL,NL,NL,VT,i-1,NL,VT,NL,VT,Q,s,Q,NL,VT,NL,VT,Q,Q,Q,Q,Q,Q,Q,Q,NL,VT,Q,Q,NL,VT,NL,VT,NL,NL); fclose(f);%c%csystem(compil); system(exec);%c%creturn (0);%c}%c";
	if (i == 0) return 1;
	sprintf(compil, "clang -Wall -Wextra -Werror "VAR".c -o "VAR, i-1, i-1); sprintf(filename, VAR".c", i-1); sprintf(exec, "./"VAR, i-1);
	FILE *f = fopen(filename, "w"); fprintf(f,s,NL,NL,Q,Q,NL,NL,NL,NL,NL,VT,i-1,NL,VT,NL,VT,Q,s,Q,NL,VT,NL,VT,Q,Q,Q,Q,Q,Q,Q,Q,NL,VT,Q,Q,NL,VT,NL,VT,NL,NL); fclose(f);
	system(compil); system(exec);
	return (0);
}

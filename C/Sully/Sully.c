#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define VAR "Sully_%d"
#define VT 9
#define NL 10
#define Q 34
int main(){
	int i = 5;
	char compil[52], filename[11], exec[11];
	const char s[] = "#include <stdio.h>%1$c#include <stdlib.h>%1$c#include <unistd.h>%1$c#define VAR %2$cSully_%%d%2$c%1$c#define VT 9%1$c#define NL 10%1$c#define Q 34%1$cint main(){%1$c%3$cint i = %4$d;%1$c%3$cchar compil[52], filename[11], exec[11];%1$c%3$cconst char s[] = %2$c%5$s%2$c;%1$c%3$cif (i == 0) return 1;%1$c%3$cif (access(%2$cSully_5.c%2$c, F_OK) != -1) --i;%1$c%3$csprintf(compil, %2$cclang -Wall -Wextra -Werror %2$cVAR%2$c.c -o %2$cVAR, i, i); sprintf(filename, VAR%2$c.c%2$c, i); sprintf(exec, %2$c./%2$cVAR, i);%1$c%3$cFILE *f = fopen(filename, %2$cw%2$c); fprintf(f,s,NL,Q,VT,i,s); fclose(f);%1$c%3$csystem(compil); system(exec);%1$c%3$creturn (0);%1$c}%1$c";
	if (i == 0) return 1;
	if (access("Sully_5.c", F_OK) != -1) --i;
	sprintf(compil, "clang -Wall -Wextra -Werror "VAR".c -o "VAR, i, i); sprintf(filename, VAR".c", i); sprintf(exec, "./"VAR, i);
	FILE *f = fopen(filename, "w"); fprintf(f,s,NL,Q,VT,i,s); fclose(f);
	system(compil); system(exec);
	return (0);
}

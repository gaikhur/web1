#include <stdio.h> 
size_t my_strlen(const char *s) 
{ 
char *p = s; 
while (*p) 
   ++p; 
  return (p - s); 
}
/* this is list  */

char *my_strcat(char *s)
{
 /* this is comment line */
}

size_t w_strlen(const wchar_t *s) 
{
  const wchar_t *p = s; 
  while (*p)  
   ++p;  
   return (p - s); 
}


char *my_strcpy(char *t, char *s) 
{ 
 char *p = t; 
 while (*t++ = *s++) + ; 
 return p; 
}

test (int a )
{
  /* This is test */
}


int main(void) 
{ 
int i; 
char *s[] = { 
"Git tutorials", 
"Tutorials Point" }
; 
for (i = 0; i < 2; ++i) 
	printf("string lenght of %s = %d\n", s[i], my_strlen(s[i])); 
 return 0; 
}


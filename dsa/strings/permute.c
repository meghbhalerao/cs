#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// getting the substring of a given string - excluding the last character
char* substr(const char *src, int m, int n)
{
	// get length of the destination string
	int len = n - m;

	// allocate (len + 1) chars for destination (+1 for extra null character)
	char *dest = (char*)malloc(sizeof(char) * (len + 1));

	// extracts characters between m'th and n'th index from source string
	// and copy them into the destination string
	for (int i = m; i < n && (*(src + i) != '\0'); i++)
	{
		*dest = *(src + i);
		dest++;
	}

	// null-terminate the destination string
	*dest = '\0';

	// return the destination string
	return dest - len;
}
// program to concatenate 2 strings
void concatenate_string(char *original, char *add)
{
   while(*original)
      original++;
      
   while(*add)
   {
      *original = *add;
      add++;
      original++;
   }
   *original = '\0';
}


// program to reverse string
void reverse(char *s) 
{
   int length, c;
   char *begin, *end, temp;
 
   length = string_length(s);
   begin  = s;
   end    = s;
 
   for (c = 0; c < length - 1; c++)
      end++;
 
   for (c = 0; c < length/2; c++)
   {        
      temp   = *end;
      *end   = *begin;
      *begin = temp;
 
      begin++;
      end--;
   }
}
// program to find the length 
int length(char* str)
{
    int i=0;
    for(i=0;str[i]!='\0';i++)
    {

    }
return i;
}

// recursive program to find the permutation of a string

void permute(char* constant, char* permute)
{
if(length(permute)==2)
{
    concatenate_string(constant,permute);
    puts(constant);
    reverse(permute);
    concatenate_string(constant,permute);
    puts(constant); 
}
else
{
    permute(substr())
}
}

int main()
{

}
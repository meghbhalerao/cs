#include<stdio.h>

int compare(char* s1, char* s2)
{
    for(int i=0,j=0; s1[i]!='\0' || s2[j]!='\0';i++,j++)
    {
        if(s1[i]!=s2[j])
        {
            return s1[i]-s2[j];
        }

    }
return 0;
}
int main()
{
    char *w1 = "alphabet";
    char *w2 = "alphabets";
    int decision =0;
    decision =  compare(w1,w2);
    printf("%d",decision);


}
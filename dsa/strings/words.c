#include<stdio.h>

int main()
{
    char *sentence = "Hi how    r      u";
    int word =0;
    for (int i=1;sentence[i]!='\0';i++)
    {
        if(sentence[i]==' ' && sentence[i-1]!=' ')
        {
            word++;
        }
    }
    printf("Number of words in the string: %d", word+1, "\n");

}
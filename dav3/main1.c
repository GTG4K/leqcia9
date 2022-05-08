#include<stdio.h>

int my_getchar();

int mgetline(char line[],int maxline);
int any(char s1[],char s2[]);

int main(void)
{
    char s1[MAXLINE],s2[MAXLINE];
    int val;
    
    /* Give the first string s1 */
    
    mgetline(s1,MAXLINE);
    
    /* Give the second string s2 */

    mgetline(s2,MAXLINE);

    val = any(s1,s2);

    printf("%d",val);

    return 0;
}

int mgetline(char s[],int lim)
{
    int i,c;
    for(i=0;i<lim-1 && (c=my_getchar())!=EOF && c!='\n';++i)
        s[i]=c;

    if(c=='\n')
        s[i++]=c;
    s[i]='\0';
}


int any(char s1[],char s2[])
{
    int i,j;

    for(i=0;s1[i]!='\0';++i) 
    {
        // iterate through s2 while trying to find matching character from s1
        for(j=0;(s1[i]!=s2[j]) && s2[j]!='\0';++j) 
            ; // continue

        if(s2[j]!='\0' && s2[j] != '\n') { // check that s2 [j]! = '\n', since s1 and s2 both have the character '\n' in the penultimate position of the string.
            return i;
        }
    }

    return -1;
}



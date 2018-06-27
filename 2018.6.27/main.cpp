#include <iostream>
#include <fstream>
#include <cstdlib>
#include <stdio.h>
#include <stdio.h>
int main()
{
    
    FILE*fp;
    int a[100][10];
    int line = 0;
    int c, i;
 fp = fopen("in.csv", "r");
    if(fp == NULL) return -1;
    while(1)
    {
        i=0;
        while(1)
        {
            fscanf(fp, "%d", &a[line][i]);
            c = getchar();
            if(c == '\n'||c == EOF)break;
            i++;
        }
        line ++;
        if(c == EOF) break;
    }
     fclose(fp);
}

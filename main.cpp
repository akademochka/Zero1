#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    FILE *fin, *fout;

    fin=fopen("input.txt","r");
    fout=fopen("output.txt","w");
    int c, max, nc;

    max = 0;
    while((c = getc(fin)) != EOF)
    if(c == '1') {
        nc = 1;
        while((c = getc(fin)) == '1')
        nc++;
        if(nc > max)
        max = nc;
    }
    fprintf(fout, "%ld",max);

    fclose(fin);
    fclose(fout);

    return 0;
}

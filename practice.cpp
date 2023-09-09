#include<bits/stdc++.h>
using namespace std;
void search(char* txt,char* ptn)
{
    int l1=strlen(txt);
    int l2=strlen(ptn);
    for(int i=0;i<strlen(txt);i++)
    {
        int j=0;
        for(j=0;j<strlen(ptn);j++)
        {
            if(txt[i+j]!=ptn[j])
            break;
        }
        if(j==strlen(ptn))
        cout<<"Pattern found at index "<<i<<endl;
    }
}
int main()
{
    char txt[]="AABAACAADAABAAABAA";
    char ptn[]="AABA";
    search(txt,ptn);
    return 0;
}
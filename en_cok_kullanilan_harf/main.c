#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cumle[100];
    int i=0,kucukharf[26]={0};
    int encok;
    char harf;

    printf("lutfen bir cumle giriniz:\n");
    gets(cumle);

    while(cumle[i])
    {
        if(cumle[i] >='a' && cumle[i]<='z')
        {
            kucukharf[cumle[i]-'a']++;

        }
        i++;

    }
    encok=kucukharf[0];

    for(i=1;i<26;i++)
    {
        if(kucukharf[i]!=0)
        {
            if(kucukharf[i]>encok)
            {
                encok=kucukharf[i];
                harf=i+'a';
            }
        }
    }
    printf("en cok kullanilan harf %c",harf);




    return 0;
}

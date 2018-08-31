#include<stdio.h>
void main()
{
    char str[100000];
    int n;
    scanf("%d",&n);
    char str1[n][100000];
    int i,j,k=0,m;
    int arr1[100];
    int arr2[100];
    for(i=0;i<n;i++)
    {
       printf("\nEnter a string %d: ",i+1);
       scanf(" %[^\n]",str1[i]);
    }
    for(i=0;i<n;i++)
    {
        int count=0;
        for(m=0;m<26;m++)
            arr1[m]=0;
        for(j=0;str1[i][j]!='\0';j++)
        {
            if(str1[i][j]>='a'&&str1[i][j]<='z'&&str1[i][j]!=' ')
            {
                arr1[str1[i][j]-97]++;
            }
        }
        for(m=0;m<26;m++)
        {
            if(arr1[m]>0)
                count++;
        }
        if(count==26)
        {
            arr2[k]=1;
            k++;
        }
        else
        {
            arr2[k]=0;
            k++;
        }
    }
    for(i=0;i<k;i++)
    {
        str[i]=arr2[i]+'0';
    }
    printf("%s",str);
}

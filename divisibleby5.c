#include<stdio.h>
void main()
{
    int n,i=0,flag=0,t;
    char s[10];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        scanf("%s",s);
        for(i=0;s[i]!='\0';i++)
            {
                if(s[i]=='0' || s[i]=='5')
                { 
                    flag=1;
                    break;
                }
            }       
        if(flag==1)
            printf("Yes");
        else
            printf("No");
            flag=0;
    
    }        
            
    
}
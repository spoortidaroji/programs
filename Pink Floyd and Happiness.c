#include<stdio.h>
struct s
{
    int top;
};
int pop(int s[], struct s *temp)
{
    int b = s[temp->top--];
    return b;
}
void push(int s[], struct s *temp , int x)
{
    s[++temp -> top] = x;
}
int main()
{
    struct s k;
    k.top = -1;
    int n;
    scanf("%d",&n);
    int a[n],i,j = 0,s[n],b[n+1];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    b[0] = 0;
    for(i=0;i<n;i++)
    {
        if(k.top == -1 && a[i] - b[j] == 1)
            b[++j] = a[i];
        else if(k.top > -1 && s[k.top] - b[j] == 1)
        {
            while(k.top > -1 && s[k.top] - b[j] == 1)
                b[++j] = pop(s,&k);
        }
        if(a[i] - b[j] == 1)
            b[++j] = a[i];
        else if(a[i] - b[j] > 1)
            push(s,&k,a[i]);
    }
    while(k.top > -1)
        b[++j] = s[k.top--];
    for(i=0;i<n;i++)
    {
        if(b[i+1] - b[i] != 1)
            break;
    }
    if(i == n)
        printf("Happy");
    else
        printf("Sad");
}
Language: C
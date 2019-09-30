void main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j=0,m=n-1;
    for(i=0;i<n;i++)
    {
     scanf("%d",&a[i]);   
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>=a[j]){
                continue;}
                else
                break;
            }
            if(j==n)
            printf("%ld ",a[i]);
           
            else
            continue;
        } 
    }

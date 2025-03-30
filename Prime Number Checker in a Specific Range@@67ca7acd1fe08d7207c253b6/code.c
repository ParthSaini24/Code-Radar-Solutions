int printPrimesInRange(int x,int y)
{
    if(x<2)
    {
        x=2-x;
    }
    for(int i=x;i<=y;i++)
    {
        int count=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                count+=1;
            }
        }
        if(count==0)
        {
            printf("%d ",i);
        }
    }
}
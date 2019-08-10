

#include<stdio.h>
 
struct Node
{
    long long x,y;
}d[2000];
 
int main()
{
    int n;
    while(scanf("%d", &n) != EOF)
    {
        int i;
        memset(d,0,sizeof(d));
        long long max_x=0,max_y=0,min_x=0,min_y=0;
        for(i=0;i<n;i++)
        {
            scanf("%lld%lld",&d[i].x,&d[i].y);
            if(d[max_x].x<d[i].x)
                max_x=i;
             if(d[max_y].y<d[i].y)
                max_y=i;
            if(d[min_x].x>d[i].x)
                min_x=i;
             if(d[min_y].y>d[i].y)
                min_y=i;
        }
        long long area,a,b;
        a=d[max_x].x-d[min_x].x;
        b=d[max_y].y-d[min_y].y;
        if(a>b)
            area=a*a;
        else
            area=b*b;
        printf("%lld\n",area);
    }
    return 0;
}

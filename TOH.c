#include<stdio.h>
#include<math.h>
void move(char a[][3],int n,int m);
void display(char [][3],int n, int m);
void check(char [][3],int n,int m);
int c;
int main()
{
    while(1)
    {
        int n;
        char z,x;
        printf("\n\nEnter Level: ");
        scanf("%d",&n);
        if(n<65&&n>0)
        {
            int m=pow(2,n)-1;
            n++;
            char a[n][3];
            for(int i=0; i<n-1; i++)
            {
                a[i][0]=i+1;
            }
            for(int i=1; i<3; i++)
            {
                for(int j=0; j<n-1; j++)
                {
                    a[j][i]='\0';
                }
            }
            a[n-1][0]='A';
            a[n-1][1]='B';
            a[n-1][2]='C';

            display(a,n,m);
        }
        else
        {
            printf("Invalid Level");
        }
    }
    return 0;
}
void move(char a[][3],int n,int m)
{
    int x,y,k;
    printf("\nNext Move: ");
    scanf("%d%d",&x,&y);
    if(x==1)
    {
        int s=0;
        for(int i=0; i<n-1; i++)
        {
            if(a[i][0]>s && a[i][0]>=1)
            {
                s=a[i][0];
                k=i;
                break;
            }
        }
        if(y==2)
        {
            for(int i=n-2; i>=0; i--)
            {
                if(a[i][1]=='\0' && a[i+1][1]>s)
                {
                    a[i][1]=s;
                    a[k][0]='\0';
                    c++;
                    break;
                }
            }
            if(a[k][0]!='\0')
            {
                printf("\nInvalid Move\n");
            }
            display(a,n,m);
        }
        else if(y==3)
        {
            for(int i=n-2; i>=0; i--)
            {
                if(a[i][2]=='\0' && a[i+1][2]>s)
                {
                    a[i][2]=s;
                    a[k][0]='\0';
                    c++;
                    break;
                }
            }
            if(a[k][0]!='\0')
            {
                printf("\nInvalid Move\n");
            }
            display(a,n,m);
        }
        else
        {
            printf("\nInvalid Move\n");
            display(a,n,m);
        }
    }
    else if(x==2)
    {
        int s=0;
        for(int i=0; i<n-1; i++)
        {
            if(a[i][1]>s && a[i][1]>=1)
            {
                s=a[i][1];
                k=i;
                break;
            }
        }
        if(y==1)
        {
            for(int i=n-2; i>=0; i--)
            {
                if(a[i][0]=='\0' && a[i+1][0]>s)
                {
                    a[i][0]=s;
                    a[k][1]='\0';
                    c++;
                    break;
                }
            }
            if(a[k][1]!='\0')
            {
                printf("\nInvalid Move\n");
            }
            display(a,n,m);
        }
        else if(y==3)
        {
            for(int i=n-2; i>=0; i--)
            {
                if(a[i][2]=='\0' && a[i+1][2]>s)
                {
                    a[i][2]=s;
                    a[k][1]='\0';
                    c++;
                    break;
                }
            }
            if(a[k][1]!='\0')
            {
                printf("\nInvalid Move\n");
            }
            display(a,n,m);
        }
        else
        {
            printf("\nInvalid Move\n");
            display(a,n,m);
        }
    }


    else if(x==3)
    {
        int s=0;
        for(int i=1; i<n-1; i++)
        {
            if(a[i][2]>s && a[i][2]>=1)
            {
                s=a[i][2];
                k=i;
                break;
            }
        }
        if(y==2)
        {
            for(int i=n-2; i>=0; i--)
            {
                if(a[i][1]=='\0' && a[i+1][1]>s)
                {
                    a[i][1]=s;
                    a[k][2]='\0';
                    c++;
                    break;
                }
            }
            if(a[k][2]!='\0')
            {
                printf("\nInvalid Move\n");
            }
            display(a,n,m);
        }
        else if(y==1)
        {
            for(int i=n-2; i>=0; i--)
            {
                if(a[i][0]=='\0' && a[i+1][0]>s)
                {
                    a[i][0]=s;
                    a[k][2]='\0';
                    c++;
                    break;
                }
            }
            if(a[k][2]!='\0')
            {
                printf("\nInvalid Move\n");
            }
            display(a,n,m);
        }
        else
        {
            printf("\nInvalid Move\n");
            display(a,n,m);
        }
    }
    else
    {
        printf("\nInvalid Move\n");
        display(a,n,m);
    }
    return;
}
void display(char a[][3],int n,int m)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(a[i][j]=='\0'||a[i][j]=='A'||a[i][j]=='B'||a[i][j]=='C')
            {
                printf("%c   ",a[i][j]);
            }
            else
            {
                printf("%d   ",a[i][j]);
            }
        }
        printf("\n");
    }
    check(a,n,m);
    return;
}
void check(char a[][3],int n,int m)
{
    int f=1;
    for(int i=0; i<n-1; i++)
    {
        if(a[i][1]!=i+1 && a[i][2]!=i+1)
        {
            f=0;
        }
    }
    if(f==1)
    {
        printf("\nGame Completed\nYour Moves: %d\nMin Moves Required: %d",c,m);
    }
    else
    {
        move(a,n,m);
    }
}

#include<iostream>
using namespace std;
int main()
{
    int a[2][2],b[2][2],c[2][2],i,j,k;
    cout<<"Enter value for First Matrix :""\n";
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++);
        {
            cout<<"\nEnter value for 2d array:";
            {
                cin>>"&a[i][j]";
            }
        }
    }
    cout<<"\nEnter value for second matrix:";
    for ( i = 0; i < 2; i++)
    {
        for ( j= 0; j < 2; j++)
        {
            cout<<"\nEnter value for 2d array:";
            cin>>&b[i][j];
        }
    }
    cout<<"\nFirst Matrix is :";
    for ( i = 0; i <2; i++)
    {
        cout<<"\n";
        for(j=0;j<2;j++);
        cout<<"a[i][j]""\t";
    }
    cout<<"\n""Second Matrix is: ""\n");
    for (i = 0; i <2; i++)
    {
        cout<<"\n";
        for ( j=0; j <2; j++)
        {
            cout<<"\t"" array [i][j]";
        }
        for ( i = 0; i <2; i++)
        {
            for(j=0;j<2;j++)
            { 
                c[i][j]=0;
                for(k=0;k<2;k++)
                {
                    c[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        cout("\n""Multiplication of Matrix is :");
        for ( i = 0; i <2; i++)
        {
            cout<<"\t""c[i][j]";
        }
    }    
    return 0;
    
}

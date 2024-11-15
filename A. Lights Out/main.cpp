#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    int tes[3][3]={{1,1,1},{1,1,1},{1,1,1}};

            for(int i=0;i<3;i++)
            {
                for(int j=0;j<3;j++)
                {
                    if(arr[i][j]%2!=0)
                    {
                                             if(tes[i][j]==1)
                                                {
                                                 tes[i][j]=0;
                                                }
                                            else if(tes[i][j]==0)
                                                {
                                                 tes[i][j]=1;
                                                }
                            if (i > 0)
                                {
                                if(tes[i-1][j]==1)
                                    {
                                     tes[i-1][j]=0;
                                    }
                                else if(tes[i-1][j]==0)
                                    {
                                     tes[i-1][j]=1;
                                    }
                                }
                            if (i < 2)
                            {
                                if(tes[i+1][j]==1)
                                    {
                                     tes[i+1][j]=0;
                                    }
                                else if(tes[i+1][j]==0)
                                    {
                                     tes[i+1][j]=1;
                                    }
                            }
                            if (j > 0)
                            {
                                if(tes[i][j-1]==1)
                                    {
                                     tes[i][j-1]=0;
                                    }
                                else if(tes[i][j-1]==0)
                                    {
                                     tes[i][j-1]=1;
                                    }
                            }
                            if (j < 2)
                             {
                                if(tes[i][j+1]==1)
                                    {
                                     tes[i][j+1]=0;
                                    }
                                else if(tes[i][j+1]==0)
                                    {
                                     tes[i][j+1]=1;
                                    }
                            }
                    }
                }

            }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<tes[i][j];
        }
        cout<<endl;
    }

    return 0;
}

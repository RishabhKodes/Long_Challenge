#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	int tot = 0;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    int max1[4][4];
	    for(int i=0;i<4;i++)
	    {
	        for(int j=0;j<4;j++)
	        {
	            max1[i][j]=0;
	        }
	    }
	    
	    while(n--)
	    {
	        char c;
	        cin>>c;
	        int x;
	        cin>>x;
	        max1[c-'A'][x/3 - 1]++;
	    }
	    
	    int ans = INT_MIN;
        for(int a=0;a<4;a++)
        {
            for(int b=0;b<4;b++)
            {
                for(int c=0;c<4;c++)
                {
                    for(int d=0;d<4;d++)
                    {
                        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
                        {
                            int i = max1[0][a];
                            int j = max1[1][b];
                            int k = max1[2][c];
                            int l = max1[3][d];
                            vector<int> v;
                            v.push_back(i);
                            v.push_back(j);
                            v.push_back(k);
                            v.push_back(l);
                            sort(v.begin(),v.end());
                            reverse(v.begin(),v.end());
                            int amt = 100;
                            int t1 = 0;
                            for(int i=0;i<4;i++)
                            {
                                if(v[i] > 0)
                                {
                                    t1 = t1 + v[i]*amt;
                                    amt = amt - 25;
                                }    
                                else
                                    t1 = t1 - 100;
                            }
                            ans = max(ans,t1);
                        }
                    }
                }
            }
        }

        tot = tot + ans;
	    cout<<ans<<endl;
    }

    cout<<tot<<endl;
	return 0;
}

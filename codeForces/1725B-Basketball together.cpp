#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n, d;

    cin>>n>>d;

    vector<int>v;
    for(int i=0; i<n; i++)    // 100 90 80 70 60 50
    {
        int p;
        cin>>p;
        v.push_back(p);
    }

    sort(v.rbegin(),v.rend());
    int x=0,y,h,z=0;
    h=0;
    for(int i=0; i<n; i++)
    {


        y=v[h];
        x+=y;

        if(x<=d)
        {

            v.pop_back();

        }

        else if( x>d)
        {

            v.erase(v.begin());
            z++;
            x=0;
        }



    }


    cout<<z<<endl;

}

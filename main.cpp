#include<bits/stdc++.h>
//ACPC2022
//TposersFTW
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define pb push_back
#define lcm(x,y) x*y/__gcd(x,y)
#define summ(n) (n*(n+1))/2
#define loop(x,n) for(int i=x;i<n;i++)
#define loopj(x,n) for(int j=x;j<n;j++)
#define test int t;cin>>t;while(t--)
using namespace std;
double eps =1e-9;
///
int ableRN[100],bakerRN[100],iatRN[100];
void generateRN(){
    loop(0,100){
        ableRN[i]=(rand()%100);
        bakerRN[i]=(rand()%100);
        iatRN[i]=(rand()%100);
    }
}
///
vector<pair<int,int>>able,baker,iat;
void assignRN(){

    cout<<"Enter number of iat times"<<endl;
    int n;cin>>n;
    cout<<"Enter iat time in minute and its probabilty ";
    int yold=0;
    loop(0,n){
        int x;double y;cin>>x>>y;
        y*=(int)100;
        yold+=y;
        iat.pb({x,yold-1});
    }
    ///
    cout<<"Enter number of able times"<<endl;
    cin>>n;
    cout<<"Enter able time in minute and its probabilty ";
    yold=0;
    loop(0,n){
        int x;double y;cin>>x>>y;
        y*=(int)100;
        yold+=y;
        able.pb({x,yold-1});
    }
    ///
    cout<<"Enter number of baker times"<<endl;
    cin>>n;
    cout<<"Enter baker time in minute and its probabilty ";
    yold=0;
    loop(0,n){
        int x;double y;cin>>x>>y;
        y*=(int)100;
        yold+=y;
        baker.pb({x,yold-1});
    }

}
///
vector<int> clk;
void iatToClock(){
    int a=0;
    loop(0,100){
        loopj(0,iat.size()){
            if(iatRN[i]<=iat[j].second){
                a=iat[j].first;break;
            }
        }
        if(i==0)clk.pb(0);
        else clk.pb(a+clk.back());
    }
}
///
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    cin.tie(0);std::ios::sync_with_stdio(false);cout.tie(0);

    srand(time(NULL));
    generateRN();
    assignRN();
    iatToClock();
    return 0;
}
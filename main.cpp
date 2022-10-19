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
#define test int t;cin>>t;while(t--)
using namespace std;
double eps =1e-9;

int ableRN[100],bakerRN[100],iatRN[100];
void generateRN(){
    loop(0,100){
        ableRN[i]=(rand()%100)-1;
        bakerRN[i]=(rand()%100)-1;
        iatRN[i]=(rand()%100)-1;
    }
}

map<int,int>able,baker,iat;
void assignRN(int iatRN[],double iatProbability,int serviceTimeAble[],double probabilityAble[],int serviceTimeBaker[],double probabiltyBaker[],int n){
    for(int i=0;i<n;i++){

    }
};
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    cin.tie(0);std::ios::sync_with_stdio(false);cout.tie(0);

    return 0;
}
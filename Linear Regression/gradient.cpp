#include<iostream>
#include<algorithm>
#include<vector>
#include<bits/stdc++.h>
#include <functional> 
using namespace std;
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()
#define md 1000000007
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define vvi vector<vi>
#define vll vector<ll>
#define vvl vector<vll>
#define mii map<int,int>
#define mll map<ll,ll>
#define msi map<string,int>
#define msl map<string,ll>
#define mci map<char,int>
#define mcl map<char,ll>
#define msiit map<string,int>::iterator
#define mslit map<string,ll>::iterator
#define mciit map<char,int>::iterator
#define mclit map<char,ll>::iterator
#define miiit map<int,int>::iterator
#define mllit map<ll,ll>::iterator
#define f(i,a,b) for(long long i=a;i<b;i++)
typedef long long ll;
ll min(ll a,ll b){if(a>b){return b;}else{return a;}}
ll max(ll a,ll b){if(a<b){return b;}else{return a;}}
double L1(vector<double> y_true,vector<double> y_pred){
    /*
        args: y_true, y_pred
              y_true : true value of the target variable
              y_pred : predicted value of the target variable
        returns: L1 loss
    */
    if(y_true.size()!=y_pred.size()){
        cout<<"You're a Dumb bitch! Fuck off";
        exit(0);
    }
    vector<double> loss_l1(y_true.size());
    double sum=0;
    transform(y_true.begin(), y_true.end(), y_pred.begin(), loss_l1.begin(), [](double a, double b) {return abs(a-b);});
    return accumulate(loss_l1.begin(),loss_l1.end(),0)/(y_true.size());
}
double L2(vector<double> y_true,vector<double> y_pred){ 
    /*
        args: y_true, y_pred
              y_true : true value of the target variable
              y_pred : predicted value of the target variable
        returns: L2 loss
    */
    if(y_true.size()!=y_pred.size()){
        cout<<"You're a Dumb bitch! Fuck off";
        exit(0);
    }
    vector<double> loss_l1(y_true.size());
    double sum=0;
    transform(y_true.begin(), y_true.end(), y_pred.begin(), loss_l1.begin(), [](double a, double b) {return (a-b)*(a-b);});
    return accumulate(loss_l1.begin(),loss_l1.end(),0)/(y_true.size());
}
vector<double> weights_init(vector<vector<double>> X){
     vector<double> w(X.size(), 0);
     return w;
}
vector<double> weights_update(){
    return;
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    vector<double> y_true = {5,2,4,6,8};
    vector<double> y_pred = {6,7,9,5};
    cout<<L1(y_true,y_pred);
    return 0;
}
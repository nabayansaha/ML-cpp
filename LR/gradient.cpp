#include<iostream>
#include<algorithm>
#include<vector>
#include<bits/stdc++.h>
#include <functional>
#include "../include/Loss.h"
using namespace std;

vector<double> weights_init(vector<vector<double>> X){
     vector<double> w(X.size(), 0);
     return w;
}
// vector<double> weights_update(){
//     return;
// }
signed main(){
    ios_base :: sync_with_stdio(0);
    Loss l;
    cin.tie(0);cout.tie(0);
    vector<double> y_true = {5,2,4,6,8};
    vector<double> y_pred = {6,7,9,5,-1.529};
    cout<<"L1:"<<l.L1(y_true,y_pred)<<"\n";
    cout<<"L2:"<<l.L2(y_true,y_pred)<<"\n";
    return 0;
}
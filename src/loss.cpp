#include "loss.h"
#include<iostream>
#include<algorithm>
#include<vector>
#include<bits/stdc++.h>
#include <functional>
using namespace std;
// Loss::Loss(double y_true,double y_pred){
//     this->y_true = y_true;
//     this->y_pred = y_pred;
// }
double Loss :: L1(vector<double> y_true,vector<double> y_pred){
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
    double sum=0;
    for(int i=0;i<y_true.size();i++){sum+=abs(y_true[i]-y_pred[i]);}
    return (double)sum/(double)y_true.size();
}
double Loss :: L2(vector<double> y_true,vector<double> y_pred){ 
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
    for(int i=0;i<y_true.size();i++){sum+=(y_true[i]-y_pred[i])*(y_true[i]-y_pred[i]);}
    return (double)sum/(double)y_true.size();
}
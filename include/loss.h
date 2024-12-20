#pragma once
#include<iostream>
#include<algorithm>
#include<vector>
#include<bits/stdc++.h>
#include <functional>
using namespace std;
class Loss{
    private: 
        double y_true,y_pred;
    public:
        // Loss(double y_true,double y_pred);
        double L1(vector<double> y_true,vector<double> y_pred);
        double L2(vector<double> y_true,vector<double> y_pred);
};
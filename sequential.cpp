#include<string>
#include<iostream>

std::string tail(std::string input){
    return input.substr(1, input.size() - 1);
}

int lev(std::string a, std::string b){
    if(a.size() == 0)
        return b.size();
    else if(b.size() == 0)
        return a.size();
    else if(a[0] == b[0]){
        return lev(tail(a), tail(b));
    }
    else{
        return 1 + std::min(std::min(lev(tail(a), b), lev(a, tail(b))), lev(tail(a), tail(b)));
    }
    return 0;
}
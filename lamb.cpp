#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> a = {3, 5, 8, 1, 10};
    sort(a.begin(),a.end(),[](int a,int b){return a<b;});
    auto mylambda = [&](int result){
       for(int i=0;i<a.size();i++){
            a[i] +=result;
       }
    };

    //mylambda(3);
   for(auto x : a){
        cout << x << " ";
    }
}

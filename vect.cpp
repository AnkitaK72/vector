#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v){
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<< " ";
    }
    cout<<endl;
} 

int main(){
    vector<int>vect;
    int element;
    for(int i=0;i<4;i++)
    {
        cout << "enter an element";
        cin >> element;
        vect.push_back(element);
    }
    display(vect);
    return 0;
}
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(string a, string b){
    if(a.length() == b.length())
        return a < b;
    return a.length() < b.length();
}

int main(){
    int number;
    cin >> number;
    vector<string> v;
    for(int i = 0; i < number ;i++){
        string temp;
        cin >> temp;
        if(find(v.begin(), v.end(), temp) == v.end())
            v.push_back(temp);
    }
    sort(v.begin(),v.end(), compare);

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << '\n';
    }

}
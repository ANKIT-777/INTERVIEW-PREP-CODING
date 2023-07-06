#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr;
    for(int i = 0; i < 10; i++){
    int num;
    cin >> num;
    arr.push_back(num);
}

    vector<int> pair; 
    unordered_map<int,int> map;
    int tar = 4;

    for(int i : arr){
        int x = 0;
        map[i] = x;
        x++;
    }
    
    for(int i = 0; i < arr.size(); i++){
        int ser = 0;
        if(arr[i] > tar){
            ser = -(arr[i] - tar);
            if(map.find(ser) != map.end()){
                pair.push_back(arr[i]);
                pair.push_back(-(arr[i]-tar));
            }

            if (arr[i] < tar){
            ser = (tar - arr[i]);
            if(map.find(ser) != map.end()){
                pair.push_back(arr[i]);
                pair.push_back((tar - arr[i]));
            }
            
        }
    }

}

for(int i : pair){
    cout<<i<<" ";
}

return 0;
}


#include <bits/stdc++.h>
using namespace std;
int Selection_Sort(vector<int>&v){
    int steps=0;
    for(int i=0;i<v.size()-1;i++){
        for(int j=i+1;j<v.size();j++){
            if(v[j]<v[i]){
                steps++;
                int temp=v[i];
                v[i]=v[j];
                v[j]=temp;
            }
        }
    }
    return steps;
}
int main()
{
    int size;
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < size; i++)
        cin>>arr[i];
    cout<<"Steps taken by the algorithm is: "<<Selection_Sort(arr)<<endl;
    cout<<"Sorted Array: ";
    for (auto x : arr)
        cout << x << " ";
    cout << endl;
    return 0;
}
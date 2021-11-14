
#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

void inorder(int a[] , vector<int> &ino , int n , int index){
    if(index>=n)return;
    inorder(a,ino,n,2*index+1);
    ino.push_back(a[index]);
    inorder(a,ino,n,2*index+2);
}
int minswaps(vector<int> &v){
    std::vector<pair<int,int> > t(v.size());
    int ans = 0;
    for(int i = 0; i < v.size(); i++)
        t[i].first = v[i], t[i].second = i;
     
    sort(t.begin(), t.end());
    for(int i = 0; i < t.size(); i++)
    {
        // second element is equal to i
        if(i == t[i].second)
            continue;
        else
        {
            // swaping of elements
            swap(t[i].first, t[t[i].second].first);
            swap(t[i].second, t[t[i].second].second);
        }
         
        // Second is not equal to i
        if(i != t[i].second)
            --i;
        ans++;
    }
    return ans;
}
int main()
{
    int n;
    cout<<" Enter the size of the binary tree : ";
    cin>>n;
    cout<<endl;
    int tree[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the "<<i+1<<" element of the array : ";
        cin>>tree[i];
    }
    cout<<endl;
    vector<int> ino;
    inorder(tree,ino,n,0);
    int ans = minswaps(ino);
    cout<<"Minimum number of swaps required = "<<ans<<endl;

    return 0;
}
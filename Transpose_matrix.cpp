 #include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>vec(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>vec[i][j];
        }
    }
    vector<vector<int>>ans(m,vector<int>(n));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ans[j][i]=vec[i][j];
        }
    }

    cout<<"Transpose : "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}

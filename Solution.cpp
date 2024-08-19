string isSubset(int a1[], int a2[], int n, int m) {
    unordered_map<int,int>m1;
    unordered_map<int,int>m2;
    string ans="Yes";
    
    for(int i=0;i<n;i++){
        m1[a1[i]]++;
    }
    
    for(int j=0;j<m;j++){
        m2[a2[j]]++;
    }
    
    pair<int,int>p;
    
    
    for(const auto &p: m2){
        if(m1.find(p.first)==m1.end()){
            ans="No";
            break;
        }
        else{
            auto it = m1.find(p.first);
            pair<int,int>p2=*it;
            
            if(p.second > p2.second){
                ans="No";
                break;
            }
        }
    }
    
    return ans;
}

class MyHashMap {
public:
    vector<pair<int,int>> mp;
    MyHashMap() {

    }
    
    void put(int key, int value) {
        int n=mp.size();
        bool flag=false;
        for(int i=0;i<n;i++){
            if(mp[i].first==key){
                mp[i].second=value;
                flag=true;
            }
        }
        if(!flag) mp.push_back({key,value});
    }
    
    int get(int key) {
        int n=mp.size();
        for(int i=0;i<n;i++){
            if(mp[i].first==key) return mp[i].second;
        }
        return -1;
    }
    
    void remove(int key) {
        int n=mp.size();
        for(int i=0;i<n;i++){
            if(mp[i].first==key){
                mp.erase(mp.begin()+i);
            }
        }        
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
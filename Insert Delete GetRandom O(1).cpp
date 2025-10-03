class RandomizedSet {
public:
    unordered_map<int,int> m;
    int val1=0;
    vector<int> arr;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(m.find(val)!=m.end()) return false;
        else
        {
            arr.push_back(val);
            m[val]=arr.size()-1;
            return true;
        }
    }
    
    bool remove(int val) {
        auto it = m.find(val);
        if (it == m.end()) return false;

        int idx  = it->second;   
        int last = arr.back();   

        arr[idx] = last;        
        m[last]  = idx;         

        arr.pop_back();          
        m.erase(it);             
        return true;
    }
    
    int getRandom() {
        int r = (rand() % (arr.size())) ;
        return arr[r];
    }
};

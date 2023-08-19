//	https://leetcode.com/problems/insert-delete-getrandom-o1/

class RandomizedSet {
public:
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(m.find(val)!=m.end())return false;
        vec.emplace_back(val);
        m[val]=vec.size()-1;
        return true;
    }
    
    bool remove(int val) {
        if(m.find(val)==m.end())return false;
        int l=vec.back();
        m[l]=m[val];
        vec[m[val]]=l;
        vec.pop_back();
        m.erase(val);
        return true;
    }
    
    int getRandom() {
        return vec[rand()%vec.size()];
    }
private:
    vector<int> vec;
    unordered_map<int,int> m;
};


/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
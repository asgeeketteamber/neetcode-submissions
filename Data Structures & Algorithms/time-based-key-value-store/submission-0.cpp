class TimeMap {
public:
unordered_map<string,vector<pair<int,string>>> store;
    TimeMap() {}
    
    void set(string key, string value, int timestamp) {

        store[key].push_back({timestamp,value});
    }
    
    string get(string key, int timestamp) {
        if(store.find(key)==store.end()) return "";

        auto& entries=store[key]; //auto → let the compiler figure out the type automatically instead of you writing it out.
                                  // Here store[key] has type vector<pair<int, string>>, so auto deduces to that.

        int left=0;
        int right=entries.size()-1;
        string result="";

        while(left<=right)
        {
            int mid= left+(right-left)/2;
            if(entries[mid].first<=timestamp)
            {
                result=entries[mid].second;
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        return result;


        
    }
};

class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n=position.size();
        stack <double> fleet;


        vector<pair<int,int>> cars(n);
        for(int i=0;i<n;i++)
        {
            cars[i]={position[i],speed[i]};
        }
        sort(cars.begin(),cars.end(),greater<pair<int,int>>());

        for(int i=0;i<n;i++)
        {
            double time= (double)(target-cars[i].first)/cars[i].second;
        
        if(fleet.empty()||time>fleet.top())
        {
            fleet.push(time);
        }
        }
       return fleet.size();
        

    

        
    }
};

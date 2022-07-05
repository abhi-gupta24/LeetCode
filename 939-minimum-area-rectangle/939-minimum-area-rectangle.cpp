class Solution {
public:
    int minAreaRect(vector<vector<int>>& points) {
        
        set<int> allp;
        for(int i=0;i<points.size();i++){            
            allp.insert(40001*points[i][0] + points[i][1]);    // Set of all points using custom hash
        }
        int min_area = INT_MAX,loc_area;
        for(int i=0;i<points.size();i++){
            for(int j=i+1;j<points.size();j++){
                if(points[i][0] != points[j][0] && points[i][1] != points[j][1]){
                    int x1 = points[i][0],
                        x2 = points[j][0],
                        y1 = points[i][1],
                        y2 = points[j][1];                    
                    if(allp.find(x2*40001+y1)!=allp.end() && allp.find(x1*40001+y2)!=allp.end()){ // Checking if such a point exists
                        loc_area = abs(x1-x2) * abs(y1-y2);
                        min_area = min(min_area,loc_area);
                    }
                }
            }
        }
        return min_area==INT_MAX?0:min_area;
        
    }
};
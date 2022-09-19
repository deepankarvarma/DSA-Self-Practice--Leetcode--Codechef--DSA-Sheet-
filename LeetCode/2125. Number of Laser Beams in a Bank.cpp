class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int res = 0, prev = 0, devices = 0;
        for(auto& floor : bank){
            for(auto& cell : floor)
                if(cell == '1')
                    devices++;
            if(devices == 0)
                continue;
            res += devices * prev;
            prev = devices;
            devices = 0;
        }
        return res;
    }
};
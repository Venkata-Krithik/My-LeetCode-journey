//This is using greedy algorithm
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = (int)gas.size();
        long long total = 0;   
        long long my_gas = 0; 
        int my_pos = 0;       
        int curr_pos = 0;      

        while (curr_pos < n) {
            int diff = gas[curr_pos] - cost[curr_pos];
            total  += diff;
            my_gas += diff;

            if (my_gas < 0) {// cannot reach curr_pos+1 from my_pos and any other position in between, so skip positions in between
                my_pos = curr_pos + 1;
                my_gas = 0;
            }
            ++curr_pos;
        }
        return (total >= 0) ? (my_pos % n) : -1;
    }
};

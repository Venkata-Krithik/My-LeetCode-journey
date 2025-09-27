class Solution {
public:
//This was the approach I initially wanted to take instead of the greedy algorithm, but this is exceeding the time limit
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
         int n = (int)gas.size();
        int my_pos = 0;          // initial pointer
        int curr_pos = 0;
        int my_gas = 0;
        int steps = 0;
        while (my_pos < n) {
            my_gas += gas[curr_pos] - cost[curr_pos];

            if (my_gas < 0) {// if the tank is empty increment the initial pointer
                my_pos++;
                curr_pos = my_pos;
                my_gas = 0;
                steps = 0;
            }
            else{
            curr_pos = (curr_pos + 1) % n;
            steps++;
            }
            if (steps == n) {
                return my_pos;   // completed full circle
            }
            if(gas[curr_pos]==0)
            return -1;
        }
        return -1;
    }
};

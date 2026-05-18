// Merge Overlapping Sub-intervals

// Problem Statement: Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals and return an array of the non-overlapping intervals that cover all the intervals in the input.

// Examples
// Input : intervals=[[1,3],[2,6],[8,10],[15,18]]
// Output : [[1,6],[8,10],[15,18]]
// Explanation : Since intervals [1,3] and [2,6] are overlapping we can merge them to form [1,6] intervals.

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeIntervals(vector<vector<int>> intervals){
    int n = intervals.size();

    if (n <= 1) {
        return intervals;
    }

    sort(intervals.begin(), intervals.end());

    vector<vector<int>> merged;

    merged.push_back(intervals[0]);

    for (int i = 1; i < n; i++)
    {
        vector<int> current = intervals[i];
        vector<int> &last_merged = merged.back();
        if(current[0] <= last_merged[1]){
            last_merged[1] = max(current[1], last_merged[1]);
        } else {
            merged.push_back(current);
        }
    }
    return merged;
}

int main(){
    vector<vector<int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    vector<vector<int>> result = mergeIntervals(intervals);

    cout << "Merged Intervals: " << endl;
    for (int i = 0; i < result.size(); i++)
    {
        cout << "["<< result[i][0] << "," << result[i][1] << "]";
    }
    
return 0;
}
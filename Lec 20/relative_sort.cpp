class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int n = arr1.size();
        vector<int> freq(1001, 0);
        for(int i = 0; i < n; i++){
            freq[arr1[i]]++;
        }

        vector<int> v(n);
        int m = arr2.size(), x = 0;//x -- index to append in v
        for(int i = 0; i < m; i++){
            int element = arr2[i];
            int frequency = freq[element];
            for(int j = 0; j < frequency; j++){
                v[x++] = element;
            }
            freq[element] = 0;
        }
        
        for(int i = 0; i <= 1000; i++){
            if(freq[i] > 0){//i is a value in arr1[] not in arr2[]
                for(int j = 0; j < freq[i]; j++){
                    v[x++] = i;
                }
            }
        }
        return v;
    }
};
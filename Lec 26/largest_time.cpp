class Solution {
public:
    bool isValidTime(int hr, int min){
        if(hr > 23) return false;
        if(min > 59) return false;
        return true;
    }

    bool greaterTime(int curr_hr, int curr_min, int max_hr, int max_min){
        if(curr_hr > max_hr){
            return true;
        }
        if(curr_hr == max_hr){
            if(curr_min > max_min){
                return true;
            }
        }
        return false;
    }

    string largestTimeFromDigits(vector<int>& arr) {
        int curr_hr, curr_min, max_hr = -1, max_min = -1;
        for(int i = 0; i <= 3; i++){
            for(int j = 0; j <= 3; j++){
                if(i == j){
                    continue;
                }
                for(int k = 0; k <= 3; k++){
                    if(k == i or k == j){
                        continue;
                    }
                    curr_hr = arr[i]*10 + arr[j];
                    curr_min = arr[k]*10 + arr[6-i-j-k];
                    if(isValidTime(curr_hr, curr_min)){
                        if(greaterTime(curr_hr, curr_min, max_hr, max_min)){
                            max_hr = curr_hr;
                            max_min = curr_min;
                        }
                    }
                }
            }
        }
        string s;
        if(max_hr < 0){
            return s;
        }
        s.push_back(max_hr/10 + '0');
        s.push_back(max_hr%10 + '0');
        s.push_back(':');
        s.push_back(max_min/10 + '0');
        s.push_back(max_min%10 + '0');
        return s;
    }
};
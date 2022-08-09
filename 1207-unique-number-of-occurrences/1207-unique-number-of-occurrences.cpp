class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
            vector<int> countArr;
            bool isUnique;
            sort(arr.begin(), arr.end());
            for(int i = 0; i<arr.size(); i++){
            int count = 1;
            for(int j = i+1; j<arr.size(); j++){
                if(arr[i] == arr[j]){
                    count += 1;
                }
            }
            countArr.push_back(count);
            i += count-1;
          }

            sort(countArr.begin(), countArr.end());

            for(int i = 0; i < countArr.size(); i++){
            int count = 1;
            for(int j = i+1; j < countArr.size(); j++){
                if(countArr[i] == countArr[j]){
                    count += 1;
                }
            }
            if(count == 1){
                isUnique = true;
                // return true;
            }
            else{
                isUnique = false;
                // return false;
                break;
                
            }
            i += count-1;
        }
        return isUnique;
    }
};
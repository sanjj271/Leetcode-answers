class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
    int left = 0;
    int right = letters.size()-1;
    while(left<=right){
        int mid = left+ (right-left)/2;
        cout<<letters[mid];
        if(mid!=0 && letters[mid]>target && letters[mid-1]<=target){
            return letters[mid];
        }
        else if(letters[mid]<=target){
            left = mid+1;
        }
        else{
            right = mid-1;
        }
    }
    return letters[0];
        
    }
};
class Solution {
public:
    int minSetSize(vector<int>& arr) {
        priority_queue<pair<int,int>> q;
        sort(arr.begin(), arr.end());
        int cont = 1, size = 0, numbs = 0;
        for(int i = 0; i < arr.size(); i++){
            while(i+1 < arr.size() and arr[i] == arr[i+1]){
                i++;
                cont++;
            }
            q.push({cont, arr[i]});
            cont = 1;
        }
        while(!q.empty()){
            if(size >= arr.size()/2){
                break;
            }else{
                size+=q.top().first;
                q.pop();
                numbs++;
            }
        }
        return numbs;
    }
};
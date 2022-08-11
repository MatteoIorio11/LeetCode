class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        queue<int> q;
        set<int> visited;
        visited.insert(0);
        for(int adj : rooms[0]){
            q.push(adj);
        }
        while(!q.empty()){
            int room = q.front();
            q.pop();
            if(visited.find(room) != visited.end()){
                continue;
            }else{
                visited.insert(room);
                for(int adj : rooms[room]){
                    if(visited.find(adj) != visited.end()){
                        continue;
                    }else{
                        q.push(adj);
                    }
                }
            }
        }
        return visited.size() == rooms.size();
    }
};
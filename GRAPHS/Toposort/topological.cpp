	
class Solution
{
    private:
    void dfs(int node,int vis[], stack<int>&s,vector<int> adj[]){
        vis[node]=1;
       
        for(auto it: adj[node]){
            if(!vis[it]) dfs(it,vis,s,adj);
                
        }
        s.push(node);
    }
	public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    int vis[V]={0};
	     stack<int>s;
	    for(int i=0;i<V;i++){
	        if(!vis[i]){
	            dfs(i,vis,s,adj);
	        }
	    }
	     vector<int>ans;
	     while(!s.empty()){
	         for(int i=0;i<V;i++){
	             ans.push_back(s.top());
	             s.pop();
	         }
	     }
	     return ans;

	}
	    };

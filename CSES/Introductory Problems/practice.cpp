#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define ll long long 

// Fibonacci with top-down DP (memoization)
int fib_memoize_up(int n, vi &memo) {
    if (memo[n] != 0)
        return memo[n];

    if (n == 1 || n == 2)
        return memo[n] = 1;

    memo[n] = fib_memoize_up(n - 1, memo) + fib_memoize_up(n - 2, memo);
    // f(5)
    return memo[n];
}
// bottom up approach 
int fib_bottom_up(int n){
	if(n==1||n==2)
		return 1;
	vi bottom_up(n+1);
	bottom_up[1]=1;
	bottom_up[2]=1;
	for(int i=3;i<=n;i++)
		bottom_up[i]=bottom_up[i-1]+bottom_up[i-2];
	return bottom_up[n];
}

//Bellmanford algorithm.
// used for negative weight.
vector<int> bellmanFord(int V,vector<vector<int>> &edges,int src){
    vector<int> dist(V,1e8);
    dist[src]=0;
    // we are doing this algorithm for V-1 times.
    for(int i=0;i<V;i++){
        for(vector<int> edge: edges){
            // iterating row-wise.
            int u = edge[0];
            int v = edge[1];
            int wt = edge[2];
            if(dist[u]!=1e8 && dist[u]+wt<dist[v]){
                if(i==V-1)
                    return {-1};
               dist[v] = dist[u]+wt;
            }
        }
    }
    return dist;
}
// Edge list representation: {source, destination, weight}
// {1, 3, 2}, 
// {4, 3, -1},
// {2, 4, 1}, 
// {1, 2, 1},
// {0, 1, 5}

// 5.kadane's algorithm.
int maxSubArray(vi &arr){
    int res = arr[0];
    int maxEnding = arr[0];
    for(int i=1;i<arr.size();i++){
        maxEnding=max(arr[i],maxEnding+arr[i]);
        res= max(res,maxEnding);
    }
    return res;
}



// Activity selection problem optimized.

int activitySelection(vi &start,vi &finish){
    vector<vi> arr;
    for(int i=0;i<start.size();i++){
        arr.push_back({start[i],finish[i]});
    }
    // sorting according to the second element..
    sort(arr.begin(),arr.end(),
        [](const vi &a,vi &b){
            return a[1]<b[1];
        }
    );
    int count = 1;
    int j=0;
    for(int i=1;i<arr.size();i++){
        // checking if the last activity is greater.
        if(arr[i][0]>arr[j][1]){
            // arr[i][0] -> first element
            // arr[j][1] -> last activity.. 
            count++;
            j=i;
            //updating the 
        }
    }
    return count;
}

// Job sequencing problem...

vi jobSequencing(vi &deadline, vi &profit){
    int n = deadline.size();
    // {jobs, profit};
    vector<int> ans ={0,0};
    vector<pair<int,int>> jobs;
    for(int i=0;i<n;i++)
        jobs.push_back({deadline[i],profit[i]});
    
    sort(jobs.begin(),jobs.end());
    // sorting the vector.
    
    priority_queue<int,vi,greater<int>> pq;
    for(const auto &job:jobs){
        if(job.first>pq.size())
            pq.push(job.second);
        else if(!pq.empty() && pq.top()<job.second){
            //taking the maximum.
            pq.pop();
            pq.push(job.second);
        }
    }
    while(!pq.empty()){
        // opening the queue and adding...
        ans[1]+=pq.top();
        pq.pop();
        ans[0]++;
    }
    return ans;
}

// sliding windows..
int maxSum(vi &arr, int k){
    int n = arr.size();
    if(n<=k){
        cout<<"Invalid";
        return -1;
    }
    int max_sum = 0;
    for(int i=0;i<k;i++){
        max_sum+=arr[i];
    }
    int window_sum = max_sum;
    for(int i=k;i<n;i++){
        window_sum+=arr[i]-arr[i-k];
        max_sum = max(max_sum,window_sum);
    }
    return max_sum;
}

int main() {
	// 1.
    // int n = 8;
    // vi memo(n + 1, 0);  
    // cout << fib_bottom_up(n, memo) << endl; 

    // 2.
    // cout<<fib_bottom_up(6);

    //3.multistage graph....

    // int stages =4,min;
    // int n=8;
    // int cost[9],d[9],path[9];
    // int c[9][9]={{0,0,0,0,0,0,0,0,0},
    //              {0,0,2,1,3,0,0,0,0},
    //              {0,0,0,0,0,2,3,0,0},
    //              {0,0,0,0,0,6,7,0,0},
    //              {0,0,0,0,0,0,8,9,0},
    //              {0,0,0,0,0,0,0,0,6},
    //              {0,0,0,0,0,0,0,0,4},
    //              {0,0,0,0,0,0,0,0,5},
    //              {0,0,0,0,0,0,0,0,0}
    //             };
    // cost[n]=0;//starting from (8)
    // for(int i=n-1;i>=1;i--){
    //     min=INT_MAX;
    //     for(int k=i+1;k<=n;k++){
    //         if(c[i][k]!=0&&c[i][k]+cost[k]<min){
    //             min=c[i][k]+cost[k];
    //             d[i]=k;
    //         }
    //     }
    //     cost[i]=min;
    // }
    // // path finding..
    // path[1]=1;path[stages]=n;
    // for(int i=2;i<stages;i++)
    //     path[i]=d[path[i-1]];
    // for(int i=1;i<=stages;i++)
    //     cout<<path[i]<<" ";


    // 4.BELLMAN FORD ALGO.
    // int V=5;
    // vector<vector<int>> edges={
    //     {1,3,2},
    //     {4,3,-1},
    //     {2,4,1},
    //     {1, 2, 1},
    //     {0, 1, 5} 
    // };
    // int src=0;
    // vector<int> ans = bellmanFord(V,edges,src);
    // for(int dist:ans)
    //     cout<<dist<<" ";

    //5.kadane's algorithm..
    // vi arr ={2,3,-8,7,-1,2,3};
    // cout<<maxSubArray(arr);


    //6. activity selection problem...
    // vi start ={1,3,0,5,8,5};
    // vi finish = {2,4,6,7,9,9};
    // cout<<activitySelection(start,finish);

    //7. job selection problem..
    // vi deadline = {2,1,2,1,1};
    // vi profit = {100, 19, 27,25,15};
    // vi ans = jobSequencing(deadline,profit);
    // cout<<ans[0]<<" "<<ans[1];

    // 8.sliding windows

    vi arr = {1,4,2,10,2,3,1,0,20};
    int k = 4;
    cout<<maxSum(arr,k);

    return 0;
}

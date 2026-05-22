#include <stdio.h>
#include <limits.h>
#include <string.h>

#define MAXN 2005
#define INF LLONG_MAX

typedef long long ll;

typedef struct {
    ll cost;
    ll beauty;
} State;

State dp[MAXN][MAXN][2];
int n, m;
ll cost[MAXN], beauty[MAXN];
void update(State *current, State candidate)
 {
    if (candidate.cost == INF) return;
    
    if (candidate.cost < current->cost) 
    {
        *current = candidate;
    } else if (candidate.cost == current->cost)
     {
        if (candidate.beauty > current->beauty) 
        {
            current->beauty = candidate.beauty;
        }
    }
}

int main() 
{
    scanf("%d %d", &n, &m);
    
    for (int i = 1; i <= n; i++) 
    {
        scanf("%lld", &cost[i]);
    }
    
    for (int i = 1; i <= n; i++)
     {
        scanf("%lld", &beauty[i]);
    }
    
    
    for (int i = 0; i <= n; i++)
     {
        for (int j = 0; j <= m; j++) 
        {
            dp[i][j][0].cost = INF;
            dp[i][j][0].beauty = 0;
            dp[i][j][1].cost = INF;
            dp[i][j][1].beauty = 0;
        }
    }
    
    dp[0][0][0].cost = 0;
    dp[0][0][0].beauty = 0;
    
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j <= m; j++) 
        {
            for (int k = 0; k <= 1; k++) 
            {
                if (dp[i][j][k].cost == INF) continue;
                
                State current = dp[i][j][k];
                
                if (j < m)
                 {
                    State next_color = current;
                    next_color.cost += cost[i+1];
                    next_color.beauty += beauty[i+1];
                    update(&dp[i+1][j+1][0], next_color);
                }
                
                
                if (k == 0 || j == m) 
                {
                    State next_skip = current;
                    update(&dp[i+1][j][1], next_skip);
                }
            }
        }
    }
    
    ll min_cost = INF;
    ll max_beauty = 0;
    
    for (int k = 0; k <= 1; k++)
     {
        if (dp[n][m][k].cost < min_cost) 
        {
            min_cost = dp[n][m][k].cost;
            max_beauty = dp[n][m][k].beauty;
        } else if (dp[n][m][k].cost == min_cost)
         {
            if (dp[n][m][k].beauty > max_beauty)
             {
                max_beauty = dp[n][m][k].beauty;
            }
        }
    }
    
    printf("%lld %lld\n", min_cost, max_beauty);
    
    return 0;
}
#include <bits/stdc++.h>


#define loop(i,s,e) for(int i = s;i<=e;i++) //including end point

#define pb(a) push_back(a)

#define sqr(x) ((x)*(x))

#define CIN ios_base::sync_with_stdio(0); cin.tie(0);

#define ll long long

#define ull unsigned long long

#define SZ(a) int(a.size())

#define read() freopen("input.txt", "r", stdin)

#define write() freopen("output.txt", "w", stdout)


#define ms(a,b) memset(a, b, sizeof(a))

#define all(v) v.begin(), v.end()

#define PI acos(-1.0)

#define pf printf

#define sfi(a) scanf("%d",&a);

#define sfii(a,b) scanf("%d %d",&a,&b);

#define sfl(a) scanf("%lld",&a);

#define sfll(a,b) scanf("%lld %lld",&a,&b);

#define sful(a) scanf("%llu",&a);

#define sfulul(a,b) scanf("%llu %llu",&a,&b);

#define sful2(a,b) scanf("%llu %llu",&a,&b); // A little different

#define sfc(a) scanf("%c",&a);

#define sfs(a) scanf("%s",a);

#define getl(s) getline(cin,s);

#define mp make_pair

#define paii pair<int, int>

#define padd pair<dd, dd>

#define pall pair<ll, ll>

#define vi vector<int>

#define vll vector<ll>

#define mii map<int,int>

#define mlli map<ll,int>

#define mib map<int,bool>

#define fs first

#define sc second

#define CASE(t) printf("Case %d:\n",++t) // t initialized 0

#define cCASE(t) cout<<"Case "<<++t<<": ";

#define D(v,status) cout<<status<<" "<<v<<endl;

#define INF 1000000000   //10e9

#define EPS 1e-9

#define flc fflush(stdout); //For interactive programs , flush while using pf (that's why __c )

#define CONTEST 1
using namespace std;


//Bit Manipulation
bool Check_ON(int mask,int pos) //Check if pos th bit (from right) of mask is ON
{
    if( (mask & (1<<pos) ) == 0  )return false;
    return true;
}
int SET(int mask,int pos) //Save the returned mask into some var //Turn on pos th bit in mask
{
    return (mask | (1<<pos));
}
int RESET(int mask,int pos)  //Save the returned mask into some var //Turn off pos th bit in mask
{
    return (mask & ~(1<<pos));
}
int FLIP(int mask,int pos) //Save the returned mask into some var //Toggle/Flip pos th bit in mask
{
    return (mask ^ (1<<pos));
}
int LSB(int mask) // The actual LSB mask
{
    return (mask & (-mask));
}
int LSB_pos(int mask) // 0 based position
{
    int mask_2 = (mask & (-mask));
    for(int pos = 0; pos<=15; pos++)
    {
        if(Check_ON(mask_2,pos))
            return pos;
    }
    return -1;//
}
int ON_Bits(int mask)
{
    return __builtin_popcount(mask);
}
inline int clz(int N)   // O(1) way to calculate log2(X) (int s only)
{
    return N ? 32 - __builtin_clz(N) : -INF;
}
vector< pair<int,int> >adj[100003];
int dis[100003];
int nods[13];
int mat_dis[13][13];
int n,m;
void dijkstra(int s)
{
    priority_queue< pair<int,int> >Q;

    for(int i=0; i<=n; i++)
    {
        dis[i] = INF;
    }

    Q.push(mp(s,0));
    dis[s] = 0;

    while(!Q.empty())
    {
        pair<int,int>cn = Q.top();
        int u = cn.fs;
        Q.pop();

        for(int i=0; i<adj[u].size(); i++)
        {
            pair<int,int>vn = adj[u][i];
            int v = vn.fs;
            int cost = vn.sc;
            if(dis[u]+cost<dis[v])
            {
                dis[v] = dis[u] + cost;
                Q.push(mp(v,dis[v]));
            }

        }

    }
}
int s;
int dp[13][1050];
int rec(int i,int mask)
{
    if(i==0 && mask==((1<<(s+1))-1))
    {
        return 0;
    }
    else if(mask==((1<<(s+1))-1))
    {
        return INF;
    }

    if(dp[i][mask]!=-1)
        return dp[i][mask];

    int p = INF;
    for(int k=0; k<=s; k++)
    {
        if(!Check_ON(mask,k))
        {
            int mask2 = SET(mask,k);
            p = min(p, mat_dis[i][k] + rec(k,mask2));
        }
    }

    return dp[i][mask] = p;

}
int main()
{

    int tc;
    sfi(tc);

    while(tc--)
    {


        sfii(n,m);

        for(int i=1; i<=m; i++)
        {
            int u,v,w;
            sfii(u,v);
            sfi(w);
            adj[u].pb(mp(v,w));
            adj[v].pb(mp(u,w));
        }


        sfi(s);
        for(int i=1; i<=s; i++)
        {
            sfi(nods[i]);
        }

        for(int source = 0; source<=s; source++)
        {
            dijkstra(nods[source]);
            for(int ond=0; ond<=s; ond++)
            {
                mat_dis[source][ond] = dis[nods[ond]];
            }
        }

        ms(dp,-1);

        int ans = rec(0,0);

        pf("%d\n",ans);

        for(int i=0; i<=n; i++)
        {
            adj[i].clear();
        }




    }

    return 0;
}

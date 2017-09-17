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
     
    #define CASE(t) printf("Case %d: ",++t) // t initialized 0
     
    #define cCASE(t) cout<<"Case "<<++t<<": ";
     
    #define D(v,status) cout<<status<<" "<<v<<endl;
     
    #define INF 100000000   //10e9
     
    #define EPS 1e-9
     
    #define flc fflush(stdout); //For interactive programs , flush while using pf (that's why __c )
     
    #define CONTEST 1
    using namespace std;
    int bookshelf[105];
    int dp[105][105][105];
    int n;
    int rec(int i, int lf, int rg)
    {
        if(i==n+1)
            return 0;
     
        if(dp[i][lf][rg]!=-1)
            return dp[i][lf][rg];
     
        int sol1 = rec(i+1,lf,rg);
        int sol2 = 0,sol3 = 0;
        if(bookshelf[i]>=bookshelf[lf]
           && bookshelf[i]<=bookshelf[rg])
        {
            sol2 = rec(i+1,i,rg)+1;
            sol3 = rec(i+1,lf,i)+1;
     
        }
     
        return dp[i][lf][rg] = max(max(sol1,sol2),sol3);
     
    }
    int main()
    {
        int tc,cas = 0;
        sfi(tc);
     
        while(tc--)
        {
     
            sfi(n);
            bookshelf[0] = 0;
     
            for(int i=1;i<=n;i++)
            {
                sfi(bookshelf[i]);
            }
     
            bookshelf[n+1] = INF;
     
            ms(dp,-1);
            int ans = rec(1,0,n+1);
     
            CASE(cas);
     
            pf("%d\n",ans);
     
     
     
     
        }
     
     
     
        return 0;
    }
     

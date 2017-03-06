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

#define INF 1000000000   //10e9

#define EPS 1e-9

#define flc fflush(stdout); //For interactive programs , flush while using pf (that's why __c )

#define CONTEST 1

using namespace std;
ll bigmod(ll bs,ll pw,ll mod)
{
    if(pw==0)
        return (1%mod);

    ll p1 = bigmod(bs,pw/2,mod)%mod;
    ll p2 = (p1*p1)%mod;

    if(pw%2)
    {
        p2 = (p2*(bs%mod))%mod;
    }

    return p2;



}
int main()
{

    int tc,cas=0;
    sfi(tc);
    while(tc--)
    {
        //Each var will appear same
        //number of times
        //Total complexity = k*n^k
        //n variables appear k*n^k times
        //1 variable appear k*n^(k-1) times
        //so, solution is total sum*k*n^(k-1)
        ll n,k,modd;
        sfll(n,k);
        sfl(modd);
        ll sum =0;
        for(ll i=1;i<=n;i++)
        {
            ll tmp;
            sfl(tmp);
            sum = (sum%modd + tmp%modd)%modd;
        }

        ll complxpart = bigmod(n,k-1,modd);

        ll ans = (sum%modd)*(complxpart%modd);
        ans%=modd;
        ans = (k%modd)*(ans%modd);
        ans%=modd;
        CASE(cas);
        pf("%lld\n",ans);

    }



    return 0;
}

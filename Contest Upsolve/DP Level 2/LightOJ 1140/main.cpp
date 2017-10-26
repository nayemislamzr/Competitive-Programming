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
int lim[15];
ll dp[20][12][22][3][3];
ll rec(int i,int d,int cntz,bool lead_z,bool overf)
{
    if(i==13)
        return cntz;

    if(dp[i][d][cntz][lead_z][overf]!=-1)
        return dp[i][d][cntz][lead_z][overf];

    ll ans = 0;

    // placing 0

    if(lead_z)
    {
        if(lim[i]>0)
        {
            ans += rec(i+1,0,cntz,1,0);
        }
        else
        {
            ans += rec(i+1,0,cntz,1,overf);
        }
    }
    else
    {
        if(lim[i]>0)
        {
            ans += rec(i+1,0,cntz+1,0,0);
        }
        else
        {
            ans += rec(i+1,0,cntz+1,0,overf);
        }

    }

    // placing other digits

    for(int dig=1; dig<=9; dig++)
    {
        //already placing non zero digits
        //so leading_z will be 0 for
        //next states

        if(overf)
        {

            if(dig<lim[i])
            {
                ans+=rec(i+1,dig,cntz,0,0);
            }
            else if(dig==lim[i])
            {
                ans+=rec(i+1,dig,cntz,0,overf);
            }
        }
        else
        {
            ans += rec(i+1,dig,cntz,0,0);
        }


    }

    return dp[i][d][cntz][lead_z][overf] = ans;

}
ll calc(ll a)
{
    if(a==-1)
    {
        return a;
    }
    ms(lim,0);
    int idx = 12;
    while(a>0)
    {
        lim[idx] = a%10;
        a/=10;
        idx--;
    }

    ms(dp,-1);

    ll ret = rec(1,0,0,1,1);
    return ret;

}

int main()
{
    int tc,cas=0;
    sfi(tc);
    while(tc--)
    {
        ll a,b;
        sfll(a,b);

        ll ans = calc(b) - calc(a-1);

        CASE(cas);
        pf("%lld\n",ans);



    }

    return 0;
}

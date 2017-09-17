## Solution Ideas

Solve count :- 151

Part 1 : Ad Hoc

Level 0 - < 1 :

Prerequisite : Nothing

Warmup Problems
1)1000
2)1001
3)1053

--------------------------------------------------------------------------------------------------------------------------------------------------

Easy Implementation : 

4)1069(Simulate the event)
5)1022(Easy Geometry)
6)1387(Easy Simulation)
7)1227(Simulate)
8)1249 (Sort the volume and compare vol[1] and vol[n])
9)1225 (Just check)
10)1133 (Simulate , Don't mix up int and longs)
11)1015 (Sum up , not negative ones)
12)1261 (Just Check for each people if any of their wishes is satisfied , if any of them is not satisfied ans is no)
13)1008 (See that alternating squared pattern ? , watch for overflow) Level 0.3

--------------------------------------------------------------------------------------------------------------------------------------------------
               
Prerequisite : Basic math knowledge , Implementation


14)1109 (Find the divisors of each and sort according to the statement)
15)1202 (black bishop can't go to white bishop's position , diagonal check)

16)1116 (You need to come up with a faster solution , keep divding by 2 to see if another
odd divisor exists or not , handle some extra cases ) Level 0.4

17)1045 (N!=1*2*3*4*..N   log(A*B) = log(A)+log(B)  , digits of a number X = log(X)) Level 0.5
18)1294 (Coming up with actual O(1) closed formula by theoretical approach may take some time , See if you 
can observe any pattern in input / output) Level 0.4
19)1214 (Hint : 12345%M = ((1234%M*10%M)%M + 5%M)%M , modular arithmetic trick) Level 0.6
Prerequisite : Eucleadian Geometry , Handling Floating point number (Precision) 
20)1305 (Easy geometry)
21)1022 (||)
22)1107 (Just check)
23)1072 (Find the formula) Level 0.3
24)1433
25)1216 (Integration -> Volume using method of revolution V = INTEGRATE(A.dx) where , A = f(x) , the cross sectional area) Level 0.5
26)1331 (Use cosine formula , heron's formula , area of segment = area of sector - area of traingle in the circle) Level 0.5

--------------------------------------------------------------------------------------------------------------------------------------------------

Prerequisite : Handling String , decimal binary conversion 
27)1354(string + binary to decimal)
28)1182(convert to binary and check)
29)1338(first remove all spaces , make all letters lowercase then check if str1 is a substring of str2
or str2 is a substring of str1,you can sort strings too for easy comparing)



Extra tricks :
30)1006 (Memoization , Read some basic text on dynamic programming) Level 0.7
31)1010 (Pattern , what happens when m odd,even , n odd,even) Level 0.6


Level 1.0 :


32)1113 (STL)  (Just simulate , use stack or vector) Level 1.0
33)1136 (Hint : First see, if you can find a formula for How many numbers are in the sequence upto
nth number which are divisible by 3. Lets say its F(n). Then ans is F(B) - F(A-1)
1+2+3+4+..n = n(n+1)/2
A number is divisible by 3 if its sum of digits is divisible by 3.
How many multiples of 3 are there upto N ?
floor(N/3)
Or , Write down the numbers for some small A and see if you can find a pattern ....
) Level 1.0
34)1189 (factorial (20) > 10^18 , so all we need to worry about -> fact(0) to fact(19) , So, How many 
subset sum there can be with these 20 factorials , 2^20 which is not so big , so generate those numbers
save them and for each query see if it exists in the list or not , Dont use map (Will get MLE), Can't use unorderdered_map (LightOJ doesn't support C++ 11) , Do Binary search ) Level 1.7 
35)1189 (Another greedy solution : Property : F(x1) + F(x2) + F(x3) + ..... = N , xi can be used only
once and F is a increasing function so , if xi<xj F(xi)<F(xj) , Take the biggest possible xi for which
F(xi)<=N , N-= F(xi) , And go on , finally if N == 0 ans exists else if N<0 ans doesn't exist , Try to prove it, why this works?) Level 1.5

36)1211 (Can you find the intersection of linear segment 1D ? For example : What is the intersection of
[1,6] , [2,9] = [2,6]  , Can you find the intersected area of two rectangles (parallel to axes) ? If yes , Then extend this to 3D . Take two cubes and find their intersection cube , then find the intersection
of this intersection cube with the later cube in the list and so on . If in the process you find two
cubes dont intersect then ans = 0 else the ans = volume of the final intersection cube
Hint :
We have two cube c1,c2
leftx1,leftx2 =  = (c1.x1,c2.x1)
rightx1 , rightx2 = (c1.x2,c2.x2) //x1<x2 left<right
rightMostLeftX = max(leftx1,leftx2)
leftMostRightX = min(rightx1,rightx2)

if(rightMostLeftX < leftMostRightX ) / /  rightMostLeftX is to the left of leftMostRightX
intersection in the X exists
else
intersection in the X doesn't exist


Same way , for Y and Z

Don't make any typing mistake while copying symmetric code portions to reuse!
) Level : 1.8

37)1212 (Just simulate , Use STL deque for short code)
 Level : 0.5

38)1241 (Easy Solution , but be careful about first length , What if initially , nose length is greater than 2 , greater than 5 ?)
 Level 0.4

39)1414 (Lots of tricky cases , Find the number of leap years in between tow years by 
multiples of 4 in the range - multiples of 100 in the range + multiples of 400 in the range
Because , the years which are multiples of 400 and 4 (but not 100) are leap year.
Number of multples of X in a range,
end/X - (start-1)/4
Handle the start year and end year separately .
What if start date and end date is same and leap year (not leap year) ?
See the forum for more tricky cases
) Level 1.7

40)1042 (Invariance : Number of 1s same , Add a 0 in the front , call next_permutation and add binary weight -> ans (O(logN))  Usage : Generate All list of k items from N items (Generate all numbers with 
k 1s))
Another solution (From -Secta-) : (The idea is to store the reversed N's binary representation in a string S(1-based). After reversing it we'll add a '0' to the end of S. That won't change anything. Now, find the leftmost position i for which S[i]=1 and S[i+1]=0. Swap them and then sort S[1],S[2],...,S[i] in DECREASING order. Reverse the string S and now you have the binary representation of the answer.)

41)1311 (Actually,it's a very easy problem , it just requires some basic physics / kinetics equation ->
v = u + at , s = ut + 1/2(at^2) , s = vt ,but you need to understand problem statement carefully , The
two trains may stop at two different times . Train 1 keeps moving , t1 = a1/v1 , t2 = a2/v2 . From, this find the distance covered by train1 and train 2 . d = s1 + s2 . Now , for the bird part , look , the bird is moving continuosuly with speed v3 until the distance of the two trains is 0. Can you find when the trains dis will be 0 ? It is max(t1,t2) . So, bird will cover distance max(t1,t2)*v3) Level 1.3

--------------------------------------------------------------------------------------------------------------------------------------------------


Part 2A : Graph Theory

Level 1.5+

Pre-requisite : bfs , dfs , flood fill , direction array

Some BFS/DFS idea :
Using BFS you can easily find the shortest path to reach from one state to another . Using DFS , you can't do this as when DFS finds a possible solution (reaches the destination) it marks all those cells visited including the destination , so Once you get to the destination (Find one possible path to reach destination) You will never reach there .
DFS is useful when you need to know how many a certain color / object / character is there in a sub-graph .

Common mistakes :

1)BFS RTE (check if you forgot to check the bounds , for example in a grid your currect position becomes -1,0 which will access negative array index , so add a function isoutside() to block it)
2)BFS MLE (You probably forgot to pop Queue / mark the visited ones both in Q.front() ... here and inside the dir array loop )
3)BFS always returing garbaze / not going to any state except the first one (You probably forgot to push valid states into Queue)
4)Always returning 1 (when reached destination , you are returning dis[v] + 1 , (dis[v] is 0 as not updated yet) instead of dis[u]+1)


42)1012 (Simply floodfill , dfs . Be Careful about these types of situation (you are running dfs on coordinate system (x,y) but input is given in width by height) while taking inputs, for each height take inputs over widths or for each y , for each x take grid[x][y] ( from the input grid ) (Starters may make mistakes here)) , check if you are out of grid (Otherwise will get RTE) Level 1.6

43)1049 (Look, the graph is a ring always , now we can traverse a ring completely if it is one directional (clockwise or counter-clockwise) , So, you can run a DFS to find the ring (nodes of ring at each level) then check two possibility making the ring clockwise (adding the cost of counterclockwise edge to ans) and anti-clockwise (adding the cost of clockwise edge to ans) so, ans is the minimum one)
Level 1.8

44)1238 (Run BFS from position a to h , b to h , c to h and ans is the maximum of them , while bfs ing
Be careful , mark a cell visited when you have just explored it , just in the loop with direction array and after pushing it to queue or may get MLE) Level 1.9

45) 1009 (Bipartite , Whenever see a graph/bfs/dfs problem don't make assumption that the graph is connected unless it's stated , here the graph may not be connected , so run bfs on each component and for that component find the bipartite matching lets say , there are k components and first component has x 1s and y 0s (1,0 vampire or lycans) , take the max of x,y and add it to ans , Do the same for all those k components (Taking maximum of two partitions)) Level 2.0

46)1039 (BFS with string as state , There is a confusing statement in the input section "Remember that start or finish can be forbidden." But actually ,start and finish can't be a forbidden word , If any of them is forbidden just report -1 without running BFS (will save you some time) and use map (logN check) (instead of keeping the generated forbidden words in vector and a linear search , will give TLE) ) Another important part to notice is that , Lets say you have a string "aaa" Now "baa","aba","aab" etc are next possible states but "bba","abb" etc are not , you can only change one character (next or previous) to go to next state (Coding Practice)   Level 2.4

47)1174 (Look,you have infinite number of commandos and they can carry infinite number of bombs , so idea is to find a path from source to destination that is maximum , Lets say I send a commando in this path and he takes T time , now I am sure that all other commandos must take less time as everyone has same speed (1 unit) , so How can I optimize this maximum path in the graph from source to destination ? Look , I must visit all the vertices so I can find the sortest path from source to some vertex V and then the shortest path from V to destination (Now,I can do this using BFS as edge is unweigted , evryone takes one unit of time to tavel) , I add them so I get the MINIMUM time that I must take to visit vertex V , I find all those minimum and ans is maximum of those) 
(You can use concept of this problem in many places)
Level 2.4

48)1111 (Look, at the constraints , K<=100 , The idea here is to know how many cities can be explored by all the K people , Exploring - so looks like a job for DFS , so you can run a dfs from each of the K cities where there is a person , now you keep a global array and save there the number of people who explored that city after those K dfs you loop through that global array and see how many of them were explored by all K people / how many contain value K , that's the answer) 
Level 1.9

49)1141 (BFS with a number as state , First generate all prime factors of numbers in range 1 to 1000 (Be careful , Don't include 1 and that Number) Then just do usual BFS , special case if start==finish return 0 without entering BFS) 
Level 1.8
 

50)1337 (This is a bit tricky one , Look there are certain components in a graph , Lets say you are given a query in x,y Now (x,y) falls in component I , you need to tell how many crystals are there . What I have done is , first have run a dfs on each component (keep running dfs until all of the cells / components of graph is explored) , I have edited the visited array while running DFS in a special way , instead of just keeping 0 for unvisted and 1 for visited , I have kept 0 for unvisited and X for the componet number , meaning I have saved the component number in each cell, so that I can find in O(1) which component this cell belongs to , Now after I have run a dfs I know how many crystals are there in that component , I have kept another array where I store the number of crystals in the Ith component ; I have updated the number of crystals for that component in the array . Now , All of this is done in just a single DFS on graph (Even though I have run dfs many times those are on separated / disconnected component) , Now when I get a query for cell (x,y) I first see , which component this cell belongs to from my visit array , After that I just print the number of crystals in that component in O(1) from the array)
Level 2.0

51)1066 (Find shortest distance from 'A' to 'B' , add it to ans , then 'B' to 'C' , add it to ans and so on , In BFS , lets say now you are going from 'M' to 'N' , so your starting position for BFS was 'M' and your destination is 'N' , in the path if you get 'A','B','C',......'M' you can take them , they are valid next states in BFS , but you can't take 'O','P' etc .. Because once you go to a cell you must take that character and you can't take a later letter before a previous one in BFS , You can't take 'O','P' before you get 'M') Level 2.0 (Practice Later)

--------------------------------------------------------------------------------------------------------------------------------------------------

Part 3A : Mathematics

Pre-requisite : Basic Mathematics

52)1369 (First try to find the sum in O(N) , It's easy to do so F(A,n) = (n-1)*A[1] + (n-3)*A[2] + (n-5)*A[3] + ...... + (n-2i+1)*A[i]   , After that whenever you get
a query x v , just do sum-=(n-2*x+1)*A[x]; A[x] = v ; sum+=(n-2*x+1)*A[x];)  Level 1.5 

53)1410 (Ans is number of unique distances possible beetween these points , Lets say there are 3 points
p1,p2,p3 Then possible distances are {D} = dist(p1,p1),dist(p1,p2),dist(p1,p3),dist(p2,p1),dist(p2,p2),dist(p2,p3),dist(p3,p1),dist(p3,p2),dist(p3,p3) ,Lets send them to a set {S} <- {D} , ans is size of set , Why ? Figure it out :-D ) Level 1.4

--------------------------------------------------------------------------------------------------------------------------------------------------

Part 4A : Greedy

Pre-requisite : Sorting O(N*log(N))
54) 1016 (You don't need to worry about x co-ordinates , just push the y co-ordinates into a vector , sort them and iterate , if y[i]-y[start]<=w you do nothing , but if y[i] - y[start]>w , you add 1 to ans and you update start = i ; initially start = 0 ) Level 1.8

String Algorithms

Pre-requisite : LPS Concept + KMP

55) 1255 (Straight-Forward KMP implementation , use char[] , scanf )   Level 1.1

56) 1258 (Another KMP problem , reverse the string and compare it with the original one using KMP to find the maximum match of (some prefix of reversed string with some suffix of the original string ) , the ans is then = len + (len - maxmatch)) Level 1.6


Part 5A : Matrix Expo

Pre-requisite : Matrix multiplication , Matrix Exponentiation using binary expo method

57) 1096 (The recurrence relation is given already , all you need to do is find the matrix , which is straightforward in this case
        |a 0 b 1|
IDMAT = |1 0 0 0|
        |0 1 0 0|
        |0 0 0 1|
Ans is then IDMAT^(n-2)[0][0]*c

Apply mod in each step.
)  Level 2.0

58) 1065 (Here , also the recurrence relation is given)
IDMAT = |1 1|
        |1 0|
Ans is IDMAT^(n-1)Base
where , Base = |b|
               |a|

And for mod value use 10000
A confusion : When you are asked to print the last m digits of an answer , always keep the mod 10^m , not some big prime number (Think why ?) Level 2.0

Part 6A : Bisection

59) 1138 How many trailing zeros are there after 5! = 1 , and 10!= 2 and 123! = 28 . Hmm... Is it always increasing . Ah ha , Yes it is ! So , it's easy to binary search the N . Make the range big (0,10^8). Number of trailing zeros after N! = N/5 + N/25 + N/125 + ..... Level 1.2


Part 7A : DP

60) 1011 ( rec(man,mask)
           {
             for all unmarked woman W in mask { new_mask <- mark W ; ans = max(ans,rec(man+1,new_mask) + prio_ind[man][W]) }
           }
Level 1.8

61) 1047 rec(cur_house,last_color)
         {
           if(last_color==0) call rec(cur_house+1,red),rec(cur_house+1,green),rec(cur_house+1,blue) and take their minimum 
           if(last_color==1) call rec(cur_house+1,green),rec(cur_house+1,blue) and take their minimum
           ..............
         }
Level 1.6

62) 1122 rec(npos,lastdig)
{
if(npos==n)
return 1;
cnt = 0;
loop(i,1,m)
{
if(abs( dig[m] - lastdig )<=2)
cnt+=rec(npos+1,dig[m]);
}

return cnt;
}

Level 1.7

Counting

63) 1058 Parallelogram property :
For any parallelogram ABCD ,
    Ax + Cx = Bx + Dx
and Ay + Cy = By + Dy
where, AC and BD are diagonals .
there are n points , so make a list of nC2 pairs of points which will store the sum of x and y coordinates of two points . Now , sort them and count , for a pair of points Pi how many more pair of points Xi s are there having same sum of X and Y coordinate ? ans is sum of all Xi . Dont count repeated pairs .

Level : 1.9

Number Theory

64) 1014 Ifter Party

Easy problem . Lets assume there are C contestants and P piajus (total) . Everyone ate Q piaju (per contestant) and L piaju was left (in total) .

so, number of piajus left = P - CQ
                          = L
so, Q = (P-L)/C
so, you need to find all the divisors of (P-L) greater than L.
Just check all divisors upto sqrt(P-L) and check pairwise (There are two divisors actually one < sqrt(P-L) and one > sqrt(P-L) check both) and dont count repeatedly.
**Sort the final list and dont print an extra space after the last number in the list.**
Some testcases :
3
2 0
3 0
6 0
Case 1: 1 2
Case 2: 1 3
Case 3: 1 2 3 6

Level 1.3

65) 1007 Mathematically Hard 
Just sieve for all numbers in the range (the outer loop also should go from 2 to 5*10^6 ).Inside sieve , use the formula mentioned ,
ans[i]*=(prm-1);
ans[i]/=prm;
Precompute the ans in the array . (or will get TLE , 10^5 testcases)
Use one array to pre-calculate ans (or will get MLE) .
Use unsigned long long for ans array . (or will get WA) .

Level 1.6

66) 1035 Intelligent Factorial Factorization 

Easy brute force as N <=100 . Just save the prime factors and and powers of them (maybe in a 2d array) . 
Now, for each prime factors <100 , sum their power up for 2 to n . and save (in a vector of pair maybe , first stores prime , second stores power) .
Be careful about output format .

Level 1.1

67) 1028 Trailing Zeroes (I) A great optimization problem :-D The solution is obvious , ans is number of divisors - 1 . 
After , thinking a little bit , it seems storing primes <= sqrt(10^12) will help . So, this can be done using a simple sieve but when finding divisors you need actually prime factorization which can be costly .
For example , Lets say , Nm = 10^12 . Then there are almost sqrt(Nm)/log(Nm) prime factors are there . Now if you loop through all of the primes in the list each time it's going to cost you as you are dividing the current number by primes repeatedly . So, actually it can get pretty close to sqrt(Nm) which is going to surely give a TLE verdict .
The optimization is when PFing , you keep a variable sq and update it after each iteration (division by prime factor) .
initially , sq = sqrt(Nm) and as the loop breaker set , 
Ncop = N;
sq = sqrt(Ncop);
for(prime_no = 1;prime[prime_no]<=sq;prime_no++)
{
........ // operations on Ncop 
sq = sqrt(Ncop); //sq is being updated
}

Level 1.4

68) 1259 Goldbach`s Conjecture 
Easy Classic Problem . Just do a sieve and run a loop on primes to check valid solutions . 
Keep , a = prime[i] , b = n - a ; 
if( a > b ) break the loop ;

Level 0.8

69) 1054 Efficient Pseudo Code
A great problem :-) 
Sum of divisor formula from prime factorization :
12 = 2^2 * 3
so, sod = (1+2+4)*(1+3) = 28
72 = 2^3*3^2
so, sod = (1+2+4+8)*(1+3+9)
Use geometric sum formula and Bigmod for calculating the geometric seires in O(log(len)).
Caution : Use extended euclid to calculate modinverse , Using bigmod for modinverse will give TLE .
1 + 2 + 4 + 8 = ( 2^(4) - 1 )/(2-1)
There's a division of (prm[x]-1) so need modinverse here .
Use the trick for prime factorization (problem 68).
In PFing if n!=1 in the last step then the current n is the last PF. Be careful about that .
Some testcases :
2
1000000007 5
Case 1 : 1 // Because 1000000007 is prime so its factors are 1 and 1000000007 . so, sod =  1%mod + 1000000007%mod = 1 + 0 = 1
313113 0
Case 2 : 1

Level 1.7

70) 1077 How Many Points?
You can draw some lines (on graph paper (graph paper can come in handy in geometric problems)) and easily observe that the solution has something to do with gcd .
lets say , dx = diff in x , dy = diff in y
if (dx==dy) ans = dx+1;
if (dx==0 || dy==0) ans = max(dx,dy)+1;
else ans = gcd(dx,dy)+1;

Level 0.9

71) 1090 Trailing Zeroes (II) 
Easy Problem . Just precalculate number of fives and twos in X factorial (cumulatively in an array twonf[],fivenf[]) .
Also precalculate number of twos and fives in X (in an array two[],five[])
Then , ans = min( twonf[n] - twonf[n-r] - twonf[r] + two[p]*q  , fivenf[n] - fivenf[n-r] - fivenf[r] + five[p]*q   );

Level 0.8

72) 1234 Harmonic Number 
We can afford a 10^8 loop but we cant get that much of memory . So, here we can use the trick of partitioning . We can partition the [1,10^8] range into smaller ranges.
For example, [1,1000] , [1001,2000] , [2001,3000] ..........
So, we will store in the H[x] , the range [(x-1)*1000 + 1,(x-1)*1000 + 1001] .
So, if we are asked to print ans for H(12987)
Then ,
ans = H[12];
and a loop from 12001 to 12987 to add the rest of the harmonic numbers .

Level 1.4

Greedy
73) 1166 Old Sorting 
Easy greedy approach.For x=1 to n, If in position x we dont find x then we search for x in the array and swap and add 1 to answer.
If the array was not a permutation of [1..n] then the numbers could be sorted and converted to a permutation and solved in similar fashion.(array compression).

Level 0.8

74) 1389 Scarecrow
Easy greedy approach.If you have a fertile piece of land in i'th position then place the scarecrow in (i+1)'th location to cover maximum area and increment your position by 3.

Level 0.7

75) 1198 Karate Competition
Simple DP solution :
sort(myteam);
sort(otherteam);
rec(i,j)
{
if(i==n+1 || j==n+1)
return 0;
int ans = 0;
loop(x,j,n)
{
if(myteam[i]==otherteam[x])//draw
{
ans = max(ans,rec(i+1,x+1)+1,rec(i+1,x));
}
else if(myteam[i]>otherteam[x])//win
{
ans = max(ans,2+rec(i+1,x+1));
}
else
{
ans = max(ans,rec(i+1,x));
}
}
return ans;
} 

It can be solved with greedy idea too.

Level 1.1

--------------------------------------------------------------------------------------------------------------------------------------------------

Graph Theory

76) 1029 Civil and Evil Engineer 

Straight Forward MST solution .
Here , n= 100 but maximum edge can be as big as 12000 , so keep the array size bigger than this. (I got 2 RTE error for not noticing :-P .)

Level 1.5

77) 1041 Road Construction

First run a bfs/dfs to find if the graph is connected , if yes then just do a simple MST. If the graph is not connected then print Impossible.

This idea of using cost 0 for good roads can be used in many future problems.

map<string,vector<string>> // sometimes gives Compilation ERROR , put a space between two >> , so map<string,vector<string>>

Level 1.8

78) 1040 Donation

There is a tricky part here , " 0 means no cable.". So, we dont count 0 as a edge.

Similar to 1041. First run a bfs/dfs to find connectivity and then run a MST. ans is sum of all cost - MST cost.

Level 1.7 

Maximum Bipartite Matching

79) 1149 Factors and Multiples

It's not very obvious to me why maximum bipartite matching gives the correct answer :-(
This problem is a reminder to get intuition from problem structure.
//Idea of Mx Bp Mat

int left[max],right[max],vis[mx];
//left[x] e rekhechi left set er x tomo node er shathe kar matching korechi
//zodi left[x]=-1 tahole ekhono karo shathe matching korate parini

vi adj[max];
bool kuhn(int u)
{
//Idea of kuhn function :
/*
Initially karo shathe karo matching hoy ni . cnt = 0 . shob left[x] = -1 , shob right[x] = -1;
ekhon ami shob gulo left node er shathe kno 1 ta right node er matching korte chai.(tae bpm function e m ta left node er upori loop chaliyechi)
Ekhon kuhn function e ami oi node theke zeshob node e zaoa zay shegulate zacchi ebong zokhoni ekta possible matching pacchi, shei 2 ta match koriye left right update kore dicchi(ekhon ar era -1 nei).
ekhon matching 2 vabe ghotate pari ami,
1) connected kno ekta right node ekhono khali ache (-1) tahole ami easily eder matching koriye dite pari.
2) ami age kno ekta vul (non-optimal) decision nisilam zokhon left er matching koriyechi , orthat amar right node ta ekhon ze left node tar shathe matching koriyechi,hoyto oi left node take ami onno arekta right node er shathe matching korate partam ete amar matching 1 ta barto. eta korar jonno ami amar current right node visited kore dilam(porer bar ar ete zabo na karon er shathe already matching koriye felechi). tarpor ami ze left node er shathe matching koriyechi otake abar kuhn function e pathabo zodi amar current right node(occupied) chara onno karo shathe eke matching korano zeto.
zodi zay, tahole ami abar ekta matching korate parchi.
*/
loop(x,0,SZ(adj[u])-1)
{
int v = adj[u][x];
if(vis[v]) continue;
vis[v] = 1;
if(right[v]==-1 || kuhn(right[v]))
{
right[v]=u;
left[u]=v;
return true;
}

}

return false;
}

int bpm()
{
ms(left,-1);
ms(right,-1);
int cnt = 0;
loop(x,1,m)
{
ms(vis,0);
if(kuhn(i))
cnt++:
}
return cnt;
}

--------------------------------------------------------------------------------------------------------------------------------------------------

Game Theory

80) 1296 - Again Stone Game 

All I have to do is find grundy number for each n piles and xor them. if xor value is 0, first player can't win else he can.
But finding grundy using main definition will time out for this problem.
We know, n = 1 is a losing position. so, g[1]=0.
Now, for n=2, we can remove 1 stone and we are left with 1 subgame of 1 stone so, mex{g[1]} = 1
for n=3, we can remove 1 stone and we are left with 1 subgame of 2 stones so, mex{g[2]} = mex{1} = 0
for n=4, we can remove 1,2 stones and we are left with 2 subgames of 3,2 stones so, mex{g[3],g[2]} = mex{0,1} = 2
for n=5, we can remove 1,2 stones and we are left with 2 subgame of 4,3 stones so, mex{g[4],g[3]} = mex{0,2} = 1

After generating enough grundy numbers, we see a pattern
0 1 0 2 1 3 0 4 2 5 1 6 3 7 0 8 4 9 2 10 5 11 1 12 6 13 3 14 7 15
One thing is obvious, if n is even, then g[n]=n/2
After sometimes, you will eventually realize for odd cases g[n]=g[n/2]

Level 1.2

81) 1199 - Partitioning Game 

All I have to do is find grundy number for each n piles and xor them. if xor value is 0, first player can't win else he can.
Here, Lets calculate grundy number for, xi = 5
We know, g[1] = 0, g[2] = 0 are obvious losing states
7 -> possible subgames : sg1(1,4),sg2(2,3)
sg1 -> g[1] = 0, But 4 can have subgame sg3(1,3)
      sg3 -> g[1] = 0, But 3 can have subgame sg4(1,2)
             sg4 -> g[1] = 0, g[2] = 0. To find grundy for sg4 we xor g[1] and g[2].
      Now, we can calculate sg3 -> g[1]^g[sg3] = g[1]^g[1]^g[2]
Then, finally after calculating grundy number for each subgame of xi, we can calculate grundy number for xi, g[xi] = mex{for all subgames sgi : g[sgi]}

Level 1.2

>...Stopped updating, ~find(enough_time) :(
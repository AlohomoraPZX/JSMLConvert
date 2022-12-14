/**********************************************
* A Basic Header for JSML Programming Languange.
* Language: C++
* Usage: #include<JSMLang>
* (#) Initally Written By AlohomoraPZX.
* (#) Latest Updated at Sept 14, 2022.  
**********************************************/
//This is for header files.
#ifndef ONLINE_JUDGE
    #define ONLINE_JUDGE
#endif

#include<bits/stdc++.h>
using namespace std;

#ifdef USE_EXT_LIB
    #include<bits/extc++.h>
    using namespace __gnu_cxx;
    using namespace __gnu_pbds;
#endif

//This is for some useful definitions.
#define var auto
#define repeat for
#define loop_for(x) for(int i=1; i<=x; i++)
#define dead_loop() while(true)
#define begin_loop {
#define end_loop }
#define and &&
#define or ||
#define xor ^
#define not !
#define nand &
#define nor |
#define nop ~
#define foreach for
#define in :
#define to_int(x) (int)x
#define to_long_long(x) (long long)x
#define lson(x) x << 1
#define rson(x) x << 1 | 1
#define print cout
#define scan cin
#define read(x) cin>>x

//For array

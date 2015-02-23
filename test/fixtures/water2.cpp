#include "geometries.hpp"

namespace mapbox {
namespace fixtures {

const IntegerPolygon water2 = {
    {{-128,-128},{-128,-128},{-128,-128},{-128,1998},{-119,1978},{-127,2036},{-128,2037},{-128,2050},{-107,2044},{-77,2056},{-61,2076},{-57,2112},{-59,2198},{-49,2208},{-29,2196},{-21,2178},{33,2132},{23,2018},{69,1948},{75,1932},{65,1912},{13,1888},{-13,1862},{-29,1834},{-67,1832},{-107,1816},{-128,1817},{-128,962},{-128,962},{-128,1583},{-121,1578},{-93,1578},{-55,1586},{-23,1598},{37,1598},{169,1466},{45,1606},{65,1672},{91,1692},{83,1864},{101,1886},{139,1872},{175,1810},{177,1786},{185,1808},{163,1846},{153,1876},{185,1882},{219,1874},{269,1846},{293,1842},{317,1846},{329,1866},{361,1888},{395,1908},{415,1910},{431,1886},{441,1864},{465,1842},{491,1828},{519,1800},{537,1758},{547,1698},{549,1626},{579,1580},{595,1528},{593,1470},{585,1428},{555,1356},{509,1302},{481,1262},{441,1236},{419,1232},{393,1248},{375,1228},{397,1238},{417,1222},{441,1224},{491,1264},{501,1230},{501,1206},{511,1236},{497,1272},{531,1312},{571,1350},{583,1382},{603,1422},{651,1386},{661,1352},{655,1390},{633,1414},{607,1430},{615,1476},{615,1590},{657,1568},{703,1522},{667,1570},{637,1596},{667,1590},{693,1612},{663,1600},{641,1604},{621,1616},{607,1736},{629,1718},{653,1710},{671,1710},{703,1726},{737,1726},{699,1734},{677,1722},{657,1718},{637,1722},{619,1738},{603,1766},{585,1828},{571,1854},{555,1874},{513,1880},{483,1876},{465,1888},{443,1888},{433,1914},{431,1926},{437,1946},{461,1942},{483,1918},{481,1934},{459,1954},{485,1960},{509,1960},{539,1968},{569,1970},{597,1980},{617,1980},{643,1976},{667,1958},{719,1900},{699,1934},{671,1972},{743,1978},{765,1984},{735,1988},{697,1982},{661,1990},{645,1998},{665,2042},{695,2098},{705,2140},{719,2162},{757,2190},{853,2186},{865,2214},{881,2242},{915,2252},{925,2264},{925,2286},{917,2316},{907,2376},{941,2382},{903,2392},{895,2444},{883,2470},{877,2566},{871,2596},{947,2648},{1011,2686},{1017,2706},{1029,2708},{1041,2700},{1099,2724},{1167,2768},{1427,2832},{1447,2826},{1467,2810},{1481,2792},{1487,2766},{1489,2742},{1480,2705},{1466,2683},{1429,2654},{1270,2561},{1243,2565},{1260,2552},{1209,2524},{1190,2506},{1187,2482},{1195,2431},{1215,2397},{1222,2368},{1210,2357},{1174,2343},{1126,2305},{1114,2281},{1099,2136},{1135,2096},{1174,2060},{1179,2040},{1173,2020},{1175,2008},{1170,1976},{1136,1924},{1121,1897},{1129,1863},{1157,1815},{1175,1800},{1205,1791},{1227,1771},{1243,1737},{1236,1776},{1218,1800},{1198,1805},{1178,1818},{1160,1839},{1140,1887},{1147,1915},{1170,1942},{1191,1948},{1211,1962},{1259,1977},{1301,2020},{1369,2046},{1385,2048},{1379,2063},{1409,2125},{1425,2141},{1444,2188},{1459,2197},{1549,2188},{1579,2180},{1592,2165},{1601,2136},{1595,2110},{1579,2086},{1556,2073},{1529,2070},{1485,2071},{1444,2053},{1423,2036},{1453,2042},{1483,2056},{1511,2058},{1529,2055},{1560,2061},{1597,2085},{1636,2120},{1653,2115},{1681,2098},{1693,2072},{1696,2048},{1696,2016},{1713,2003},{1702,1986},{1705,1966},{1675,1931},{1659,1920},{1626,1915},{1571,1885},{1554,1857},{1573,1877},{1627,1907},{1665,1912},{1686,1925},{1711,1953},{1739,1963},{1731,1945},{1707,1909},{1661,1846},{1631,1839},{1575,1842},{1602,1839},{1618,1827},{1642,1824},{1671,1834},{1703,1862},{1755,1893},{1774,1896},{1798,1891},{1823,1878},{1843,1862},{1857,1814},{1835,1738},{1871,1804},{1890,1811},{1903,1824},{1911,1841},{1937,1864},{1974,1888},{2001,1894},{2026,1906},{2047,1921},{2062,1952},{2076,2007},{2092,1995},{2091,1910},{2081,1879},{2085,1853},{2127,1818},{2134,1801},{2127,1787},{2102,1764},{2099,1746},{2103,1728},{1649,1232},{1587,1151},{1616,1180},{1651,1226},{2110,1719},{2122,1720},{2153,1755},{2175,1772},{2202,1775},{2214,1750},{2218,1728},{2205,1715},{2186,1704},{2179,1689},{2186,1674},{2203,1672},{2236,1679},{2247,1666},{2251,1648},{2231,1615},{2226,1573},{2218,1565},{2200,1574},{2178,1572},{2166,1561},{2165,1549},{2179,1538},{2198,1513},{2192,1477},{2166,1483},{2141,1480},{2121,1442},{2116,1427},{2100,1420},{2077,1420},{2059,1409},{2061,1378},{2079,1319},{2095,1305},{2117,1303},{2135,1314},{2147,1330},{2171,1325},{2183,1312},{2183,1290},{2163,1260},{2143,1238},{2107,1221},{2101,1206},{2104,1191},{2122,1176},{2143,1160},{2151,1143},{2147,1126},{2135,1114},{2115,1111},{2095,1101},{2084,1086},{2087,1067},{2111,1023},{2109,1010},{2095,1002},{2081,984},{2081,962},{2095,945},{2115,937},{2137,939},{2157,929},{2161,889},{2153,869},{2127,869},{2101,859},{2091,829},{2093,801},{2121,783},{2151,783},{2167,799},{2189,791},{2197,771},{2191,741},{2199,729},{2231,713},{2237,699},{2209,681},{2191,659},{2189,635},{2207,591},{2233,553},{2231,519},{2239,495},{2255,483},{2271,443},{2299,437},{2341,439},{2371,421},{2419,399},{2443,397},{2457,405},{2483,393},{2515,371},{2545,361},{2597,359},{2631,321},{2665,317},{2705,319},{2679,327},{2678,327},{2645,327},{2636,332},{2615,361},{2591,371},{2541,373},{2507,389},{2469,415},{2453,415},{2429,405},{2401,415},{2363,445},{2337,457},{2303,453},{2283,457},{2271,477},{2247,507},{2239,531},{2245,555},{2213,605},{2201,641},{2201,655},{2247,687},{2257,707},{2217,733},{2203,747},{2209,775},{2197,801},{2171,811},{2153,805},{2141,797},{2117,801},{2103,819},{2107,839},{2129,851},{2165,857},{2177,873},{2175,897},{2167,923},{2153,949},{2107,957},{2095,969},{2097,985},{2121,1003},{2135,1021},{2127,1041},{2105,1065},{2107,1075},{2121,1089},{2145,1103},{2163,1125},{2167,1143},{2157,1163},{2125,1191},{2119,1203},{2135,1221},{2161,1233},{2199,1287},{2201,1299},{2195,1323},{2175,1339},{2147,1341},{2129,1337},{2125,1319},{2113,1317},{2095,1335},{2087,1353},{2077,1397},{2079,1411},{2117,1407},{2135,1415},{2149,1457},{2165,1467},{2415,1383},{2205,1467},{2213,1487},{2211,1523},{2201,1545},{2183,1557},{2223,1553},{2233,1563},{2243,1579},{2241,1597},{2255,1617},{2273,1625},{2477,1599},{2263,1639},{2261,1671},{2251,1687},{2237,1697},{2223,1701},{2199,1695},{2227,1713},{2237,1733},{2233,1761},{2219,1781},{2207,1791},{2225,1811},{2245,1827},{2281,1839},{2315,1839},{2377,1855},{2313,1849},{2277,1853},{2251,1843},{2223,1825},{2207,1807},{2193,1799},{2173,1797},{2159,1799},{2153,1821},{2141,1839},{2115,1853},{2105,1871},{2113,2025},{2117,2057},{2113,2077},{2101,2097},{2095,2119},{2101,2135},{2121,2151},{2133,2169},{2127,2193},{2129,2211},{2145,2221},{2167,2215},{2195,2199},{2219,2191},{2265,2189},{2293,2169},{2317,2143},{2355,2137},{2377,2141},{2427,1971},{2387,2147},{2401,2165},{2535,2167},{2405,2179},{2421,2205},{2441,2227},{2445,2255},{2427,2287},{2391,2325},{2365,2357},{2361,2381},{2349,2397},{2327,2419},{2291,2413},{2263,2453},{2229,2473},{2251,2491},{2265,2555},{2263,2583},{2253,2613},{2285,2623},{2331,2645},{2319,2617},{2319,2583},{2335,2565},{2359,2565},{2389,2603},{2401,2627},{2447,2639},{2475,2631},{2493,2619},{2515,2615},{2561,2633},{2603,2635},{2636,2627},{2661,2571},{2687,2569},{2678,2561},{2655,2537},{2636,2546},{2621,2553},{2581,2555},{2549,2539},{2523,2509},{2571,2537},{2611,2545},{2636,2533},{2653,2525},{2637,2503},{2701,2565},{2737,2561},{2679,2583},{2669,2599},{2667,2619},{2659,2637},{2673,2651},{2677,2679},{2665,2697},{2641,2719},{2609,2733},{2601,2759},{2599,2787},{2633,2785},{2671,2787},{2701,2725},{2725,2715},{2779,2717},{2725,2723},{2705,2739},{2689,2771},{2683,2791},{2693,2793},{2737,2831},{2687,2797},{2678,2795},{2667,2793},{2599,2797},{2589,2819},{2575,2839},{2581,2881},{2607,2901},{2611,2927},{2623,2951},{2636,2968},{2647,2997},{2649,3019},{2671,3031},{2687,3029},{2733,3053},{2747,3067},{2753,3089},{2741,3117},{2709,3139},{2757,3151},{2791,3129},{2837,3093},{2865,3063},{2877,3041},{2871,3019},{2823,2963},{2885,3017},{2909,2993},{2951,2975},{2909,3007},{2887,3027},{2885,3053},{2867,3081},{2833,3109},{2805,3139},{2817,3153},{2973,3125},{2983,3135},{2995,3157},{2971,3135},{2939,3135},{2809,3165},{2795,3177},{2801,3191},{2795,3207},{2783,3221},{2785,3239},{2801,3251},{2823,3253},{2847,3239},{2879,3245},{2901,3257},{2921,3273},{2931,3303},{2947,3277},{2967,3273},{3013,3297},{3027,3315},{3179,3419},{3227,3457},{3257,3455},{3275,3441},{3265,3417},{3283,3351},{3277,3327},{3293,3293},{3119,3119},{3297,3283},{3305,3303},{3295,3323},{3309,3333},{3327,3321},{3331,3293},{3383,3241},{3387,3211},{3351,3187},{3321,3153},{3289,3091},{3279,3051},{3263,3047},{3217,3077},{3179,3083},{3147,3067},{3199,3071},{3235,3055},{3261,3039},{3217,2997},{3115,2953},{3169,2955},{3219,2977},{3261,3019},{3289,3039},{3303,3081},{3313,3121},{3351,3171},{3395,3195},{3415,3153},{3433,3131},{3435,3055},{3403,3049},{3373,3033},{3303,2931},{3281,2915},{3213,2909},{3287,2907},{3311,2925},{3381,3027},{3417,3043},{3443,3045},{3449,3061},{3443,3123},{3475,3115},{3493,3091},{3485,3113},{3521,3107},{3545,3085},{3577,2981},{3567,2961},{3519,2943},{3515,2933},{3491,2937},{3447,2913},{3363,2899},{3449,2901},{3497,2923},{3527,2921},{3533,2895},{3557,2881},{3585,2875},{3635,2839},{3615,2817},{3589,2797},{3603,2777},{3609,2743},{3591,2723},{3587,2709},{3453,2701},{3435,2695},{3411,2719},{3179,2655},{3409,2707},{3439,2685},{3467,2691},{3585,2695},{3607,2639},{3597,2605},{3609,2567},{3601,2557},{3539,2551},{3531,2531},{3551,2515},{3593,2505},{3629,2463},{3617,2419},{3605,2389},{3583,2365},{3581,2341},{3553,2347},{3477,2343},{3465,2315},{3479,2289},{3473,2265},{3453,2283},{3431,2289},{3407,2285},{3381,2267},{3377,2245},{3405,2213},{3397,2195},{3361,2197},{3337,2209},{3313,2213},{3305,2235},{3319,2261},{3321,2287},{3305,2335},{3311,2287},{3305,2259},{3289,2235},{3301,2215},{3321,2199},{3347,2195},{3371,2181},{3395,2187},{3407,2139},{3391,2121},{3379,2083},{3375,2019},{3367,1959},{3373,1913},{3371,1893},{3313,1855},{3299,1829},{3305,1797},{3305,1781},{3289,1769},{3243,1759},{3209,1737},{3183,1699},{3155,1687},{3141,1673},{3151,1627},{3151,1603},{3189,1555},{3201,1533},{3181,1483},{3189,1465},{3225,1463},{3239,1441},{3269,1439},{3287,1421},{3307,1411},{3329,1417},{3349,1403},{3355,1373},{3385,1341},{3389,1313},{3377,1269},{3387,1253},{3399,1211},{3409,1197},{3403,1183},{3407,1169},{3439,1145},{3445,1101},{3439,1063},{3455,1047},{3459,1025},{3471,1007},{3483,981},{3505,961},{3569,935},{3639,895},{3569,945},{3509,971},{3489,985},{3479,1007},{3463,1031},{3465,1049},{3449,1065},{3453,1101},{3449,1143},{3431,1165},{3411,1179},{3423,1197},{3411,1211},{3389,1273},{3395,1317},{3393,1339},{3373,1371},{3363,1379},{3359,1405},{3337,1427},{3305,1425},{3277,1441},{3259,1459},{3243,1455},{3227,1475},{3197,1481},{3209,1511},{3213,1541},{3173,1595},{3161,1623},{3157,1657},{3165,1671},{3197,1689},{3221,1729},{3263,1751},{3291,1751},{3319,1767},{3325,1795},{3319,1817},{3331,1847},{3363,1865},{3383,1883},{3395,1909},{3387,1985},{3397,2027},{3399,2071},{3415,2097},{3423,2117},{3423,2141},{3415,2185},{3429,2211},{3473,2235},{3497,2257},{3501,2287},{3489,2309},{3495,2325},{3531,2331},{3565,2321},{3593,2327},{3605,2353},{3603,2367},{3631,2387},{3729,2143},{3771,2119},{3735,2149},{3635,2407},{3649,2459},{3737,2519},{3733,2477},{3747,2447},{3811,2361},{3749,2461},{3739,2487},{3745,2531},{3741,2557},{3729,2583},{3699,2625},{3695,2649},{3707,2671},{3753,2731},{3791,2773},{3805,2811},{3823,2847},{3855,2803},{3853,2771},{3837,2759},{3829,2737},{3797,2695},{3785,2689},{3801,2653},{3831,2651},{3835,2623},{3851,2621},{3857,2593},{3867,2569},{3865,2547},{3879,2529},{3873,2553},{3875,2577},{3861,2625},{3845,2633},{3841,2659},{3807,2661},{3799,2681},{3843,2737},{3847,2753},{3865,2765},{3865,2807},{3837,2847},{3845,2865},{3869,2899},{3889,2945},{3911,3021},{3951,3069},{3959,3097},{3955,3129},{3975,3143},{4017,3147},{4051,3169},{4075,3188},{4087,3197},{4117,3198},{4145,3199},{4177,3223},{4215,3245},{4213,3279},{4199,3331},{4224,3350},{4224,3661},{4117,3663},{4081,3664},{3963,3670},{3937,3690},{3941,3736},{3949,3798},{3965,3816},{3987,3852},{4045,3858},{4075,3832},{4089,3820},{4155,3788},{4215,3782},{4224,3785},{4224,4062},{4195,4066},{4179,4088},{4189,4112},{4224,4129},{4224,4145},{4177,4122},{4101,4200},{4082,4224},{4224,4224},{4224,4224},{-128,4224},{-128,-128}},
    {{4117,4162},{4161,4115},{4165,4091},{4177,4067},{4203,4053},{4224,4047},{4224,3801},{4181,3801},{4157,3801},{4127,3819},{4081,3857},{4041,3877},{3997,3875},{3969,3851},{3941,3831},{3933,3769},{3911,3717},{3925,3665},{3929,3639},{3879,3619},{3849,3581},{3823,3601},{3815,3629},{3829,3669},{3861,3699},{3883,3737},{3883,3775},{3881,3827},{3867,3869},{3839,3907},{3787,3959},{3783,3989},{3801,4005},{3797,4027},{3799,4061},{3813,4093},{3805,4141},{3795,4191},{3789,4221},{3801,4224},{3907,4224},{4033,4217},{4049,4224},{4059,4224},{4117,4162},{4117,4162}},
    {{3857,2915},{3833,2925},{3817,2921},{3807,2913},{3773,2913},{3761,2927},{3765,2957},{3757,2979},{3773,2991},{3791,2995},{3789,3013},{3817,3017},{3835,3027},{3839,3039},{3827,3047},{3817,3055},{3811,3077},{3789,3085},{3765,3079},{3739,3093},{3711,3107},{3705,3115},{3707,3135},{3689,3161},{3705,3167},{3695,3197},{3705,3205},{3723,3211},{3723,3231},{3751,3229},{3749,3217},{3767,3203},{3799,3167},{3793,3131},{3809,3117},{3869,3085},{3911,3057},{3891,3035},{3887,3001},{3871,2959},{3857,2915},{3857,2915}},
    {{3653,2641},{3665,2621},{3681,2615},{3693,2613},{3731,2567},{3737,2541},{3727,2521},{3649,2473},{3625,2503},{3599,2519},{3573,2525},{3555,2531},{3555,2543},{3603,2541},{3631,2553},{3625,2579},{3615,2607},{3625,2643},{3653,2641},{3653,2641}},
    {{3413,2227},{3395,2243},{3393,2261},{3413,2273},{3433,2277},{3473,2259},{3413,2227},{3413,2227}},
    {{1991,2570},{2223,2614},{2239,2600},{2247,2570},{2237,2542},{2235,2516},{2223,2504},{2207,2490},{2213,2464},{2225,2446},{2249,2440},{2255,2424},{2263,2406},{2283,2394},{2307,2388},{2333,2394},{2343,2386},{2343,2364},{2351,2340},{2373,2318},{2403,2298},{2417,2272},{2421,2256},{2411,2234},{2397,2200},{2379,2172},{2349,2158},{2333,2156},{2315,2166},{2303,2192},{2279,2208},{2241,2208},{2221,2212},{2197,2218},{2181,2228},{2159,2246},{2139,2256},{2127,2260},{2111,2266},{2127,2332},{2251,2288},{2121,2348},{2099,2358},{2081,2378},{2055,2388},{2015,2410},{1973,2430},{1951,2442},{1945,2456},{1947,2476},{1963,2484},{2095,2432},{1969,2494},{1965,2510},{1971,2524},{1983,2538},{1989,2552},{1991,2570},{1991,2570}},
    {{850,2552},{858,2452},{790,2436},{778,2380},{806,2416},{870,2428},{910,2276},{870,2256},{838,2204},{762,2212},{706,2164},{686,2128},{634,2016},{582,1996},{510,1976},{422,1964},{370,1928},{314,1884},{270,1884},{218,1908},{130,1924},{134,1988},{106,2028},{86,2064},{114,2108},{114,2152},{-22,2292},{-102,2272},{-128,2252},{-128,2319},{-106,2328},{-102,2364},{-10,2400},{98,2400},{234,2408},{338,2432},{450,2448},{606,2488},{734,2536},{850,2552},{850,2552}},
    {{-128,1781},{-118,1780},{-54,1808},{-2,1820},{30,1860},{58,1860},{74,1708},{46,1692},{18,1620},{-54,1608},{-114,1608},{-128,1615},{-128,1781}},
};

}
}

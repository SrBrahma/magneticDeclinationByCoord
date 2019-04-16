#ifndef MAG_DEC_BY_COORD_TABLE
#define MAG_DEC_BY_COORD_TABLE

#include <Arduino.h> // For PROGMEM. Also includes the int16_t type, so no need to include <stdint.h>.

static const PROGMEM int16_t MAGNETIC_DECLINATION_TABLE[37][73] = {
    { 14941, 14441, 13941, 13441, 12941, 12441, 11941, 11441, 10941, 10441, 9941, 9441, 8941, 8441, 7941, 7441, 6941, 6441, 5941, 5441, 4941, 4441, 3941, 3441, 2941, 2441, 1941, 1441, 941, 441, -58, -558, -1058, -1558, -2058, -2558, -3058, -3558, -4058, -4558, -5058, -5558, -6058, -6558, -7058, -7558, -8058, -8558, -9058, -9558, -10058, -10558, -11058, -11558, -12058, -12558, -13058, -13558, -14058, -14558, -15058, -15558, -16058, -16558, -17058, -17558, 17941, 17441, 16941, 16441, 15941, 15441, 14941},
    { 14196, 13631, 13074, 12525, 11985, 11455, 10933, 10421, 9916, 9420, 8932, 8450, 7976, 7508, 7045, 6587, 6135, 5686, 5241, 4800, 4361, 3924, 3490, 3057, 2626, 2195, 1765, 1335, 904, 473, 41, -392, -827, -1265, -1705, -2147, -2593, -3042, -3494, -3950, -4410, -4874, -5342, -5815, -6292, -6774, -7261, -7754, -8252, -8756, -9265, -9781, -10304, -10833, -11369, -11913, -12463, -13020, -13584, -14155, -14732, -15315, -15903, -16495, -17090, -17686, 17716, 17120, 16526, 15935, 15349, 14769, 14196},
    { 12979, 12350, 11751, 11179, 10634, 10112, 9613, 9133, 8670, 8222, 7787, 7362, 6946, 6538, 6136, 5740, 5347, 4959, 4573, 4190, 3809, 3430, 3053, 2677, 2302, 1929, 1555, 1181, 806, 430, 52, -329, -713, -1103, -1497, -1896, -2301, -2712, -3129, -3552, -3981, -4417, -4858, -5305, -5758, -6217, -6682, -7153, -7632, -8118, -8613, -9117, -9632, -10160, -10701, -11258, -11833, -12428, -13043, -13681, -14343, -15028, -15736, -16464, -17209, -17965, 17274, 16516, 15767, 15034, 14323, 13637, 12979},
    { 11057, 10444, 9890, 9384, 8920, 8489, 8085, 7702, 7337, 6985, 6643, 6307, 5975, 5645, 5316, 4986, 4655, 4322, 3987, 3652, 3315, 2978, 2642, 2307, 1973, 1642, 1311, 982, 654, 324, -7, -342, -683, -1030, -1386, -1750, -2123, -2506, -2898, -3299, -3708, -4124, -4546, -4973, -5404, -5840, -6279, -6722, -7169, -7621, -8080, -8546, -9024, -9514, -10022, -10552, -11109, -11700, -12334, -13018, -13764, -14580, -15472, -16441, -17478, 17440, 16347, 15281, 14272, 13341, 12497, 11738, 11057},
    { 8564, 8141, 7767, 7433, 7128, 6847, 6584, 6333, 6092, 5855, 5620, 5383, 5142, 4894, 4637, 4371, 4094, 3807, 3512, 3208, 2899, 2585, 2271, 1957, 1646, 1340, 1038, 742, 450, 160, -128, -421, -720, -1028, -1348, -1680, -2027, -2389, -2763, -3150, -3545, -3949, -4357, -4768, -5180, -5592, -6001, -6409, -6815, -7219, -7623, -8028, -8437, -8853, -9282, -9728, -10202, -10713, -11280, -11928, -12693, -13633, -14825, -16350, 17784, 15767, 13913, 12409, 11249, 10351, 9638, 9055, 8564},
    { 6308, 6117, 5938, 5770, 5611, 5460, 5317, 5178, 5042, 4906, 4766, 4619, 4460, 4287, 4097, 3888, 3658, 3409, 3141, 2857, 2560, 2253, 1941, 1630, 1322, 1023, 735, 459, 194, -61, -312, -563, -819, -1086, -1369, -1670, -1992, -2335, -2695, -3071, -3459, -3853, -4250, -4647, -5039, -5424, -5800, -6165, -6520, -6863, -7196, -7518, -7831, -8136, -8435, -8730, -9025, -9323, -9633, -9966, -10352, -10860, -11751, -14905, 11041, 8788, 8034, 7588, 7255, 6978, 6735, 6513, 6308},
    { 4759, 4700, 4632, 4559, 4485, 4411, 4340, 4272, 4205, 4139, 4069, 3991, 3900, 3791, 3659, 3501, 3314, 3097, 2851, 2577, 2281, 1968, 1644, 1318, 997, 688, 397, 128, -119, -348, -562, -771, -981, -1203, -1444, -1709, -2002, -2324, -2670, -3036, -3415, -3802, -4188, -4568, -4938, -5293, -5630, -5947, -6242, -6514, -6761, -6982, -7175, -7336, -7461, -7540, -7559, -7494, -7300, -6896, -6115, -4640, -2158, 653, 2594, 3666, 4245, 4561, 4726, 4802, 4821, 4802, 4759},
    { 3763, 3761, 3744, 3715, 3681, 3645, 3609, 3576, 3547, 3520, 3493, 3462, 3421, 3363, 3281, 3169, 3020, 2833, 2605, 2339, 2037, 1708, 1361, 1008, 659, 327, 21, -253, -493, -701, -882, -1048, -1209, -1379, -1569, -1789, -2045, -2338, -2664, -3016, -3385, -3761, -4134, -4495, -4839, -5159, -5452, -5714, -5943, -6134, -6286, -6393, -6450, -6449, -6375, -6212, -5931, -5498, -4865, -3991, -2868, -1575, -282, 844, 1732, 2393, 2870, 3206, 3438, 3593, 3689, 3742, 3763},
    { 3092, 3114, 3118, 3111, 3096, 3076, 3056, 3037, 3023, 3014, 3009, 3004, 2995, 2972, 2929, 2855, 2741, 2582, 2372, 2111, 1802, 1454, 1077, 688, 304, -59, -388, -674, -912, -1105, -1260, -1386, -1499, -1612, -1743, -1905, -2109, -2360, -2655, -2986, -3338, -3698, -4053, -4391, -4704, -4985, -5228, -5430, -5586, -5692, -5742, -5731, -5650, -5489, -5235, -4872, -4387, -3776, -3048, -2236, -1391, -571, 177, 831, 1382, 1833, 2195, 2480, 2697, 2858, 2971, 3047, 3092},
    { 2604, 2636, 2652, 2655, 2650, 2639, 2625, 2612, 2601, 2595, 2595, 2600, 2605, 2603, 2585, 2540, 2455, 2320, 2127, 1872, 1556, 1188, 782, 357, -62, -456, -806, -1102, -1339, -1521, -1655, -1752, -1825, -1888, -1957, -2051, -2187, -2377, -2622, -2915, -3239, -3575, -3905, -4214, -4491, -4728, -4918, -5056, -5137, -5156, -5108, -4987, -4786, -4499, -4122, -3654, -3108, -2508, -1883, -1267, -682, -144, 342, 777, 1160, 1493, 1777, 2015, 2208, 2358, 2471, 2551, 2604},
    { 2228, 2263, 2284, 2294, 2295, 2291, 2281, 2268, 2256, 2247, 2243, 2245, 2250, 2255, 2249, 2222, 2158, 2043, 1864, 1614, 1293, 909, 478, 25, -421, -834, -1195, -1491, -1722, -1892, -2012, -2092, -2140, -2167, -2183, -2206, -2259, -2364, -2533, -2765, -3043, -3342, -3639, -3914, -4153, -4345, -4482, -4559, -4571, -4513, -4384, -4179, -3899, -3543, -3118, -2640, -2133, -1626, -1145, -701, -298, 66, 402, 710, 994, 1252, 1482, 1683, 1852, 1990, 2096, 2174, 2228},
    { 1925, 1959, 1981, 1995, 2002, 2003, 1997, 1986, 1972, 1957, 1946, 1939, 1937, 1937, 1934, 1914, 1861, 1759, 1591, 1345, 1020, 624, 177, -291, -748, -1166, -1521, -1805, -2021, -2177, -2285, -2354, -2389, -2392, -2365, -2320, -2281, -2279, -2343, -2483, -2690, -2937, -3195, -3438, -3645, -3802, -3899, -3931, -3893, -3784, -3606, -3361, -3052, -2686, -2276, -1845, -1417, -1019, -664, -352, -76, 174, 412, 640, 859, 1067, 1258, 1430, 1580, 1704, 1802, 1874, 1925},
    { 1677, 1707, 1728, 1743, 1754, 1759, 1757, 1748, 1734, 1716, 1696, 1680, 1668, 1660, 1652, 1632, 1584, 1487, 1323, 1079, 752, 350, -101, -572, -1026, -1431, -1769, -2032, -2226, -2363, -2454, -2508, -2526, -2503, -2434, -2323, -2191, -2074, -2014, -2038, -2151, -2333, -2550, -2769, -2962, -3107, -3191, -3206, -3150, -3027, -2842, -2601, -2309, -1976, -1615, -1250, -905, -601, -346, -133, 52, 225, 397, 572, 748, 920, 1083, 1233, 1365, 1477, 1566, 1631, 1677},
    { 1473, 1498, 1515, 1529, 1541, 1549, 1551, 1545, 1532, 1512, 1488, 1464, 1443, 1427, 1413, 1390, 1340, 1243, 1079, 833, 503, 102, -346, -807, -1244, -1627, -1939, -2176, -2343, -2454, -2518, -2543, -2528, -2463, -2343, -2169, -1958, -1745, -1577, -1491, -1505, -1613, -1787, -1989, -2183, -2338, -2435, -2464, -2423, -2319, -2161, -1954, -1707, -1425, -1123, -822, -548, -319, -139, 2, 122, 239, 366, 505, 653, 801, 944, 1076, 1195, 1296, 1376, 1434, 1473},
    { 1308, 1326, 1338, 1348, 1358, 1367, 1372, 1369, 1358, 1339, 1313, 1285, 1259, 1238, 1219, 1192, 1138, 1036, 867, 617, 286, -110, -548, -990, -1402, -1757, -2040, -2246, -2382, -2457, -2481, -2461, -2394, -2277, -2104, -1880, -1622, -1360, -1132, -975, -913, -952, -1075, -1253, -1445, -1614, -1735, -1791, -1783, -1716, -1600, -1441, -1245, -1018, -771, -526, -308, -135, -10, 77, 150, 229, 325, 442, 571, 703, 832, 952, 1061, 1153, 1226, 1277, 1308},
    { 1179, 1190, 1194, 1198, 1205, 1213, 1218, 1218, 1210, 1192, 1167, 1139, 1112, 1089, 1067, 1036, 976, 866, 689, 434, 104, -284, -705, -1123, -1506, -1830, -2080, -2253, -2352, -2383, -2357, -2281, -2157, -1987, -1776, -1529, -1264, -1000, -764, -582, -477, -463, -536, -677, -853, -1024, -1160, -1241, -1265, -1235, -1162, -1051, -905, -727, -528, -330, -156, -25, 59, 110, 150, 201, 277, 379, 497, 620, 740, 852, 954, 1042, 1109, 1155, 1179},
    { 1082, 1085, 1082, 1079, 1081, 1087, 1092, 1094, 1088, 1073, 1050, 1023, 997, 974, 951, 915, 847, 729, 542, 282, -45, -422, -822, -1212, -1564, -1856, -2073, -2209, -2267, -2251, -2173, -2041, -1867, -1661, -1431, -1188, -943, -707, -493, -316, -196, -148, -180, -283, -432, -591, -728, -823, -869, -870, -832, -761, -657, -523, -366, -207, -68, 30, 85, 109, 126, 159, 221, 314, 425, 544, 660, 769, 869, 955, 1020, 1062, 1082},
    { 1011, 1010, 1000, 991, 987, 990, 996, 999, 995, 983, 963, 938, 914, 891, 865, 822, 745, 615, 420, 156, -167, -530, -906, -1268, -1589, -1847, -2029, -2128, -2145, -2084, -1960, -1785, -1577, -1351, -1121, -896, -683, -484, -301, -143, -23, 40, 37, -32, -152, -292, -422, -519, -577, -598, -587, -547, -479, -381, -261, -135, -27, 45, 78, 83, 83, 104, 157, 243, 351, 467, 583, 694, 796, 884, 952, 994, 1011},
    { 961, 958, 944, 931, 924, 925, 932, 937, 937, 927, 909, 886, 862, 836, 805, 753, 663, 520, 314, 47, -269, -616, -969, -1301, -1590, -1815, -1962, -2024, -2002, -1905, -1747, -1545, -1320, -1089, -867, -664, -482, -317, -165, -29, 82, 153, 168, 123, 28, -91, -209, -304, -366, -398, -405, -389, -348, -281, -193, -98, -17, 32, 46, 36, 25, 36, 81, 162, 267, 383, 502, 617, 726, 821, 895, 942, 961},
    { 923, 924, 911, 897, 889, 891, 900, 910, 914, 908, 892, 869, 842, 811, 769, 702, 596, 438, 220, -49, -360, -690, -1019, -1322, -1578, -1768, -1879, -1906, -1852, -1728, -1550, -1337, -1107, -880, -670, -487, -329, -192, -66, 50, 151, 223, 248, 220, 145, 42, -63, -151, -214, -251, -268, -268, -249, -208, -148, -82, -28, 0, -2, -24, -46, -44, -7, 67, 168, 285, 408, 531, 648, 754, 839, 896, 923},
    { 888, 900, 895, 885, 881, 887, 901, 916, 926, 925, 911, 886, 854, 813, 756, 671, 545, 367, 137, -138, -443, -759, -1064, -1337, -1559, -1713, -1788, -1784, -1705, -1565, -1379, -1164, -939, -720, -523, -354, -214, -96, 10, 111, 201, 270, 300, 284, 223, 135, 40, -40, -100, -139, -163, -173, -170, -150, -116, -77, -48, -42, -61, -97, -129, -138, -110, -44, 52, 169, 296, 427, 556, 675, 776, 848, 888},
    { 848, 878, 888, 890, 894, 908, 930, 953, 970, 974, 962, 936, 897, 843, 767, 660, 510, 310, 63, -220, -523, -826, -1108, -1352, -1538, -1656, -1698, -1666, -1569, -1420, -1234, -1026, -810, -601, -413, -255, -126, -20, 73, 160, 241, 305, 338, 330, 281, 205, 121, 46, -9, -48, -74, -92, -101, -99, -89, -76, -73, -89, -127, -178, -223, -244, -228, -172, -82, 32, 162, 301, 442, 577, 696, 788, 848},
    { 795, 850, 883, 904, 924, 950, 983, 1016, 1040, 1050, 1040, 1012, 964, 895, 800, 667, 491, 267, 0, -294, -599, -893, -1156, -1370, -1523, -1605, -1617, -1562, -1452, -1300, -1118, -919, -713, -514, -334, -182, -58, 40, 126, 205, 278, 337, 371, 369, 331, 266, 192, 125, 73, 35, 7, -15, -34, -48, -60, -73, -96, -137, -197, -265, -325, -360, -358, -314, -232, -121, 10, 156, 308, 458, 595, 710, 795},
    { 725, 810, 872, 920, 963, 1007, 1053, 1097, 1129, 1144, 1137, 1106, 1050, 966, 849, 692, 488, 237, -51, -362, -673, -962, -1208, -1397, -1519, -1570, -1554, -1480, -1361, -1208, -1032, -841, -645, -454, -279, -129, -7, 90, 172, 245, 313, 369, 403, 408, 381, 329, 267, 209, 162, 125, 95, 67, 37, 7, -25, -65, -117, -185, -268, -356, -434, -486, -498, -466, -394, -287, -155, -4, 156, 320, 475, 612, 725},
    { 640, 757, 853, 933, 1004, 1071, 1134, 1189, 1230, 1250, 1244, 1210, 1146, 1048, 911, 729, 497, 218, -95, -425, -746, -1034, -1269, -1437, -1532, -1558, -1520, -1431, -1305, -1151, -978, -794, -604, -418, -246, -95, 29, 129, 212, 284, 349, 404, 441, 454, 440, 404, 357, 309, 268, 232, 199, 163, 122, 73, 16, -51, -134, -232, -342, -453, -551, -618, -645, -625, -561, -459, -327, -172, -4, 170, 341, 500, 640},
    { 547, 695, 825, 940, 1043, 1136, 1218, 1287, 1336, 1361, 1356, 1320, 1248, 1136, 979, 772, 512, 204, -137, -489, -824, -1115, -1342, -1494, -1571, -1577, -1523, -1423, -1290, -1133, -961, -779, -592, -407, -234, -80, 50, 157, 245, 321, 388, 446, 489, 514, 516, 499, 470, 436, 402, 367, 329, 282, 225, 154, 69, -31, -147, -279, -419, -555, -673, -757, -796, -786, -728, -629, -497, -339, -164, 18, 203, 381, 547},
    { 455, 632, 794, 942, 1077, 1196, 1300, 1383, 1443, 1473, 1471, 1432, 1352, 1227, 1050, 818, 528, 188, -183, -561, -913, -1211, -1436, -1579, -1642, -1635, -1570, -1461, -1321, -1160, -984, -800, -611, -424, -246, -85, 53, 171, 270, 356, 432, 498, 554, 594, 618, 624, 616, 598, 572, 538, 492, 431, 353, 254, 136, -2, -158, -327, -500, -664, -802, -900, -949, -945, -890, -792, -658, -496, -315, -123, 73, 268, 455},
    { 376, 576, 766, 943, 1105, 1251, 1375, 1476, 1548, 1587, 1588, 1548, 1461, 1322, 1124, 863, 539, 161, -247, -655, -1028, -1336, -1562, -1699, -1755, -1739, -1665, -1549, -1402, -1235, -1052, -861, -666, -472, -286, -115, 38, 172, 288, 391, 483, 567, 642, 704, 753, 785, 802, 802, 786, 753, 698, 619, 514, 381, 222, 39, -163, -376, -586, -778, -936, -1046, -1101, -1099, -1044, -943, -805, -637, -450, -248, -40, 169, 376},
    { 314, 533, 745, 946, 1132, 1300, 1446, 1565, 1652, 1702, 1711, 1671, 1578, 1424, 1201, 905, 538, 114, -340, -786, -1185, -1507, -1735, -1870, -1920, -1897, -1816, -1693, -1538, -1361, -1168, -967, -761, -556, -357, -170, 2, 158, 299, 428, 546, 657, 759, 850, 929, 991, 1034, 1055, 1051, 1019, 955, 856, 719, 546, 337, 99, -158, -422, -674, -896, -1073, -1193, -1251, -1247, -1188, -1081, -935, -760, -564, -352, -133, 90, 314},
    { 268, 504, 733, 953, 1160, 1348, 1514, 1652, 1756, 1821, 1839, 1804, 1705, 1534, 1281, 941, 518, 30, -484, -979, -1410, -1747, -1979, -2110, -2151, -2120, -2030, -1896, -1730, -1540, -1334, -1118, -897, -675, -458, -249, -51, 134, 308, 472, 626, 772, 909, 1036, 1149, 1244, 1317, 1361, 1373, 1345, 1274, 1155, 985, 764, 496, 192, -132, -456, -757, -1014, -1211, -1338, -1396, -1388, -1321, -1205, -1050, -866, -659, -437, -205, 31, 268},
    { 235, 485, 729, 965, 1189, 1395, 1580, 1737, 1860, 1941, 1972, 1942, 1838, 1647, 1355, 955, 454, -120, -716, -1273, -1740, -2090, -2319, -2439, -2466, -2418, -2312, -2162, -1979, -1772, -1547, -1312, -1070, -826, -583, -345, -114, 107, 322, 527, 725, 914, 1094, 1262, 1415, 1547, 1652, 1725, 1758, 1743, 1673, 1539, 1337, 1065, 730, 347, -60, -460, -822, -1121, -1341, -1477, -1535, -1520, -1445, -1319, -1154, -959, -741, -508, -264, -15, 235},
    { 204, 467, 725, 976, 1215, 1438, 1641, 1816, 1957, 2054, 2096, 2070, 1956, 1736, 1389, 903, 288, -407, -1109, -1735, -2230, -2577, -2786, -2877, -2874, -2797, -2663, -2487, -2278, -2046, -1796, -1535, -1265, -992, -718, -445, -175, 89, 348, 601, 846, 1083, 1310, 1523, 1720, 1894, 2039, 2149, 2214, 2225, 2170, 2037, 1816, 1501, 1095, 619, 107, -392, -836, -1192, -1446, -1599, -1661, -1643, -1561, -1427, -1253, -1047, -819, -575, -320, -59, 204},
    { 162, 437, 708, 972, 1226, 1463, 1680, 1870, 2024, 2131, 2177, 2142, 2001, 1725, 1283, 658, -125, -984, -1797, -2463, -2942, -3242, -3392, -3424, -3367, -3242, -3065, -2850, -2605, -2339, -2056, -1761, -1459, -1150, -839, -528, -217, 91, 396, 696, 989, 1275, 1550, 1811, 2055, 2277, 2472, 2630, 2745, 2802, 2790, 2690, 2483, 2155, 1698, 1128, 488, -149, -717, -1168, -1485, -1675, -1755, -1746, -1665, -1529, -1349, -1137, -902, -648, -384, -112, 162},
    { 94, 377, 656, 928, 1189, 1433, 1655, 1846, 1996, 2090, 2109, 2023, 1797, 1383, 740, -134, -1155, -2153, -2971, -3547, -3898, -4069, -4104, -4039, -3901, -3707, -3473, -3207, -2918, -2610, -2288, -1956, -1617, -1272, -923, -573, -222, 126, 473, 817, 1155, 1486, 1807, 2117, 2412, 2688, 2940, 3162, 3346, 3479, 3549, 3535, 3414, 3156, 2733, 2131, 1377, 553, -224, -862, -1321, -1609, -1753, -1783, -1726, -1604, -1432, -1224, -988, -733, -464, -186, 94},
    { -28, 242, 509, 766, 1008, 1227, 1414, 1554, 1632, 1619, 1481, 1165, 611, -228, -1320, -2492, -3511, -4251, -4710, -4946, -5017, -4971, -4840, -4647, -4407, -4132, -3831, -3508, -3169, -2818, -2456, -2087, -1712, -1332, -949, -565, -179, 205, 588, 969, 1347, 1719, 2085, 2443, 2791, 3126, 3444, 3743, 4016, 4256, 4454, 4595, 4661, 4626, 4450, 4089, 3492, 2643, 1612, 570, -303, -930, -1320, -1520, -1580, -1538, -1422, -1254, -1048, -814, -562, -298, -28},
    { -522, -454, -410, -414, -495, -693, -1058, -1644, -2486, -3542, -4651, -5614, -6321, -6768, -7004, -7082, -7043, -6920, -6733, -6498, -6226, -5925, -5601, -5259, -4903, -4533, -4154, -3766, -3372, -2971, -2566, -2157, -1745, -1330, -913, -495, -77, 341, 760, 1178, 1595, 2011, 2424, 2834, 3240, 3642, 4039, 4429, 4811, 5184, 5545, 5892, 6220, 6526, 6802, 7039, 7224, 7336, 7345, 7203, 6836, 6142, 5026, 3551, 2048, 873, 109, -331, -554, -639, -639, -591, -522},
    { -17837, -17337, -16837, -16337, -15837, -15337, -14837, -14337, -13837, -13337, -12837, -12337, -11837, -11337, -10837, -10337, -9837, -9337, -8837, -8337, -7837, -7337, -6837, -6337, -5837, -5337, -4837, -4337, -3837, -3337, -2837, -2337, -1837, -1337, -837, -337, 162, 662, 1162, 1662, 2162, 2662, 3162, 3662, 4162, 4662, 5162, 5662, 6162, 6662, 7162, 7662, 8162, 8662, 9162, 9662, 10162, 10662, 11162, 11662, 12162, 12662, 13162, 13662, 14162, 14662, 15162, 15662, 16162, 16662, 17162, 17662, -17837}
};

#endif
// code.h
// Generated by decompiling code.bin
// using Reko decompiler version 0.9.0.0.

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (800004FC real96 r800004FC) (80000508 real96 r80000508) (80000514 real96 r80000514) (80000520 real96 r80000520) (8000052C real96 r8000052C) (80000538 real96 r80000538))
	globals_t (in globals : (ptr32 (struct "Globals")))
Eq_2: (fn void ())
	T_2 (in fn800003CC : ptr32)
	T_3 (in signature of fn800003CC : void)
Eq_51: (fn real96 (real96, real96))
	T_51 (in fn80000132 : ptr32)
	T_52 (in signature of fn80000132 : void)
	T_88 (in fn80000132 : ptr32)
	T_122 (in fn80000132 : ptr32)
Eq_57: (fn real96 (real96))
	T_57 (in fn8000018E : ptr32)
	T_58 (in signature of fn8000018E : void)
	T_93 (in fn8000018E : ptr32)
	T_124 (in fn8000018E : ptr32)
Eq_113: (fn real96 (real96))
	T_113 (in fn800001F2 : ptr32)
	T_114 (in signature of fn800001F2 : void)
	T_126 (in fn800001F2 : ptr32)
Eq_116: (fn real96 (real96))
	T_116 (in fn800002AE : ptr32)
	T_117 (in signature of fn800002AE : void)
	T_128 (in fn800002AE : ptr32)
Eq_130: (fn void (real96))
	T_130 (in fn8000036C : ptr32)
	T_131 (in signature of fn8000036C : void)
// Type Variables ////////////
globals_t: (in globals : (ptr32 (struct "Globals")))
  Class: Eq_1
  DataType: (ptr32 Eq_1)
  OrigDataType: (ptr32 (struct "Globals"))
T_2: (in fn800003CC : ptr32)
  Class: Eq_2
  DataType: (ptr32 Eq_2)
  OrigDataType: (ptr32 (fn T_4 ()))
T_3: (in signature of fn800003CC : void)
  Class: Eq_2
  DataType: (ptr32 Eq_2)
  OrigDataType: 
T_4: (in fn800003CC() : void)
  Class: Eq_4
  DataType: void
  OrigDataType: void
T_5: (in fp0 : real96)
  Class: Eq_5
  DataType: real96
  OrigDataType: real96
T_6: (in rArg04 : real96)
  Class: Eq_6
  DataType: real96
  OrigDataType: real96
T_7: (in rArg10 : real96)
  Class: Eq_6
  DataType: real96
  OrigDataType: real96
T_8: (in fp0_12 : real96)
  Class: Eq_5
  DataType: real96
  OrigDataType: real96
T_9: (in 800004FC : ptr32)
  Class: Eq_9
  DataType: (ptr32 real96)
  OrigDataType: (ptr32 (struct (0 T_10 t0000)))
T_10: (in Mem11[0x800004FC:real96] : real96)
  Class: Eq_5
  DataType: real96
  OrigDataType: real96
T_11: (in dwLoc14_59 : word32)
  Class: Eq_11
  DataType: word32
  OrigDataType: word32
T_12: (in 0x00000000 : word32)
  Class: Eq_11
  DataType: word32
  OrigDataType: word32
T_13: (in rLoc10_71 : real96)
  Class: Eq_13
  DataType: real96
  OrigDataType: real96
T_14: (in rLoc10_71 * rArg04 : real96)
  Class: Eq_5
  DataType: real96
  OrigDataType: real96
T_15: (in 0x00000001 : word32)
  Class: Eq_15
  DataType: word32
  OrigDataType: word32
T_16: (in dwLoc14_59 + 0x00000001 : word32)
  Class: Eq_11
  DataType: word32
  OrigDataType: word32
T_17: (in SLICE(fp0_12, word32, 0) : word32)
  Class: Eq_17
  DataType: word32
  OrigDataType: word32
T_18: (in SLICE(fp0_12, word32, 32) : word32)
  Class: Eq_18
  DataType: word32
  OrigDataType: word32
T_19: (in SLICE(fp0_12, word32, 64) : word32)
  Class: Eq_19
  DataType: word32
  OrigDataType: word32
T_20: (in SEQ(SLICE(fp0_12, word32, 0), SLICE(fp0_12, word32, 32), SLICE(fp0_12, word32, 64)) : real96)
  Class: Eq_13
  DataType: real96
  OrigDataType: real96
T_21: (in (real96) dwLoc14_59 : real96)
  Class: Eq_6
  DataType: real96
  OrigDataType: real96
T_22: (in (real96) dwLoc14_59 >= rArg10 : bool)
  Class: Eq_22
  DataType: bool
  OrigDataType: bool
T_23: (in fp0 : real96)
  Class: Eq_23
  DataType: real96
  OrigDataType: real96
T_24: (in rArg04 : real96)
  Class: Eq_6
  DataType: real96
  OrigDataType: real96
T_25: (in fp0_12 : real96)
  Class: Eq_23
  DataType: real96
  OrigDataType: real96
T_26: (in 80000508 : ptr32)
  Class: Eq_26
  DataType: (ptr32 real96)
  OrigDataType: (ptr32 (struct (0 T_27 t0000)))
T_27: (in Mem11[0x80000508:real96] : real96)
  Class: Eq_23
  DataType: real96
  OrigDataType: real96
T_28: (in dwLoc14_59 : int32)
  Class: Eq_28
  DataType: int32
  OrigDataType: int32
T_29: (in 1 : int32)
  Class: Eq_28
  DataType: int32
  OrigDataType: int32
T_30: (in rLoc10_71 : real96)
  Class: Eq_30
  DataType: real96
  OrigDataType: real96
T_31: (in (real96) dwLoc14_59 : real96)
  Class: Eq_31
  DataType: real96
  OrigDataType: real96
T_32: (in (real80) (real96) dwLoc14_59 : real80)
  Class: Eq_32
  DataType: real80
  OrigDataType: real80
T_33: (in rLoc10_71 * (real80) ((real96) dwLoc14_59) : real96)
  Class: Eq_23
  DataType: real96
  OrigDataType: real96
T_34: (in 0x00000001 : word32)
  Class: Eq_34
  DataType: word32
  OrigDataType: word32
T_35: (in dwLoc14_59 + 0x00000001 : word32)
  Class: Eq_28
  DataType: int32
  OrigDataType: int32
T_36: (in SLICE(fp0_12, word32, 0) : word32)
  Class: Eq_36
  DataType: word32
  OrigDataType: word32
T_37: (in SLICE(fp0_12, word32, 32) : word32)
  Class: Eq_37
  DataType: word32
  OrigDataType: word32
T_38: (in SLICE(fp0_12, word32, 64) : word32)
  Class: Eq_38
  DataType: word32
  OrigDataType: word32
T_39: (in SEQ(SLICE(fp0_12, word32, 0), SLICE(fp0_12, word32, 32), SLICE(fp0_12, word32, 64)) : real96)
  Class: Eq_30
  DataType: real96
  OrigDataType: real96
T_40: (in (real96) dwLoc14_59 : real96)
  Class: Eq_6
  DataType: real96
  OrigDataType: real96
T_41: (in (real96) dwLoc14_59 > rArg04 : bool)
  Class: Eq_41
  DataType: bool
  OrigDataType: bool
T_42: (in fp0 : real96)
  Class: Eq_6
  DataType: real96
  OrigDataType: real96
T_43: (in rArg04 : real96)
  Class: Eq_6
  DataType: real96
  OrigDataType: real96
T_44: (in rLoc1C_109 : real96)
  Class: Eq_44
  DataType: real96
  OrigDataType: real96
T_45: (in 80000514 : ptr32)
  Class: Eq_45
  DataType: (ptr32 real96)
  OrigDataType: (ptr32 (struct (0 T_46 t0000)))
T_46: (in Mem17[0x80000514:real96] : real96)
  Class: Eq_44
  DataType: real96
  OrigDataType: real96
T_47: (in dwLoc20_110 : int32)
  Class: Eq_47
  DataType: int32
  OrigDataType: int32
T_48: (in 3 : int32)
  Class: Eq_47
  DataType: int32
  OrigDataType: int32
T_49: (in fp1_93 : real96)
  Class: Eq_6
  DataType: real96
  OrigDataType: real96
T_50: (in fp0_91 : real96)
  Class: Eq_44
  DataType: real96
  OrigDataType: real96
T_51: (in fn80000132 : ptr32)
  Class: Eq_51
  DataType: (ptr32 Eq_51)
  OrigDataType: (ptr32 (fn T_54 (T_43, T_53)))
T_52: (in signature of fn80000132 : void)
  Class: Eq_51
  DataType: (ptr32 Eq_51)
  OrigDataType: 
T_53: (in (real96) dwLoc20_110 : real96)
  Class: Eq_6
  DataType: real96
  OrigDataType: real96
T_54: (in fn80000132(rArg04, (real96) dwLoc20_110) : real96)
  Class: Eq_54
  DataType: real96
  OrigDataType: real96
T_55: (in (real80) fn80000132(rArg04, (real96) dwLoc20_110) : real80)
  Class: Eq_55
  DataType: real80
  OrigDataType: real80
T_56: (in (real96) (real80) fn80000132(rArg04, (real96) dwLoc20_110) : real96)
  Class: Eq_56
  DataType: real96
  OrigDataType: real96
T_57: (in fn8000018E : ptr32)
  Class: Eq_57
  DataType: (ptr32 Eq_57)
  OrigDataType: (ptr32 (fn T_60 (T_59)))
T_58: (in signature of fn8000018E : void)
  Class: Eq_57
  DataType: (ptr32 Eq_57)
  OrigDataType: 
T_59: (in (real96) dwLoc20_110 : real96)
  Class: Eq_6
  DataType: real96
  OrigDataType: real96
T_60: (in fn8000018E((real96) dwLoc20_110) : real96)
  Class: Eq_60
  DataType: real96
  OrigDataType: real96
T_61: (in (real80) fn8000018E((real96) dwLoc20_110) : real80)
  Class: Eq_61
  DataType: real80
  OrigDataType: real80
T_62: (in (real96) (real80) fn80000132(rArg04, (real96) dwLoc20_110) / (real80) fn8000018E((real96) dwLoc20_110) : real96)
  Class: Eq_62
  DataType: real96
  OrigDataType: real96
T_63: (in (real80) ((real96) (real80) fn80000132(rArg04, (real96) dwLoc20_110) / (real80) fn8000018E((real96) dwLoc20_110)) : real80)
  Class: Eq_63
  DataType: real80
  OrigDataType: real80
T_64: (in (real96) (real80) ((real96) (real80) fn80000132(rArg04, (real96) dwLoc20_110) / (real80) fn8000018E((real96) dwLoc20_110)) : real96)
  Class: Eq_64
  DataType: real96
  OrigDataType: real96
T_65: (in (real96) (real80) ((real96) (real80) fn80000132(rArg04, (real96) dwLoc20_110) / (real80) fn8000018E((real96) dwLoc20_110)) * rLoc1C_109 : real96)
  Class: Eq_44
  DataType: real96
  OrigDataType: real96
T_66: (in rLoc10_127 : real96)
  Class: Eq_66
  DataType: real96
  OrigDataType: real96
T_67: (in (real80) fp0_91 : real80)
  Class: Eq_67
  DataType: real80
  OrigDataType: real80
T_68: (in rLoc10_127 + (real80) fp0_91 : real96)
  Class: Eq_6
  DataType: real96
  OrigDataType: real96
T_69: (in 0x00000002 : word32)
  Class: Eq_69
  DataType: word32
  OrigDataType: word32
T_70: (in dwLoc20_110 + 0x00000002 : word32)
  Class: Eq_47
  DataType: int32
  OrigDataType: int32
T_71: (in SLICE(fp1_93, word32, 0) : word32)
  Class: Eq_71
  DataType: word32
  OrigDataType: word32
T_72: (in SLICE(fp1_93, word32, 32) : word32)
  Class: Eq_72
  DataType: word32
  OrigDataType: word32
T_73: (in SLICE(fp1_93, word32, 64) : word32)
  Class: Eq_73
  DataType: word32
  OrigDataType: word32
T_74: (in SEQ(SLICE(fp1_93, word32, 0), SLICE(fp1_93, word32, 32), SLICE(fp1_93, word32, 64)) : real96)
  Class: Eq_66
  DataType: real96
  OrigDataType: real96
T_75: (in 100 : int32)
  Class: Eq_47
  DataType: int32
  OrigDataType: int32
T_76: (in dwLoc20_110 > 100 : bool)
  Class: Eq_76
  DataType: bool
  OrigDataType: bool
T_77: (in fp0 : real96)
  Class: Eq_77
  DataType: real96
  OrigDataType: real96
T_78: (in rArg04 : real96)
  Class: Eq_6
  DataType: real96
  OrigDataType: real96
T_79: (in fp0_15 : real96)
  Class: Eq_77
  DataType: real96
  OrigDataType: real96
T_80: (in 80000520 : ptr32)
  Class: Eq_80
  DataType: (ptr32 real96)
  OrigDataType: (ptr32 (struct (0 T_81 t0000)))
T_81: (in Mem14[0x80000520:real96] : real96)
  Class: Eq_77
  DataType: real96
  OrigDataType: real96
T_82: (in rLoc1C_108 : real96)
  Class: Eq_82
  DataType: real96
  OrigDataType: real96
T_83: (in 8000052C : ptr32)
  Class: Eq_83
  DataType: (ptr32 real96)
  OrigDataType: (ptr32 (struct (0 T_84 t0000)))
T_84: (in Mem17[0x8000052C:real96] : real96)
  Class: Eq_82
  DataType: real96
  OrigDataType: real96
T_85: (in dwLoc20_109 : int32)
  Class: Eq_85
  DataType: int32
  OrigDataType: int32
T_86: (in 2 : int32)
  Class: Eq_85
  DataType: int32
  OrigDataType: int32
T_87: (in fp0_91 : real96)
  Class: Eq_82
  DataType: real96
  OrigDataType: real96
T_88: (in fn80000132 : ptr32)
  Class: Eq_51
  DataType: (ptr32 Eq_51)
  OrigDataType: (ptr32 (fn T_90 (T_78, T_89)))
T_89: (in (real96) dwLoc20_109 : real96)
  Class: Eq_6
  DataType: real96
  OrigDataType: real96
T_90: (in fn80000132(rArg04, (real96) dwLoc20_109) : real96)
  Class: Eq_54
  DataType: real96
  OrigDataType: real96
T_91: (in (real80) fn80000132(rArg04, (real96) dwLoc20_109) : real80)
  Class: Eq_91
  DataType: real80
  OrigDataType: real80
T_92: (in (real96) (real80) fn80000132(rArg04, (real96) dwLoc20_109) : real96)
  Class: Eq_92
  DataType: real96
  OrigDataType: real96
T_93: (in fn8000018E : ptr32)
  Class: Eq_57
  DataType: (ptr32 Eq_57)
  OrigDataType: (ptr32 (fn T_95 (T_94)))
T_94: (in (real96) dwLoc20_109 : real96)
  Class: Eq_6
  DataType: real96
  OrigDataType: real96
T_95: (in fn8000018E((real96) dwLoc20_109) : real96)
  Class: Eq_60
  DataType: real96
  OrigDataType: real96
T_96: (in (real80) fn8000018E((real96) dwLoc20_109) : real80)
  Class: Eq_96
  DataType: real80
  OrigDataType: real80
T_97: (in (real96) (real80) fn80000132(rArg04, (real96) dwLoc20_109) / (real80) fn8000018E((real96) dwLoc20_109) : real96)
  Class: Eq_97
  DataType: real96
  OrigDataType: real96
T_98: (in (real80) ((real96) (real80) fn80000132(rArg04, (real96) dwLoc20_109) / (real80) fn8000018E((real96) dwLoc20_109)) : real80)
  Class: Eq_98
  DataType: real80
  OrigDataType: real80
T_99: (in (real96) (real80) ((real96) (real80) fn80000132(rArg04, (real96) dwLoc20_109) / (real80) fn8000018E((real96) dwLoc20_109)) : real96)
  Class: Eq_99
  DataType: real96
  OrigDataType: real96
T_100: (in (real96) (real80) ((real96) (real80) fn80000132(rArg04, (real96) dwLoc20_109) / (real80) fn8000018E((real96) dwLoc20_109)) * rLoc1C_108 : real96)
  Class: Eq_82
  DataType: real96
  OrigDataType: real96
T_101: (in rLoc10_126 : real96)
  Class: Eq_101
  DataType: real96
  OrigDataType: real96
T_102: (in (real80) fp0_91 : real80)
  Class: Eq_102
  DataType: real80
  OrigDataType: real80
T_103: (in rLoc10_126 + (real80) fp0_91 : real96)
  Class: Eq_77
  DataType: real96
  OrigDataType: real96
T_104: (in 0x00000002 : word32)
  Class: Eq_104
  DataType: word32
  OrigDataType: word32
T_105: (in dwLoc20_109 + 0x00000002 : word32)
  Class: Eq_85
  DataType: int32
  OrigDataType: int32
T_106: (in SLICE(fp0_15, word32, 0) : word32)
  Class: Eq_106
  DataType: word32
  OrigDataType: word32
T_107: (in SLICE(fp0_15, word32, 32) : word32)
  Class: Eq_107
  DataType: word32
  OrigDataType: word32
T_108: (in SLICE(fp0_15, word32, 64) : word32)
  Class: Eq_108
  DataType: word32
  OrigDataType: word32
T_109: (in SEQ(SLICE(fp0_15, word32, 0), SLICE(fp0_15, word32, 32), SLICE(fp0_15, word32, 64)) : real96)
  Class: Eq_101
  DataType: real96
  OrigDataType: real96
T_110: (in 100 : int32)
  Class: Eq_85
  DataType: int32
  OrigDataType: int32
T_111: (in dwLoc20_109 > 100 : bool)
  Class: Eq_111
  DataType: bool
  OrigDataType: bool
T_112: (in rArg04 : real96)
  Class: Eq_6
  DataType: real96
  OrigDataType: real96
T_113: (in fn800001F2 : ptr32)
  Class: Eq_113
  DataType: (ptr32 Eq_113)
  OrigDataType: (ptr32 (fn T_115 (T_112)))
T_114: (in signature of fn800001F2 : void)
  Class: Eq_113
  DataType: (ptr32 Eq_113)
  OrigDataType: 
T_115: (in fn800001F2(rArg04) : real96)
  Class: Eq_115
  DataType: real96
  OrigDataType: real96
T_116: (in fn800002AE : ptr32)
  Class: Eq_116
  DataType: (ptr32 Eq_116)
  OrigDataType: (ptr32 (fn T_118 (T_112)))
T_117: (in signature of fn800002AE : void)
  Class: Eq_116
  DataType: (ptr32 Eq_116)
  OrigDataType: 
T_118: (in fn800002AE(rArg04) : real96)
  Class: Eq_118
  DataType: real96
  OrigDataType: real96
T_119: (in fp0_8 : real96)
  Class: Eq_6
  DataType: real96
  OrigDataType: real96
T_120: (in 80000538 : ptr32)
  Class: Eq_120
  DataType: (ptr32 real96)
  OrigDataType: (ptr32 (struct (0 T_121 t0000)))
T_121: (in Mem5[0x80000538:real96] : real96)
  Class: Eq_6
  DataType: real96
  OrigDataType: real96
T_122: (in fn80000132 : ptr32)
  Class: Eq_51
  DataType: (ptr32 Eq_51)
  OrigDataType: (ptr32 (fn T_123 (T_119, T_119)))
T_123: (in fn80000132(fp0_8, fp0_8) : real96)
  Class: Eq_54
  DataType: real96
  OrigDataType: real96
T_124: (in fn8000018E : ptr32)
  Class: Eq_57
  DataType: (ptr32 Eq_57)
  OrigDataType: (ptr32 (fn T_125 (T_119)))
T_125: (in fn8000018E(fp0_8) : real96)
  Class: Eq_60
  DataType: real96
  OrigDataType: real96
T_126: (in fn800001F2 : ptr32)
  Class: Eq_113
  DataType: (ptr32 Eq_113)
  OrigDataType: (ptr32 (fn T_127 (T_119)))
T_127: (in fn800001F2(fp0_8) : real96)
  Class: Eq_115
  DataType: real96
  OrigDataType: real96
T_128: (in fn800002AE : ptr32)
  Class: Eq_116
  DataType: (ptr32 Eq_116)
  OrigDataType: (ptr32 (fn T_129 (T_119)))
T_129: (in fn800002AE(fp0_8) : real96)
  Class: Eq_118
  DataType: real96
  OrigDataType: real96
T_130: (in fn8000036C : ptr32)
  Class: Eq_130
  DataType: (ptr32 Eq_130)
  OrigDataType: (ptr32 (fn T_132 (T_119)))
T_131: (in signature of fn8000036C : void)
  Class: Eq_130
  DataType: (ptr32 Eq_130)
  OrigDataType: 
T_132: (in fn8000036C(fp0_8) : void)
  Class: Eq_132
  DataType: void
  OrigDataType: void
*/
typedef struct Globals {
	real96 r800004FC;	// 800004FC
	real96 r80000508;	// 80000508
	real96 r80000514;	// 80000514
	real96 r80000520;	// 80000520
	real96 r8000052C;	// 8000052C
	real96 r80000538;	// 80000538
} Eq_1;

typedef void (Eq_2)();

typedef real96 (Eq_51)(real96, real96);

typedef real96 (Eq_57)(real96);

typedef real96 (Eq_113)(real96);

typedef real96 (Eq_116)(real96);

typedef void (Eq_130)(real96);


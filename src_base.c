const char src_base[] = {
 32, 110, 111, 114, 109,  97, 108,  32,  48,  32, 118,  97, 108, 117, 101,  32, 110, 117, 108, 108, 
 32,  48,  32, 118,  97, 108, 117, 101,  32, 102,  97, 108, 115, 101,  32,  45,  49,  32, 118,  97, 
108, 117, 101,  32, 116, 114, 117, 101,  32,  58,  32,  99, 101, 108, 108,  43,  32,  99, 101, 108, 
108,  32,  43,  32,  59,  32,  58,  32,  99, 101, 108, 108,  45,  32,  99, 101, 108, 108,  32,  45, 
 32,  59,  32,  58,  32,  60,  61,  32, 109, 121,  33,  32,  49,  45,  32, 109, 121,  32,  60,  32, 
 59,  32,  58,  32,  62,  61,  32, 109, 121,  33,  32,  49,  43,  32, 109, 121,  32,  62,  32,  59, 
 32,  58,  32,  50, 100, 117, 112,  32, 111, 118, 101, 114,  32, 111, 118, 101, 114,  32,  59,  32, 
 58,  32,  50, 100, 114, 111, 112,  32, 100, 114, 111, 112,  32, 100, 114, 111, 112,  32,  59,  32, 
 58,  32, 119, 104,  97, 116,  32,  34,  32, 119, 104,  97, 116,  63,  32,  37, 115,  34,  32, 102, 
111, 114, 109,  97, 116,  32, 101, 114, 114, 111, 114,  32, 102,  97, 108, 115, 101,  32,  59,  32, 
 39, 119, 104,  97, 116,  32, 115, 121, 115,  58, 111, 110,  45, 119, 104,  97, 116,  32,  33,  32, 
 58,  32, 118,  97, 114, 105,  97,  98, 108, 101,  32,  99, 114, 101,  97, 116, 101,  32,  48,  32, 
 44,  32,  59,  32,  58,  32, 101, 110, 117, 109,  32, 112, 117, 115, 104,  32, 100, 117, 112,  32, 
118,  97, 108, 117, 101,  32,  49,  43,  32, 112, 111, 112,  32,  59,  32,  58,  32, 105, 110,  99, 
108, 117, 100, 101, 100,  32, 115, 108, 117, 114, 112,  32, 100, 117, 112,  32, 109, 121,  33,  32, 
101, 118,  97, 108, 117,  97, 116, 101,  32, 100, 114, 111, 112,  32, 109, 121,  32, 102, 114, 101, 
101,  32,  59,  32,  58,  32, 105, 110,  99, 108, 117, 100, 101,  32, 115, 121, 115,  58, 112,  97, 
114, 115, 101,  32, 105, 110,  99, 108, 117, 100, 101, 100,  32,  59,  32,  58,  32, 119, 111, 114, 
100,  44,  32, 115, 121, 115,  58,  99, 111, 109, 112, 105, 108, 101,  32,  59,  32,  58,  32, 116, 
111, 107, 101, 110,  44,  32,  39, 115, 121, 115,  58, 108, 105, 116,  95, 116, 111, 107,  32, 119, 
111, 114, 100,  44,  32, 115, 121, 115,  58,  99, 111, 109, 112, 105, 108, 101,  32,  59,  32,  58, 
 32, 110, 117, 109,  98, 101, 114,  44,  32,  39, 115, 121, 115,  58, 108, 105, 116,  95, 110, 117, 
109,  32, 119, 111, 114, 100,  44,  32, 115, 121, 115,  58, 110,  99, 111, 109, 112, 105, 108, 101, 
 32,  59,  32,  58,  32, 115, 116, 114, 105, 110, 103,  44,  32,  39, 115, 121, 115,  58, 108, 105, 
116,  95, 115, 116, 114,  32, 119, 111, 114, 100,  44,  32, 115, 121, 115,  58, 115,  99, 111, 109, 
112, 105, 108, 101,  32,  59,  32,  58,  32, 112, 108,  97,  99, 101,  44,  32, 104, 101, 114, 101, 
 32, 111, 118, 101, 114,  32,  99, 111, 117, 110, 116,  32,  49,  43,  32,  97, 108, 108, 111, 116, 
 32, 112, 108,  97,  99, 101,  32,  59,  32,  58,  32, 115, 116, 114, 105, 110, 103,  32,  99, 114, 
101,  97, 116, 101,  32, 112, 108,  97,  99, 101,  44,  32,  59,  32, 109,  97,  99, 114, 111,  32, 
 58,  32, 116, 111,  32, 115, 121, 115,  58, 112,  97, 114, 115, 101,  32, 115, 121, 115,  58, 110, 
111, 114, 109,  97, 108, 115,  32, 115, 121, 115,  58, 102, 105, 110, 100,  32, 115, 121, 115,  58, 
109, 111, 100, 101,  32,  64,  32, 105, 102,  32, 116, 111, 107, 101, 110,  44,  32,  39, 118,  97, 
114, 121,  32, 119, 111, 114, 100,  44,  32, 101, 108, 115, 101,  32, 118,  97, 114, 121,  32, 101, 
110, 100,  32,  59,  32,  58,  32, 105, 115,  32, 115, 121, 115,  58, 112,  97, 114, 115, 101,  32, 
115, 121, 115,  58, 110, 111, 114, 109,  97, 108, 115,  32, 115, 121, 115,  58, 102, 105, 110, 100, 
 32, 115, 121, 115,  58, 109, 111, 100, 101,  32,  64,  32, 105, 102,  32,  39, 115, 121, 115,  58, 
120, 116,  45,  98, 111, 100, 121,  32, 119, 111, 114, 100,  44,  32,  39,  64,  32, 119, 111, 114, 
100,  44,  32, 116, 111, 107, 101, 110,  44,  32,  39, 115, 121, 115,  58, 120, 116,  45,  98, 111, 
100, 121,  32, 119, 111, 114, 100,  44,  32,  39,  33,  32, 119, 111, 114, 100,  44,  32, 101, 108, 
115, 101,  32, 115, 119,  97, 112,  32, 115, 121, 115,  58, 120, 116,  45,  98, 111, 100, 121,  32, 
 64,  32, 115, 119,  97, 112,  32, 115, 121, 115,  58, 120, 116,  45,  98, 111, 100, 121,  32,  33, 
 32, 101, 110, 100,  32,  59,  32, 110, 111, 114, 109,  97, 108,  32,  58,  32, 110, 111, 112,  32, 
 59,  32,  58,  32, 100, 105, 103, 105, 116,  63,  32, 100, 117, 112,  32,  52,  55,  32,  62,  32, 
115, 119,  97, 112,  32,  53,  56,  32,  60,  32,  97, 110, 100,  32,  59,  32,  58,  32,  97, 108, 
112, 104,  97,  63,  32, 100, 117, 112,  32, 109, 121,  33,  32,  54,  52,  32,  62,  32, 109, 121, 
 32,  57,  49,  32,  60,  32,  97, 110, 100,  32, 109, 121,  32,  57,  54,  32,  62,  32, 109, 121, 
 32,  49,  50,  51,  32,  60,  32,  97, 110, 100,  32, 111, 114,  32,  59,  32,  58,  32, 115, 112, 
 97,  99, 101,  63,  32, 100, 117, 112,  32, 109, 121,  33,  32,  51,  50,  32,  61,  32, 109, 121, 
 32,  57,  32,  61,  32, 111, 114,  32, 109, 121,  32,  49,  48,  32,  61,  32, 111, 114,  32, 109, 
121,  32,  49,  51,  32,  61,  32, 111, 114,  32,  59,  32,  58,  32, 104, 101, 120,  63,  32, 100, 
117, 112,  32, 109, 121,  33,  32,  54,  52,  32,  62,  32, 109, 121,  32,  55,  49,  32,  60,  32, 
 97, 110, 100,  32, 109, 121,  32,  57,  54,  32,  62,  32, 109, 121,  32,  49,  48,  51,  32,  60, 
 32,  97, 110, 100,  32, 111, 114,  32, 109, 121,  32, 100, 105, 103, 105, 116,  63,  32, 111, 114, 
 32,  59,  32,  58,  32, 112, 114, 105, 110, 116,  32, 102, 111, 114, 109,  97, 116,  32, 116, 121, 
112, 101,  32,  59,  32,  58,  32,  46,  32,  34,  37, 100,  32,  34,  32, 112, 114, 105, 110, 116, 
 32,  59,  32,  58,  32,  99, 114,  32,  49,  48,  32, 101, 109, 105, 116,  32,  59,  32,  58,  32, 
115, 112,  97,  99, 101,  32,  51,  50,  32, 101, 109, 105, 116,  32,  59,  32,  58,  32,  46, 115, 
 32, 100, 101, 112, 116, 104,  32, 100, 117, 112,  32,  34,  40,  37, 100,  41,  32,  34,  32, 112, 
114, 105, 110, 116,  32, 102, 111, 114,  32, 100, 101, 112, 116, 104,  32,  49,  45,  32, 105,  32, 
 45,  32, 112, 105,  99, 107,  32,  34,  37, 100,  32,  34,  32, 112, 114, 105, 110, 116,  32, 101, 
110, 100,  32,  59,  32,  58,  32, 100, 117, 109, 112,  32,  58,  32, 112, 114, 105, 110, 116,  32, 
102, 111, 114, 109,  97, 116,  32, 101, 114, 114, 111, 114,  32,  59,  32,  58,  32, 104, 101, 120, 
 32,  97, 116,  33,  32,  49,  54,  32, 102, 111, 114,  32,  99,  64,  43,  32,  70,  70, 104,  32, 
 97, 110, 100,  32,  34,  37,  48,  50, 120,  32,  34,  32, 112, 114, 105, 110, 116,  32, 101, 110, 
100,  32,  59,  32,  58,  32,  97, 115,  99, 105, 105,  32,  97, 116,  33,  32,  49,  54,  32, 102, 
111, 114,  32,  99,  64,  43,  32, 100, 117, 112,  32,  97, 108, 112, 104,  97,  63,  32, 111, 118, 
101, 114,  32, 100, 105, 103, 105, 116,  63,  32, 111, 114,  32,  48,  61,  32, 105, 102,  32, 100, 
114, 111, 112,  32,  52,  54,  32, 101, 110, 100,  32,  34,  37,  99,  34,  32, 112, 114, 105, 110, 
116,  32, 101, 110, 100,  32,  59,  32,  49,  54,  32,  47,  32,  49,  43,  32, 102, 111, 114,  32, 
100, 117, 112,  32,  34,  92, 110,  37,  48,  56, 120,  32,  32,  34,  32, 112, 114, 105, 110, 116, 
 32, 100, 117, 112,  32, 104, 101, 120,  32, 115, 112,  97,  99, 101,  32, 100, 117, 112,  32,  97, 
115,  99, 105, 105,  32,  49,  54,  32,  43,  32, 101, 110, 100,  32, 100, 114, 111, 112,  32,  59, 
 32,  58,  32, 119, 111, 114, 100, 115,  32,  48,  32, 115, 121, 115,  58, 108,  97, 116, 101, 115, 
116,  32,  64,  32,  98, 101, 103, 105, 110,  32, 100, 117, 112,  32, 119, 104, 105, 108, 101,  32, 
115, 121, 115,  58, 104, 101,  97, 100,  45, 120, 116,  32, 100, 117, 112,  32, 115, 121, 115,  58, 
120, 116,  45, 110,  97, 109, 101,  32,  64,  32, 116, 121, 112, 101,  32, 115, 112,  97,  99, 101, 
 32, 115, 121, 115,  58, 120, 116,  45, 108, 105, 110, 107,  32,  64,  32, 112, 117, 115, 104,  32, 
 49,  43,  32, 112, 111, 112,  32, 101, 110, 100,  32, 100, 114, 111, 112,  32,  34,  40,  37, 100, 
 32, 119, 111, 114, 100, 115,  41,  34,  32, 112, 114, 105, 110, 116,  32,  59,  32,  58,  32,  97, 
114, 114,  97, 121,  32,  99, 114, 101,  97, 116, 101,  32, 100, 117, 112,  32,  44,  32, 102, 111, 
114,  32,  48,  32,  44,  32, 101, 110, 100,  32, 100, 111, 101, 115,  32,  97, 116,  33,  32,  64, 
 43,  32,  49,  45,  32, 109, 105, 110,  32,  48,  32, 109,  97, 120,  32,  99, 101, 108, 108, 115, 
 32,  97, 116,  32,  43,  32,  59,  32,  58,  32, 115, 116,  97,  99, 107,  32, 114, 101,  99, 111, 
114, 100,  32, 102, 105, 101, 108, 100, 115,  32,  99, 101, 108, 108,  32, 102, 105, 101, 108, 100, 
 32, 115, 105, 122, 101,  32,  99, 101, 108, 108,  32, 102, 105, 101, 108, 100,  32, 100,  97, 116, 
 97,  32, 101, 110, 100,  32,  58,  32, 108,  97, 115, 116,  32,  97, 116,  33,  32,  97, 116,  32, 
115, 105, 122, 101,  32,  64,  32,  49,  45,  32,  48,  32, 109,  97, 120,  32,  99, 101, 108, 108, 
115,  32,  97, 116,  32, 100,  97, 116,  97,  32,  64,  32,  43,  32,  59,  32,  58,  32, 105, 110, 
 99,  32,  97, 116,  33,  32,  49,  32,  97, 116,  32, 115, 105, 122, 101,  32,  43,  33,  32,  97, 
116,  32, 100,  97, 116,  97,  32,  64,  32,  97, 116,  32, 115, 105, 122, 101,  32,  64,  32,  99, 
101, 108, 108, 115,  32, 114, 101, 115, 105, 122, 101,  32,  97, 116,  32, 100,  97, 116,  97,  32, 
 33,  32,  59,  32,  58,  32, 100, 101,  99,  32, 115, 105, 122, 101,  32, 100, 117, 112,  32,  64, 
 32,  49,  45,  32,  48,  32, 109,  97, 120,  32, 115, 119,  97, 112,  32,  33,  32,  59,  32,  58, 
 32, 112, 117, 115, 104,  32, 100, 117, 112,  32, 105, 110,  99,  32, 108,  97, 115, 116,  32,  33, 
 32,  59,  32,  58,  32, 112, 111, 112,  32, 100, 117, 112,  32, 115, 105, 122, 101,  32,  64,  32, 
105, 102,  32, 100, 117, 112,  32, 108,  97, 115, 116,  32,  64,  32, 115, 119,  97, 112,  32, 100, 
101,  99,  32, 101, 108, 115, 101,  32, 100, 114, 111, 112,  32,  48,  32, 101, 110, 100,  32,  59, 
 32,  58,  32, 116, 111, 112,  32, 100, 117, 112,  32, 115, 105, 122, 101,  32,  64,  32, 105, 102, 
 32, 108,  97, 115, 116,  32,  64,  32, 101, 108, 115, 101,  32, 100, 114, 111, 112,  32,  48,  32, 
101, 110, 100,  32,  59,  32,  58,  32,  98,  97, 115, 101,  32, 100,  97, 116,  97,  32,  64,  32, 
 59,  32,  58,  32, 100, 101, 112, 116, 104,  32, 115, 105, 122, 101,  32,  64,  32,  59,  32,  99, 
114, 101,  97, 116, 101,  32, 104, 101, 114, 101,  32, 102, 105, 101, 108, 100, 115,  32,  97, 108, 
108, 111, 116,  32,  99, 101, 108, 108,  32,  97, 108, 108, 111,  99,  97, 116, 101,  32, 115, 119, 
 97, 112,  32, 100,  97, 116,  97,  32,  33,  32, 100, 111, 101, 115,  32,  59,  32,  58,  32, 115, 
111, 114, 116,  32, 115, 116,  97, 116, 105,  99,  32, 118,  97, 114, 115,  32,  48,  32, 118,  97, 
108, 117, 101,  32,  99, 109, 112,  32, 101, 110, 100,  32,  58,  32, 109, 105, 100,  32, 111, 118, 
101, 114,  32,  45,  32,  50,  47,  32,  99, 101, 108, 108,  32, 110, 101, 103,  32,  97, 110, 100, 
 32,  43,  32,  59,  32,  58,  32, 101, 120,  99, 104,  32, 100, 117, 112,  32,  64,  32, 112, 117, 
115, 104,  32, 111, 118, 101, 114,  32,  64,  32, 115, 119,  97, 112,  32,  33,  32, 112, 111, 112, 
 32, 115, 119,  97, 112,  32,  33,  32,  59,  32,  58,  32, 112,  97, 114, 116,  32,  50, 100, 117, 
112,  32, 109, 105, 100,  32,  64,  32, 112, 117, 115, 104,  32,  50, 100, 117, 112,  32,  98, 101, 
103, 105, 110,  32, 115, 119,  97, 112,  32,  98, 101, 103, 105, 110,  32, 100, 117, 112,  32,  64, 
 32, 116, 111, 112,  32,  99, 109, 112,  32, 101, 120, 101,  99, 117, 116, 101,  32, 119, 104, 105, 
108, 101,  32,  99, 101, 108, 108,  43,  32, 101, 110, 100,  32, 115, 119,  97, 112,  32,  98, 101, 
103, 105, 110,  32, 116, 111, 112,  32, 111, 118, 101, 114,  32,  64,  32,  99, 109, 112,  32, 101, 
120, 101,  99, 117, 116, 101,  32, 119, 104, 105, 108, 101,  32,  99, 101, 108, 108,  45,  32, 101, 
110, 100,  32,  50, 100, 117, 112,  32,  60,  61,  32, 105, 102,  32,  50, 100, 117, 112,  32, 101, 
120,  99, 104,  32, 112, 117, 115, 104,  32,  99, 101, 108, 108,  43,  32, 112, 111, 112,  32,  99, 
101, 108, 108,  45,  32, 101, 110, 100,  32,  50, 100, 117, 112,  32,  62,  32, 117, 110, 116, 105, 
108,  32, 101, 110, 100,  32, 112, 111, 112,  32, 100, 114, 111, 112,  32,  59,  32,  58,  32, 113, 
115, 111, 114, 116,  32, 112,  97, 114, 116,  32, 115, 119,  97, 112,  32, 114, 111, 116,  32,  50, 
100, 117, 112,  32,  60,  32, 105, 102,  32, 113, 115, 111, 114, 116,  32, 101, 108, 115, 101,  32, 
 50, 100, 114, 111, 112,  32, 101, 110, 100,  32,  50, 100, 117, 112,  32,  60,  32, 105, 102,  32, 
113, 115, 111, 114, 116,  32, 101, 108, 115, 101,  32,  50, 100, 114, 111, 112,  32, 101, 110, 100, 
 32,  59,  32, 114, 111, 116,  32, 116, 111,  32,  99, 109, 112,  32, 100, 117, 112,  32,  49,  32, 
 62,  32, 105, 102,  32,  49,  45,  32,  99, 101, 108, 108, 115,  32, 111, 118, 101, 114,  32,  43, 
 32, 113, 115, 111, 114, 116,  32, 101, 108, 115, 101,  32,  50, 100, 114, 111, 112,  32, 101, 110, 
100,  32,  59,  32,  58,  32, 101, 100, 105, 116,  32, 115, 116,  97, 116, 105,  99,  32, 118,  97, 
114, 115,  32,  48,  32, 118,  97, 108, 117, 101,  32,  99,  97, 114, 101, 116,  32,  48,  32, 118, 
 97, 108, 117, 101,  32, 105, 110, 112, 117, 116,  32,  48,  32, 118,  97, 108, 117, 101,  32, 108, 
105, 109, 105, 116,  32,  99, 114, 101,  97, 116, 101,  32, 101, 115,  99, 115, 101, 113,  32,  53, 
 48,  32,  97, 108, 108, 111, 116,  32, 101, 110, 100,  32,  58,  32, 101, 115,  99,  97, 112, 101, 
 32,  58,  32, 108,  97, 115, 116,  32, 101, 115,  99, 115, 101, 113,  32, 100, 117, 112,  32, 100, 
117, 112,  32,  99, 111, 117, 110, 116,  32,  43,  32,  49,  45,  32, 109,  97, 120,  32,  99,  64, 
 32,  59,  32,  58,  32, 114, 101,  97, 100,  32, 107, 101, 121,  32, 101, 115,  99, 115, 101, 113, 
 32, 100, 117, 112,  32,  99, 111, 117, 110, 116,  32,  43,  32,  97, 116,  33,  32,  99,  33,  43, 
 32,  48,  32,  99,  33,  43,  32,  59,  32,  58,  32, 100, 111, 110, 101,  63,  32, 108,  97, 115, 
116,  32, 100, 117, 112,  32,  96,  64,  32,  62,  61,  32, 115, 119,  97, 112,  32,  96, 126,  32, 
 60,  61,  32,  97, 110, 100,  32,  59,  32,  58,  32, 115, 116,  97, 114, 116,  63,  32, 108,  97, 
115, 116,  32,  96,  91,  32,  61,  32,  59,  32,  58,  32, 109, 111, 114, 101,  32, 114, 101,  97, 
100,  32, 115, 116,  97, 114, 116,  63,  32, 105, 102,  32,  98, 101, 103, 105, 110,  32, 114, 101, 
 97, 100,  32, 100, 111, 110, 101,  63,  32, 117, 110, 116, 105, 108,  32, 101, 110, 100,  32, 101, 
110, 100,  32,  59,  32,  58,  32, 109, 111, 114, 101,  63,  32,  48,  32,  53,  48,  32, 102, 111, 
114,  32, 107, 101, 121,  63,  32, 111, 114,  32, 100, 117, 112,  32, 117, 110, 116, 105, 108,  32, 
 49,  48,  48,  48,  32, 117, 115, 101,  99,  32, 101, 110, 100,  32,  59,  32,  34,  92, 101,  34, 
 32, 101, 115,  99, 115, 101, 113,  32, 112, 108,  97,  99, 101,  32, 109, 111, 114, 101,  63,  32, 
105, 102,  32, 109, 111, 114, 101,  32, 101, 110, 100,  32, 108,  97, 115, 116,  32,  59,  32,  58, 
 32, 101, 115,  99, 115, 101, 113,  63,  32, 101, 115,  99, 115, 101, 113,  32,  49,  43,  32, 100, 
117, 112,  32,  99, 111, 117, 110, 116,  32,  99, 111, 109, 112,  97, 114, 101,  32,  48,  61,  32, 
 59,  32,  58,  32, 108, 101, 110, 103, 116, 104,  32, 105, 110, 112, 117, 116,  32,  99, 111, 117, 
110, 116,  32,  59,  32,  58,  32, 112, 111, 105, 110, 116,  32, 105, 110, 112, 117, 116,  32,  99, 
 97, 114, 101, 116,  32,  43,  32,  59,  32,  58,  32, 104, 111, 109, 101,  32,  48,  32, 116, 111, 
 32,  99,  97, 114, 101, 116,  32,  59,  32,  58,  32,  97, 119,  97, 121,  32, 105, 110, 112, 117, 
116,  32,  99, 111, 117, 110, 116,  32, 116, 111,  32,  99,  97, 114, 101, 116,  32,  59,  32,  58, 
 32, 105, 110, 115,  32, 112, 111, 105, 110, 116,  32, 100, 117, 112,  32, 100, 117, 112,  32,  49, 
 43,  32, 112, 108,  97,  99, 101,  32,  99,  33,  32,  59,  32,  58,  32, 100, 101, 108,  32, 112, 
111, 105, 110, 116,  32,  97, 116,  33,  32,  97, 116,  32,  99,  64,  32, 100, 117, 112,  32, 105, 
102,  32,  97, 116,  32,  49,  43,  32,  97, 116,  32, 112, 108,  97,  99, 101,  32, 101, 110, 100, 
 32,  59,  32,  58,  32, 116, 105, 108, 100, 101,  32,  34,  91,  49, 126,  34,  32, 101, 115,  99, 
115, 101, 113,  63,  32, 105, 102,  32, 104, 111, 109, 101,  32, 101, 120, 105, 116,  32, 101, 110, 
100,  32,  34,  91,  55, 126,  34,  32, 101, 115,  99, 115, 101, 113,  63,  32, 105, 102,  32, 104, 
111, 109, 101,  32, 101, 120, 105, 116,  32, 101, 110, 100,  32,  34,  91,  52, 126,  34,  32, 101, 
115,  99, 115, 101, 113,  63,  32, 105, 102,  32,  97, 119,  97, 121,  32, 101, 120, 105, 116,  32, 
101, 110, 100,  32,  34,  91,  56, 126,  34,  32, 101, 115,  99, 115, 101, 113,  63,  32, 105, 102, 
 32,  97, 119,  97, 121,  32, 101, 120, 105, 116,  32, 101, 110, 100,  32,  34,  91,  51, 126,  34, 
 32, 101, 115,  99, 115, 101, 113,  63,  32, 105, 102,  32, 100, 101, 108,  32, 101, 120, 105, 116, 
 32, 101, 110, 100,  32,  59,  32,  58,  32, 108, 101, 102, 116,  32,  99,  97, 114, 101, 116,  32, 
 49,  45,  32,  48,  32, 109,  97, 120,  32, 116, 111,  32,  99,  97, 114, 101, 116,  32,  59,  32, 
 58,  32, 114, 105, 103, 104, 116,  32,  99,  97, 114, 101, 116,  32,  49,  43,  32, 108, 101, 110, 
103, 116, 104,  32, 109, 105, 110,  32, 116, 111,  32,  99,  97, 114, 101, 116,  32,  59,  32, 115, 
116,  97, 116, 105,  99,  32, 118,  97, 114, 115,  32,  50,  53,  54,  32,  97, 114, 114,  97, 121, 
 32, 101, 107, 101, 121, 115,  32,  39, 114, 105, 103, 104, 116,  32,  96,  67,  32, 101, 107, 101, 
121, 115,  32,  33,  32,  39, 108, 101, 102, 116,  32,  96,  68,  32, 101, 107, 101, 121, 115,  32, 
 33,  32,  39, 116, 105, 108, 100, 101,  32,  96, 126,  32, 101, 107, 101, 121, 115,  32,  33,  32, 
101, 110, 100,  32,  58,  32, 115, 116,  97, 114, 116,  32, 116, 111,  32, 108, 105, 109, 105, 116, 
 32, 116, 111,  32, 105, 110, 112, 117, 116,  32, 108, 101, 110, 103, 116, 104,  32, 116, 111,  32, 
 99,  97, 114, 101, 116,  32,  59,  32,  58,  32, 115, 104, 111, 119,  32, 105, 110, 112, 117, 116, 
 32, 116, 121, 112, 101,  32,  34,  92, 101,  91,  75,  34,  32, 116, 121, 112, 101,  32, 108, 101, 
110, 103, 116, 104,  32,  99,  97, 114, 101, 116,  32,  45,  32, 100, 117, 112,  32, 105, 102,  32, 
100, 117, 112,  32,  34,  92, 101,  91,  37, 100,  68,  34,  32, 112, 114, 105, 110, 116,  32, 101, 
110, 100,  32, 100, 114, 111, 112,  32,  59,  32,  58,  32, 115, 116, 101, 112,  32, 107, 101, 121, 
 32, 109, 121,  33,  32,  98, 101, 103, 105, 110,  32, 109, 121,  32, 119, 104, 105, 108, 101,  32, 
109, 121,  32,  49,  48,  32,  61,  32, 117, 110, 116, 105, 108,  32, 109, 121,  32,  50,  55,  32, 
 61,  32, 105, 102,  32, 101, 115,  99,  97, 112, 101,  32, 101, 107, 101, 121, 115,  32,  64,  32, 
101, 120, 101,  99, 117, 116, 101,  32, 108, 101,  97, 118, 101,  32, 101, 110, 100,  32, 109, 121, 
 32,  56,  32,  61,  32, 109, 121,  32,  49,  50,  55,  32,  61,  32, 111, 114,  32, 105, 102,  32, 
108, 101, 102, 116,  32, 100, 101, 108,  32, 100, 114, 111, 112,  32, 108, 101,  97, 118, 101,  32, 
101, 110, 100,  32, 108, 101, 110, 103, 116, 104,  32, 108, 105, 109, 105, 116,  32,  60,  32, 109, 
121,  32,  51,  49,  32,  62,  32,  97, 110, 100,  32, 109, 121,  32,  49,  50,  55,  32,  60,  32, 
 97, 110, 100,  32, 105, 102,  32, 109, 121,  32, 105, 110, 115,  32, 114, 105, 103, 104, 116,  32, 
108, 101,  97, 118, 101,  32, 101, 110, 100,  32, 101, 110, 100,  32, 109, 121,  32,  59,  32,  58, 
 32, 115, 116, 111, 112,  32, 105, 110, 112, 117, 116,  32,  99, 111, 117, 110, 116,  32,  59,  32, 
 59,  32,  58,  32,  97,  99,  99, 101, 112, 116,  32,  34,  92, 101,  55,  34,  32, 116, 121, 112, 
101,  32, 101, 100, 105, 116,  58, 115, 116,  97, 114, 116,  32,  98, 101, 103, 105, 110,  32,  34, 
 92, 101,  56,  34,  32, 116, 121, 112, 101,  32, 101, 100, 105, 116,  58, 115, 104, 111, 119,  32, 
101, 100, 105, 116,  58, 115, 116, 101, 112,  32, 109, 121,  33,  32, 109, 121,  32,  50,  55,  32, 
 61,  32,  34,  34,  32, 101, 100, 105, 116,  58, 101, 115,  99, 115, 101, 113,  63,  32,  97, 110, 
100,  32, 105, 102,  32,  48,  32, 101, 100, 105, 116,  58, 105, 110, 112, 117, 116,  32,  33,  32, 
108, 101,  97, 118, 101,  32, 101, 110, 100,  32, 109, 121,  32,  49,  48,  32,  61,  32, 117, 110, 
116, 105, 108,  32, 101, 110, 100,  32, 101, 100, 105, 116,  58, 115, 116, 111, 112,  32,  59,  32,  0 };
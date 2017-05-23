/*const char rom[] PROGMEM = {0x6e, 0x05, 0x65, 0x00, 0x6b, 0x06, 0x6a, 0x00, 0xa3, 
0x0c, 0xda, 0xb1, 0x7a, 0x04, 0x3a, 0x40, 0x12, 0x08, 
0x7b, 0x02, 0x3b, 0x12, 0x12, 0x06, 0x6c, 0x20, 0x6d, 
0x1f, 0xa3, 0x10, 0xdc, 0xd1, 0x22, 0xf6, 0x60, 0x00, 
0x61, 0x00, 0xa3, 0x12, 0xd0, 0x11, 0x70, 0x08, 0xa3, 
0x0e, 0xd0, 0x11, 0x60, 0x40, 0xf0, 0x15, 0xf0, 0x07, 
0x30, 0x00, 0x12, 0x34, 0xc6, 0x0f, 0x67, 0x1e, 0x68, 
0x01, 0x69, 0xff, 0xa3, 0x0e, 0xd6, 0x71, 0xa3, 0x10, 
0xdc, 0xd1, 0x60, 0x04, 0xe0, 0xa1, 0x7c, 0xfe, 0x60, 
0x06, 0xe0, 0xa1, 0x7c, 0x02, 0x60, 0x3f, 0x8c, 0x02, 
0xdc, 0xd1, 0xa3, 0x0e, 0xd6, 0x71, 0x86, 0x84, 0x87, 
0x94, 0x60, 0x3f, 0x86, 0x02, 0x61, 0x1f, 0x87, 0x12, 
0x47, 0x1f, 0x12, 0xac, 0x46, 0x00, 0x68, 0x01, 0x46, 
0x3f, 0x68, 0xff, 0x47, 0x00, 0x69, 0x01, 0xd6, 0x71, 
0x3f, 0x01, 0x12, 0xaa, 0x47, 0x1f, 0x12, 0xaa, 0x60, 
0x05, 0x80, 0x75, 0x3f, 0x00, 0x12, 0xaa, 0x60, 0x01, 
0xf0, 0x18, 0x80, 0x60, 0x61, 0xfc, 0x80, 0x12, 0xa3, 
0x0c, 0xd0, 0x71, 0x60, 0xfe, 0x89, 0x03, 0x22, 0xf6, 
0x75, 0x01, 0x22, 0xf6, 0x45, 0x60, 0x12, 0xde, 0x12, 
0x46, 0x69, 0xff, 0x80, 0x60, 0x80, 0xc5, 0x3f, 0x01, 
0x12, 0xca, 0x61, 0x02, 0x80, 0x15, 0x3f, 0x01, 0x12, 
0xe0, 0x80, 0x15, 0x3f, 0x01, 0x12, 0xee, 0x80, 0x15, 
0x3f, 0x01, 0x12, 0xe8, 0x60, 0x20, 0xf0, 0x18, 0xa3, 
0x0e, 0x7e, 0xff, 0x80, 0xe0, 0x80, 0x04, 0x61, 0x00, 
0xd0, 0x11, 0x3e, 0x00, 0x12, 0x30, 0x12, 0xde, 0x78, 
0xff, 0x48, 0xfe, 0x68, 0xff, 0x12, 0xee, 0x78, 0x01, 
0x48, 0x02, 0x68, 0x01, 0x60, 0x04, 0xf0, 0x18, 0x69, 
0xff, 0x12, 0x70, 0xa3, 0x14, 0xf5, 0x33, 0xf2, 0x65, 
0xf1, 0x29, 0x63, 0x37, 0x64, 0x00, 0xd3, 0x45, 0x73, 
0x05, 0xf2, 0x29, 0xd3, 0x45, 0x00, 0xee, 0xe0, 0x00, 
0x80, 0x00, 0xfc, 0x00, 0xaa, 0x00, 0x00, 0x00, 0x00, 
};*/
/*const char rom[] PROGMEM = {0x12, 0x14, 0x52, 0x45, 0x56, 0x49, 0x56, 0x41, 0x4c,
0x53, 0x54, 0x55, 0x44, 0x49, 0x4f, 0x53, 0x32, 0x30,
0x30, 0x38, 0x00, 0xe0, 0x6d, 0x20, 0xfd, 0x15, 0x23,
0xbe, 0x23, 0xc6, 0x6d, 0x40, 0xfd, 0x15, 0x23, 0xbe,
0x23, 0xc6, 0x6d, 0x20, 0xfd, 0x15, 0x23, 0xbe, 0xa4,
0x83, 0x24, 0x48, 0x6d, 0x80, 0xfd, 0x15, 0x23, 0xbe,
0xa4, 0x83, 0x24, 0x48, 0xa5, 0x83, 0x24, 0x48, 0x6d,
0x00, 0x6b, 0x00, 0x22, 0xc6, 0x4b, 0x00, 0x22, 0xe4,
0x4b, 0x01, 0x23, 0x86, 0x4b, 0x02, 0x22, 0xec, 0x4b,
0x03, 0x23, 0x86, 0x4b, 0x04, 0x22, 0xf4, 0x4b, 0x05,
0x23, 0x86, 0x60, 0x01, 0xf0, 0x15, 0x23, 0xbe, 0x7d,
0x01, 0x60, 0x3f, 0x8c, 0xd0, 0x8c, 0x02, 0x4c, 0x00,
0x22, 0x70, 0x12, 0x44, 0x4b, 0x00, 0x22, 0x90, 0x4b,
0x01, 0x22, 0xcc, 0x4b, 0x02, 0x22, 0xa2, 0x4b, 0x03,
0x22, 0xd4, 0x4b, 0x04, 0x22, 0xb4, 0x4b, 0x05, 0x22,
0xdc, 0x7b, 0x01, 0x4b, 0x06, 0x6b, 0x00, 0x00, 0xee,
0x23, 0x08, 0xc9, 0x03, 0x89, 0x94, 0x89, 0x94, 0x89,
0x94, 0x89, 0x94, 0x89, 0x94, 0x23, 0x66, 0x00, 0xee,
0x22, 0xfc, 0xc9, 0x03, 0x89, 0x94, 0x89, 0x94, 0x89,
0x94, 0x89, 0x94, 0x89, 0x94, 0x23, 0x66, 0x00, 0xee,
0x23, 0x18, 0xc9, 0x03, 0x89, 0x94, 0x89, 0x94, 0x89,
0x94, 0x89, 0x94, 0x89, 0x94, 0x23, 0x66, 0x00, 0xee,
0x6e, 0x00, 0x23, 0x08, 0x00, 0xee, 0x23, 0x66, 0x6e,
0x00, 0x22, 0xfc, 0x00, 0xee, 0x23, 0x66, 0x6e, 0x00,
0x23, 0x18, 0x00, 0xee, 0x23, 0x66, 0x6e, 0x00, 0x23,
0x08, 0x00, 0xee, 0x23, 0x08, 0x7e, 0x03, 0x23, 0x08,
0x00, 0xee, 0x22, 0xfc, 0x7e, 0x02, 0x22, 0xfc, 0x00,
0xee, 0x23, 0x18, 0x7e, 0x02, 0x23, 0x18, 0x00, 0xee,
0x6c, 0x00, 0x23, 0x3a, 0x23, 0x3a, 0x23, 0x3a, 0x23,
0x3a, 0x00, 0xee, 0x6c, 0x00, 0x23, 0x24, 0x23, 0x24,
0x23, 0x24, 0x23, 0x24, 0x23, 0x24, 0x23, 0x24, 0x00,
0xee, 0x6c, 0x00, 0x23, 0x50, 0x23, 0x50, 0x23, 0x50,
0x23, 0x50, 0x00, 0xee, 0xa6, 0x83, 0xfe, 0x1e, 0xfe,
0x1e, 0xfe, 0x1e, 0xfe, 0x1e, 0xfc, 0x1e, 0xf1, 0x65,
0xa4, 0x7c, 0xd0, 0x14, 0x7c, 0x02, 0x00, 0xee, 0xa9,
0x83, 0xfe, 0x1e, 0xfe, 0x1e, 0xfe, 0x1e, 0xfe, 0x1e,
0xfc, 0x1e, 0xf1, 0x65, 0xa4, 0x7c, 0xd0, 0x14, 0x7c,
0x02, 0x00, 0xee, 0xab, 0x83, 0xfe, 0x1e, 0xfe, 0x1e,
0xfe, 0x1e, 0xfe, 0x1e, 0xfc, 0x1e, 0xf1, 0x65, 0xa4,
0x7c, 0xd0, 0x14, 0x7c, 0x02, 0x00, 0xee, 0x6c, 0x00,
0x60, 0x1f, 0x8a, 0xd0, 0x8a, 0xc4, 0x8a, 0x02, 0x8a,
0x94, 0xad, 0x83, 0xfa, 0x1e, 0xfa, 0x1e, 0xf1, 0x65,
0xa4, 0x80, 0xd0, 0x13, 0x7c, 0x01, 0x3c, 0x08, 0x13,
0x68, 0x00, 0xee, 0x60, 0x1f, 0x8a, 0xd0, 0x8a, 0x02,
0x8a, 0x94, 0xad, 0x83, 0xfa, 0x1e, 0xfa, 0x1e, 0xf1,
0x65, 0xa4, 0x80, 0xd0, 0x13, 0x60, 0x1f, 0x8a, 0xd0,
0x7a, 0x08, 0x8a, 0x02, 0x8a, 0x94, 0xad, 0x83, 0xfa,
0x1e, 0xfa, 0x1e, 0xf1, 0x65, 0xa4, 0x80, 0xd0, 0x13,
0x00, 0xee, 0xa6, 0x83, 0xfd, 0x1e, 0xf0, 0x65, 0x30,
0x00, 0xf0, 0x18, 0x00, 0xee, 0xf0, 0x07, 0x30, 0x00,
0x13, 0xbe, 0x00, 0xee, 0x6d, 0x04, 0x61, 0x0c, 0x60,
0x1c, 0x62, 0x12, 0xa4, 0x1e, 0xf2, 0x1e, 0xd0, 0x16,
0xfd, 0x15, 0x23, 0xbe, 0x60, 0x14, 0x62, 0x0c, 0xa4,
0x1e, 0xf2, 0x1e, 0xd0, 0x16, 0x60, 0x24, 0x62, 0x18,
0xa4, 0x1e, 0xf2, 0x1e, 0xd0, 0x16, 0xfd, 0x15, 0x23,
0xbe, 0x60, 0x0c, 0x62, 0x06, 0xa4, 0x1e, 0xf2, 0x1e,
0xd0, 0x16, 0x60, 0x2c, 0x62, 0x1e, 0xa4, 0x1e, 0xf2,
0x1e, 0xd0, 0x16, 0xfd, 0x15, 0x23, 0xbe, 0xa4, 0x1e,
0x60, 0x04, 0xd0, 0x16, 0x60, 0x34, 0x62, 0x24, 0xa4,
0x1e, 0xf2, 0x1e, 0xd0, 0x16, 0xfd, 0x15, 0x23, 0xbe,
0x00, 0xee, 0x00, 0x00, 0x0c, 0x11, 0x11, 0x10, 0x00,
0x00, 0x95, 0x55, 0x95, 0xcd, 0x00, 0x00, 0x53, 0x55,
0x55, 0x33, 0x40, 0x40, 0x44, 0x42, 0x41, 0x46, 0x00,
0x40, 0x6a, 0x4a, 0x4a, 0x46, 0x00, 0x20, 0x69, 0xaa,
0xaa, 0x69, 0x00, 0x00, 0x20, 0x90, 0x88, 0x30, 0x64,
0x01, 0x65, 0x07, 0x62, 0x00, 0x63, 0x00, 0x60, 0x00,
0x81, 0x30, 0xd0, 0x11, 0x71, 0x08, 0xf4, 0x1e, 0xd0,
0x11, 0x71, 0x08, 0xf4, 0x1e, 0xd0, 0x11, 0x71, 0x08,
0xf4, 0x1e, 0xd0, 0x11, 0xf4, 0x1e, 0x70, 0x08, 0x30,
0x40, 0x14, 0x52, 0x73, 0x03, 0x83, 0x52, 0x72, 0x01,
0x32, 0x08, 0x14, 0x50, 0x00, 0xee, 0x60, 0xb0, 0xf0,
0x60, 0x40, 0xa0, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
0xc6, 0x00, 0x00, 0x00, 0xdb, 0x00, 0x00, 0x00, 0x30,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x5f, 0x06, 0x00, 0x00, 0xfe, 0xc6, 0x00, 0x00, 0xd3,
0xfb, 0x00, 0x00, 0xf0, 0xf0, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
0xf6, 0x00, 0x00, 0x00, 0xfb, 0xe0, 0x00, 0x00, 0xf0,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x06, 0x06, 0x00, 0x00, 0x00, 0xc6, 0x00, 0x00,
0x00, 0xdb, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x06, 0x00,
0x00, 0x00, 0xc6, 0x00, 0x00, 0x03, 0xf1, 0x00, 0x00,
0x30, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0xc6, 0x00, 0x00,
0x00, 0xd9, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2f, 0x06,
0x00, 0x00, 0xff, 0xc6, 0x00, 0x00, 0x69, 0xdb, 0x00,
0x00, 0xe0, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x76, 0x00,
0x00, 0x00, 0xf3, 0xe0, 0x00, 0x00, 0x30, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x1f, 0x07, 0x0f, 0x00, 0xff, 0xfe, 0xfc, 0x7e,
0x00, 0x00, 0x3e, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2f, 0x1b, 0x07,
0x00, 0xff, 0xf0, 0xfb, 0x1f, 0x00, 0x00, 0xfe, 0xb0,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x17, 0x0f, 0x00, 0x00, 0xff, 0xf8, 0x7e,
0x0f, 0x00, 0x0c, 0x14, 0x38, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2f, 0x0b,
0x0f, 0x00, 0xfe, 0xe0, 0xfc, 0x3f, 0x00, 0x00, 0x7e,
0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x17, 0x1f, 0x03, 0x00, 0xff, 0xf0,
0xff, 0x1f, 0x80, 0x00, 0xfe, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b,
0x0f, 0x00, 0x00, 0xfe, 0xf8, 0x7e, 0x0f, 0x00, 0x1c,
0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x17, 0x17, 0x0f, 0x00, 0xfe,
0xc0, 0xf8, 0x3f, 0x00, 0x00, 0xfe, 0xfc, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x2b, 0x1f, 0x00, 0x00, 0xff, 0xe0, 0x7f, 0x1f, 0x80,
0x04, 0x1c, 0x3c, 0x04, 0x05, 0x1b, 0x05, 0x1b, 0x17,
0x04, 0x17, 0x07, 0x08, 0x17, 0x08, 0x1c, 0x08, 0x15,
0x1a, 0x06, 0x03, 0x00, 0x14, 0x1b, 0x0a, 0x16, 0x16,
0x1a, 0x0a, 0x0e, 0x1a, 0x08, 0x02, 0x00, 0x10, 0x1e,
0x0c, 0x15, 0x17, 0x18, 0x0b, 0x08, 0x19, 0x0b, 0x01,
0x00, 0x0d, 0x20, 0x0f, 0x13, 0x19, 0x15, 0x0a, 0x03,
0x15, 0x20, 0x12, 0x0e, 0x01, 0x10, 0x1a, 0x01, 0x0b,
0x14, 0x08, 0x00, 0x11, 0x1f, 0x14, 0x0d, 0x1b, 0x12,
0x01, 0x04, 0x09, 0x15, 0x06, 0x00, 0x0d, 0x1d, 0x16,
0x0a, 0x1b, 0x15, 0x03, 0x06, 0x08, 0x18, 0x05, 0x01,
0x09, 0x1c, 0x16, 0x06, 0x19, 0x17, 0x05, 0x07, 0x08,
0x1b, 0x05, 0x04, 0x05, 0x1b, 0x17, 0x04, 0x17, 0x17,
0x08, 0x08, 0x08, 0x04, 0x14, 0x09, 0x02, 0x1a, 0x18,
0x1e, 0x07, 0x05, 0x13, 0x08, 0x07, 0x05, 0x12, 0x0e,
0x01, 0x19, 0x19, 0x1f, 0x0a, 0x02, 0x12, 0x08, 0x06,
0x08, 0x12, 0x14, 0x02, 0x18, 0x1a, 0x20, 0x0c, 0x00,
0x10, 0x09, 0x05, 0x0a, 0x12, 0x19, 0x04, 0x15, 0x1b,
0x00, 0x0e, 0x1f, 0x0e, 0x0b, 0x03, 0x0c, 0x14, 0x1d,
0x08, 0x00, 0x0b, 0x0e, 0x01, 0x11, 0x1b, 0x1d, 0x11,
0x0b, 0x17, 0x1f, 0x0d, 0x00, 0x08, 0x12, 0x01, 0x0d,
0x1a, 0x1b, 0x12, 0x08, 0x18, 0x1e, 0x12, 0x02, 0x07,
0x17, 0x02, 0x0a, 0x17, 0x19, 0x13, 0x1b, 0x17, 0x1b,
0x05, 0x04, 0x17, 0x04, 0x05, 0x17, 0x08, 0x17, 0x14,
0x1d, 0x0a, 0x06, 0x04, 0x15, 0x1a, 0x01, 0x15, 0x1b,
0x09, 0x0b, 0x05, 0x1b, 0x0e, 0x08, 0x03, 0x0e, 0x1b,
0x00, 0x11, 0x1e, 0x0c, 0x10, 0x04, 0x17, 0x12, 0x0a,
0x02, 0x08, 0x1a, 0x1f, 0x0f, 0x00, 0x0d, 0x16, 0x04,
0x10, 0x14, 0x0d, 0x02, 0x1e, 0x14, 0x03, 0x16, 0x1b,
0x06, 0x02, 0x09, 0x09, 0x13, 0x10, 0x01, 0x1a, 0x18,
0x1f, 0x0a, 0x01, 0x12, 0x07, 0x06, 0x04, 0x0f, 0x14,
0x02, 0x13, 0x1b, 0x20, 0x0e, 0x01, 0x0e, 0x0d, 0x05,
0x02, 0x0a, 0x18, 0x03, 0x0b, 0x1b, 0x1f, 0x13, 0x04,
0x0a, 0x12, 0x05, 0x04, 0x17, 0x04, 0x05, 0x1b, 0x17,
0x1b, 0x05, 0x08, 0x14, 0x08, 0x08, 0x15, 0x19, 0x1e,
0x08, 0x00, 0x11, 0x09, 0x02, 0x14, 0x17, 0x1b, 0x0c,
0x0e, 0x17, 0x1f, 0x0b, 0x00, 0x0b, 0x0f, 0x01, 0x10,
0x1a, 0x1c, 0x10, 0x09, 0x13, 0x1f, 0x0e, 0x02, 0x06,
0x15, 0x02, 0x0a, 0x1a, 0x1a, 0x15, 0x08, 0x0e, 0x1f,
0x0f, 0x08, 0x02, 0x05, 0x18, 0x1a, 0x05, 0x17, 0x19,
0x0a, 0x09, 0x1e, 0x12, 0x00, 0x14, 0x0e, 0x01, 0x11,
0x1b, 0x1c, 0x09, 0x0f, 0x05, 0x1d, 0x14, 0x00, 0x0e,
0x0c, 0x1b, 0x13, 0x02, 0x1d, 0x0e, 0x15, 0x04, 0x1c,
0x15, 0x00, 0x0a, 0x07, 0x1a, 0x16, 0x05, 0x1b, 0x11,
0x1b, 0x05, 0x04, 0x05, 0x04, 0x17, 0x1b, 0x17, 0x18,
0x08, 0x08, 0x08, 0x03, 0x14, 0x0a, 0x02, 0x19, 0x19,
0x1f, 0x08, 0x04, 0x12, 0x09, 0x06, 0x05, 0x12, 0x11,
0x02, 0x17, 0x1a, 0x20, 0x0c, 0x01, 0x10, 0x0a, 0x05,
0x07, 0x11, 0x17, 0x03, 0x14, 0x1b, 0x00, 0x0d, 0x20,
0x0f, 0x0c, 0x03, 0x0a, 0x12, 0x1c, 0x07, 0x00, 0x0a,
0x11, 0x1b, 0x0f, 0x02, 0x1e, 0x11, 0x0b, 0x14, 0x1f,
0x0b, 0x00, 0x08, 0x12, 0x01, 0x0d, 0x1b, 0x1b, 0x13,
0x0a, 0x16, 0x1f, 0x0f, 0x02, 0x06, 0x15, 0x01, 0x0a,
0x19, 0x19, 0x14, 0x07, 0x17, 0x1e, 0x13, 0x03, 0x06,
0x19, 0x03, 0x08, 0x17, 0x18, 0x14, 0x1b, 0x05, 0x04,
0x05, 0x1b, 0x17, 0x04, 0x17, 0x17, 0x08, 0x08, 0x08,
0x1b, 0x08, 0x16, 0x1a, 0x05, 0x04, 0x01, 0x15, 0x1a,
0x09, 0x17, 0x15, 0x1a, 0x0a, 0x11, 0x1b, 0x06, 0x03,
0x00, 0x12, 0x1d, 0x0a, 0x17, 0x16, 0x17, 0x0a, 0x0b,
0x1a, 0x07, 0x02, 0x00, 0x10, 0x1f, 0x0c, 0x16, 0x17,
0x15, 0x0a, 0x06, 0x18, 0x0a, 0x01, 0x20, 0x0e, 0x00,
0x0e, 0x14, 0x19, 0x13, 0x08, 0x02, 0x14, 0x20, 0x11,
0x0e, 0x01, 0x11, 0x1b, 0x02, 0x0b, 0x14, 0x05, 0x00,
0x0f, 0x1f, 0x14, 0x0d, 0x1b, 0x12, 0x02, 0x04, 0x0a,
0x17, 0x04, 0x01, 0x0a, 0x1d, 0x15, 0x08, 0x1a, 0x15,
0x05, 0x06, 0x09, 0x1b, 0x17, 0x1b, 0x05, 0x04, 0x17,
0x04, 0x05, 0x18, 0x08, 0x18, 0x14, 0x02, 0x12, 0x19,
0x18, 0x0a, 0x02, 0x1e, 0x07, 0x04, 0x13, 0x14, 0x17,
0x04, 0x0e, 0x17, 0x19, 0x11, 0x01, 0x20, 0x0b, 0x01,
0x10, 0x0f, 0x18, 0x08, 0x0a, 0x15, 0x1a, 0x17, 0x02,
0x20, 0x0f, 0x00, 0x0d, 0x09, 0x18, 0x0f, 0x08, 0x12,
0x1a, 0x01, 0x08, 0x1c, 0x06, 0x04, 0x16, 0x1d, 0x13,
0x16, 0x09, 0x0f, 0x1b, 0x05, 0x04, 0x00, 0x12, 0x1e,
0x0a, 0x18, 0x16, 0x1b, 0x0d, 0x0b, 0x1a, 0x0c, 0x01,
0x00, 0x0e, 0x1e, 0x0e, 0x12, 0x17, 0x1d, 0x12, 0x07,
0x19, 0x14, 0x01, 0x00, 0x09, 0x1b, 0x12, 0x0d, 0x17,
0x04, 0x17, 0x04, 0x05, 0x1b, 0x17, 0x1b, 0x05, 0x08,
0x14, 0x08, 0x08, 0x0a, 0x03, 0x01, 0x14, 0x1f, 0x0b,
0x16, 0x1a, 0x0b, 0x05, 0x04, 0x10, 0x11, 0x05, 0x00,
0x11, 0x20, 0x11, 0x10, 0x1b, 0x0f, 0x02, 0x03, 0x0c,
0x16, 0x09, 0x00, 0x0e, 0x1d, 0x16, 0x0a, 0x1a, 0x15,
0x02, 0x05, 0x07, 0x17, 0x0e, 0x00, 0x0d, 0x17, 0x1a,
0x1a, 0x04, 0x05, 0x17, 0x08, 0x03, 0x15, 0x13, 0x01,
0x0a, 0x1f, 0x08, 0x0e, 0x01, 0x11, 0x1b, 0x03, 0x13,
0x10, 0x17, 0x02, 0x08, 0x20, 0x0e, 0x13, 0x01, 0x0c,
0x1a, 0x02, 0x0e, 0x0a, 0x18, 0x03, 0x07, 0x1f, 0x12,
0x18, 0x02, 0x09, 0x17, 0x04, 0x0b, 0x04, 0x05, 0x1b,
0x05, 0x1b, 0x17, 0x04, 0x17, 0x1c, 0x08, 0x15, 0x1a,
0x06, 0x03, 0x00, 0x14, 0x1a, 0x0a, 0x0e, 0x1a, 0x08,
0x02, 0x00, 0x10, 0x18, 0x0b, 0x08, 0x19, 0x0b, 0x01,
0x00, 0x0d, 0x15, 0x0a, 0x03, 0x15, 0x0e, 0x01, 0x01,
0x0b, 0x14, 0x08, 0x00, 0x11, 0x12, 0x01, 0x14, 0x12,
0x15, 0x06, 0x00, 0x0d, 0x13, 0x14, 0x15, 0x03, 0x18,
0x05, 0x01, 0x09, 0x11, 0x15, 0x17, 0x05, 0x1b, 0x05,
0x04, 0x05, 0x10, 0x15, 0x17, 0x08, 0x09, 0x02, 0x1e,
0x07, 0x0e, 0x15, 0x08, 0x07, 0x0e, 0x01, 0x1f, 0x0a,
0x0c, 0x15, 0x08, 0x06, 0x14, 0x02, 0x0b, 0x14, 0x20,
0x0c, 0x09, 0x05, 0x19, 0x04, 0x0a, 0x14, 0x1f, 0x0e,
0x0b, 0x03, 0x1d, 0x08, 0x08, 0x13, 0x0e, 0x01, 0x1d,
0x11, 0x1f, 0x0d, 0x12, 0x01, 0x07, 0x11, 0x1b, 0x12,
0x1e, 0x12, 0x17, 0x02, 0x06, 0x10, 0x19, 0x13, 0x1b,
0x17, 0x1b, 0x05, 0x06, 0x0e, 0x17, 0x08, 0x1d, 0x0a,
0x15, 0x1a, 0x07, 0x0c, 0x1b, 0x09, 0x1b, 0x0e, 0x0e,
0x1b, 0x08, 0x0a, 0x1e, 0x0c, 0x17, 0x12, 0x08, 0x1a,
0x1f, 0x0f, 0x0b, 0x08, 0x10, 0x14, 0x1e, 0x14, 0x03,
0x16, 0x0f, 0x07, 0x09, 0x13, 0x1a, 0x18, 0x01, 0x12,
0x12, 0x08, 0x04, 0x0f, 0x13, 0x1b, 0x15, 0x09, 0x01,
0x0e, 0x02, 0x0a, 0x0b, 0x1b, 0x18, 0x0b, 0x04, 0x0a,
0x04, 0x17, 0x04, 0x05, 0x19, 0x0e, 0x08, 0x14, 0x00,
0x11, 0x09, 0x02, 0x18, 0x10, 0x06, 0x12, 0x00, 0x0b,
0x0f, 0x01, 0x16, 0x13, 0x05, 0x10, 0x02, 0x06, 0x14,
0x14, 0x15, 0x02, 0x05, 0x0e, 0x11, 0x14, 0x08, 0x02,
0x1a, 0x05, 0x05, 0x0d, 0x0e, 0x13, 0x0e, 0x01, 0x1c,
0x09, 0x06, 0x0c, 0x0d, 0x11, 0x13, 0x02, 0x1d, 0x0e,
0x06, 0x0a, 0x0e, 0x0f, 0x16, 0x05, 0x1b, 0x11, 0x07,
0x09, 0x10, 0x0e, 0x18, 0x08, 0x08, 0x08, 0x08, 0x14,
0x12, 0x0e, 0x04, 0x12, 0x09, 0x06, 0x13, 0x16, 0x14,
0x0e, 0x01, 0x10, 0x0a, 0x05, 0x0f, 0x16, 0x16, 0x10,
0x00, 0x0d, 0x0c, 0x03, 0x0a, 0x15, 0x16, 0x12, 0x00,
0x0a, 0x0f, 0x02, 0x07, 0x13, 0x00, 0x08, 0x15, 0x13,
0x12, 0x01, 0x05, 0x10, 0x02, 0x06, 0x15, 0x01, 0x13,
0x15, 0x05, 0x0e, 0x03, 0x06, 0x19, 0x03, 0x11, 0x15,
0x05, 0x0b, 0x1b, 0x05, 0x04, 0x05, 0x0f, 0x15, 0x17,
0x08, 0x1b, 0x08, 0x05, 0x04, 0x0e, 0x15, 0x1a, 0x09,
0x1a, 0x0a, 0x06, 0x03, 0x0c, 0x14, 0x1d, 0x0a, 0x17,
0x0a, 0x07, 0x02, 0x1f, 0x0c, 0x0b, 0x14, 0x15, 0x0a,
0x0a, 0x01, 0x20, 0x0e, 0x0a, 0x13, 0x13, 0x08, 0x20,
0x11, 0x0e, 0x01, 0x09, 0x12, 0x14, 0x05, 0x1f, 0x14,
0x08, 0x11, 0x12, 0x02, 0x17, 0x04, 0x1d, 0x15, 0x07,
0x10, 0x15, 0x05, 0x1b, 0x17, 0x1b, 0x05, 0x06, 0x0e,
0x18, 0x08, 0x19, 0x18, 0x1e, 0x07, 0x07, 0x0c, 0x14,
0x17, 0x17, 0x19, 0x20, 0x0b, 0x08, 0x0a, 0x0f, 0x18,
0x15, 0x1a, 0x0b, 0x08, 0x20, 0x0f, 0x09, 0x18, 0x12,
0x1a, 0x0e, 0x07, 0x04, 0x16, 0x1d, 0x13, 0x0f, 0x1b,
0x12, 0x07, 0x00, 0x12, 0x18, 0x16, 0x0b, 0x1a, 0x00,
0x0e, 0x16, 0x09, 0x12, 0x17, 0x07, 0x19, 0x00, 0x09,
0x18, 0x0b, 0x0d, 0x17, 0x04, 0x17, 0x04, 0x05, 0x19,
0x0e, 0x08, 0x14, 0x0a, 0x03, 0x01, 0x14, 0x18, 0x10,
0x0b, 0x05, 0x11, 0x05, 0x00, 0x11, 0x16, 0x12, 0x0f,
0x02, 0x16, 0x09, 0x00, 0x0e, 0x15, 0x02, 0x13, 0x13,
0x17, 0x0e, 0x00, 0x0d, 0x1a, 0x04, 0x08, 0x03, 0x15,
0x13, 0x01, 0x0a, 0x1f, 0x08, 0x0e, 0x01, 0x10, 0x17,
0x02, 0x08, 0x20, 0x0e, 0x13, 0x01, 0x0a, 0x18, 0x03,
0x07, 0x1f, 0x12, 0x18, 0x02, 0x10, 0x0e, 0x06, 0x07,
0x19, 0x07, 0x19, 0x15, 0x0d, 0x0e, 0x1b, 0x09, 0x16,
0x17, 0x09, 0x05, 0x0b, 0x0e, 0x1c, 0x0c, 0x12, 0x18,
0x0d, 0x04, 0x1c, 0x0e, 0x09, 0x0c, 0x0e, 0x19, 0x11,
0x04, 0x1b, 0x0e, 0x09, 0x0a, 0x0b, 0x18, 0x14, 0x05,
0x1a, 0x0e, 0x07, 0x16, 0x0a, 0x09, 0x14, 0x12, 0x1a,
0x0e, 0x05, 0x14, 0x0c, 0x07, 0x13, 0x14, 0x1a, 0x0e,
0x04, 0x11, 0x0e, 0x07, 0x11, 0x15, 0x1b, 0x0e, 0x04,
0x0e, 0x10, 0x15, 0x10, 0x07, 0x06, 0x0c, 0x1c, 0x0f,
0x0e, 0x15, 0x11, 0x07, 0x0a, 0x0a, 0x1d, 0x10, 0x0c,
0x15, 0x13, 0x08, 0x0e, 0x0a, 0x1c, 0x12, 0x0b, 0x14,
0x14, 0x08, 0x12, 0x0b, 0x0a, 0x14, 0x1a, 0x14, 0x05,
0x08, 0x15, 0x0e, 0x07, 0x06, 0x08, 0x13, 0x17, 0x16,
0x15, 0x11, 0x0a, 0x04, 0x07, 0x11, 0x17, 0x0b, 0x13,
0x15, 0x0d, 0x04, 0x06, 0x10, 0x18, 0x0c, 0x10, 0x17,
0x10, 0x05, 0x06, 0x0e, 0x19, 0x0e, 0x11, 0x07, 0x0b,
0x17, 0x18, 0x10, 0x07, 0x0c, 0x11, 0x09, 0x06, 0x16,
0x17, 0x12, 0x08, 0x0a, 0x10, 0x0a, 0x03, 0x13, 0x14,
0x14, 0x1a, 0x0a, 0x0e, 0x0b, 0x11, 0x15, 0x1d, 0x0d,
0x03, 0x0f, 0x0d, 0x0a, 0x1d, 0x10, 0x0d, 0x15, 0x12,
0x08, 0x0c, 0x08, 0x1a, 0x14, 0x09, 0x13, 0x15, 0x09,
0x0d, 0x06, 0x15, 0x17, 0x07, 0x11, 0x18, 0x0b, 0x10,
0x17, 0x10, 0x05, 0x19, 0x0e, 0x06, 0x0e, 0x0a, 0x15,
0x13, 0x05, 0x18, 0x10, 0x07, 0x0c, 0x06, 0x10, 0x17,
0x05, 0x16, 0x13, 0x09, 0x0a, 0x05, 0x0c, 0x1a, 0x07,
0x14, 0x14, 0x0c, 0x09, 0x08, 0x07, 0x11, 0x14, 0x1c,
0x0a, 0x05, 0x11, 0x0c, 0x04, 0x0e, 0x13, 0x1d, 0x0d,
0x04, 0x0f, 0x0d, 0x11, 0x11, 0x03, 0x1d, 0x10, 0x03,
0x0d, 0x0e, 0x0f, 0x16, 0x04, 0x1b, 0x13, 0x04, 0x09,
0x10, 0x0e, 0x19, 0x07, 0x06, 0x07, 0x06, 0x15, 0x12,
0x0e, 0x04, 0x13, 0x09, 0x05, 0x16, 0x17, 0x14, 0x0e,
0x03, 0x10, 0x0d, 0x04, 0x12, 0x18, 0x03, 0x0e, 0x16,
0x10, 0x11, 0x03, 0x0e, 0x18, 0x04, 0x0e, 0x16, 0x12,
0x14, 0x04, 0x0b, 0x17, 0x05, 0x0e, 0x18, 0x06, 0x15,
0x13, 0x0b, 0x0a, 0x05, 0x0e, 0x1a, 0x08, 0x13, 0x15,
0x0c, 0x08, 0x05, 0x0e, 0x1b, 0x0b, 0x11, 0x15, 0x0e,
0x07, 0x1b, 0x0e, 0x04, 0x0e, 0x0f, 0x15, 0x0f, 0x07,
0x19, 0x10, 0x03, 0x0d, 0x11, 0x07, 0x0e, 0x15, 0x15,
0x12, 0x02, 0x0c, 0x13, 0x07, 0x0c, 0x14, 0x11, 0x12,
0x03, 0x0a, 0x14, 0x08, 0x0b, 0x14, 0x0d, 0x11, 0x15,
0x08, 0x05, 0x08, 0x1a, 0x14, 0x0a, 0x0e, 0x18, 0x16,
0x17, 0x09, 0x08, 0x06, 0x0a, 0x0b, 0x15, 0x18, 0x18,
0x0b, 0x08, 0x11, 0x0c, 0x07, 0x12, 0x18, 0x19, 0x0c,
0x07, 0x10, 0x10, 0x17, 0x10, 0x05, 0x06, 0x0e, 0x19,
0x0e, 0x0e, 0x15, 0x14, 0x05, 0x07, 0x0c, 0x18, 0x10,
0x0e, 0x13, 0x19, 0x06, 0x08, 0x0a, 0x17, 0x12, 0x0f,
0x12, 0x1c, 0x09, 0x0b, 0x08, 0x05, 0x12, 0x11, 0x11,
0x0e, 0x07, 0x02, 0x0f, 0x1c, 0x0d, 0x12, 0x12, 0x02,
0x0c, 0x12, 0x07, 0x0d, 0x14, 0x13, 0x14, 0x05, 0x08,
0x16, 0x09, 0x0a, 0x13, 0x12, 0x16, 0x0a, 0x05, 0x18,
0x0b, 0x07, 0x11, 0x0f, 0x17, 0x10, 0x05, 0x19, 0x0e,
0x06, 0x0e, 0x15, 0x07, 0x0c, 0x17, 0x07, 0x0c, 0x18,
0x10, 0x19, 0x0c, 0x08, 0x17, 0x09, 0x09, 0x16, 0x12,
0x1a, 0x10, 0x05, 0x15, 0x0b, 0x08, 0x13, 0x13, 0x17,
0x15, 0x0e, 0x08, 0x03, 0x12, 0x1a, 0x0b, 0x13, 0x18,
0x11, 0x09, 0x02, 0x0f, 0x1b, 0x0d, 0x12, 0x0b, 0x0e,
0x19, 0x02, 0x0c, 0x1c, 0x0f, 0x11, 0x0d, 0x09, 0x18,
0x04, 0x09, 0x1b, 0x13, 0x10, 0x10, 0x0c, 0x14, 0x07,
0x17, 0x04, 0x1a, 0x03, 0x1c, 0x03, 0x1d, 0x05, 0x1d,
0x08, 0x1b, 0x0c, 0x19, 0x10, 0x16, 0x14, 0x13, 0x17,
0x10, 0x1a, 0x0d, 0x1b, 0x0a, 0x1b, 0x08, 0x19, 0x06,
0x17, 0x05, 0x13, 0x06, 0x10, 0x07, 0x0d, 0x08, 0x0a,
0x0b, 0x07, 0x0e, 0x06, 0x10, 0x06, 0x12, 0x08, 0x15,
0x0a, 0x17, 0x0d, 0x18, 0x10, 0x19, 0x13, 0x19, 0x16,
0x18, 0x18, 0x17, 0x19, 0x14, 0x10, 0x19, 0x0f, 0x17,
0x0d, 0x17, 0x0a, 0x19, 0x06, 0x1a, 0x06, 0x16, 0x09,
0x13, 0x09, 0x11, 0x07, 0x10, 0x03, 0x0e, 0x03, 0x0b,
0x08, 0x0b, 0x0b, 0x0b, 0x0c, 0x0a, 0x0c, 0x06, 0x0e,
0x02, 0x10, 0x04, 0x11, 0x08, 0x12, 0x0a, 0x14, 0x09,
0x19, 0x07, 0x1b, 0x09, 0x19, 0x0d, 0x17, 0x0f, 0x17,
0x10, 0x1a, 0x12, 0x1d, 0x15, 0x1a, 0x16, 0x15, 0x15,
0x14, 0x16, 0x13, 0x18, 0x12, 0x1d, 0x10, 0x19, 0x0e,
0x17, 0x0d, 0x17, 0x0b, 0x17, 0x08, 0x17, 0x05, 0x19,
0x02, 0x19, 0x03, 0x17, 0x08, 0x14, 0x0b, 0x12, 0x0e,
0x11, 0x10, 0x10, 0x11, 0x10, 0x14, 0x0e, 0x19, 0x0b,
0x1c, 0x09, 0x1c, 0x09, 0x19, 0x09, 0x17, 0x0a, 0x16,
0x0a, 0x14, 0x09, 0x13, 0x07, 0x11, 0x04, 0x0f, 0x02,
0x0b, 0x03, 0x09, 0x06, 0x09, 0x09, 0x09, 0x0a, 0x09,
0x0b, 0x08, 0x0b, 0x07, 0x0b, 0x07, 0x0b, 0x10, 0x19,
0x13, 0x18, 0x15, 0x17, 0x16, 0x16, 0x18, 0x15, 0x18,
0x15, 0x18, 0x14, 0x15, 0x12, 0x10, 0x10, 0x0b, 0x0e,
0x09, 0x0c, 0x08, 0x0c, 0x09, 0x0b, 0x0a, 0x0a, 0x0b,
0x09, 0x0d, 0x08, 0x10, 0x06, 0x14, 0x04, 0x1a, 0x03,
0x1d, 0x04, 0x1c, 0x08, 0x19, 0x0b, 0x15, 0x0d, 0x12,
0x0f, 0x10, 0x10, 0x0d, 0x11, 0x0a, 0x13, 0x06, 0x16,
};*/

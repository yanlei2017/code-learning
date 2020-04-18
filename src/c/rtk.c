
#include <stdio.h> /*标准输入输出头文件*/
#include <string.h> /*字符串处理相关头文件*/
typedef struct {
unsigned char head[2]; //2 bytes deviation 0
unsigned short int Version; //2 bytes deviation 2
unsigned short int Length; //2 bytes deviation 4
unsigned short int freq; //2 bytes deviation 6
float Time_utc; //4 bytes deviation 8
unsigned short int Year_utc; //2 bytes deviation 12
unsigned short int Month_utc; //2 bytes deviation 14
unsigned short int Day_utc; //2 bytes deviation 16
unsigned short int Hour_utc; //2 bytes deviation 18
unsigned short int Min_utc; //2 bytes deviation 20
unsigned short int Sec_utc; //2 bytes deviation 22
double Latitude; //8 bytes deviation 24
double Longitude; //8 bytes deviation 32
double Altitude; //8 bytes deviation 40
float Eph; //4 bytes deviation 48
float Epv; //4 bytes deviation 52
float Vel_earth; //4 bytes deviation 56
float Angle_TrackTrue; //4 bytes deviation 60
float Angle_Heading; //4 bytes deviation 64
float Angle_Pitch; //4 bytes deviation 68
double Vel_n; //8 bytes deviation 72
double Vel_e; //8 bytes deviation 80
double Vel_u; //8 bytes deviation 88
unsigned short int Satellites_used; //2 bytes deviation 96
unsigned short int Satellites_track; //2 bytes deviation 98
float vel_ned_valid; //4 bytes deviation 100
unsigned short int Fix_type; //2 bytes deviation 104
float Angle_PosType; //4 bytes deviation 106
float Head_deviation; //4 bytes deviation 110
unsigned short int INS_state; //2 bytes deviation 114
double GNSS_Alt_delta ; //8 bytesdeviation 116
double Ellipsoidal_H; //8 bytes deviation 124
unsigned char reserve[2]; //4 bytesdeviation 132
unsigned short int Checksum; //2 bytes deviation 136
}GPSINSData_dev; //total 138 bytes

int main(int argc, char *argv[])
{
int xor_cheack = 0; /*定义异或校验返回值*/
int i = 0;
unsigned char bin_buf[] = {0xAA, 0x33, 0x01, 0x00, 0x74, 0x00, 0x0A, 0x00, 0x00, 0xAC,
0xAE, 0x46, 0xE1, 0x07, 0x07, 0x00, 0x0A, 0x00, 0x02, 0x00, 0x17, 0x00, 0xA8, 0x16, 0x02, 0x67,
0x65, 0x1E, 0xC8, 0xFB, 0x36, 0x40, 0x23, 0x5F, 0xD4, 0x74, 0x87, 0x57, 0x5C, 0x40, 0x40, 0xE4,
0xB0, 0xCD, 0xE7, 0x51, 0x46, 0x40, 0x33, 0x33, 0x33, 0x3F, 0xCD, 0xCC, 0x8C, 0x3F, 0x35, 0xF1,
0x2C, 0x3C, 0x29, 0x7C, 0x1A, 0x43, 0x00, 0x00, 0x00, 0x00, 0xAB, 0x83, 0x31, 0x40, 0xBE, 0x84,
0x5D, 0x03, 0x01, 0x0E, 0x6B, 0x3F, 0x15, 0x9F, 0x4A, 0x99, 0xBA, 0xBC, 0x82, 0xBF, 0xCA, 0x65,
0x2E, 0x99, 0xFC, 0x5F, 0x86, 0xBF,0x13, 0x00, 0x13, 0x00, 0x00, 0x00, 0x00, 0x41, 0x01, 0x00,
0x00, 0x00, 0x00, 0x41, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, ……,0x20, 0x00 }; //以一包数据为例
GPSINSData_dev GPSINSData_s;
memset(&GPSINSData_s, 0, sizeof(GPSINSData_s));
GPSINSData_s.head[0] = 0xAA; //数据包头校验
GPSINSData_s.head[1] = 0x33;
if((GPSINSData_s.head[0] == bin_buf[0]) && (GPSINSData_s.head[1] == bin_buf[1])) { // 数据包头校验
memcpy(&(GPSINSData_s.Version), bin_buf+2, 2); //当前协议版本
memcpy(&(GPSINSData_s.Length), bin_buf+4, 2); //当前数据包长度，除去校验位的所有数据
memcpy(&(GPSINSData_s.freq), bin_buf+6, 2); //当前数据包传输频率
memcpy(&(GPSINSData_s.Checksum), bin_buf+ GPSINSData_s.Length, 2); // 当 前 数 据包校验位
for(i = 0; i < GPSINSData_s.Length; i++) { /*进行包头异或校验*/
xor_cheack = xor_cheack ^ bin_buf[i];
}
printf("xor_cheack = %x\n", xor_cheack);
if(xor_cheack == GPSINSData_s.Checksum) { //数据包异或校验通过
printf("current version: %d, data length: %d, transmission frequency: %d\n",GPSINSData_s.Version, GPSINSData_s.Length, GPSINSData_s.freq);
//then do with the data
} else {
printf("current data is error\n");
}
} else {
printf("data head is error\n");
}
}
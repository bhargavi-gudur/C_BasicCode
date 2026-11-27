#include <stdio.h>

typedef struct
{
    unsigned int id;
    unsigned char dlc;
    unsigned char data[8];
} CAN_Message;

int main()
{
    CAN_Message msg;

    msg.id = 0x120;      // CAN Identifier
    msg.dlc = 2;         // Data Length

    msg.data[0] = 0x3C;  // Speed = 60 km/h
    msg.data[1] = 0x00;

    printf("Sending CAN Message\n");
    printf("ID: 0x%X\n", msg.id);
    printf("Data: %X %X\n",
           msg.data[0],
           msg.data[1]);

    return 0;
}
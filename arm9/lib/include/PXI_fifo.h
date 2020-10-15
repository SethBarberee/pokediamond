#ifndef POKEDIAMOND_ARM9_PXI_FIFO_H
#define POKEDIAMOND_ARM9_PXI_FIFO_H

#include "nitro/PXI_fifo_shared.h"

typedef enum
{
    PXI_FIFO_SUCCESS = 0,
    PXI_FIFO_FAIL_SEND_ERR = -1,
    PXI_FIFO_FAIL_SEND_FULL = -2,
    PXI_FIFO_FAIL_RECV_ERR = -3,
    PXI_FIFO_FAIL_RECV_EMPTY = -4,
    PXI_FIFO_NO_CALLBACK_ENTRY = -5
} PXIFifoStatus;

#endif //POKEDIAMOND_ARM9_PXI_FIFO_H

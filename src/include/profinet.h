#ifndef _PROFINET_H_
#define _PROFINET_H_

#include <stdint.h>
#include "err.h"

struct profinet_dev_t;

struct profinet_dev_t* profinet_connect(const char *addr);
void profinet_disconnect(struct profinet_dev_t *dev);

err_t profinet_read_word(struct profinet_dev_t *dev, int db, int number, uint16_t *value);

#endif

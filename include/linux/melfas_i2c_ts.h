/*
 * include/linux/melfas.h - platform data structure for f75375s sensor
 *
 * Copyright (C) 2008 Google, Inc.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#ifndef _LINUX_MELFAS_I2C_H
#define _LINUX_MELFAS_I2C_H

#define MELFAS_I2C_NAME "melfas-ts"

struct melfas_i2c_platform_data {
	uint32_t version;	/* Use this entry for panels with */
				/* (major << 8 | minor) version or above. */
				/* If non-zero another array entry follows */
	int (*power)(int on);	/* Only valid in first array entry */
	uint32_t flags;
	uint32_t inactive_left; /* 0x10000 = screen width */
	uint32_t inactive_right; /* 0x10000 = screen width */
	uint32_t inactive_top; /* 0x10000 = screen height */
	uint32_t inactive_bottom; /* 0x10000 = screen height */
	uint32_t snap_left_on; /* 0x10000 = screen width */
	uint32_t snap_left_off; /* 0x10000 = screen width */
	uint32_t snap_right_on; /* 0x10000 = screen width */
	uint32_t snap_right_off; /* 0x10000 = screen width */
	uint32_t snap_top_on; /* 0x10000 = screen height */
	uint32_t snap_top_off; /* 0x10000 = screen height */
	uint32_t snap_bottom_on; /* 0x10000 = screen height */
	uint32_t snap_bottom_off; /* 0x10000 = screen height */
	uint32_t fuzz_x; /* 0x10000 = screen width */
	uint32_t fuzz_y; /* 0x10000 = screen height */
	int fuzz_p;
	int fuzz_w;
};

#endif /* _LINUX_MELFAS_I2C_RMI_H */


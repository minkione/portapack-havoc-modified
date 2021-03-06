/*
 * Copyright (C) 2015 Jared Boone, ShareBrained Technology, Inc.
 * Copyright (C) 2016 Furrtek
 *
 * This file is part of PortaPack.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */

// This file was generated by make_bitmap.py

#ifndef __BITMAP_HPP__
#define __BITMAP_HPP__

#include "ui.hpp"

namespace ui {

static constexpr uint8_t bitmap_nrf_data[] = {
	0x00, 0x00, 
	0x00, 0x00, 
	0x00, 0x00, 
	0x07, 0xE0, 
	0x05, 0x20, 
	0xCC, 0x33, 
	0xF4, 0x2F, 
	0xE6, 0x67, 
	0xE2, 0x47, 
	0x36, 0x5C, 
	0x0E, 0xE0, 
	0x06, 0x60, 
	0x00, 0x00, 
	0x00, 0x00, 
	0x00, 0x00, 
	0x00, 0x00, 
};
static constexpr Bitmap bitmap_nrf {
	{ 16, 16 }, bitmap_nrf_data
};

static constexpr uint8_t bitmap_btle_data[] = {
	0x00, 0x00, 
	0x80, 0x00, 
	0x80, 0x01, 
	0x80, 0x07, 
	0x80, 0x0C, 
	0x98, 0x06, 
	0xF0, 0x03, 
	0xE0, 0x01, 
	0xE0, 0x01, 
	0xF0, 0x03, 
	0x98, 0x06, 
	0x80, 0x0C, 
	0x80, 0x07, 
	0x80, 0x01, 
	0x80, 0x00, 
	0x00, 0x00, 
};
static constexpr Bitmap bitmap_btle {
	{ 16, 16 }, bitmap_btle_data
};

static constexpr uint8_t bitmap_gps_sim_data[] = {
	0x00, 0x00, 
	0x00, 0x00, 
	0x00, 0x00, 
	0xF0, 0x0F, 
	0x4C, 0x32, 
	0xFE, 0x7F, 
	0x25, 0xA4, 
	0x25, 0xA4, 
	0xFF, 0xFF, 
	0x25, 0xA4, 
	0x25, 0xA4, 
	0xFE, 0x7F, 
	0x4C, 0x32, 
	0xF0, 0x0F, 
	0x00, 0x00, 
	0x00, 0x00, 
};
static constexpr Bitmap bitmap_gps_sim {
	{ 16, 16 }, bitmap_gps_sim_data
};


} /* namespace ui */

#endif/*__BITMAP_HPP__*/

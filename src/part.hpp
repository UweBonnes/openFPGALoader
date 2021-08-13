// SPDX-License-Identifier: Apache-2.0
/*
 * Copyright (C) 2019 Gwenhael Goavec-Merou <gwenhael.goavec-merou@trabucayre.com>
 */

#ifndef PART_HPP
#define PART_HPP

#include <map>
#include <string>

typedef struct {
	std::string manufacturer;
	std::string family;
	std::string model;
	int irlength;
} fpga_model;

static std::map <int, fpga_model> fpga_list = {
	{0x0a014c35, {"anlogic", "eagle s20", "EG4S20BG256", 8}},

	{0x0362D093, {"xilinx", "artix a7 35t", "xc7a35", 6}},
	{0x0362c093, {"xilinx", "artix a7 50t",  "xc7a50t", 6}},
	{0x13632093, {"xilinx", "artix a7 75t",  "xc7a75t", 6}},
	{0x13631093, {"xilinx", "artix a7 100t", "xc7a100", 6}},
	{0x13636093, {"xilinx", "artix a7 200t", "xc7a200", 6}},

	{0x43651093, {"xilinx", "kintex7", "xc7k325t", 6}},

	{0x24001093, {"xilinx", "spartan6", "xc6slx9",  6}},
	{0x24002093, {"xilinx", "spartan6", "xc6slx16", 6}},
	{0x24004093, {"xilinx", "spartan6", "xc6slx25", 6}},
	{0x24011093, {"xilinx", "spartan6", "xc6slx100", 6}},
	{0x44008093, {"xilinx", "spartan6", "xc6slx45", 6}},
	{0x03620093, {"xilinx", "spartan7", "xc7s15ftgb196-1", 6}},
	{0x037c4093, {"xilinx", "spartan7", "xc7s25", 6}},
	{0x0362f093, {"xilinx", "spartan7", "xc7s50", 6}},

	{0x23727093, {"xilinx", "zynq",     "xc7z020", 6}},

        /* unhandled (?) xilinx FPGA devices */

        {0x01008093, {"xilinx", "xc2v", "xc2v40",   6}},
        {0x01010093, {"xilinx", "xc2v", "xc2v80",   6}},
        {0x01018093, {"xilinx", "xc2v", "xc2v250",  6}},
        {0x01020093, {"xilinx", "xc2v", "xc2v500",  6}},
        {0x01028093, {"xilinx", "xc2v", "xc2v1000", 6}},
        {0x01030093, {"xilinx", "xc2v", "xc2v1500", 6}},
        {0x01038093, {"xilinx", "xc2v", "xc2v2000", 6}},
        {0x01040093, {"xilinx", "xc2v", "xc2v3000", 6}},
        {0x01050093, {"xilinx", "xc2v", "xc2v4000", 6}},
        {0x01060093, {"xilinx", "xc2v", "xc2v6000", 6}},
        {0x01070093, {"xilinx", "xc2v", "xc2v8000", 6}},

        {0x0140d093, {"xilinx", "spartan3", "xc3s50", 6}},
        {0x01414093, {"xilinx", "spartan3", "xc3s200", 6}},
        {0x0141c093, {"xilinx", "spartan3", "xc3s400", 6}},
        {0x01428093, {"xilinx", "spartan3", "xc3s1000", 6}},
        {0x01434093, {"xilinx", "spartan3", "xc3s1500", 6}},
        {0x01440093, {"xilinx", "spartan3", "xc3s2000", 6}},
        {0x01448093, {"xilinx", "spartan3", "xc3s4000", 6}},
        {0x01450093, {"xilinx", "spartan3", "xc3s5000", 6}},

        {0x01c10093, {"xilinx", "spartan3", "xc3s100e", 6}},
        {0x01c1a093, {"xilinx", "spartan3", "xc3s250e", 6}},
        {0x01c22093, {"xilinx", "spartan3", "xc3s500e", 6}},
        {0x01c2e093, {"xilinx", "spartan3", "xc3s1200e", 6}},
        {0x01c3a093, {"xilinx", "spartan3", "xc3s1600e", 6}},

        {0x02210093, {"xilinx", "spartan3", "xc3s50a", 6}},
        {0x02218093, {"xilinx", "spartan3", "xc3s100a", 6}},
        {0x02220093, {"xilinx", "spartan3", "xc3s400a", 6}},
        {0x02228093, {"xilinx", "spartan3", "xc3s700a", 6}},
        {0x02230093, {"xilinx", "spartan3", "xc3s1400a", 6}},

        {0x02610093, {"xilinx", "spartan3", "xc3s50an", 6}},
        {0x02618093, {"xilinx", "spartan3", "xc3s100an", 6}},
        {0x02620093, {"xilinx", "spartan3", "xc3s400an", 6}},
        {0x02628093, {"xilinx", "spartan3", "xc3s700an", 6}},
        {0x02630093, {"xilinx", "spartan3", "xc3s1400an", 6}},

        {0x03840093, {"xilinx", "spartan3", "xc3sd1800", 6}},
        {0x0384e093, {"xilinx", "spartan3", "xc3sd1340", 6}},

        /* unhandled xilinx CPLD devices*/
        {0x09602093, {"xilinx", "xc95xl", "xc9536xl", 8}},
        {0x09604093, {"xilinx", "xc95xl", "xc9573xl", 8}},
        {0x09608093, {"xilinx", "xc95xl", "xc95144xl", 8}},
        {0x09618093, {"xilinx", "xc95xl", "xc95288xl", 8}},

        {0x09702093, {"xilinx", "xc95xv", "xc9536xv", 8}},
        {0x09704093, {"xilinx", "xc95xv", "xc9573xv", 8}},
        {0x09708093, {"xilinx", "xc95xv", "xc95144xv", 8}},
        {0x09718093, {"xilinx", "xc95xv", "xc95288xv", 8}},

        {0x06c1c093, {"xilinx", "xc2c", "xc2c32_vq44", 8}},
        {0x06c1d093, {"xilinx", "xc2c", "xc2c32_pc44/64", 8}},
        {0x06c1b093, {"xilinx", "xc2c", "xc2c32a_qf32", 8}},
        {0x06d1d093, {"xilinx", "xc2c", "xc2c32a_pc44", 8}},
        {0x06e1b093, {"xilinx", "xc2c", "xc2c32a_cp56", 8}},
        {0x06e1c093, {"xilinx", "xc2c", "xc2c32a_vq44", 8}},
        {0x06e1d093, {"xilinx", "xc2c", "xc2c32a_pc44/64", 8}},

        {0x06c5a093, {"xilinx", "xc2c", "xc2c64_pc64", 8}},
        {0x06c5b093, {"xilinx", "xc2c", "xc2c64_cp132", 8}},
        {0x06c5c093, {"xilinx", "xc2c", "xc2c64_vq100", 8}},
        {0x06c5d093, {"xilinx", "xc2c", "xc2c64_cp56", 8}},
        {0x06c5e093, {"xilinx", "xc2c", "xc2c64_vq44", 8}},

        {0x06e59093, {"xilinx", "xc2c", "xc2c64a_qf48", 8}},
        {0x06e5a093, {"xilinx", "xc2c", "xc2c64a_pc44", 8}},
        {0x06e5b093, {"xilinx", "xc2c", "xc2c64a_cp132", 8}},
        {0x06e5c093, {"xilinx", "xc2c", "xc2c64a_vq100", 8}},
        {0x06e5d093, {"xilinx", "xc2c", "xc2c64a_cp56", 8}},
        {0x06e5e093, {"xilinx", "xc2c", "xc2c64a_vq44", 8}},

        {0x06d8a093, {"xilinx", "xc2c", "xc2c128_vq100", 8}},
        {0x06d8b093, {"xilinx", "xc2c", "xc2c128_cp132", 8}},
        {0x06d8c093, {"xilinx", "xc2c", "xc2c128_tq144", 8}},
        {0x06d8e093, {"xilinx", "xc2c", "xc2c128_ft256", 8}},

        {0x06d4a093, {"xilinx", "xc2c", "xc2c256_vq100", 8}},
        {0x06d4b093, {"xilinx", "xc2c", "xc2c256_cp132", 8}},
        {0x06d4c093, {"xilinx", "xc2c", "xc2c256_tq144", 8}},
        {0x06d4d093, {"xilinx", "xc2c", "xc2c256_pq208", 8}},
        {0x06d4e093, {"xilinx", "xc2c", "xc2c256_ft256", 8}},

        {0x06d5a093, {"xilinx", "xc2c", "xc2c384_fg324", 8}},
        {0x06d5b093, {"xilinx", "xc2c", "xc2c384_cp204", 8}},
        {0x06d5c093, {"xilinx", "xc2c", "xc2c384_tq144", 8}},
        {0x06d5d093, {"xilinx", "xc2c", "xc2c384_pq208", 8}},
        {0x06d5e093, {"xilinx", "xc2c", "xc2c384_ft256", 8}},

        {0x06d7a093, {"xilinx", "xc2c", "xc2c512_fg324", 8}},
        {0x06d7c093, {"xilinx", "xc2c", "xc2c512_pq208", 8}},
        {0x06d7e093, {"xilinx", "xc2c", "xc2c512_ft256", 8}},

        /* unhandled xilinx configuration devices */
        {0x05044093, {"xilinx", "xcfs", "xcf01s", 8}},
        {0x05045093, {"xilinx", "xcfs", "xcf02s", 8}},
        {0x05046093, {"xilinx", "xcfs", "xcf04s", 8}},

        {0x05057093, {"xilinx", "xcfp", "xcf08p", 16}},
        {0x05058093, {"xilinx", "xcfp", "xcf16p", 16}},
        {0x05059093, {"xilinx", "xcfp", "xcf32p", 16}},

	{0x020f20dd, {"altera", "cyclone III", "EP3C16", 10}},

	{0x020f30dd, {"altera", "cyclone 10 LP", "10CL025", 10}},

	{0x02b150dd, {"altera", "cyclone V", "5CEA2", 10}},
	{0x02b050dd, {"altera", "cyclone V", "5CEBA4", 10}},
	{0x02d020dd, {"altera", "cyclone V Soc", "5CSEBA6", 10}},
	{0x02d010dd, {"altera", "cyclone V Soc", "5CSEMA4", 10}},

	{0x010F0043, {"lattice", "CrosslinkNX", "LIFCL-17", 8}},
	{0x010F1043, {"lattice", "CrosslinkNX", "LIFCL-40-ES", 8}},
	{0x110F1043, {"lattice", "CrosslinkNX", "LIFCL-40", 8}},

	{0x310F0043, {"lattice", "CertusNX", "LFD2NX-17", 8}},
	{0x310F1043, {"lattice", "CertusNX", "LFD2NX-40", 8}},

	{0x012b9043, {"lattice", "MachXO2",   "LCMXO2-640HC", 8}},
	{0x012ba043, {"lattice", "MachXO2",   "LCMXO2-1200HC", 8}},
	{0x012bd043, {"lattice", "MachXO2",   "LCMXO2-7000HC", 8}},
	{0x012b5043, {"lattice", "MachXO2",   "LCMXO2-7000HE", 8}},

	{0xE12BB043, {"lattice", "MachXO3LF", "LCMX03LF-1300C", 8}},
	{0x612B2043, {"lattice", "MachXO3LF", "LCMX03LF-1300E", 8}},
	{0x612BB043, {"lattice", "MachXO3LF", "LCMX03LF-2100C", 8}},
	{0x612B3043, {"lattice", "MachXO3LF", "LCMX03LF-2100E", 8}},
	{0x612BC043, {"lattice", "MachXO3LF", "LCMX03LF-4300C", 8}},
	{0x612B4043, {"lattice", "MachXO3LF", "LCMX03LF-4300E", 8}},
	{0x612BD043, {"lattice", "MachXO3LF", "LCMX03LF-6900C", 8}},
	{0x612B5043, {"lattice", "MachXO3LF", "LCMX03LF-6900E", 8}},
	{0x612BE043, {"lattice", "MachXO3LF", "LCMX03LF-9400C", 8}},
	{0x612B6043, {"lattice", "MachXO3LF", "LCMX03LF-9400E", 8}},

	{0x212e3043, {"lattice", "MachXO3D", "LCMX03D-9400HC", 8}},

	{0x21111043, {"lattice", "ECP5", "LFE5U-12", 8}},
	{0x41111043, {"lattice", "ECP5", "LFE5U-25", 8}},
	{0x41112043, {"lattice", "ECP5", "LFE5U-45", 8}},
	{0x41113043, {"lattice", "ECP5", "LFE5U-85", 8}},
	{0x01111043, {"lattice", "ECP5", "LFE5UM-25", 8}},
	{0x01112043, {"lattice", "ECP5", "LFE5UM-45", 8}},
	{0x01113043, {"lattice", "ECP5", "LFE5UM-85", 8}},
	{0x81111043, {"lattice", "ECP5", "LFE5UM5G-25", 8}},
	{0x81112043, {"lattice", "ECP5", "LFE5UM5G-45", 8}},
	{0x81113043, {"lattice", "ECP5", "LFE5UM5G-85", 8}},

	{0x0129a043, {"lattice", "XP2", "LFXP2-8E", 8}},

	{0x1100581b, {"Gowin", "GW1N", "GW1NR-9", 8}},
	{0x0900281B, {"Gowin", "GW1N", "GW1N-1", 8}},
	{0x0120681b, {"Gowin", "GW1N", "GW1N-2", 8}},
	{0x0100381B, {"Gowin", "GW1N", "GW1N-4", 8}},
	{0x0300181b, {"Gowin", "GW1NS", "GW1NS-2C", 8}},
};

/* device potentially in JTAG chain but not handled */
typedef struct {
	std::string name;
	int irlength;
} misc_device;

static std::map <int, misc_device> misc_dev_list = {
	{0x4ba00477, {"ARM cortex A9", 4}},
};

#endif

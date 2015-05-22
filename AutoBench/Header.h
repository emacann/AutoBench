#ifndef __TESI_H__
#define __TESI_H__

#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif // _MSC_VER

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

///////////////////////////////////////////////////////////////////////////////
// DEFINES

#define REPETITIONS 10

///////////////////////////////////////////////////////////////////////////////
// PATHS

// Path to x265 executable
#define X265_PATH "/usr/local/bin/x265"
// Path to input folder
#define INPUTDIR "/usr/CpC/SSD/codec_and_samples/YUV/"
// Path to output folder
#define OUTPUTDIR "/usr/CpC/SSD/codec_and_samples/Encoded/"
// Path to Log folder
#define LOGDIR "/usr/CpC/SSD/Logs/"

///////////////////////////////////////////////////////////////////////////////
// EXTENSIONS

#define LOG_EXT ".txt"
#define OUT_EXT ""

///////////////////////////////////////////////////////////////////////////////
// FILES

char* file_list [] =
{
	"city_4cif.y4m",
	"crew_4cif.y4m",
	"bridge_far_cif.y4m",
	"students_cif.y4m",
	"park_joy_2160p50.y4m",
	"720p50_mobcal_ter.y4m",
	"in_to_tree_444_720p50.y4m",
	"dinner_1080p30.y4m",
	"highway_cif.y4m"
};
		

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // __TESI_H__
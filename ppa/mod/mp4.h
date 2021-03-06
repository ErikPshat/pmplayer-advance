#ifndef __MP4_H__
#define __MP4_H__


#include "gu_draw.h"
#include "movie_file.h"
#include "mp4_play.h"

#ifdef __cplusplus
extern "C" {
#endif

char *mp4_play(struct movie_file_struct *movie, int usePos, int pspType, int tvAspectRatio, int tvOverScanLeft, int tvOverScanTop, int tvOverScanRight, int tvOverScanBottom, int videoMode);

#ifdef __cplusplus
}
#endif

#endif

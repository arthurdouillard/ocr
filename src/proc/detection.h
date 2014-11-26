#ifndef _DETECTION_H_
#define _DETECTION_H_

#include <stdlib.h>
#include <stdio.h>
#include "../stb_image/stb_image_ext.h"

struct charCoorList {
    size_t X;
    size_t Y;
    size_t height;
    size_t length;
    struct charCoorList *next;
};

struct lineData {
    size_t X;
    size_t Y;
    size_t length;
    size_t height;
};

//Apply RLSA with i and j parameters to img picture
void RLSA(t_img_desc *img, int i, int j);

//Finds the first character in a line
size_t charX(t_img_desc *img, struct lineData *ld);

//Returns the length of the character located at begin in line ld
size_t charLength(t_img_desc *img, struct lineData *ld, size_t begin);
#endif

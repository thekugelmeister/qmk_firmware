#pragma once

/* The way how "handedness" is decided (which half is which),
see https://docs.qmk.fm/#/feature_split_keyboard?id=setting-handedness
for more options.
*/

#define ENCODER_DIRECTION_FLIP
// I don't know why but I can't set this without raising a "redefined" error. Seems that resolution is hard coded in info.json?
// Instead, I had to duplicate the encoder fields from rev1/info.json, set the resolution there to 4, then delete the resolution settings in rev1/info.json.
// #define ENCODER_RESOLUTION 1

#define OLED_TIMEOUT 60000

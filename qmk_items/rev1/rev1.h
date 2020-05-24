#pragma once

#include "quantum.h"

/* Clueboard matrix layout
 * ,-----------------------------------------------------------.  ,---.
 * | 00| 01| 02| 03| 04| 05| 06| 07| 08| 09| 0A| 0B| 0C| 0D| 0E|  | 0F|
 * |-----------------------------------------------------------|  |---|
 * |   10| 11| 12| 13| 14| 15| 16| 17| 18| 19| 1A| 1B| 1C|   1D|  | 1F|
 * |-----------------------------------------------------------|  `---'
 * |    20| 21| 22| 23| 24| 25| 26| 27| 28| 29| 2A| 2B| 2C|  2D|
 * |------------------------------------------------------------.
 * |  30| 31| 32| 33| 34| 35| 36| 37| 38| 39| 3A| 3B| 3C|  3D|3E|
 * |------------------------------------------------------------------.
 * |  40| 41|  42|  43|   45|       46|   49|  4A|  4B| 4C| 4D| 4E| 4F|
 * `------------------------------------------------------------------'
 * ,-----------------------------------------------------------.  ,---.
 * |  `|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Yen| BS|  |Ins|
 * |-----------------------------------------------------------|  |---|
 * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|    \|  |Del|
 * |-----------------------------------------------------------|  `---'
 * |Caps  |  A|  S|  D|  F|  G|  H|  J|  k|  L|  ;|  '| # | Ent|
 * |--------------------------------------------------------------.
 * |Shift| \|  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|  \|Shift| Up|
 * |------------------------------------------------------------------.
 * |Ctrl|Alt|Gui |MHen| Space| Space|Henk|Gui |Ctrl|  Fn|Left|Down|Rgt|
 * `------------------------------------------------------------------'
 */
// The first section contains all of the arguements
// The second converts the arguments into a two-dimensional array

#define LAYOUT_all( \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0A, \
    k10, k11, k12, k13, k14, k15, k16, k17, k18, \
    k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2A, \
    k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3A, \
    k40, k41, k42, k43, k44, k45, k46, k47, k48, k49, k4A, k4B, k4C, \
    k50, k51, k52, k53, k54, k55, k56, k57, \
    k60, k61, k62, k63, k64, k65, k66, k67, k68, k69, k6A, k6B, \
    k70, k71, k72, k73, k74, k75, k76, k77, k78, \
    k80, k81, k82 \
) { \
    {k00, k01, k02, k03, k04, k05, k06, k07, KC_NO, KC_NO, k08, KC_NO, KC_NO, k09, KC_NO, KC_NO, KC_NO, k0A, KC_NO}, \
    {KC_NO, KC_NO, k10, KC_NO, k11, KC_NO, k12, KC_NO, KC_NO, k13, k14, k15, k16, k17, k18, KC_NO, KC_NO, KC_NO, KC_NO}, \
    {k20, k21, k22, k23, k24, k25, KC_NO, k26, k27, KC_NO, KC_NO, KC_NO, KC_NO, k28, k29, KC_NO, KC_NO, k2A, KC_NO}, \
    {KC_NO, k30, k31, k32, k33, k34, k35, k36, KC_NO, KC_NO, KC_NO, k37, KC_NO, k38, k39, KC_NO, KC_NO, k3A, KC_NO}, \
    {KC_NO, k40, k41, k42, k43, k44, k45, k46, KC_NO, KC_NO, k47, k48, k49, k4A, k4B, KC_NO, KC_NO, k4C, KC_NO}, \
    {KC_NO, k50, k51, k52, k53, k54, k55, k56, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, k57, KC_NO}, \
    {KC_NO, k60, k61, k62, k63, k64, k65, k66, k67, KC_NO, KC_NO, KC_NO, k68, k69, k6A, KC_NO, KC_NO, k6B, KC_NO}, \
    {KC_NO, k70, k71, k72, k73, KC_NO, k74, k75, KC_NO, k76, KC_NO, k77, KC_NO, k78, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO}, \
    {KC_NO, KC_NO, KC_NO,KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, k80, k81, KC_NO, k82} \
}


#define KEYMAP LAYOUT_all
#define LAYOUT LAYOUT_all

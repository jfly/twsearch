#ifndef UNROTATE_H
#include <vector>
#include "puzdef.h"
using namespace std ;
/*
 *   This set of routines calculates the canonical sequences for a given
 *   puzzle.  The normal, default version does this by calculating what
 *   pairs of moves commute, and deriving a state graph from this.  The
 *   second version uses a hashtable of identical states (if the group
 *   is a graph) which lets it do more aggressive pruning at the cost of
 *   additional memory usage.  With the show canonical states option
 *   you can see how effective each strategy is for a given puzzle, and
 *   from that decide which to use.
 */
vector<int> unrotate(const puzdef &pd, const vector<int> &orig) ;
#define UNROTATE_H
#endif

#ifndef WRAP_SUM_H
#define WRAP_SUM_H

// __cplusplus gets defined when a C++ compiler processes the file
#ifdef __cplusplus
// extern "C" is needed so the C++ compiler exports the symbols without name
// manging.
extern "C" {
#endif

int sum_from_cplus(int a,int b);

#ifdef __cplusplus
}
#endif


#endif

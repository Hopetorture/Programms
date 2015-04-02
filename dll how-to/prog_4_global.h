#ifndef PROG_4_GLOBAL_H
#define PROG_4_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(PROG_4_LIBRARY)
#  define PROG_4SHARED_EXPORT Q_DECL_EXPORT
#else
#  define PROG_4SHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // PROG_4_GLOBAL_H

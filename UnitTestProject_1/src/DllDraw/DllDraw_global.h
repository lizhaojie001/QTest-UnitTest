#ifndef DLLDRAW_GLOBAL_H
#define DLLDRAW_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(DLLDRAW_LIBRARY)
#  define DLLDRAW_EXPORT Q_DECL_EXPORT
#else
#  define DLLDRAW_EXPORT Q_DECL_IMPORT
#endif

#endif // DLLDRAW_GLOBAL_H

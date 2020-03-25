/*

    M5Watch

*/

#ifndef M5_WATCH_H
#define M5_WATCH_H



#include "PageId.h"
#include "EventId.h"
#include "Settings.h"
#include "SerialDebug.h"
#include "EventQueue.h"
#include "PowerStatus.h"

extern Settings settings;
extern SerialDebug debug;
extern EventQueue eventQueue;
extern PowerStatus powerStatus;

#endif                  // M5_WATCH_H